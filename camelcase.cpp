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
    string s;
    cin >> s;
    int count = 1;
    
    int len = s.length();
    
    for(int i =0 ;i < len ;i++)
        {
        int j = s[i];
        
        if(j >= 65 && j<=90)
            count++;
    }
    
    cout<<count<<endl;
    
    return 0;
}
