#include<stdio.h>
int main()
{
	int total_numbers;
	scanf("%d", &total_numbers);
	int i = 0;
	int all_numbers[total_numbers];
	int max_two[2];
	for(; i < total_numbers; i++)
	{
		scanf("%d", &all_numbers[i]);
	}
	int j;
	for(i = 0; i <=1 ; i ++)
	{
		int max = all_numbers[i];
		for( j = i + 1 ; j < total_numbers; j++)
		{
			if (all_numbers[j] > max)
			{
				max = all_numbers[j];
				all_numbers[j] = all_numbers[i];
				all_numbers[i] = max;
			}
		}
		max_two[i] = max;	
	}
	printf("%d",(max_two[0] * max_two[1]));
	return 0;
}