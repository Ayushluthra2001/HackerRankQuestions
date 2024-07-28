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
        bool found = false;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='u' || s[i]=='i') {
                found = true ;
                break;
            }
        }
        if(found) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
   
}
