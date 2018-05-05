#include <bits//stdc++.h>
using namespace std;
int main()
{
    long long num, pics;
    while (cin>>num)
    {
      if(num<0)
      {
           break;
      }
      else
        pics=(num*(num+1)/2)+1;

      cout<<pics <<endl;
    }

    return 0;

}
