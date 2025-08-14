//Take as input a 2-d array.Print the 2-D array in sprial form clockwise.

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
		for(int col =left; col<=right; col++){
			cout<<a[top][col]<<", ";
		}
		for(int row=top+1; row<=bottom; row++){
			cout<<a[row][right]<<", ";
		}
		for(int col=right-1; col>=left; col--){
			if(top ==  bottom) break;
			
			cout<<a[bottom][col]<<", ";
		}
		for(int row=bottom-1; row>=top+1; row--){
			if(left == right) break;
			cout<<a[row][left]<<", ";
		}
		top++; bottom --;
		left++; right--;

	}

	
	cout<<"END"<<endl;
	return 0;
}