#include<bits/stdc++.h>

using namespace std;


// problem


int main()
{
    int t;

    cin>>t;

    while(t)
    {
  char num[100000];
  cin>>num;


  long long count = 0;
  int len = 0;

  int rem = num[0];
  int rem1 = 0;
  int i =0;
  while(num[i]!='\0')
  {
    len++;
    rem1 = num[i];
    i++;
    if(rem1 != rem)
    {
       count++;
    }

  }

  if(count == 1||(count == (len-1)) )
  cout<<"Yes"<<endl;
  else
  cout<<"No"<<endl;
  t--;
}
  return 0;
}
