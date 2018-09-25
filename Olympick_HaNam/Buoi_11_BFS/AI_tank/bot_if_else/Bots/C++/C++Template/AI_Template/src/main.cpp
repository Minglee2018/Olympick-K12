#include <ai/Game.h>
#include <ai/AI.h>
#include <time.h>
#include <vector>
#include <deque>

using namespace std;

void AI_Placement()
{
	AI *p_AI = AI::GetInstance();
	if (p_AI->GetMyTeam() == TEAM_1) {
		Game::PlaceTank(TANK_HEAVY, 7, 1);
		Game::PlaceTank(TANK_HEAVY, 1, 6);
		Game::PlaceTank(TANK_HEAVY, 1, 14);
		Game::PlaceTank(TANK_LIGHT, 7, 20);
	}
	else if (p_AI->GetMyTeam() == TEAM_2) {
		Game::PlaceTank(TANK_HEAVY, 14, 1);
		Game::PlaceTank(TANK_HEAVY, 20, 6);
		Game::PlaceTank(TANK_HEAVY, 20, 14);
		Game::PlaceTank(TANK_LIGHT, 14, 20);
	}
}


int milis = 0;
void AI_Update()
{
	milis++;
	if (milis % 10 == 0) {
		cout << milis << endl;
	}
	AI *p_AI = AI::GetInstance();
	
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

	
	for (int i = 0; i < NUMBER_OF_TANK; i++) {
		Tank* tempTank = p_AI->GetMyTank(i);
		//don't waste effort if tank's death
		if ((tempTank == NULL) || (tempTank->GetHP() == 0))
			continue;
		if (p_AI->GetMyTeam() == TEAM_1) {
			int cot = tempTank->GetX() + 0.5;
			int hang = tempTank->GetY() + 0.5;
			if (i == 0) {
				if (p_AI->GetMyTank(3)->GetHP() == 0 || p_AI->GetMyTank(3)->GetX()>=13) {
					if (tempTank->GetX() == 10 && tempTank->GetY() < 2)
						Game::CommandTank(i, 3, true, true);
					else if (tempTank->GetX() < 16 && tempTank->GetY() == 2)
						Game::CommandTank(i, 2, true, true);
					else if (tempTank->GetX() == 16 && tempTank->GetY() < 5)
						Game::CommandTank(i, 3, true, true);
					else if (tempTank->GetX() < 19 && tempTank->GetY() == 5)
						Game::CommandTank(i, 2, true, true);
					else
						Game::CommandTank(i, 3, false, true);
				}
				else
				{
					if (tempTank->GetX() < 10 && tempTank->GetY() == 1)
						Game::CommandTank(i, 2, true, true);
					else if (tempTank->GetX() == 10 && hang < 2)
						Game::CommandTank(i, 3, true, true);
					else
						Game::CommandTank(i, 2, false, true);
				}
				
			}
			if (i == 3) {
				if (tempTank->GetX() < 10 && tempTank->GetY() == 20)
					Game::CommandTank(i, 2, true, true);
				else if (tempTank->GetX() == 10 && tempTank->GetY() > 19)
					Game::CommandTank(i, 1, true, true);
				else if (tempTank->GetX() > 9 && tempTank->GetY() == 19)
					Game::CommandTank(i, 4, true, true);
				else if (tempTank->GetX() == 9 && tempTank->GetY() > 11)
					Game::CommandTank(i, 1, true, true);
				else if (tempTank->GetX() < 12 && tempTank->GetY() == 11)
					Game::CommandTank(i, 2, true, true);
				else if (tempTank->GetX() == 12 && tempTank->GetY() < 15)
					Game::CommandTank(i, 3, true, true);
				else if (tempTank->GetX() < 19 && tempTank->GetY() == 15)
					Game::CommandTank(i, 2, true, true);
				else
					Game::CommandTank(i, 1, false, true);
			}
			if (i == 1) {
				if (p_AI->GetMyTank(0)->GetHP() == 0 && p_AI->GetMyTank(3)->GetHP() == 0) {
					if (tempTank->GetX() >6 && hang == 7)
						Game::CommandTank(i, 4, true, true);
					else if (tempTank->GetX() == 6 && tempTank->GetY() > 5)
						Game::CommandTank(i, 1, true, true);
					else if (tempTank->GetX() < 9 && tempTank->GetY() == 5)
						Game::CommandTank(i, 2, true, true);
					else if (tempTank->GetX() == 9 && tempTank->GetY() < 9)
						Game::CommandTank(i, 3, true, true);
					else if (tempTank->GetX() < 12 && tempTank->GetY() == 9)
						Game::CommandTank(i, 2, true, true);
					else if (tempTank->GetX() == 12 && tempTank->GetY() >6)
						Game::CommandTank(i, 1, true, true);
					else if (tempTank->GetX() < 19 && tempTank->GetY() == 6)
						Game::CommandTank(i, 2, true, true);
					else 
						Game::CommandTank(i, 3, true, true);
				}
				else
				{
					if (tempTank->GetX() == 1 && hang < 7)
						Game::CommandTank(i, 3, true, true);
					else if (cot < 7 && hang == 7)
						Game::CommandTank(i, 2, true, true);
					else
						Game::CommandTank(i, 2, false, true);
				}
			}
			if (i == 2) {
				if (p_AI->GetMyTank(0)->GetHP() == 0 && p_AI->GetMyTank(3)->GetHP() == 0) {
					if (tempTank->GetX() >6 && hang == 15)
						Game::CommandTank(i, 4, true, true);
					else if (tempTank->GetX() == 6 && tempTank->GetY() <16)
						Game::CommandTank(i, 3, true, true);
					else if (tempTank->GetX() < 9 && tempTank->GetY() == 16)
						Game::CommandTank(i, 2, true, true);
					else if (tempTank->GetX() == 9 && tempTank->GetY() < 20)
						Game::CommandTank(i, 3, true, true);
					else if (tempTank->GetX() < 20 && tempTank->GetY() == 20)
						Game::CommandTank(i, 2, true, true);
					else
						Game::CommandTank(i, 1, true, true);
				}
				else
				{
					if (tempTank->GetX() == 1 && hang < 15)
						Game::CommandTank(i, 3, true, true);
					else if (cot < 7 && hang == 15)
						Game::CommandTank(i, 2, true, true);
					else
						Game::CommandTank(i, 2, false, true);
				}
			}
		}
        else
        { 
			int cot = tempTank->GetX() + 0.5;
			int hang = tempTank->GetY() + 0.5;
			if (i == 0) {
				if (p_AI->GetMyTank(3)->GetHP() == 0 || p_AI->GetMyTank(3)->GetX() <=8) {
					if (tempTank->GetX() == 11 && tempTank->GetY() < 2)
						Game::CommandTank(i, 3, true, true);
					else if (tempTank->GetX() >5 && tempTank->GetY() == 2)
						Game::CommandTank(i, 4, true, true);
					else if (tempTank->GetX() == 5 && tempTank->GetY() < 5)
						Game::CommandTank(i, 3, true, true);
					else if (tempTank->GetX() >2 && tempTank->GetY() == 5)
						Game::CommandTank(i, 4, true, true);
					else
						Game::CommandTank(i, 3, false, true);
				}
				else
				{
					if (tempTank->GetX() >11 && tempTank->GetY() == 1)
						Game::CommandTank(i, 4, true, true);
					else if (tempTank->GetX() == 11 && hang < 2)
						Game::CommandTank(i, 3, true, true);
					else
						Game::CommandTank(i, 4, false, true);
				}

			}
			if (i == 3) {
				if (tempTank->GetX() >11 && tempTank->GetY() == 20)
					Game::CommandTank(i, 4, true, true);
				else if (tempTank->GetX() == 11 && tempTank->GetY() > 19)
					Game::CommandTank(i, 1, true, true);
				else if (tempTank->GetX() <12 && tempTank->GetY() == 19)
					Game::CommandTank(i, 2, true, true);
				else if (tempTank->GetX() == 12 && tempTank->GetY() > 11)
					Game::CommandTank(i, 1, true, true);
				else if (tempTank->GetX() >9 && tempTank->GetY() == 11)
					Game::CommandTank(i, 4, true, true);
				else if (tempTank->GetX() == 9 && tempTank->GetY() < 15)
					Game::CommandTank(i, 3, true, true);
				else if (tempTank->GetX() >2 && tempTank->GetY() == 15)
					Game::CommandTank(i, 4, true, true);
				else
					Game::CommandTank(i, 1, false, true);
			}
			if (i == 1) {
				if (p_AI->GetMyTank(0)->GetHP() == 0 && p_AI->GetMyTank(3)->GetHP() == 0) {
					if (tempTank->GetX() <15 && hang == 7)
						Game::CommandTank(i, 2, true, true);
					else if (tempTank->GetX() == 15 && tempTank->GetY() > 5)
						Game::CommandTank(i, 1, true, true);
					else if (tempTank->GetX() >12 && tempTank->GetY() == 5)
						Game::CommandTank(i, 4, true, true);
					else if (tempTank->GetX() == 12 && tempTank->GetY() < 9)
						Game::CommandTank(i, 3, true, true);
					else if (tempTank->GetX() >9 && tempTank->GetY() == 9)
						Game::CommandTank(i, 4, true, true);
					else if (tempTank->GetX() == 9 && tempTank->GetY() >6)
						Game::CommandTank(i, 1, true, true);
					else if (tempTank->GetX() >2 && tempTank->GetY() == 6)
						Game::CommandTank(i, 4, true, true);
					else
						Game::CommandTank(i, 3, true, true);
				}
				else
				{
					if (tempTank->GetX() == 20 && hang < 7)
						Game::CommandTank(i, 3, true, true);
					else if (cot >14 && hang == 7)
						Game::CommandTank(i, 4, true, true);
					else
						Game::CommandTank(i, 4, false, true);
				}
			}
			if (i == 2) {
				if (p_AI->GetMyTank(0)->GetHP() == 0 && p_AI->GetMyTank(3)->GetHP() == 0) {
					if (tempTank->GetX() <15 && hang == 15)
						Game::CommandTank(i, 2, true, true);
					else if (tempTank->GetX() == 15 && tempTank->GetY() <16)
						Game::CommandTank(i, 3, true, true);
					else if (tempTank->GetX() >12 && tempTank->GetY() == 16)
						Game::CommandTank(i, 4, true, true);
					else if (tempTank->GetX() == 12 && tempTank->GetY() < 20)
						Game::CommandTank(i, 3, true, true);
					else if (tempTank->GetX() >1 && tempTank->GetY() == 20)
						Game::CommandTank(i, 4, true, true);
					else
						Game::CommandTank(i, 1, true, true);
				}
				else
				{
					if (tempTank->GetX() == 20 && hang < 15)
						Game::CommandTank(i, 3, true, true);
					else if (cot >14 && hang == 15)
						Game::CommandTank(i, 4, true, true);
					else
						Game::CommandTank(i, 4, false, true);
				}
			}

        }
	}
		
	
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