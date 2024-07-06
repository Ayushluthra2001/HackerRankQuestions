#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to clear the newline after t
    
    while (t--) {
        string s;
        getline(cin, s); // read the entire line including spaces
        
        int i = s.length() - 1;
        int count = 0;
        
        // Find the length of the last word
        while (i >= 0 && s[i] != ' ') {
            i--;
            count++;
        }
        
        cout << count << endl;
    }
    
    return 0;
}
