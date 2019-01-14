#include <iostream>
#include <string.h>
using namespace std;
int main()
{
   int t, length1,length2,i,flag;
   char real[50];
   char game[50];
   cin >>t;
   while(t--)
   {
    cin >> real >>game;
    length1=strlen(real);
    length2=strlen(game);
    if(length1==length2)
    {
        flag=1;
        for(i=0;i<length1;i++)
        {
            if(real[i]=='a'||real[i]=='e'||real[i]=='i'||real[i]=='o'||real[i]=='u')
                continue;
            else
            {
               if(real[i]!=game[i])
                flag=0;
            }
        }
        if(flag)

            cout<<"Yes"<<endl;
        else
                cout <<"No"<<endl;

    }
    else
                cout <<"No"<<endl;

}
return 0;
}
