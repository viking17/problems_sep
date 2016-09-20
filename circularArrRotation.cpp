#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int k=0,q=0,n=0;
    int a[100000];
    int b[100000];
    int c[100000];
    
   
    
    cin>>n>>k>>q;
    
    for(int i =0 ;i<n;i++)
        {
        cin>>a[i];
    }
    
    for(int i =0 ;i<n;i++)
        b[i] = a[i];
    
    
    for(int i =0 ;i<n;i++)
        {
         int x = (i+k);
         c[x%n] = b[i];
         
       
    }
  
    while(q)
        {
        int temp = 0 ;
        
        cin>>temp;
        
        cout<<c[temp]<<endl;
        q--;
    }
    
    
    return 0;
}
