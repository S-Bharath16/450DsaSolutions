#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

string lcs(string s1, string s2){
	int m = s1.length();
	int n = s2.length();
	vector<vector<int> > dp (m+1,vector<int>(n+1,0));
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(s1[i-1]==s2[j-1]){
				dp[i][j] = dp[i-1][j-1] + 1;
			} else {
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			}
		}
	}
	string lcsString;
	int i = m, j = n;
	while(i>0 && j>0){
		if(s1[i-1]==s2[j-1]){
			lcsString = s1[i-1] + lcsString;
			i--;
			j--;
		}
		else if(dp[i-1][j] > dp[i][j-1]){
			i--;		
		} else {
			j--;
		}
	} 
	cout << "LCS Length: " << dp[m][n] << endl;
	return lcsString;
 }
 int main() {
 string S1 = "ABCBDAB";
 string S2 = "BDCAB";
 string lcsResult = lcs(S1, S2);
 cout << "LCS: " << lcsResult << endl;
 return 0;
 }
