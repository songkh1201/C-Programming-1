#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

// ������ Ȱ��

// ����
#if 0
int main() {

	int i = 10;

	int* pi = &i;

	// dereferencing. ��������
	*pi = 3000;  // ����

	inr k;
	k = *pi;  // �б�

	return 0;
}
#endif


// ������ Ȱ��

// ���� ������
//
// ���� ��Ī
//		pointer to pointer
//		double pointer
// int** q �ؼ�
//		q ���� �̸�
//		*q : q�� ������ ����
//		int* : �ּҿ� ������ ������ ��
#if 0
int main() {

	int i = 100;
	int* p = &i;
	int** q = &p; // ���������� q

	return 0;
}
#endif

// ���������� ����
//
// ���������͸� �̿���
// dereferencing
// 
// Dereferencing target
//		*q : p�� ��ġ
//		**q: i�� ���� ��ġ
#if 0
int main() {
	int i = 100;
	int* p = &i;
	int** q = &p;

	*p = 200;
	// ������ p�� �̿��� i ����
	printf("i=%d\n", i); // 200 ���

	**q = 300;
	// ���������� q�� �̿��� i ����
	printf("i=%d\n", i); // 300 ���

	return 0;
}
#endif

// ������ �迭
//
// �迭�� ��Ұ� pointer
// ������Ұ� pointer�̹Ƿ� dereferencing�� �����ϰ� ����
#if 0
int main() {

	int a = 10, b = 20, c = 30, d = 40, e = 50;
	int* ap[5] = { &a, &b, &c, &d, &e };

	for (int i = 0; i < 5; i++) {
		// �迭��� (pointer)�� ���� dereferencing
		printf("%d\n", *ap[i]);
	}
	return 0;
}
#endif

// 2���� ���ڿ� �迭
// 
// ª�� ���ڿ��� ���
// ����Ǵ� ������ �߻�
// 
// ����: ���ڿ� ������ ����
#if 0
int main() {

	char fname[6][11] = {
		"APPLE",
		"BANANA",
		"CHERRY",
		"POMEGRANTE",
		"PEPPER",
		"ONION"
	}

	return 0;
}
#endif

// ������ ������ �迭
//
// �迭��Һ��� ���� ����
// 
// ��Ī
//		ragged array : �ʴ��ʴ�
//		jagged array : �龦����
// 
// ����: ���ڿ� �����Ұ�
//		��� ���ڿ�
//		������ ���ڿ� ���� 
//		�Ҵ���� ���� �ƴ�
#if 0
int main() {
	char* gname[4] = {
	"apple",
	"blueberry",
	"orange",
	"melon"
	};

	for (int i = 0; i < 4; i++) {
		printf("%c\n", *gname[i]);
	}
	return 0;
}

#endif

// �Լ� ������
//
// �Լ��� ����Ű�� ������
// 
// int (*op) (int, int)
//		*op: op�� pointer
//		int (*op) (int, int)
//			int 2���� �μ��� �ް�,
//			int�� ��ȯ�ϴ� �Լ���
//			������
// 
// Pointer operation�� ����Ͽ�, �Լ� add, multipy ���� ���
#if 0
int add(int a, int b) {
	return a + b;
}

int multiply(int a, int b) {
	return a * b;
}

int main() {
	int (*operation)(int, int); // �Լ� ������ ����

	operation = add; // ���ϱ� �Լ��� ����Ű���� �����Ϳ� ����
	int result = operation(2, 3); // �Լ� �����ͷ� �Լ� ȣ��
	printf("Addition: %d\n", result);

	operation = multiply; // ���ϱ� �Լ��� ����Ű���� �����Ϳ� ����
	result = operation(2, 3); // �Լ� �����ͷ� �Լ� ȣ��
	printf("Multiplication: %d\n", result);

	return 0;
}
#endif

// �Լ� �μ��μ��� �Լ� ������
// 
// �Լ� countElements�� ����° �μ��� �Լ������͸� ���
// 
// countElements(..,..,isEven)
//		�迭��� �� ¦���� ���
// 
// countElements(..,..,isPositive)
//		�迭��� �� ����� ���
#if 0
int countElements(int arr[], int size, int (*condition)(int)) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (condition(arr[i])) {
			count++;
		}
	}
	return count;
}

int isEven(int num) {
	return num % 2 == 0;
}

int isPositive(int num) {
	return num > 0;
}

