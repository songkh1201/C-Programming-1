#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<limits.h>
#include<float.h>
#include<math.h>

int i;  // �������� (global variable)

// ���������� ���������� �̸��浹
// ���������� �켱
// �浹���� �̸� ��� 

#if 0
int main() {

	int j;  // ��������(local variable)      �����Ⱚ(garbage value)

	printf("%d", i);
	printf("%d", j);  // ���� (��� X)

	return 0;
}
#endif

// ���������� static
// �������� �տ� static ����
// �Լ� ���� �Ŀ��� ��������� ���� �� ����

#if 0
int foo() {
	int i = 0;
	i++;
	return i;
}
int bar() {
	static int i = 0;  // �Լ��� ���ʿ� ȣ��� ���� ����
	i++;    // �ι�° ������ �����ʹ� ���⼭���� ����
	return i;
}
int main() {

	int k = foo();
	k = foo();

	printf("%d\n", k);

	int m = bar();
	m = bar();

	printf("%d\n", m);

	return 0;
}
#endif

// ���������� extern
// 
// local - static
// glocal - extern
// 
// �ٸ� source code���� �������� ���� ��� ���� 

// �Լ��� extern
// �ٸ� source code���� �Լ� ���� ��� ����



// static ��������          <->  static ���������� �ٸ� �ǹ�
// �ܺ� ���Ͽ��� ������ �Ұ����� ��������
// extern ������� ���� �Ұ��� 


// ���� ������
//
// auto 
//	�Լ�, ��� ����� �Բ� �Ҹ�
//	������ �ʾƵ� ����
// register
//  ������ register (CPU����)�� �Ҵ�
//  �ӵ� ���� ȿ�� ������, ������� �ʴ� ���� ��õ
//  CPU���� register�� ������ �ڿ��̹Ƿ�, �Ժη� ������� ���ƾ�
// volatile
//  cache ������ �޸𸮿��� �������� CPU�� loading
//  �ӵ� ���� ���� �߻�
//  �Ӻ���� ���α׷��ֿ��� ����̽��� ���� ������ �� �ʿ�


// Recursion, ��ȯȣ��
// �Լ��� �ڱ� �ڽ��� ȣ��
// ����
//  �ձ��ϱ�
//  factorial ���
// Recursion �Լ��� ����
//  �ݵ��, Ż�� ����
//  ������ ȣ���ϴ� �κп����� argument ����
#if 1
int fact(int n) {
	if (n == 1) {
		return 1;
	}
	return n * fact(n - 1);
}
int main() {
	int k = 5;

	printf("%d", fact(k));

	return 0;
}
#endif

#if 0
int main() {


	return 0;
}
#endif

#if 0
int main() {


	return 0;
}

#if 0
int main() {


	return 0;
}

#if 0
int main() {


	return 0;
}
#endif
#endif
#endif