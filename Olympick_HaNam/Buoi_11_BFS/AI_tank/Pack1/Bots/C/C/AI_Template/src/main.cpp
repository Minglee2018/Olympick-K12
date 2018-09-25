#include <ai/Game.h>
#include <ai/AI.h>
#include <time.h>
#include <vector>
#include <deque>

using namespace std;


// Tạo ma trận
struct ToaDo {
	int x, y, val;
	ToaDo(int x1, int y1, int val1) {
		x = x1;
		y = y1;
		val = val1;
	}
	ToaDo() {
	}
};

int _X[] = { 0,0,1,-1 };
int _Y[] = { 1,-1,0,0 };
int check[100][100];
int A[100][100];
int w = 20, h = 20;
ToaDo tdStart;
vector<ToaDo> tdEnd[5];

bool valid(int x, int y) {
	return x >= 1 && x <= w && y >= 1 && y <= h;
}
int FindHuong(int x, int y) {
	if (A[x - 1][y] < A[x][y] && A[x-1][y] >= 0 && valid(x-1,y)) {
		return 1;
	}
	if (A[x][y+1] < A[x][y] && A[x][y+1] >= 0 && valid(x, y + 1)) {
		return 2;
	}
	if (A[x +1][y] < A[x][y] && A[x+1][y] >= 0 && valid(x + 1, y)) {
		return 3;
	}
	if (A[x][y-1] < A[x][y] && A[x][y-1] >= 0 && valid(x , y -1)) {
		return 4;
	}
	return 0;
}

void input(int t) {
	AI *p_AI = AI::GetInstance();
	for (int i = 1; i <= 20; ++i) {
		for (int j = 1; j <= 20; ++j) {
			A[i][j] = p_AI->GetBlock(j, i) * -1;
		}
	}
	for (int i = 0; i<NUMBER_OF_TANK; i++) {
		Tank* tempTank = p_AI->GetEnemyTank(i);
		//don't waste effort if tank's death
		if (tempTank != NULL) {
			if (tempTank->GetHP() == 0) {
				A[(int)tempTank->GetY()][(int)tempTank->GetX()] = -2;
			}
			else {
				A[(int)tempTank->GetY()][(int)tempTank->GetX()] = -5;
			}
		}		
	}
	for (int i = 0; i<NUMBER_OF_TANK; i++) {
		Tank* tempTank = p_AI->GetMyTank(i);
		//don't waste effort if tank's death
		if (tempTank != NULL) {
			if (tempTank->GetHP() == 0) {
				A[(int)tempTank->GetY()][(int)tempTank->GetX()] = -2;
			}
			else {
				if (t != i) {
					A[(int)tempTank->GetY()][(int)tempTank->GetX()] = -6;
				}
			}
		}
	}
}
void output() {
	for (int i = 1; i <= w; ++i) {
		for (int j = 1; j <= h; ++j) {
			printf("%3d", A[i][j]);
		}
		cout << endl;
	}
	cout << "================" << endl;
}

void BFS(int t) {
	
	deque<ToaDo> dq;
	ToaDo temp;
	for (int i = 0; i < tdEnd[t].size(); ++i) {
		temp = ToaDo(tdEnd[t][i].x, tdEnd[t][i].y, 0);
		dq.push_back(temp);
	}
	while (!dq.empty()) {
		temp = dq.front();
		dq.pop_front();
		if (check[temp.x][temp.y] == 0) {

			check[temp.x][temp.y] = 1;
			A[temp.x][temp.y] = temp.val;

			for (int i = 0; i< 4; ++i) {
				int x = temp.x + _X[i];
				int y = temp.y + _Y[i];
				if (valid(x, y) && A[x][y] == 0) {
					dq.push_back(ToaDo(x, y, temp.val + 1));
				}
			}
		}
	}
}

