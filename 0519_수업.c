#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


// ����
// ���� ����ǥ�� �̿��ؼ� ǥ��
// 'a'  'A'
//
// ���ڿ�
// ū ����ǥ�� �̿��ؼ� ǥ��
// "hello"
//
// "a"�� 'a'�� �ٸ���

// ���ڿ� ���ڿ��� ����
// ����: 1byte�� ����
// ���ڿ�: ���� �ڸ��� + 1byte�� ����
//         ������ 1byte�� ���ڿ��� ���� �ǹ�
// ���ڿ� "A"
// ���� Null ���� 0 Ȥ�� \0

// Null (��)����
// ASCII code 0�� ����
// ���ڿ��� ���� ǥ���ϴ� ����
// -> ���� �̰��� ������ ���ڿ��� ���� ��ġ�� ã�� ���� ����.
// 
// ���ڿ��� �ٷ�� �Լ����� Null ���ڰ� �߿�
// H E L L O \0 --> "HELLO"
// H E \0 L O \0 --> "HE"

// ���ڿ� (String)
// ���ڸ� ��ҷ� ���� 1���� �迭
// ���� ���
// �ִ� ���� 10�� ���ڿ��� �����ϱ� ���ؼ��� 
// char str[11];
// ���ڿ��� �� ���� ��Ÿ���� ���ؼ�, '\0', null character�� ���

// ���ڿ� (String)�� ���
// Printf���� '%s' �� ���, s�� string�� �ǹ�
// Printf�� ���ڿ����� '\0' ���ڸ� ���� ������ ���

#if 0
int main() {
	char str[10] = "hello";
	printf("%s", str);
	return 0;
}
#endif

// ���ڿ� ������ �ʱ�ȭ
// ���ڿ� ������ ���ڵ��� �迭�� ǥ��
// 
// char a[10]
// char str[4] = "abc";  a b c \0
// char str[4] = "abcd";  null ���� �ڸ����� ����. a b c d
// char str[4] = "\0";  \0 \0 \0 \0
// char str[] = "abc";  �ڵ����� 4-byte(���� 3�� + null)�迭

// ���ڿ�(String)�� ����: �ѱ��ھ� ����
// ���ڿ��� ���ڹ迭�̹Ƿ� index�� �̿��ؼ� ���� ����
#if 0
int main() {
	char s[] = "hello";
	printf("%s\n", s);
	s[0] = 'H';  // ����! ���ڹ迭 ��� ������ ����
	s[2] = 'L';
	printf("%s\n", s);
	return 0;
}
#endif

// ���ڿ�(String) ����
// ���ڿ��� ���Կ�����(=) �Ҵ� �Ұ�
// strcpy (string copy) �Լ� �̿�: strcpy(dst, src)  dst <- src
#if 0
#include<string.h>  // <--- strcpy �Լ� ���
int main() {
	char s[] = "hello";
	char d[20];
	strcpy(d, s);  // d = s; <-- ���Ұ�
	printf("%s\n", d);
	return 0;
}
#endif

// ���ڿ� ����� ������
// 1) char *p = "HelloWorld";
// 2) char p[] = "HelloWorld";
// �� �� ������ ���̴�?
// 1) "HelloWorld" ��� ���ڿ��� ����� ���� �ּҸ� ������ ���� p�� ����
// 2) "HelloWorld" ��� ���ڿ��� �迭 p�� ������ ����
// * "HelloWorld" ��� ���ڿ� ��ü�� read-only, ���� �Ұ�
#if 0
int main() {

	char s[10] = "hello";
	s[0] = 'H';
	printf("%s\n", s);

	const char* p = "bye";  // read O, write X
	//p[0] = 'B';  // X

	char* f = s;
	f[1] = 'E';
	printf("%s\n", s);

	return 0;
}
#endif

// ���ڿ� (String)�� �Է�
// scanf���� '%s' �� ���, s�� string�� �ǹ�
// **����, ���ڿ� �̸� �տ� '&'�� ������� �ʴ´�.
#if 0
int main() {
	char s[11];
	scanf("%s", s);
	printf("%s", s);
	return 0;
}
#endif

