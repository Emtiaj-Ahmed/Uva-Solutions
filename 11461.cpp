#include <bits/stdc++.h>
using namespace std;
int main()
{
     int a , b ,c;
    while (scanf("%d %d", &a, &b)==2)
    {


    if (a==0 && b ==0){
                break;
    }
     int ct = 0;

      for (int i=a; i <=b; i++)
      {

          c = sqrt(i);
          if(c*c==i)
            ct++;

      }
      printf("%d\n", ct);
    }


   return 0 ;
}
