#include<bits\stdc++.h>
#include<string.h>
#include <stdio.h>
# define maxn 101
 using namespace std; 
  char s[20][20]={0};
  int Dem_So_Tu(char x[],int dem) 
    {  const char c[2] = " ";
       char *p;
	   p=strtok(x,c); 
       while(p!='\0')
        { strcpy(s[dem],p); 
          dem++;
          p=strtok(NULL," ");
		}
      return dem;
	}
  int Dem_Ky_Tu_Hoa(char x[],int dem)
    { 
        { for(int i=0;i<strlen(x);i++)
           if(x[i]>=65&&x[i]<=90)
           dem++;  	
		}
		return dem; 
	}
   int Dem_So(char x[],int dem)
	{
		 { for(int i=0;i<strlen(x);i++)
		   if(x[i]>=48&&x[i]<=57) 
		   dem++; 
		 }
		 return dem;
	}
  void Xuat(char x[],char y[],char z[])
  {int array[10]={Dem_So_Tu(x,0),Dem_So_Tu( y,0),Dem_So_Tu( z,0),
       Dem_Ky_Tu_Hoa(x,0),Dem_Ky_Tu_Hoa( y,0),Dem_Ky_Tu_Hoa( z,0),
	   Dem_So(x,0),Dem_So( y,0),Dem_So( z,0)};
	   int max1=0,max2=0,max3=0,vt1=0,vt2=0,vt3=0,i=0;
	    for(i=0;i<=2;i++)
		 if(max1<array[i]) 
		    {max1=array[i]; 
		     vt1=i;
			}
		for(i=3;i<=5;i++)
		 if(max2<array[i])
		    {max2=array[i];
		     vt2=i;	
		    }	
		for(i=6;i<=8;i++)
		 if(max3<array[i])
		    {max3=array[i]; 
		     vt3=i;
			}
	   	cout<<"chuoi co nhieu tu nhat:"<<endl;
       if(vt1==0)       puts(x);
       else if(vt1==1)  puts(y);
       else if(vt1==2)  puts(z);
          cout<<endl;  cout<<" chuoi co nhieu ky tu in hoa nhat:"<<endl;
       if(vt2==3)       puts(x);
       else if(vt2==4)  puts(y);
       else if(vt2==5)  puts(z);
            cout<<endl;  cout<<" chuoi co nhieu so nhat:"<<endl;
       if(vt3==6)       puts(x);
	   else if(vt3==7)  puts(y);
	   else if(vt3==8)  puts(z);
  }
  int main ()
    {  char a[maxn],b[maxn],c[maxn];
       gets(a);
	   fflush(stdin); 
       gets(b);
	   fflush(stdin); 
       gets(c);
	   fflush(stdin); 
       Xuat(a,b,c);
	   return 0;
	}
