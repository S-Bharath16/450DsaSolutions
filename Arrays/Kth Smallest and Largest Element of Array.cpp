int partition(vector<int> &arr,int left, int right, int pivotIndex)
{
	int pivotValue = arr[pivotIndex];
	swap(arr[pivotIndex],arr[right]);
	int current = left;
	for (int i=left; i<right; i++)
	{
		if(arr[i]<pivotValue)
		{
			swap(arr[current],arr[i]);
			current++;
		}
	}
	swap(arr[right],arr[current]);
	return current;
}
int quickselect(vector<int> &arr, int left, int right, int k)
{
	if(left == right)
	{
		return arr[left];
	}
	int pivotIndex = left + rand() % (right-left+1);//median as an 
	int partitionIndex = partition(arr,left,right,pivotIndex);
	if(partitionIndex >= k)
	return quickselect(arr,left,partitionIndex-1,k);//left subarray
	if(partitionIndex < k-1)
	return quickselect(arr,partitionIndex+1,right,k);//right subarray
	return arr[partitionIndex];
}
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	// Write your code here.
	vector<int> result(2);
	result[0] = quickselect(arr,0,n-1,k);
	result[1] = quickselect(arr,0,n-1,n-k+1);
	return result;
}

