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
