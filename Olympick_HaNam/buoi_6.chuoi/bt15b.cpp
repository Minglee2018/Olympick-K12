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
	int Dem_Ky_So(char x[],int dem)
	{
		 { for(int i=0;i<strlen(x);i++)
		   if(x[i]>=48&&x[i]<=57) 
		   dem++; 
		 }
		 return dem;
	}
 int main ()
    {  char a[maxn],b[maxn],c[maxn];
    char aa[maxn],bb[maxn],cc[maxn]; int j;
       gets(a); 
	   gets(b); 
       gets(c); 
        for(j =0;j<strlen(a);j++){
	   aa[j]=a[j];
	   }
	    for(j =0;j<strlen(b);j++){
	   bb[j]=b[j];
	   }
	    for(j =0;j<strlen(c);j++){
	   cc[j]=c[j];
	   }
   int array[10]={Dem_So_Tu(a,0),Dem_So_Tu( b,0),Dem_So_Tu( c,0),
       Dem_Ky_Tu_Hoa(a,0),Dem_Ky_Tu_Hoa( b,0),Dem_Ky_Tu_Hoa( c,0),
	   Dem_Ky_So(a,0),Dem_Ky_So( b,0),Dem_Ky_So( c,0)};   
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
	    cout<<endl;
		cout<<"chuoi co nhieu tu nhat:"<<endl;
        if(vt1==0)  puts(aa);
        if(vt1==1)  puts(bb);
        if(vt1==2)  puts(cc);
         cout<<endl;  cout<<" chuoi co nhieu ky tu in hoa nhat:"<<endl;
        if(vt2==3)  puts(aa);
       if(vt2==4)   puts(bb);
        if(vt2==5)  puts(cc);
            cout<<endl;  cout<<" chuoi co nhieu ky tu so nhat:"<<endl;
       if(vt3==6)   puts(aa);
	    if(vt3==7)  puts(bb);
	   if(vt3==8)   puts(cc);
	   return 0;
	}
