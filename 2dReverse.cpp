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
        vector<vector<int>>data(n,vector<int>(n,0));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>data[i][j];
            }

        }
        for(int i=0;i<n;i++){
            reverse(data[i].begin(),data[i].end());
            for(int j=0;j<n;j++){
                cout<<!data[i][j]<<" ";
            }
            
            cout<<endl;
        }        
        
    }
    return 0;
}
