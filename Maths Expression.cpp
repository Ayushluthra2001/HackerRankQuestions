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

        string temp;
        cin>>temp;
        
        string digit="";
        for(int i=0;i<temp.length();i++){
            if(temp[i]-'0'>=0 && temp[i]-'0'<=9) digit+=temp[i];
            
        }
        sort(digit.begin(),digit.end());
        string result="";
        for(int i=0;i<digit.length();i++){
            result+=digit[i];
            result+="*";
        }
        result.pop_back();
        cout<<result<<endl;
        
        t--;
    
    }
    return 0;
}
