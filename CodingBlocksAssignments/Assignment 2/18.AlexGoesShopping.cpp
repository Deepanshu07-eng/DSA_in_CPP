//It is Alex’s birthday and she wants to go shopping. She only has ‘A’ units of money and she wants to spend all of her money. However, she can only purchase one kind of item. She goes to a shop which has ‘n’ types items with prices A0,A1,A2,…,An-1. The shopkeeper claims that he has at least ‘k’ items she can choose from. Help her find out if the shopkeeper is correct or not.

#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int q;
	cin>>q;
	
	while(q--){
		int price;
		cin>>price;

		int k;
		cin>>k;

		int ans=0;
		for(int i=0; i<n; i++){
			if(price % arr[i] == 0){
				ans++;
			}
		}
		if (k <= ans){
			cout<<"Yes"<<endl;
		}else{ cout<<"No"<<endl; }
	}

	

	return 0;
}