int main() {
	int numbers[] = { 1, 2, 3, 4, 5 };

	int size = sizeof(numbers) / sizeof(numbers[0]);

	int evenCount = countElements(numbers, size, isEven);
	printf("Number of even elements: %d\n", evenCount);

	int positiveCount = countElements(numbers, size, isPositive);
	printf("Number of positive elements: %d\n", positiveCount);

	return 0;
}
#endif

// ������ �迭�� �ּ�
//
// 2���� �迭
// arr[0], ... , a[3]�� �� ���� ���� �ּ�
// &arr[0][0]: 0���� �����ּ�
#if 0
int main() {
	int arr[][3] = { {1, 2, 3},
					{4, 5, 6},
					{7, 8, 9},
					{10, 11, 12} };
	int rows = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < rows; i++) {
		printf("Row %d: %p\n", i, arr[i]);
	}

	for (int i = 0; i < rows; i++) {
		printf("Row %d: %p\n", i, &arr[i][0]);
	}

	return 0;
}
#endif

// const ������
// 
// 2���� Ÿ���� ����
// const char *p
//		������ p�� �̿��ؼ�, p�� ����Ű�� ��ġ�� ����ִ� �� ��� �Ұ�
// char* const p
//		������ p�� ����Ǵ� �� ���� �Ұ�

// const char *������
// 
// ������ ptr�� const
// ptr�� dereferencing�� ���ؼ� ���� �����ų �� ����
#if 0
int main() {
	int num = 42;
	const int* ptr = &num; // const ������ ����

	printf("Value: %d\n", *ptr); // �����͸� ���� �� ���

	// *ptr = 10; // ����: const �����ͷ� ���� ������ �� ����
	return 0;
}
#endif

// char* const ������
//
// ������ ptr�� �����ϴ� �ּҸ� �ٲ� �� ����
// ������, ptr�� ����Ű�� ��ġ�� ���� ���� �ٲ� ���� �ִ�
#if 0
int main() {
	int num = 42;
	int num2 = 100;
	int* const ptr = &num; // const ������ ����

	printf("Before: %d\n", *ptr);

	*ptr = 10; // ptr�� ����Ű�� ��ġ�� ���� ���� �ٲ� ���� ������,

	ptr = &num2; // ����. ptr�� ����� �ּҸ� �ٲ� �� ����.
	printf("After: %d\n", *ptr);

	return 0;
}
#endif

// volatile Ű����
//
// Ű���� volatile�� ������ ������ �տ� ���
// ��� ��
//		volatile int a;
//		volatile int* b;
// Caching�� ���� ������� ����, �޸𸮿��� �ε�
//		�޸𸮿� CPU �ӵ� ���� �������� �߰��� cache ���
//		cache ��� ȸ��: �ӵ� ���� ���� �߻��ϳ�, ������ ����
//		�� �ʿ��� ��쿡�� ���

// void ���� ������
// 
// �����ϰ� �޸��� �ּҸ��� ������ ����
// void *p
// ����: ��� ���������� �����ͷ� ��� ����

// main �Լ��� �μ�
// 
// main �Լ��� �� ��° ����
//		2���� �Լ� �μ�
// int argc
//		argument count
//		�μ��� ����
// char *argv[]
//		argument variables
//		���ڿ� ������
//		argc ������ ����
// �������Ͽ� �μ� ����
//		VS������ project property
//		����࿡���� �������� �̸� �ڿ� ���� �Է�
//			��: a.out hello world
#if 0
int main(int argc, char* argv[]) {

	for (int i = 0; i < argc; i++) {
		printf("%d %s\n", i, argv[i]);
	}
	return 0;
}
#endif

// ���� �޸� �Ҵ�� ����

// ���� �޸� �Ҵ�
// 
// �޸� �Ҵ���
//		���� �޸�: ���α׷� ���� ���� ����
//		���� �޸�: ���൵�� �޸𸮸� �Ҵ�
// ���� �޸� �Ҵ��� ��
//		int a;
//		float b[100];
// �����޸� ����� ����
//		�Ҵ�� �޸� ũ�� ���� �Ұ�

// ���� �޸� ��� ����
//
// stdlib.h
//		standard library header
//		�Լ� malloc�� free
// �Լ� malloc
//		memory allocation
//		�μ�: �Ҵ� ũ�� (bytes)
//		��ȯ��: �޸� �ּ�
// �Լ� free
//		�Ҵ���� �޸� ��ȯ
//		�μ�: �޸� �ּ�
#if 0
#include<stdlib.h>

