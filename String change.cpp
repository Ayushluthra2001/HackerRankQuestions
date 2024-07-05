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
        int m;
        cin>>m;
        int count =0;
        int i=0;
        string s; 
        cin>>s;
        while(i<s.length()){
            if(s[i]=='G'){
                int j=i;
                int c=0;
                int a=0;
                int gotit=false;
                while(a<m && j<s.length()){
                    if(s[j]=='G') gotit=true;
                 j++,c++,a++;
                }
                if(gotit) count++;
                i=j;    
            }else{
                    i++;
            }
            
        }
        cout<<count<<endl;
    }
    return 0;
}
