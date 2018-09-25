#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>
using namespace std;
char map[15][15];
int score[200];
int main()
{
    memset(map,0,sizeof(map));
    score['Q']=9;
    score['R']=5;
    score['B']=3;
    score['N']=3;
    score['P']=1;
    score['K']=0;
    score['q']=-9;
    score['r']=-5;
    score['b']=-3;
    score['n']=-3;
    score['p']=-1;
    score['k']=0;
    int sum=0;
    for(int i=1;i<=8;i++)
        scanf("%s",map[i]+1);
    for(int i=1;i<=8;i++)
        for(int j=1;j<=8;j++)
            sum+=score[map[i][j]];
    if(sum>0) printf("White\n");
    else if(sum==0) printf("Draw\n");
    else printf("Black\n");
    return 0;
}
