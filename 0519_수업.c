#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


// 문자
// 작은 따옴표를 이용해서 표시
// 'a'  'A'
//
// 문자열
// 큰 따옴표를 이용해서 표시
// "hello"
//
// "a"와 'a'는 다르다

// 문자와 문자열의 저장
// 문자: 1byte에 저장
// 문자열: 문자 자릿수 + 1byte에 저장
//         마지막 1byte는 문자열의 끝을 의미
// 문자열 "A"
// 끝에 Null 문자 0 혹은 \0

// Null (널)문자
// ASCII code 0인 문자
// 문자열의 끝을 표시하는 문자
// -> 만약 이것이 없으면 문자열의 종료 위치를 찾을 수가 없다.
// 
// 문자열을 다루는 함수들은 Null 문자가 중요
// H E L L O \0 --> "HELLO"
// H E \0 L O \0 --> "HE"

// 문자열 (String)
// 문자를 요소로 갖는 1차원 배열
// 에를 들어
// 최대 길이 10인 문자열을 저장하기 위해서는 
// char str[11];
// 문자열의 맨 끝을 나타내기 위해서, '\0', null character가 사용

// 문자열 (String)의 출력
// Printf에서 '%s' 를 사용, s는 string을 의미
// Printf는 문자열에서 '\0' 문자를 만날 때까지 출력

#if 0
int main() {
	char str[10] = "hello";
	printf("%s", str);
	return 0;
}
#endif

// 문자열 변수와 초기화
// 문자열 변수는 문자들의 배열로 표현
// 
// char a[10]
// char str[4] = "abc";  a b c \0
// char str[4] = "abcd";  null 문자 자리없음 오류. a b c d
// char str[4] = "\0";  \0 \0 \0 \0
// char str[] = "abc";  자동으로 4-byte(문자 3개 + null)배열

// 문자열(String)의 변경: 한글자씩 변경
// 문자열은 문자배열이므로 index를 이용해서 글자 변경
#if 0
int main() {
	char s[] = "hello";
	printf("%s\n", s);
	s[0] = 'H';  // 주의! 문자배열 요소 변경은 문자
	s[2] = 'L';
	printf("%s\n", s);
	return 0;
}
#endif

// 문자열(String) 대입
// 문자열은 대입연산자(=) 할당 불가
// strcpy (string copy) 함수 이용: strcpy(dst, src)  dst <- src
#if 0
#include<string.h>  // <--- strcpy 함수 헤더
int main() {
	char s[] = "hello";
	char d[20];
	strcpy(d, s);  // d = s; <-- 사용불가
	printf("%s\n", d);
	return 0;
}
#endif

// 문자열 상수와 포인터
// 1) char *p = "HelloWorld";
// 2) char p[] = "HelloWorld";
// 위 두 문장의 차이는?
// 1) "HelloWorld" 라는 문자열이 저장된 곳의 주소를 포인터 변수 p에 저장
// 2) "HelloWorld" 라는 문자열을 배열 p의 공간에 저장
// * "HelloWorld" 라는 문자열 자체는 read-only, 변경 불가
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

// 문자열 (String)의 입력
// scanf에서 '%s' 를 사용, s는 string을 의미
// **주의, 문자열 이름 앞에 '&'를 사용하지 않는다.
#if 0
int main() {
	char s[11];
	scanf("%s", s);
	printf("%s", s);
	return 0;
}
#endif

// 문자열은 배열이므로, index를 이용하여 문자를 access.
// 최대 길이 10인 문자열을 입력 받아, 모든 'a'를 'b'로 바꾸어 출력해 보자.
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

// 최대 길이 10인 문자열을 입력 받아
// 실제 길이를 출력해 보자.
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

// 최대 길이 10인 문자열을 입력받아
// 대문자는 소문자로, 소문자는 대문자로 출력해 보자
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

// 최대길이 10인 알파벳 문자열을 입력 받아 암호문을 만들어 보자
// 암호규칙: 문자 + 10
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

