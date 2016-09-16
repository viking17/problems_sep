#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    string str;
   
    long long m = 0;
    long long ans = 0;
    long long u =0 ;
    
    
    cin>>str;
    
    cin>>m;
    
    long long len = str.length();
    

        for(long long j = 0 ;j < len ;j++)
            {
             string s;
             string s1;
             string s2;
            
            
            s = str.substr(0,j+1);
            
            s1.append(str);
            s1.append(s);
                
            s2.append(s);
            s2.append(str);
          
            if (s1.compare(s2) == 0)
                {
                
               
                ans = m/(j+1);
                break;
            }
                
            
                
        }
        
        cout<<ans<<endl;
    return 0;
}
