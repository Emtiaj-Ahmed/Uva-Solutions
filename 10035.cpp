#include <bits/stdc++.h>
using namespace std;
int main()
{

unsigned long long  a,b;
int c,d,sum, count, carry;

while (scanf("%llu %llu", &a, &b)==2)
{
    if (a ==0 && b ==0)
            break;

  c=0, d=0, count = 0, carry= 0;
    for (int i =0;;i++)
    {


        if (a == 0 && b ==0)
            break;
        c = a%10;
        a = a/10;
        d = b%10;
        b = b/10;
        sum = c+d+carry;
        if (sum >9)
        {
            count ++;
            carry = 1;
        }
        else
        {
            carry = 0;
        }
    }
    if (count ==1)
    {
        printf("%d carry operation.\n", count);
    }
    else if (count >1)
    {
        printf("%d carry operations.\n", count);
    }
     else if (count ==0)
    {
        printf("No carry operations.\n");
    }

}
return 0;
}
