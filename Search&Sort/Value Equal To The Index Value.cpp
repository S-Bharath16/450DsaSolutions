#include <bits/stdc++.h> 
vector<int> valueEqualToIndices(vector<int>& numArray, int n) {
	// Write your code here.
	vector<int> out;
	for(int i=0;i<n;i++){
		if(numArray[i]==i){
			out.push_back(i);
		}
	}
        if (out.size() == 0) {
                out.push_back(-1);
        }
        return out;
}
