//Find the maximum and minimum element in an unsorted array

#include<stdio.h>

void findMinMax(int *Arr, int len)
{
	int min,max, i;
	min = Arr[0]; //Initialize min and max with first element of Arr
	max = Arr[0];

	for (i = 0; i < len; i++)
	{
		if (Arr[i] < min) //Finding minimum element
			min = Arr[i];
		if (Arr[i] > max) //Finding maximum element
			max = Arr[i];
	}
	printf("%d\n%d", min, max);
}

void main()
{
	int *Arr = { 6, 8, 2, 5, 1, 10, 4, 9 };
	findMinMax(Arr, 8);
}