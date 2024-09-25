#include <queue>
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	// Write your code here.
	vector<int> result(2);
	priority_queue<int, vector<int>, greater<int>> minHeap(arr.begin(),arr.end());
	for(int i=1;i<k;i++)
	{
		minHeap.pop();
	}
	result[0] = minHeap.top();
	priority_queue<int> maxHeap(arr.begin(),arr.end());
	for(int i=1;i<k;i++)
	{
		maxHeap.pop();

	}
	result[1]=maxHeap.top();
	return result;
}
