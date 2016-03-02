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
float Q1(float *a, int n)
{
	return median(a, n / 2);
}
float Q3(float *a, int n)
{
	float *h = new float[n / 2];
	for (int i = 0; i < n / 2; i++)
	{
		if (n % 2 == 1)
		{
			h[i] = a[i + int(n / 2) + 1];
		}
		else if (n % 2 == 0)
		{
			h[i] = a[i + n / 2];
		}
	
	}
	return median(h, n / 2);
}
	float *out(float *a,int  n,int & h)
	{
		float * outlier=new float[n];
		int p = 0;
		float g = 1.5*(Q3(a, n) - Q1(a, n));
		float y = Q1(a, n) - g;
		float t = Q3(a, n) + float(1.5*(Q3(a, n) - Q1(a, n)));
		
		for (int i = 0; i < n; i++)

		{
			if (a[i] > t || a[i] < y)
			{
				outlier[p] = a[i];
				p++;

			}
			

		}
		h = p;
		return outlier ;

	
	}
