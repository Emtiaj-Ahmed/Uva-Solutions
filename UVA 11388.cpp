#include <bits//stdc++.h>
using namespace std;
int main()
{
    int t, gcd, lcm;
    cin>>t;
    while(t--)
    {
        cin >>gcd >>lcm;
    if(lcm%gcd==0)
     cout<<gcd<<" " <<lcm<<endl;
     else
        cout<< -1 <<endl;
    }


    return 0;
}
