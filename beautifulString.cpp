#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    cin >> n;
    
    int count = 0;
   
    string s;
    cin >> s;
    for(int i = 0; i<s.length() ;i++)
        {
        if(s[i] == '0' && s[i+1] == '1' && s[i+2] == '0')
            {
            i = i+2;
            count++;
        }
        
    }
    
    cout<< count <<endl;
    
    return 0;
}
