#include <stdlib.h>
#include <stdio.h>
/**
 * 错误代码： i <= len -1
 * len为无符号数， 当len=0时， len -1 也提升为无符号数，
 *  变成-1, 无符号数为最大值，所以i会不断循环，最后溢出array的范围
 * /
int cal_sum(int array[], unsigned int len) {
	int i, sum;
	for (i = 0; i<=len-1; i++) {
		sum += array[i];
	}
	return sum;
}

int main() {
	int array[] = {1, 3, 4, 5};
	unsigned int len = 0;
	int sum = cal_sum(array, len);

	printf("sum is %d\n", sum);
	return 0;
}
