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
        int k;
        cin>>k;
        vector<int>data(n,0);
        for(int i=0;i<n;i++){
            cin>>data[i];
        }
        
        int i=0;
        int count=0;
        while(i<n ){
            if(data[i]!=k) count++;
            i++;
            
        }
        
            cout<<count<<endl;
        
    }
    return 0;
}
