#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        string s; 
        cin>>s;
        
        string temp = s;
        sort(temp.begin(),temp.end());
        bool used = false;
        char ch = '*';
        bool cant = false;
        for(int i=0;i<temp.length();i++){
             if(temp[i]!=s[i]){
                 if(ch=='*' ){
                     if(used){
                         cant=true;
                         break;
                     }
                     ch = temp[i];
                     
                 }else if(ch!=s[i]){
                     used = true;
                     cant=true;
                     break;
                 }
             }
        }
        if(!cant) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
