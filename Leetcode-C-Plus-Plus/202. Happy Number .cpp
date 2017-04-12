#include <iostream>
using namespace std;
class Solution {
public:
	bool isHappy(int n) {
		int num = 0;
		if (n == 1 || n == 7) { return true; }
		if (n<10) { return false; }
		while (n>0) {
			num += (n % 10)*(n % 10);
			n /= 10;
		}
		return isHappy(num);
	}
};