int main() {
	int size;
	int* arr;

	printf("Enter the size of the array:");
	scanf("%d", &size);

	// ���� �޸� �Ҵ�
	arr = (int*)malloc(size * sizeof(int));
	if (arr == NULL) {
		printf("Memory allocation failed.\n");
		return 1;
	}
	printf("Enter %d integers:\n", size);
	for (int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}
	printf("Entered integers are:");
	for (int i = 0; i < size; i++) {
		printf("%d", arr[i]);
	}

	// ���� �޸� ����
	free(arr);
	return 0;
}
#endif

// calloc
//
// malloc�� ����
// calloc
//		clear allocation
// ������
//		�Ҵ���� �޸𸮰� 0���� �ʱ�ȭ
// �μ� ����
//		ù ��°: ����
//		�� ��°: ���� ũ��
// calloc(5, sizeif(int))
//		5�� * 4 bytes = 20 bytes
#if 0
#include<stdlib.h>

int main() {
	int* arr;

	arr = (int*)calloc(5, sizeof(int));

	if (arr == NULL) {
		printf("Memory allocation failed\n");
		return 1;
	}
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}

	free(arr);

	return 0;
}
#endif

// realloc
//
// malloc���� �Ҵ�޾Ҵ� �޸� ũ�� ����
// ���ۿ���
//		���� �޸� ��ȯ
//		���ο� ũ�� �޸� ���Ҵ�
//		�� 2�ܰ踦 1���� ����
// �μ� ����
//		ù ��°: ���� �޸� ���� �ּ�
//		�� ��°: �ű� �Ҵ� ũ��
#if 0
#include<stdlib.h>

int main() {
	int* arr;
	int size;
	printf("Enter the initial size od the array: ");
	scanf("%d", &size);

	// �ʱ� ũ��� �޸� �Ҵ�
	arr = (int*)malloc(size * sizeof(int));

	int newSize;
	printf("\nEnter the new size of the array: ");
	scanf("%d", &newSize);

	// �޸� ũ�� ����
	arr = (int*)realloc(arr, newSize * sizeof(int));

	if (arr == NULL) {
		printf("Memory reallocation failed.\n");
		return 1;
	}

	free(arr);

	return 0;
}
#endif

// ����ü ���� ����
// 
// ����ü ������ ���� ���� �޸� �Ҵ�� ����
#if 0
#include<stdlib.h>

typedef struct {
	int id;
	char name[20];
	int age;
} Person;

int main() {
	Person* person;

	person = (Person*)malloc(sizeof(Person));

	if (person == NULL) {
		printf("Memory allocation failed.\n");
		return 1;
	}

	person->id = 100;

	printf("ID: %d\n", person->id);
	free(person);

	return 0;
}

#endif

// ���� �����
//
// ������ ����
//		�ؽ�Ʈ ���� (text file)
//			ASCII �ڵ尪���� ����
//			���� '0'�� ������ ��, '0'�� ASCII �ڵ尪�� 48�� ���Ͽ� ���
//			ASCII �ڵ��ȭ��� ǥ�ð� �����ϱ� ������, ������ ��� �� �� �ִ�.
//			�޸������� �ۼ��ϴ� .txt Ȯ���� ����
//		���� ���� (binary file)
//			���� �״�� ����
//			ASCII �ڵ� ���� �ƴϱ� ������ �� �� ���� ���·� ���
//			����ϴ� ��κ��� ���ϵ��� binary
//				avi, mp3, mp4, hwp, pdf ��

// ���� ����� �ܰ�
//
// 1. ������ ����. open
// 2. ���ϳ��� �аų�(read) ����(write).
// 3. ������ �ݴ´�. close

// �ؽ�Ʈ ���� ���� ����
//
// FILE*
//		������������
//		C��� ����
// �Լ� fopen
//		�Լ� �̸��� ���
//		"w": �����
//		"a": �̾��
//		��ȯ��: ����������
// �Լ� fprintf
//		���� ���� ���
//		printf�� ���� ��� ����
// �Լ� fclose
//		���峻�� ����
#if 0
int main() {
	FILE* file;
	char data[100] = "hello";

	file = fopen("example.txt", "w");

	if (file == NULL) {
		printf("File creation failed.\n");
		return 1;
	}

	fprintf(file, "%s", data);

	fclose(file);

	return 0;
}
#endif

// �ؽ�Ʈ ���� �б� ����
//
// �Լ� fopen
//		�Լ� �̸��� ���
//		"r": �б��
//		��ȯ��: ����������
// �Լ� fscanf
//		���Ϸκ��� �б�
//		scanf�� ���� ��� ����
// �Լ� fclose
//		���峻�� ����
#if 0
int main() {
	FILE* file;
	char data[100];

	file = fopen("example.txt", "r");

	fscanf(file, "%s", data);

	printf("%s\n", data);

	fclose(file);
	return 0;
}
#endif

