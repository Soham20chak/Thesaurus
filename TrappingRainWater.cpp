#include <bits/stdc++.h>
using namespace std;

int trappedWater(vector<int>& arr)
{
	int num_blocks = 0;
	int n = 0;
	int max_height = INT_MIN;

	// Find total blocks, max height and length of array
	for (auto height : arr) {
		num_blocks += height;
		n += 1;
		max_height = max(max_height, height);
	}

	// Total water, left pointer and right pointer
	// initialized to 0 and n - 1
	int total = 0;
	int left = 0;
	int right = n - 1;

	for (int i = 1; i <= max_height; i++) {

		// Find leftmost point greater than current row (i)
		while (arr[left] < i)
			left += 1;

		// Find rightmost point greater than current row (i)
		while (arr[right] < i)
			right -= 1;

		// water in this row = right - left + 1
		total += (right - left + 1);
	}

	total -= num_blocks;
	return total;
}

// Driver code
int main()
{
	vector<int> arr
		= { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };

	// Function call
	cout << trappedWater(arr) << endl;
	return 0;
}
