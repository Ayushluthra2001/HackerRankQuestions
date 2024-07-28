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
        vector<int>data(n);
        for(int i=0;i<n;i++){
            cin>>data[i];
        }
        int count =0;
        for(int i=0;i<data.size();i++){
            if(data[i]!=data[(i+1)%n ]&& data[(i+1)%n] != data[(i+2)%n] && data[(i+2)%n] == data[(i)%n]) count++;
        }
                             cout<<count<<endl;
        }
    return 0;
}
