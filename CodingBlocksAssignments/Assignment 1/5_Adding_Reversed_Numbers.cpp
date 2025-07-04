/*The Antique Comedians of Malidinesia prefer comedies to tragedies. Unfortunately, most of the ancient plays are tragedies. Therefore the dramatic advisor of ACM has decided to transfigure some tragedies into comedies. Obviously, this work is very hard because the basic sense of the play must be kept intact, although all the things change to their opposites. For example the numbers: if any number appears in the tragedy, it must be converted to its reversed form before being accepted into the comedy play.

Reversed number is a number written in arabic numerals but the order of digits is reversed. The first digit becomes last and vice versa. For example, if the main hero had 1245 strawberries in the tragedy, he has 5421 of them now. Note that all the leading zeros are omitted. That means if the number ends with a zero, the zero is lost by reversing (e.g. 1200 gives 21). Also note that the reversed number never has any trailing zeros.

ACM needs to calculate with reversed numbers. Your task is to add two reversed numbers and output their reversed sum. Of course, the result is not unique because any particular number is a reversed form of several numbers (e.g. 21 could be 12, 120 or 1200 before reversing). Thus we must assume that no zeros were lost by reversing (e.g. assume that the original number was 12).*/

#include<iostream>
#include<math.h>
using namespace std;

#define limit pow(10, 18)
long long reverse(long long num) {
    long long reverse = 0;
    while (num > 0) {
        reverse = (reverse*10) + (num % 10);
        num /= 10;
    }
    return reverse;
}
int main() {
    int n;
	cin>> n;

	if (n > 10000 || n < 1) return 0;
	for (int i = 0; i <n; i++) {
		long long a, b;
    	cin>>a>>b;

		if ((a < 1 || a > limit) || (b < 1 || b > limit)) return 0;
		long long sum = reverse(a) + reverse(b);
		cout <<reverse(sum)<<endl;
	}
	
    return 0;
}