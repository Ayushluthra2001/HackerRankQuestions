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
    
    
    while(t > 0){
        
        int row,col,r,c;
        cin>> row >> col >> r >> c;
        
        int maxDistance=0;
        for(int i=0;i<row;i++){
            
            for(int j = 0; j < col; j++ ){
                int dist = abs(i - r) + abs(j - c);
                maxDistance = max(maxDistance , dist);
            }
        }
            cout<<maxDistance<<endl;
        t--;
    }
    return 0;
}