void BuildListEnemy() {
	AI *p_AI = AI::GetInstance();
	//for tank 1
	tdEnd[1].clear();
	tdEnd[2].clear();
	tdEnd[3].clear();
	tdEnd[4].clear();
	for (int i = 0; i < NUMBER_OF_TANK; i++) {
		Tank* temp = p_AI->GetEnemyTank(i);
		if ((temp == NULL) || (temp->GetHP() == 0))
			continue;
		int y = temp->GetX();
		int x = temp->GetY();
		for (int i = 0; i < 4; ++i) {
			for (int j = 1; ; ++j) {
				ToaDo td = ToaDo(x + (j * _X[i]), y + (j* _Y[i]), 0);
				if (p_AI->GetBlock(td.y, td.x) != 0) {
					break;
				}
				tdEnd[1].push_back(td);
				tdEnd[2].push_back(td);
				tdEnd[3].push_back(td);
				tdEnd[4].push_back(td);
			}
		}
	}
}

void AI_Placement()
{
	AI *p_AI = AI::GetInstance();
	if (p_AI->GetMyTeam() == TEAM_1) {
		Game::PlaceTank(TANK_LIGHT, 1, 3);
		Game::PlaceTank(TANK_HEAVY, 1, 4);
		Game::PlaceTank(TANK_MEDIUM, 1, 17);
		Game::PlaceTank(TANK_HEAVY, 1, 18);
	}
	else if (p_AI->GetMyTeam() == TEAM_2) {
		Game::PlaceTank(TANK_MEDIUM, 19, 7);
		Game::PlaceTank(TANK_HEAVY, 20, 7);
		Game::PlaceTank(TANK_MEDIUM, 19, 14);
		Game::PlaceTank(TANK_LIGHT, 20, 14);
	}
}
void BuildMap(int t) {
	BuildListEnemy();
	
	for (int i = 1; i <= 20; ++i) {
		for (int j = 1; j <= 20; ++j) {
			check[i][j] = 0;
		}
	}
	BFS(t);
}
// This function is called automatically when it's your turn.
// Remember to call AI_Move() with a valid move before the time is run out.
// See <ai/Game.h> and <ai/AI.h> for supported APIs.
int milis = 0;
void AI_Update()
{
	milis++;
	if (milis % 10 == 0) {
		cout << milis << endl;
	}
	AI *p_AI = AI::GetInstance();
	// =========================================================================================================
	// Check if there will be any airstrike or EMP
	// The GetIncomingStrike() function will return an array of strike object. Both called by your team
	// or enemy team.
	// =========================================================================================================
	vector<Strike*> strike = p_AI->GetIncomingStrike(); //viên đạn đang rơi thì sẽ có ở trong list strike
	for (int i = 0; i<strike.size(); i++)
	{
		float x = strike[i]->GetX();// cột của viên đạn
		float y = strike[i]->GetY();// hàng của viên đạn.
		int count = strike[i]->GetCountDown(); // Delay (in server loop) before the strike reach the battlefield.
		int type = strike[i]->GetType();

		if (type == POWERUP_AIRSTRIKE)
		{
			// You may want to do something here, like moving your tank away if the strike is on top of your tank.
		}
		else if (type == POWERUP_EMP)
		{
			// Run... RUN!!!!
		}
	}

	// =========================================================================================================
	// Get power up list on the map. You may want to move your tank there and secure it before your enemy
	// does it. You can get coordination, and type from this object
	// =========================================================================================================
	vector<PowerUp*>  powerUp = p_AI->GetPowerUpList();
	for (int i = 0; i<powerUp.size(); i++) {
		float x = powerUp[i]->GetX();
		float y = powerUp[i]->GetY();
		int type = powerUp[i]->GetType();
		if (type == POWERUP_AIRSTRIKE)
		{
			// You may want to move your tank to this position to secure this power up.
		}
		else if (type == POWERUP_EMP)
		{
			// Do something else
		}
	}
	
	// =========================================================================================================
	// This is an example on how you command your tanks.
	// In this example, I go through all of my "still intact" tanks, and give them random commands.
	// =========================================================================================================
	// Loop through all tank (if not dead yet)
	for (int i = 0; i<NUMBER_OF_TANK; i++) {
		Tank* tempTank = p_AI->GetMyTank(i);
		//don't waste effort if tank's death
		if ((tempTank == NULL) || (tempTank->GetHP() == 0))
			continue;
		//// Run randomly and fire as soon as cooldown finish.
		//// You may want a more ... intelligent algorithm here.
		//	int direction = rand() % 4 + 1;
		//	Game::CommandTank(i, 0, true, true);	// Turn into the direction, keep moving, and firing like there is no tomorrow
		if ((int)(tempTank->GetX() * 10) % 10 == 0 && (int)(tempTank->GetY() * 10) % 10 == 0) {
			input(i);
			BuildMap(i+1);
			
			int x = (int)tempTank->GetX();
			int y = (int)tempTank->GetY();
			if (A[y][x] == 0) {
				for (int j = 0; j < NUMBER_OF_TANK; j++) {
					Tank* tempEnemy = p_AI->GetEnemyTank(j);
					if ((int)tempTank->GetX() == (int)tempEnemy->GetX()) {
						if ((int)tempTank->GetY() < (int)tempEnemy->GetY()) {
							Game::CommandTank(i, 3, false, true);
						}
						else {
							Game::CommandTank(i, 1, false, true);
						}
					}
					else if ((int)tempTank->GetY() == (int)tempEnemy->GetY()) {
						if ((int)tempTank->GetX() < (int)tempEnemy->GetX()) {
							Game::CommandTank(i, 2, false, true);							
						}
						else {
							Game::CommandTank(i, 4, false, true);
						}
					}
				}
			}
			else {
				Game::CommandTank(i, FindHuong(y, x), true, true);
			}
		}
		else {
			Game::CommandTank(i, 0, true, true);
		}
	}

	// =========================================================================================================
	// This is an example on how you use your power up if you acquire one.
	// If you have airstrike or EMP, you may use them anytime.
	// I just give a primitive example here: I strike on the first enemy tank, as soon as I acquire power up
	// =========================================================================================================
	if (p_AI->HasAirstrike())
	{
		for (int i = 0; i < NUMBER_OF_TANK; i++)
		{
			Tank* tempTank = p_AI->GetEnemyTank(i);
			if (tempTank->GetHP() > 0) {
				p_AI->UseAirstrike(tempTank->GetX(), tempTank->GetY());
			}
		}
	}
	else if (p_AI->HasEMP())
	{
		for (int i = 0; i < NUMBER_OF_TANK; i++)
		{
			Tank* tempTank = p_AI->GetEnemyTank(i);
			if (tempTank->GetHP() > 0)
			{
				p_AI->UseEMP(tempTank->GetX(), tempTank->GetY());
			}
		}
	}

	// Leave this here, don't remove it.
	// This command will send all of your tank command to server
	Game::GetInstance()->SendCommand();
}

////////////////////////////////////////////////////////////
//                DON'T TOUCH THIS PART                   //
////////////////////////////////////////////////////////////

int main(int argc, char* argv[])
{
	srand(clock());
	
#ifdef _WIN32
    INT rc;
    WSADATA wsaData;

    rc = WSAStartup(MAKEWORD(2, 2), &wsaData);
    if (rc) {
        printf("WSAStartup Failed.\n");
        return 1;
    }
#endif

	Game::CreateInstance();
	Game * p_Game = Game::GetInstance();
	
	// Create connection
	if (p_Game->Connect(argc, argv) == -1)
	{
		LOG("Failed to connect to server!\n");
		return -1;
	}

	// Set up function pointers
	AI::GetInstance()->PlaceTank = &AI_Placement;
	AI::GetInstance()->Update = &AI_Update;
	
	// Polling every 100ms until the connection is dead
    p_Game->PollingFromServer();

	Game::DestroyInstance();

#ifdef _WIN32
    WSACleanup();
#endif
	return 0;
}