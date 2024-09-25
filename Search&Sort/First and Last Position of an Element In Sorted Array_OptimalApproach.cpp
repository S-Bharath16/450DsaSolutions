pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k) 
{
    //for first occurences of k
    int firstpos=-1,lastpos=-1; //init first and last postion
    int start = 0,end = n-1; // start for first half and end at the mid
    while(start<=end){ //condition to check or stop the iteration
        int mid=start+(end-start)/2; // mid point 
        if(arr[mid]==k){ //check whether the given mid element is equal to k or not
            firstpos=mid; //update if it's true
            end=mid-1; //reduce end pointer to mid-1
        } 
        else if(arr[mid]>k){ //if k is smaller, go the left half 
            end=mid-1; //reduce the end pointer
        }
        else{
            start=mid+1; //if k is larger, go to the right half
        }
    }
    // for last occurences of k
    start=0;
    end=n-1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid]==k){
            lastpos=mid;
            start=mid+1;
        }
        else if(arr[mid]>k){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return make_pair(firstpos,lastpos);
}

