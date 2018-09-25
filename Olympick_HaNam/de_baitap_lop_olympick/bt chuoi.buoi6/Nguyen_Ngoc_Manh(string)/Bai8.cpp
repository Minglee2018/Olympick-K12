//tim 1 tu co do dai lon nhat trong chuoi
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100];	    // input
    char b[100];		// tam thoi
    char c[100];		// ketqua
    int j = 0, max = 0;
    cin>>a; 
    for(int i = 0; i <= strlen(a); i++){
        if(a[i] != 32 && a[i] != '\0'){
	    b[j++] = a[i];
	}else{
            b[j] = '\0';
            if(strlen(b) > max){
                strcpy(c, b);		// b -> c
                max = strlen(b);	
            }
            j = 0;
        }
    }
    cout<<c; 
    return 0;
}
