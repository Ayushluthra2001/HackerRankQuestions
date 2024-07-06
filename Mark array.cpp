#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>x;
        //unordered_map<int,int>mapping;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            x.push_back(k);
            }
        // for(auto i : x) mapping[i]++;
        int maxi=*max_element(x.begin(),x.end());
        int mini=*min_element(x.begin(),x.end());
        if(maxi!=mini) {
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
