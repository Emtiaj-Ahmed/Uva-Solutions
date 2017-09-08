#include <stdio.h>

int Totient (int i)
{
	int res;
	int j;

	if (i==1) return 1;

        res=i;


        if (i%2==0)
        {
		res-=res/2;
		do i/=2; while (i%2==0) ;
        }


	for (j=3; j*j<=i; j+=2)
	{
		if (i%j==0)
		{
			res-=res/j;
			do i/=j; while (i%j==0) ;
		}
	}


	if (i>1) res-=res/i;


	return res;
}

int main()
{
    int n;
    while(scanf("%d", &n) && n!=0){
    printf("%d\n", Totient(n));
    }
    return 0;
}
