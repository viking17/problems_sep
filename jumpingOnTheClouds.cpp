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
   int cloud[100];
    int count =0 ;
    
    for(int i = 0;i < n;i++){
       cin >> cloud[i];
    }
    
    for(int i = 0;i<n;i++)
        {
        if(cloud[i+2] == 0)
            {
             i= i+1;
            }
        count++;
    }
    
    cout<<count-1<<endl;
    return 0;
}
