//Read as input 5 Numbers and print the largest out of them

#include<iostream>
#include<climits>
using namespace std;

int main () {
	int n[5], max=INT_MIN ;
	for(int i=0; i<5; i++){
		cin>>n[i];
		if(n[i]>max){
			max = n[i];
		}
	}
	cout<<max;
	return 0;
}