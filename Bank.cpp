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
        vector<int>ans;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            ans.push_back(k);
            
            
        }
        vector<int>temp=ans;
        sort(temp.begin(),temp.end(),greater<int>());
        int count=0;
        for(int i=0;i<ans.size();i++){
            if(temp[i]!=ans[i]) count++;
        }
        cout<<count<<endl;
        t--;
    }
    return 0;
}
