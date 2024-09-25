void reverseArray(vector<int> &arr , int m) {
    // Write your code here    
    int i = m+1;
    int j = arr.size()-1;
    int temp = 0;
    while(j>i)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }  
}
