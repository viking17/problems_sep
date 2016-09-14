#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip> 
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    double x =0 , y = 0 , a =0 ,b = 0;
    double k = 0, n= 0;
    
    cin>>x>>y>>a>>b;
    
    
     double l = sqrt(pow(a,2)+pow(b,2));//for a^2+b^2
     double h = sqrt(pow(x,2)+pow(y,2));//for x^2 + y^2
     
    n = (h*(((y/h)*(a/l)) - ((b/l)*(x/h))))/l ;
    
    k = (h*(((x/h)*(a/l)) + ((y/h)*(b/l))))/l;
    
    cout << fixed << setprecision(12)<<k<<endl;
   cout << fixed << setprecision(12)<<n<<endl;
    
    return 0;
}