// 최대길이 10인 문자열을 입력 받아
// 그 뒤에 'hello'를 덧붙인 새로운 문자열을 만들어 보자
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

// 문자열 입출력 함수: scanf의 한계와 gets_s
#if 0
int main() {
	char str[30];

	// <--- "hello world"입력하면 전체를 문자열로 인식
	gets(str);
	printf("%s\n", str);

	// scanf의 한계

	// <--- "hello world"입력시 "hello"까지만
	// 중간에 공백을 문자열 끝으로 인식
	scanf("%s", str);
	printf("%s\n", str);

	return 0;
}
#endif

// 문자열 입출력 함수
// 입력함수 gets()
// 출력함수 puts()
#if 0
int main() {
	char s[30];
	gets(s);
	puts(s);
	return 0;
}
#endif

// 문자 관련 함수
#if 0
#include<ctype.h>
int main() {

	char c = '\a';

	printf("%d\n", isalpha(c));  // 알파벳 문자인가?
	printf("%d\n", isupper(c));  // 대문자인가?
	printf("%d\n", islower(c));  // 소문자인가?
	printf("%d\n", isdigit(c));  // 숫자문자인가?
	printf("%d\n", isalnum(c));  // 알파벳 혹은 숫자문자인가?
	printf("%d\n", isxdigit(c)); // 16진수에 사용되는 문자인가?
	printf("%d\n", isspace(c));  // 공백, \n, \t
	printf("%d\n", ispunct(c));  // 구두점 문자인가?
	printf("%d\n", isprint(c));  // 출력가능한가?
	printf("%d\n", iscntrl(c));  // 제어문자?  \n
	printf("%d\n", isascii(c));  // ASCII 문자?

	return 0;
}
#endif

// 문자 변환 함수
#if 0
#include<ctype.h>
int main() {
	char c = 'a';
	printf("%c\n", toupper(c));  // 대문자로 변환

	char d = 'A';
	printf("%c\n", tolower(d));  // 소문자로 변환
	return 0;
}
#endif

// 최대 10글자 아이디를 입력받아
// 알파벳과 숫자로만 구성되어 있는지 확인
// gets로 입력
// 문자열 요소마다 isalpha와 isdigit 만족하는지 확인
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

// 문자열 함수: strcmp
// String compare 함수
// 인수로 두 개의 문자열을 받아서, 같으면 0을 반환
// 대소문자를 구분
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

// 문자열 함수: stricmp
// String compare ignore case 함수
// 인수로 두 개의 문자열을 받아서, 같으면 0을 반환
// 대소문자 구분 없음
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

// 문자열 함수: strcmp 실습
// 다음 함수 호출들의 반환 값이 가지는 의미를 설명하시오
// strcmp("ab", "ab"); -> 0
// strcmp("ab", "cd"); != 0, ab < cd 뒤에 문자열이 사전에서 더 뒤에 나오면 음수반환
// strcmp("cd", "ab"); != 0, cd > ab 앞에 문자열이 사전에서 더 뒤에 나오면 양수반환
#if 0
#include<string.h>
int main() {
	printf("%d", strcmp("ab", "cd"));
	return 0;
}
#endif

// 문자열 함수: strlen
// String length 함수
// 인수로 주어진 문자열의 길이 (null 제외)를 반환
#if 0
#include<string.h>
int main() {
	char s[30];
	gets(s);
	printf("%d", strlen(s));
	return 0;
}
#endif

// 문자열 함수: strcpy
// String copy 함수
// 문자열을 복사. strcpy(str1, str2)은 str2 -> str1에 복사
// str1은 str2보다 길거나 같아야
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

// 문자열 함수: strcat
// String concatenate 함수
// 문자열 연결. strcat(str1, st2)은 str1+str2
// 합친 결과를 담는 str1은
// str1+str2보다 길거나 같아야
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

// 문자열 배열
// char s[3][6] = {"aaa","bbb","ccc"};
//	 문자열 요소 변경 가능
// char *s[3] = {"aaa","bbb","ccc"};
//	 문자열 요소 변경 불가

// 문자열 배열을 응용
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

