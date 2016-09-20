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
    long long n;
    cin >> n;
    
    
    long long c1  =0 ;
    
    for(long long i =0 ;i< s.length();i++)
        {
        if(s[i] == 'a')
            c1++;
    }
    
    long long num = (n/s.length())*c1;
    long long len = n%s.length();
    
    for(long long i =0 ;i< len;i++)
        {
        if(s[i] == 'a')
            num++;
    }
    
    cout<<num<<endl;
    
    return 0;
}
