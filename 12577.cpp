#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    int i=0;
    while (t--)
    {
    string ch;
    cin >> ch;
     if (ch =="*")
        break;
     if (ch=="Hajj")
        cout<<"Case "<<++i <<": Hajj-e-Akbar"<<endl;
     else if (ch=="Umrah")
        cout<<"Case "<<++i <<": Hajj-e-Asghar"<<endl;

    }

     return 0;
}
