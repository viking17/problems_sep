#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int num;
    cin>>num;
    
    int k =0 ;
    
    int max_rad[2500];
    
    for(int i = 0;i<2500 ;i++)
        max_rad[i] = 0;
    
    
    int flag = 0;
    
    char grid[50][50];
    
    for(int i =0 ;i<num ;i++)
        {
        for(int j =0 ;j<num;j++)
            {
            cin>>grid[i][j];
        }
    }
     int rad = (num/2);
   
    
     for(int i =0 ;i<num ;i++)
         {
          for(int j =0 ;j<num ;j++)
              {
              rad = num/2;
              if(grid[i][j] == '.')
                  {
                  start:
                  for(int a =0 ;a<num ;a++)
                     {
                     for(int b =0 ;b<num ;b++)
                         {
                        if((sqrt(pow((a-i),2)+pow((b-j),2)) <= rad) && (grid[a][b] != '.') && rad>=0 )
                             {
                             rad--;
                             goto start;
                               }
                     }
                         
                 }
                  max_rad[k] = rad;
                            k++;  
              }
          }
     }
    //cout<<k<<endl;
    
    
    int ans = 0;
    
    /*for(int i =0 ;i <pow(num,2) ; i++)
        cout<<max_rad[i]<<endl;*/
    
    for(int i =0 ;i <pow(num,2) ; i++)
        {
        if(max_rad[i] > ans)
            ans = max_rad[i];
    }
   
    cout<<(ans)<<endl;

    return 0;
}
