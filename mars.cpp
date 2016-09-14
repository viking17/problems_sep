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
    string St;
    cin >> St;
    int count = 0;
    
    for(int i =0 ;i<St.length();i=i+3)
        {
        if(St[i] != 'S')
            {
            count++;
           
        }
        if(St[i+1] != 'O' )
            {
            count++;
           
        }
        if( St[i+2] != 'S')
            {
            count++;
           
        }
    }
    
    cout<< count <<endl;
    return 0;
}
