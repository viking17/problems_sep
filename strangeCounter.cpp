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
    long long t;
    cin >> t;
    
    long long time  = 3;
    long long temp =3;
    long long count = 1;
    //temp = time*count;
    
    while(t)
        {
      
        if(time == 0)
            {
            temp = temp*2;
            count++;
            time = temp;
           // cout<<temp<<endl;
            
        }
        
        
        //cout<<time<<endl;
        time--;
       
        
        t--;
    }
    cout<<time+1<<endl;
    return 0;
}
