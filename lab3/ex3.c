#include<stdio.h>
#include<math.h>
int main()
{
	char a[20];
	int b[20] = { 0 };
	int i = 0, j = 0;
	int num = 0;
	int c = 0;
	while (a[num] != '\0'){ 
	if ((a[num] >= 'a') && (a[num] <= 'z'))
		{
			b[num] = a[num] - 'a' + 10;
			num++;
			continue;
		}
		if ((a[num] >= 'A') && (a[num] <= 'Z'))
		{
			b[num = a[num] - 'A' + 10];
			num++;
			continue;
		}
		b[num] = a[num] - '0';
		num++;
	}
	for (i = 0; i < num; i++)
	{
		b[num - i - 1] = b[num - i - 1] * pow(16, i);
	}
	for (j = 0; j < num; j++)
	{
		c = c + b[j];
	}
	printf("%d", c);
	return 0;
}