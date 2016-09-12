#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    long long test_cases = 0;
    long long num_gears = 0;

    cin>>test_cases;



    while(test_cases)
        {
        cin>>num_gears;

        if(num_gears%2 == 0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
        test_cases--;
    }
    return 0;
}
