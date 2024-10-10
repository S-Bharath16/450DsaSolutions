#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int knapsack(vector<int> &weight, vector<int> &value, int N, int W){
	vector<vector<int> > dp(N+1,vector<int>(W+1,0));
	for(int i=0;i<=N;i++){
		for(int w=0;w<=W;w++){
			if(i==0 || w==0){
				dp[i][w] = 0;
			}
			else if(weight[i-1]<=w){
				dp[i][w] = max(dp[i-1][w],value[i-1]+dp[i-1][w - weight[i-1]]);
			}
			else{
				dp[i][w] = dp[i-1][w];
			}
		}
	}
	return dp[N][W];
}

int main(){
	vector<int> val = {60,100,120};
	vector<int> weight = {10,20,30};
	int W = 50;
	cout<<"Maximum Weights:"<<knapsack(weight,val,val.size(),W);
}
