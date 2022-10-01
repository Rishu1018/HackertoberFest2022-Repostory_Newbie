// Knapsack.cpp
#include <iostream>
using namespace std;

int Knapsack(int *price, int *wt, int n, int capacity, int dp[][100]) {
	// base case
	if (n == 0 || capacity == 0) {
		return dp[n][capacity] = 0;
	}
	if (dp[n][capacity] != -1 ) {
		return dp[n][capacity] ;
	}
	// recursive case
	int op1 = INT_MIN, op2 = INT_MIN;
	if (wt[n - 1] <= capacity) {
		op1 = price[n - 1] + Knapsack(price, wt, n - 1, capacity - wt[n - 1], dp);
	}
	op2 = 0 + Knapsack(price, wt, n - 1, capacity, dp);
	return dp[n][capacity] = max(op1, op2);
}

int bottomUp(int *price, int *wt, int N, int capacity) {
	int dp[100][100] = {0};
	for (int n = 1; n <= N; ++n)
	{
		for (int c = 1; c <= capacity; ++c)
		{
			int op1 = INT_MIN, op2 = INT_MIN;
			if (c >= wt[n - 1]) {
				op1 = price[n - 1] + dp[n - 1][c - wt[n - 1]];
			}
			op2 = 0 + dp[n - 1][c];
			dp[n][c] = max(op1, op2);
		}
	}

	for (int n = 0; n <= N; ++n)
	{
		for (int c = 0; c <= capacity; ++c)
		{
			cout << dp[n][c] << " ";
		}
		cout << endl;
	}
	return dp[N][capacity];
}

int main() {

	int price[] = {4, 8, 5, 10};
	int wt[] = {1, 3, 2, 4};
	int n = sizeof(price) / sizeof(int);
	int capacity = 5;
	int dp[100][100];
	memset(dp, -1, sizeof dp);
	cout << Knapsack(price, wt, n, capacity, dp) << endl;
	cout << bottomUp(price, wt, n, capacity) << endl;
	return 0;
}
