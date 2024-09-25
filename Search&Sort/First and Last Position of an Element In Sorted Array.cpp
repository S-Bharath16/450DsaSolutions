pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int start = 0;
    int end = n - 1;
    int ret1 = -1;
    int ret2 = -1;
    while (start <= end)
    {
        if (arr[start] == k && ret1 == -1) 
        {
            ret1 = start; 
        }
        if (arr[end] == k && ret2 == -1) 
        {
            ret2 = end;   
        }
        if (ret1 != -1 && ret2 != -1)
        {
            break;
        }
        if (ret1 == -1) 
        {
            start++;
        }
        if (ret2 == -1) 
        {
            end--;
        }
    }
    return make_pair(ret1, ret2);
}

