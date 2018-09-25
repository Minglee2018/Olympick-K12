#include <bits/stdc++.h>

using namespace std;
string a;
int cout_number,cout_char_lower,cout_char_upper;
int main(){
    cin>>a; cout<<a.length()<<endl;
    for(int i=0;i<a.length();i++){
        if(a[i]>='1' && a[i]<='9')
            cout_number++;
            if(a[i]>='a' && a[i]<='z')
                cout_char_lower++;
            if(a[i]>='A' && a[i]<='Z')
                cout_char_upper++;
    }
    cout<<cout_number<<" "<<cout_char_lower<<" "<<cout_char_upper;
    return 0;
}
