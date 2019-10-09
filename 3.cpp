#include<stdio.h>
double fun(int n)
{
	int i;
	double s=0;
	for(i=1;i<=n;i++)
	{
		if(i % 3==0){
			if(i % 6==0){
				s+=(double)1/i;
			}
			
		}
	}
	return(s);
}

main()
{	int n;
	scanf("%d",&n);
	printf("%lf",fun(n));

    }
   

