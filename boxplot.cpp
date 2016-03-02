#include<iostream>
#include<conio.h>
using namespace std;
void order(float *a, int n)
{
int i; 
float temp;
int j;

for (i = 1; i<n; i++)
{
	temp = a[i];
	for (j = i - 1; j >= 0; j--)
	{
		if (a[j]>temp)

			a[j + 1] = a[j];

		else
			break;
	}

	a[j + 1] = temp;
}
}
float max(float *a,int n)
{
	return a[n - 1];
}
float min(float *a)
{
	return a[0];
}
float median(float *a, int n)
{
	float y;
	if (n % 2 != 0)
	{

		y = a[int(n / 2)];
	}
	else if (n%2==0)
	{
		y = (a[(n / 2)-1] + a[n / 2]) / 2;
	}
	
	return y;
}
