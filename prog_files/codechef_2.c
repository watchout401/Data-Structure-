#include<stdio.h>
int main()
{
	int withdraw;
	float updated_bal,bal;

	scanf("%d",&withdraw);

	scanf("%f",&bal);

	if (withdraw>0)
	{

	if ((bal>(withdraw+0.5))&&(withdraw%5==0))
	{
		updated_bal = bal-(withdraw+0.5);
		printf("%.2f",(updated_bal));
	}

	else

		printf("%.2f",bal);

}

}