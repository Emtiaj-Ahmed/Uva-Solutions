#include <bits/stdc++.h>
using namespace std;
int main()
{
  int tc;
  bool a, b;
  cin >> tc;

  cout << "Lumberjacks:" <<endl;

  while(tc--)
  {
      int c,d;
      a = b = false ;
      cin >> c;
      for (int i = 0 ; i < 9 ; i++)
      {
          cin>>d;
          if (c>d)
              {
                    a = true;
              }

          else
            {
                     b = true;
            }

            c = d;
      }
      if (a&b == true)
      {
         cout <<"Unordered" <<endl;
      }
      else
      {
         cout <<"Ordered" <<endl;
      }

  }

   return 0;

}