// ���� ���� ���� ����
//
// ����ü ������ ���� ���Ͽ� ���
// �Լ� fopen
//		"wb": ���� ,��������
// �Լ� fwrite
//		fprintf: �ؽ�Ʈ���Ͽ�
#if 0
#include<string.h>
typedef struct {
	int id;
	char name[20];
	int age;
} Person;

int main() {
	FILE* file;
	Person person;
	person.id = 100;
	person.age = 20;
	strcpy(person.name, "John");

	file = fopen("example.bin", "wb");

	if (file == NULL) {
		printf("File creation failed.\n");
		return 1;
	}

	fwrite(&person, sizeof(Person), 1, file);

	fclose(file);
	return 0;
}
#endif

// ���� ���� �б� ����
//
// ���Ϸκ��� ����ü ������ ����
// �Լ� fopen
//		"rb": �б�, ��������
// �Լ� fread
//		&person: ���� ���� ������ ������ �ּ�
//		sizeof(Person): ���� ũ��
//		1: ����
//		file: ���� ������
#if 0
#include<string.h>
typedef struct {
	int id;
	char name[20];
	int age;
} Person;

int main() {
	FILE* file;
	Person person;

	file = fopen("example.bin", "rb");

	fread(&person, sizeof(Person), 1, file);

	printf("%d %s %d\n", person.id, person.name, person.age);

	fclose(file);
	return 0;
}
#endif

// ���� �������� �̵�
//
// �Լ� fseek�� �̿��� ���� ������ ��ġ ����
//		���ϴ� ��ġ�� �б�� ���Ⱑ ����
// ��ġ����
//		SEEK_SET: ���� ó��
//		SEEK_CUR: ����
//		SEEK_END: ���� ��
#if 0
#include<string.h>
typedef struct {
	int id;
	char name[20];
	int age;
} Person;

int main() {
	FILE* file;
	Person person;
	person.id = 100;
	person.age = 20;
	strcpy(person.name, "John");

	file = fopen("example.bin", "wb");

	fwrite(&person, sizeof(Person), 1, file);

	person.id = 200;
	person.age = 30;
	strcpy(person.name, "Tom");
	fwrite(&person, sizeof(Person), 1, file);

	person.id = 300;
	person.age = 25;
	strcpy(person.name, "Amy");
	fwrite(&person, sizeof(Person), 1, file);

	fclose(file);

	file = fopen("example.bin", "rb");
	// ���� ó������ ����ü 1�� skip
	fseek(file, sizeof(Person), SEEK_SET);
	fread(&person, sizeof(Person), 1, file);
	// �� ��° ����̸��� Tom ���
	printf("%s\n", person.name);

	return 0;
}
#endif

// ���� ������ ���� �Լ�
//
// �Լ� rewind
//		�Լ� �����͸� �� ������ �̵�
// �Լ� ftell
//		�Լ� �������� ���� ��ġ�� ������ ��ȯ
// �Լ� feof
//		���� �����Ͱ� ���� �������� üũ
// �������Ǵ� example.txt ������ ��ġ
//		VS: ������Ʈ ���� ����
#if 0
int main() {
	FILE* file;
	char character;
	long position;
	int eofStatus;

	// example.txt ���Ͽ� "hello"�� ������ �� ����
	file = fopen("example.txt", "r");

	if (file == NULL) {
		printf("File open failed.\n");
		return 1;
	}

	// ������ ó������ �̵�
	rewind(file);

	// ���Ͽ��� ���� �ϳ� �б�
	character = fgetc(file);
	printf("Character: %c\n", character);

	// ���� ���� ������ ��ġ ��������
	position = ftell(file);
	printf("Current Position: %ld\n", position);

	// ������ ���� ���� ���� Ȯ��
	eofStatus = feof(file);
	printf("End of File: %s\n", eofStatus ? "True" : "False");

	fclose(file);
	return 0;
}
#endif

// Recap: ���� ����� �Լ� ����
//
// �ؽ�Ʈ ����
//		���� ����: fgetc, fputc
//		���ڿ� ����: fgets, fputs
//		����ȭ�� ���ڿ� ����: fscanf, fprintf
// ��������
//		fread
//		fwrite
#if 0

int main() {
	int a = 10;
	char c = 'h';
	void* p = &c;
	printf("%c", *(char*)p);

	return 0;
}
#endif

