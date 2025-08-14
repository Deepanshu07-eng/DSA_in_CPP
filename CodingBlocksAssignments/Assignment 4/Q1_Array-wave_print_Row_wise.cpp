//Take as input a two-d array. Wave print it row-wise.

#include<iostream>
using namespace std;
int main() {
	int M;
	cin>>M;

	int N;
	cin>>N;

	int arr[M][N];
	for(int i=0; i<M; i++){
		for(int j=0; j<N; j++){
			cin>>arr[i][j];
		}
	}
	for(int i=0; i<M; i++){
		if(i%2 == 0){
			for(int j=0; j<N; j++){
				cout<<arr[i][j]<<", ";
			}
		}else{
			for(int j= N-1; j>=0; j--){
				cout<<arr[i][j]<<", ";
			}
		}
	}
	cout<<"END"<<endl;
	return 0;
}