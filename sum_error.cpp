#include <stdlib.h>
#include <stdio.h>
/**
 * ������룺 i <= len -1
 * lenΪ�޷������� ��len=0ʱ�� len -1 Ҳ����Ϊ�޷�������
 *  ���-1, �޷�����Ϊ���ֵ������i�᲻��ѭ����������array�ķ�Χ
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
