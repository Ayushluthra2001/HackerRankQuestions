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
        string s;
        cin>>s;
        int i=0;
    int count =0;
    while(i<s.length() && s[i]!=' ') {
        i++;
        count++;
    }
        cout<<count<<endl;
    }
    return 0;
}
