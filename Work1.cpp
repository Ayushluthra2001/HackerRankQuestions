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
    while(t>0){
        int n;
        cin>>n;
        vector<int>temp1,temp2;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            temp1.push_back(k);
        }
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            temp2.push_back(k);
        }
        int count =0;
        for(int i=0;i<n;i++){
            if(temp1[i]>temp2[i]) count++;
        }
        cout<<count<<endl;
        
        t--;
    }
    return 0;
}