// ���ڿ��� �迭�̹Ƿ�, index�� �̿��Ͽ� ���ڸ� access.
// �ִ� ���� 10�� ���ڿ��� �Է� �޾�, ��� 'a'�� 'b'�� �ٲپ� ����� ����.
#if 0
int main() {
	char s[11];
	int i;
	scanf("%s", s);

	for (i = 0; i < 10; i++) {
		if (s[i] == 'a') {
			s[i] = 'b';
		}
	}
	printf("%s", s);
	return 0;
}
#endif

// �ִ� ���� 10�� ���ڿ��� �Է� �޾�
// ���� ���̸� ����� ����.
#if 0
int main() {
	char s[11];
	scanf("%s", s);
	int cnt = 0;

	for (int i = 0; s[i] != '\0'; i++) {
		cnt++;
	}
	printf("%d", cnt);
	return 0;
}
#endif

// �ִ� ���� 10�� ���ڿ��� �Է¹޾�
// �빮�ڴ� �ҹ��ڷ�, �ҹ��ڴ� �빮�ڷ� ����� ����
#if 0
int main() {
	char s[11];
	scanf("%s", s);

	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			s[i] = s[i] + ('a' - 'A');
		}
		else if (s[i] >= 'a' && s[i] <= 'z') {
			s[i] = s[i] - ('a' - 'A');
		}
	}
	printf("%s", s);
	return 0;
}
#endif

// �ִ���� 10�� ���ĺ� ���ڿ��� �Է� �޾� ��ȣ���� ����� ����
// ��ȣ��Ģ: ���� + 10
#if 0
int main() {
	char s[11];
	scanf("%s", s);
	for (int i = 0; s[i] != '\0'; i++) {
		s[i] = s[i] + 10;
	}
	printf("%s", s);
	return 0;
}
#endif

// �ִ���� 10�� ���ڿ��� �Է� �޾�
// �� �ڿ� 'hello'�� ������ ���ο� ���ڿ��� ����� ����
#if 0
int main() {
	char s[11];
	char h[] = "hello";
	char n[16];
	scanf("%s", s);

	int i;
	for (i = 0; s[i] != '\0'; i++) {
		n[i] = s[i];
	}
	int j;
	for (j = 0; h[j] != '\0'; j++) {
		n[i + j] = h[j];
	}
	n[i + j] = '\0';
	printf("%s", n);
	return 0;
}
#endif

// ���ڿ� ����� �Լ�: scanf�� �Ѱ�� gets_s
#if 0
int main() {
	char str[30];

	// <--- "hello world"�Է��ϸ� ��ü�� ���ڿ��� �ν�
	gets(str);
	printf("%s\n", str);

	// scanf�� �Ѱ�

	// <--- "hello world"�Է½� "hello"������
	// �߰��� ������ ���ڿ� ������ �ν�
	scanf("%s", str);
	printf("%s\n", str);

	return 0;
}
#endif

// ���ڿ� ����� �Լ�
// �Է��Լ� gets()
// ����Լ� puts()
#if 0
int main() {
	char s[30];
	gets(s);
	puts(s);
	return 0;
}
#endif

// ���� ���� �Լ�
#if 0
#include<ctype.h>
int main() {

	char c = '\a';

	printf("%d\n", isalpha(c));  // ���ĺ� �����ΰ�?
	printf("%d\n", isupper(c));  // �빮���ΰ�?
	printf("%d\n", islower(c));  // �ҹ����ΰ�?
	printf("%d\n", isdigit(c));  // ���ڹ����ΰ�?
	printf("%d\n", isalnum(c));  // ���ĺ� Ȥ�� ���ڹ����ΰ�?
	printf("%d\n", isxdigit(c)); // 16������ ���Ǵ� �����ΰ�?
	printf("%d\n", isspace(c));  // ����, \n, \t
	printf("%d\n", ispunct(c));  // ������ �����ΰ�?
	printf("%d\n", isprint(c));  // ��°����Ѱ�?
	printf("%d\n", iscntrl(c));  // �����?  \n
	printf("%d\n", isascii(c));  // ASCII ����?

	return 0;
}
#endif

