#include<stdio.h>
int main()
{
    int i,j,k,a[100],h=0,b;
    for(i=0;i<10;i++)
    for(j=0;j<10;j++)
    for(k=0;k<10;k++)
    {
        if(i+j+k==10)
            a[h++]=i*100+j*10+k;
    }
    while(scanf("%d",&b)!=EOF)
    {
        printf("%d\n",a[b-1]);
    }
    return 0;
}
