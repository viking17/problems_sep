#include<bits/stdc++.h>

using namespace std;

int main()
{
  string given_pal;

  int test_cases;


  cin>>test_cases;

  while(test_cases)
  {
      int flag = 0;
    cin>>given_pal;
    int i = 0;
    int j = (given_pal.length()-1);


    int a,b;
    for(a = 0 , b = j  ; a<given_pal.length()/2,b>=given_pal.length()/2 ; a++,b--)
    {

        if(given_pal.length()%2 != 0)
        {
            if(given_pal[(given_pal.length()/2)] == '.')
            given_pal[(given_pal.length()/2)] = 'a';
        }
      if(given_pal[a] == given_pal[b])
      {
           if(given_pal[a] == '.' && given_pal[b] == '.')
          {
              given_pal[b] = 'a';
              given_pal[a] = 'a';
          }
          else
          continue;
      }

      else
      {
        if(given_pal[a] == '.' || given_pal[b] == '.')
        {
          if(given_pal[a] == '.' && given_pal[b] != '.')
          {
            given_pal[a] = given_pal[b];
          }
          if(given_pal[a] != '.' && given_pal[b] == '.')
          {
            given_pal[b] = given_pal[a];
          }

        }
        else
        flag = 1;

      }
    }

    if(flag == 1)
    cout<<-1<<endl;
    else
    {
      cout<<given_pal<<endl;
    }


    test_cases--;
  }

  return 0;
}
