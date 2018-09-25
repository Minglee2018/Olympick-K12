#include <iostream>

using namespace std;

int main()
{
    int s=0;
   for(int i=1; i<= 8128; i++)
   {
       if(8128%i==0)
        s+=i;
   }
   cout <<s;
    return 0;
}
