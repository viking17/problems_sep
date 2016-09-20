#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    int cost[100000];
    int n , k;
    int sum = 0;
    
    cin>>n>>k;
    
    
    
    for(int i = 0 ;i < n ;i++)
        {
        cin>>cost[i];
    }
    
    int b = 0;
    cin>>b;
    
    for(int i = 0 ;i < n ;i++)
        {
        if( i != k)
            {
            sum  += cost[i];
        }
    }
    
    sum = sum/2;
    
    if(sum == b)
        {
        cout<<"Bon Appetit"<<endl;
    }
    else
        {
        cout<<fabs(sum-b)<<endl;
    }
        
    return 0;
}
