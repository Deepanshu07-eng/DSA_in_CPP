/*Deepak has a limited amount of money that he can spend on his girlfriend. So he decides to buy two roses for her. Since roses are of varying sizes, their prices are different. Deepak wishes to completely spend that fixed amount of money on buying roses for her.
As he wishes to spend all the money, he should choose a pair of roses whose prices when summed up are equal to the money that he has.
Help Deepak choose such a pair of roses for his girlfriend.

NOTE: If there are multiple solutions print the solution that minimizes the difference between the prices i and j. After each test case, you must print a blank line.*/

#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
void targetSum(int arr[], int n, int target)
{
    int left = 0;
    int right = n - 1;
    sort(arr,arr+n);
	int diff = INT_MAX;
	int ans1=0;
	int ans2 = 0;
    while (left < right)
    {
       int sum = arr[left] + arr[right];
        if (sum > target)
        {
            right--;
        }
        else if (sum < target)
        {
            left++;
        }
        else
        {
			diff = min(diff, arr[right]-arr[left]);
			ans1 = arr[left];
			ans2 = arr[right];
            
            left++;
            right--; 
        }
    }
	cout <<"Deepak should buy roses whose prices are " << ans1 << " and " << ans2 <<'.'<< endl;
}
int main() {
	int t;
	cin>>t; 
	while(t--){
		int n;
		cin>>n;
    	if(n>1000 || n<1) return 0;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int x;
		cin>>x;
		targetSum(arr,n,x);
	}
	
	return 0;
}