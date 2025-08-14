//Take as input a 2-d array. Print the 2-D array in spiral form anti-clockwise.

#include<iostream>
using namespace std;
int main() {
	int M;
	cin>>M;

	int N;
	cin>>N;

	int a[M][N];
	for(int i=0; i<M; i++){
		for(int j=0; j<N; j++){
			cin>>a[i][j];
		}
	}
	int top = 0, bottom = M-1, left = 0, right= N-1;

	while(top<=bottom && left <=right){
		for(int row=top; row<=bottom; row++){
			cout<<a[row][left]<<", ";
		}
		for(int col=left+1; col<=right; col++){
			cout<<a[bottom][col]<<", ";
		}
		for(int row=bottom -1; row>=top; row--){
			if(left ==  right) break;
			
			cout<<a[row][right]<<", ";
		}
		for(int col=right-1; col>=left+1; col--){
			if(top == bottom) break;
			cout<<a[top][col]<<", ";
		}
		top++; bottom --;
		left++; right--;

	}

	
	cout<<"END"<<endl;
	return 0;
}