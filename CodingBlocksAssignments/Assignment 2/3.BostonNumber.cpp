// A Boston number is a composite number, the sum of whose digits is the sum of the digits of its prime factors obtained as a result of prime factorization (excluding 1 ). The first few such numbers are 4,22 ,27 ,58 ,85 ,94 and 121 . For example, 378 = 2 × 3 × 3 × 3 × 7 is a Boston number since 3 + 7 + 8 = 2 + 3 + 3 + 3 + 7. Write a program to check whether a given integer is a Boston number.

#include<iostream>
#include<cmath>
using namespace std;

int sumofdigits(int num){
	int sum = 0;

	while (num>0){
		int digit = num %10;
		sum += digit;
		num/=10;
	}
	return sum;
}

int main() {
	int num;
	cin>>num;
    if(num < 1 || num > 2147483647 ) return 0;
	int numsum = sumofdigits(num);
	

	int orgnum =num;
    int sumprime = 0;
	for(int i=2; i*i<= orgnum ; i++){
		while(num % i==0 && num >1){
			sumprime += sumofdigits(i);
			num/=i;
		}
	}

	if (num > 1) {
		sumprime += sumofdigits(num);
	}
	if(sumprime == numsum){
		cout<<1;

	} else{ cout<<0;
    }
	return 0;
}