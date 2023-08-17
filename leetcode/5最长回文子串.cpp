#include <iostream>
#include <vector>

using namespace std;

string longestPalindrome(string s) {
	int n = s.length();
  //特判
	if (n <= 2)
		if (n == 1 || s[0] == s[1]) return s;
		else return s.substr(0, 1);
	vector<vector<int>> dp(n, vector<int>(n));
	int maxn = 1;
	int begin = 0;
	int i, j, L;
  //初始化
	for (i = 0; i < n; i++) dp[i][i] = 1;
	for (i = 0; i < n - 1; i++) if (s[i] == s[i + 1]) { dp[i][i + 1] = 1; maxn = 2; begin = i; }
  
	for (L = 3; L <= n; L++)
		for (i = 0; i < n - L + 1; i++)
		{
			j = i + L - 1;
			if (s[i] == s[j] && j - 1 >= i + 1 && dp[i + 1][j - 1] == 1)
			{
				dp[i][j] = 1;
				if (L > maxn)
				{
					maxn = L;
					begin = i;
				}
			}
		}
	return s.substr(begin, maxn);
}

int main()
{
	cout << longestPalindrome("abbc"); //这里是要检测的字符串
	return 0;
}
