#include "pch.h"
//calculate测试对象
int test:: add(int a, int b) {
	return a + b;
}
int test::sub(int a, int b) {
	return a - b;
}
int test::mul(int a, int b) {
	return a * b;
}
float test::div(int a, int b) {
	return float(a) / b;
}
//判断素数测试对象
bool test::is_prime(int x) {
	if (x == 1)return false;
	for (int i = 2; i < x; i++) {
		if (x % i == 0)return false;
	}
	return true;
}