// ���� ��ȯ �Լ�
#if 0
#include<ctype.h>
int main() {
	char c = 'a';
	printf("%c\n", toupper(c));  // �빮�ڷ� ��ȯ

	char d = 'A';
	printf("%c\n", tolower(d));  // �ҹ��ڷ� ��ȯ
	return 0;
}
#endif

// �ִ� 10���� ���̵� �Է¹޾�
// ���ĺ��� ���ڷθ� �����Ǿ� �ִ��� Ȯ��
// gets�� �Է�
// ���ڿ� ��Ҹ��� isalpha�� isdigit �����ϴ��� Ȯ��
#if 0
#include<ctype.h>
#include<string.h>
int main() {
	char s[11];
	gets(s);
	int is = 1;
	for (int i = 0; i < strlen(s); i++) {
		if (isalnum(s[i]) == 0) {
			is = 0;
		}
	}
	printf("%d", is);
	return 0;
}
#endif

// ���ڿ� �Լ�: strcmp
// String compare �Լ�
// �μ��� �� ���� ���ڿ��� �޾Ƽ�, ������ 0�� ��ȯ
// ��ҹ��ڸ� ����
#if 0
#include<string.h>
int main() {
	char s[30];
	gets(s);

	if (strcmp(s, "hello") == 0) {
		printf("same\n");
	}
	else {
		printf("different\n");
	}
	return 0;
}
#endif

// ���ڿ� �Լ�: stricmp
// String compare ignore case �Լ�
// �μ��� �� ���� ���ڿ��� �޾Ƽ�, ������ 0�� ��ȯ
// ��ҹ��� ���� ����
#if 0
int main() {
	char s[30];
	gets(s);

	if (stricmp(s, "HELLO") == 0) {
		printf("same\n");
	}
	else {
		printf("different\n");
	}
	return 0;
}
#endif

// ���ڿ� �Լ�: strcmp �ǽ�
// ���� �Լ� ȣ����� ��ȯ ���� ������ �ǹ̸� �����Ͻÿ�
// strcmp("ab", "ab"); -> 0
// strcmp("ab", "cd"); != 0, ab < cd �ڿ� ���ڿ��� �������� �� �ڿ� ������ ������ȯ
// strcmp("cd", "ab"); != 0, cd > ab �տ� ���ڿ��� �������� �� �ڿ� ������ �����ȯ
#if 0
#include<string.h>
int main() {
	printf("%d", strcmp("ab", "cd"));
	return 0;
}
#endif

// ���ڿ� �Լ�: strlen
// String length �Լ�
// �μ��� �־��� ���ڿ��� ���� (null ����)�� ��ȯ
#if 0
#include<string.h>
int main() {
	char s[30];
	gets(s);
	printf("%d", strlen(s));
	return 0;
}
#endif

// ���ڿ� �Լ�: strcpy
// String copy �Լ�
// ���ڿ��� ����. strcpy(str1, str2)�� str2 -> str1�� ����
// str1�� str2���� ��ų� ���ƾ�
#if 0
#include<string.h>
int main() {
	char s1[30];
	char s2[30];

	gets(s2);
	strcpy(s1, s2);

	puts(s1);
	return 0;
}
#endif

// ���ڿ� �Լ�: strcat
// String concatenate �Լ�
// ���ڿ� ����. strcat(str1, st2)�� str1+str2
// ��ģ ����� ��� str1��
// str1+str2���� ��ų� ���ƾ�
#if 0
#include<string.h>
int main() {
	char s1[60];
	char s2[30];

	gets(s1);
	gets(s2);
	strcat(s1, s2);
	puts(s1);
	return 0;
}
#endif

// ���ڿ� �迭
// char s[3][6] = {"aaa","bbb","ccc"};
//	 ���ڿ� ��� ���� ����
// char *s[3] = {"aaa","bbb","ccc"};
//	 ���ڿ� ��� ���� �Ұ�

// ���ڿ� �迭�� ����
#if 1
#include<ctype.h>
int main() {
	char names[3][10];

	for (int i = 0; i < 3; i++) {
		gets_s(names[i]);
	}
	printf("--------------\n");

	for (int i = 0; i < 3; i++) {
		puts(names[i]);
	}
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
#endif

