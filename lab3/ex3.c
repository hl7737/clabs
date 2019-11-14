#include<stdio.h>
#include<math.h>
int main(void)
{
	char a[20];
	int b[20] = { 0 };
	int i = 0, j = 0;
	int sum = 0;
	int c = 0;
    gets(a);
    while (a[sum] != '\0'){ 
	if ((a[sum] >= 'a') && (a[sum] <= 'z'))
		{
			b[sum] = a[sum] - 'a' + 10;
			sum++;
			continue;
		}
		if ((a[sum] >= 'A') && (a[sum] <= 'Z'))
		{
			b[sum] = a[sum] - 'A' + 10;
			sum++;
			continue;
		}
		b[sum] = a[sum] - '0';
		sum++;
	}
	for (i = 0; i < sum; i++)
	{
		b[sum - i - 1] = b[sum - i - 1] * pow(16, i);
	}
	for (j = 0; j < sum; j++)
	{
		c = c + b[j];
	}
	printf("%d", c);
	return 0;
}