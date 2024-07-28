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
        int n;
        cin>>n;
        string s ;
        cin>>s;
        string temp=s;
        for(int i=0;i<temp.length();i++){
            temp[(i-n+temp.length())%temp.length()] = s[i];
        }
        cout<<temp<<endl;
        
    }
    return 0;
}
