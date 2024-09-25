#include <bits/stdc++.h> 
#include <limits.h>
int sumOfMaxMin(int arr[], int n){
	int min = INT_MAX;
	int max = INT_MIN;
	for(int i=0; i<n; i++)
	{
		if(arr[i]<min)
		{
			min = arr[i];
		}
		if(arr[i]>max)
		{
			max = arr[i];
		}
	}
	return max+min;
}
