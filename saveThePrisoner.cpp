#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long t;
    cin>>t;
    while(t)
        {
        long long n,m,s;
        cin>>n>>m>>s;
        
        long long ans = (m +s-2)%n+1;
        cout<<ans<<endl;
        t--;
    }
    return 0;
}
