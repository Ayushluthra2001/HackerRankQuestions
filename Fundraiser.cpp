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
        int  n, m;
        cin>>n>>m;
        bool flag = true;
        while(n>=1 && m>=4){
            n-=1 ;
            m-=4;
            flag = !flag;
        }
        if(flag) cout<<"Bob"<<endl;
        else cout<<"Alice"<<endl;
    }
    
    return 0;
}
