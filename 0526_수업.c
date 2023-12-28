#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


// ���������� ����
// ����ü, ����ü, ������, typedef

// ����ü structure �ʿ� ����
// c���� �����ϴ� �������� �����
//		int, float, char �Ѱ�
// �����ڷ����� �ʿ�
//		�ڷ��� �ȿ� int, float, char ���� �� ����
//		��: �л�����, �̸�(char[]) ����(int)
//		    ����(float), ��� ���� ���� �ڷ��� �ʿ�
// ����ü�� �̿��Ͽ� ���� �ڷ����� ���� �� �־�

// ����ü ���� ����
// 
// struct my_type {
//		int age;
//		char name;
// };
// 
// keyword struct�� ����
//
// my_type: ������ ������� ���� �� �ִ� �̸�
//
// {  }; ����ü ������ ���۰� �� ��踦 ǥ��
//		����ü ������ ;
//
// Struct Members
//		int age
//		char name
//		������� ������ semicolon


// ����ü ���� ����
// 
// ���ǵ� ����ü�� ���ο� Ÿ��
// �Ϲ� ���� �����ϴ� ��İ� ����
#if 0
struct my_type {
	int age;
	char name;
};
int main() {

	// ����ü ���� a
	struct my_type a;

	// ����ü �迭���� b
	struct my_type b[3];

	return 0;
}
#endif

// ����ü ���� �ʱ�ȭ
//
// ���� ����� ���ÿ� �Ҵ�
// ����� �ش��ϴ� ������ ������� ���
//		������ {...} �ȿ� ǥ��
//		��� ���������� ��ġ�ϵ���
#if 0
struct my_type {
	int age;
	char name;
};
int main() {

	// ����ü ���� a
	struct my_type a = { 10, 'a' };
	return 0;
}
#endif

// ����ü �迭���� �ʱ�ȭ
//
// �迭 ��Һ��� �ʱ�ȭ
//		�� ��Ҵ� ����ü ���� �ʱ�ȭ �ϴ� ���
//		��� ���� ������ ���߾�
#if 0
struct my_type {
	int age;
	char name;
};
int main() {

	// ����ü �迭���� b
	struct my_type b[3] = {
		{20, 'a'},
		{30, 'b'},
		{40, 'c'}
	};
	return 0;
}
#endif

// ����ü��� ����
//
// ����ü ������ dot(.)�� �̿�
//		����.���
//		��� �̸��� ����
//		read/write ��� ����
// ���� ���� �Ŀ��� �ʱ�ȭ�� ���� ��� �Ұ�
#if 0
struct my_type {
	int age;
	char name;
};
int main() {

	// ����ü ���� a
	struct my_type a;

	// ����� �� assignment
	a.age = 20;
	a.name = 'k';

	// ���� �Ϸ��Ŀ��� �ʱ�ȭ�� ���� ��� ��� �Ұ�
	// a = {20, 'k'};

	// ��� �� read
	printf("%d\n", a.age);
	printf("%c\n", a.name);

	return 0;
}
#endif

// ����ü ������ ���� (ssignment)
// 
// ����ü ���� a �ʱ�ȭ
// ���� a�� �ʱⰪ�� ���� b�� �״�� ����
#if 0
struct my_info {
	int age;
	char name;
};
int main() {

	struct my_info a = { 20, 'A' };
	struct my_info b;

	b = a;

	printf("After assignment: %d %c \n", b.age, b.name);

	return 0;
}
#endif

// ����ü ������ ��
// 
// ����ü �������� ���� ���� �����ٴ� ���� ������� ���� ����
// 
// ������ �� �Ұ�
//		a == b : �Ұ���
// 
// ������� ���ؾ� ��
#if 0
#include<string.h>
struct Student {
	char name;
	int age;
	float height;
};
int main() {

	// ����ü ����
	struct Student a = { "john", 20, 175.5 };
	struct Student b = { "john", 20, 175.5 };

	// if (a == b) ==> ����ü������ ������ �񱳰� �ȵ�!!!

	//
	// strcmp : string compare
	//
	if ((a.age == b.age) && (a.height == b.height) && strcmp(a.name, b.name) == 0) {
		printf("�� ����ü �ֵ���!!!\n");
	}
	else {
		printf("�� ����ü �޶�!!!\n");
	}

	return 0;
}
#endif

// ����ü�� ������
//
// 2���� ���谡 ����
// 
// 1. ����ü�� ����Ű�� ������
//		������ ����
//		������ ������ ������ �ּҿ� ����ü�� ��ġ
// 
// 2. �����͸� ����� ������ ����ü
//		����� ���������� ������

// ����ü�� ����Ű�� ������
#if 0
#include<string.h>
struct Person {
	char name[20];
	int age;
};
int main() {
	// ����ü ���� ����
	struct Person person1;
	// ����ü ������ ���� ���� �� ����ü ������ �ּ� �Ҵ�
	struct Person* ptr = &person1;

	// ����ü ����� �� �Ҵ� �ϴ� 2���� ���
	//
	// 1. ����ü ���� ���
	strcpy(person1.name, "Jone");
	person1.age = 25;
	// 2. ����ü�� ���� ������ ���� ���
	strcpy(ptr->name, "John");
	ptr->age = 25;

	// ����ü ��� ����ϴ� 2���� ���
	//
	// 1. ����ü ����
	printf("Name: %s\n", person1.name);
	printf("Age: %d\n", person1.age);
	// 2. ����ü�� ���� ������ ���� ���
	printf("Name: %s\n", ptr->name);
	printf("Age: %d\n", ptr->age);
	return 0;
}
#endif

// Recap: ����ü�� ����Ű�� ������
//
// ����ü ��� �����ϴ� 2���� ���
//		dot	  : .
//		arrow : ->
// 
// dot�� ����ϴ� ���
//		����ü ������ ����� ��
//		��. a.name
// 
// Arrow�� ����ϴ� ���
//		����ü�� ���� ������ ������ ����� ��
//		��. ptr->name

// ������ dereferening�� ����ü ��� ����
// 
// Dereferencing�� �����ʹ� ������ ����;
// dot�� �̿��Ͽ� �������
// 
// Dereferencing�� ��ȣ�� ����Ͽ� �켱���� ����
// 
// *ptr.name
//		*(ptr.name)�� �ǹ�
//		(*ptr).name���� �ٸ�
#if 0
struct Person {
	char name[20];
	int age;
};
int main() {
	// ����ü ���� ���� �� �ʱ�ȭ
	struct Person person1 = { "John", 25 };

	// ����ü ������ ���� �� ����ü ������ �ּ� �Ҵ�
	struct Person* ptr = &person1;

	// �����͸� �̿��� ��� ���� (-> ������ ���)
	printf("Name: %s\n", ptr->name);
	printf("Age: %d\n", ptr->age);

	// ������ dereferencing�� �̿��� ��� ����
	printf("Name: %s\n", (*ptr).name);
	printf("Age: %d\n", (*ptr).age);

	return 0;
}
#endif

// �����͸� ����� ������ ����ü
// ����ü ���ο� ������ �ּ� ������ ���� ������ Ȯ��
#if 0
struct Course {
	char name[20];
	int credits;
};
struct Student {
	char name[20];
	int age;
	struct Course* course; // struct Course�� ���� ������ ���
};
int main() {
	// ����ü ���� ����
	struct Course course1 = { "Math", 3 };
	struct Student student1 = { "John", 20, &course1 };
	// ����ü ����� �����Ͽ� ���
	printf("Name: %s\n", student1.name);
	printf("Age: %d\n", student1.age);
	printf("Course: %s\n", student1.course->name);
	printf("Credits: %d\n", student1.course->credits);

	return 0;
}
#endif

// ����μ��� ����ü�� ����ü ������
// 
// ����ü �ȿ� �ٸ� ����ü�� ����� ���Ե� ���
//		���Ե� ����ü�� ������ �����ϴ� ����ü ������ ����
// 
// ����ü �ȿ� �ٸ� ����ü�� ���� ������ ������ ���Ե� ���
//		�����ϴ� ����ü �������� ������ ������ ���� ������ ����


// ����ü�� �ٸ� ����ü�� ������ ���
// Outer structure �ȿ� Inner Structure�� ����
// ? Inner Structure�� ���� �ʿ�


// ����ü�� �����͸� ����� ������ ���
//
// Outer structure�� Inner structur���� �����͸���� ����
// 
// �����ʹ� �ٸ� ���� �����ϴ�Inner structure�� �ּҸ� ����
// 
// Outer structur�� �������� ������ ���������� ���� ������ �Ҵ�


// ����ü ���� ����ü ����
//
// ����ü ���� ����ü�� ���ӵ�dot�� ���ؼ� ����μ� ����
#if 0
// Inner Structure ����
struct InnerStruct {
	int innerMember;
};
// Outer Structure ����
struct OuterStruct {
	int outerMember;
	struct InnerStruct innerStruct; // Inner Structure�� ����� ����
};
int main() {
	// Outer Structure ���� ����
	struct OuterStruct myStruct;
	// ����� �� �Ҵ�
	myStruct.outerMember = 10;
	myStruct.innerStruct.innerMember = 20;
	// �� ���
	printf("Outer Member: %d\n", myStruct.outerMember);
	printf("Inner Member: %d\n", myStruct.innerStruct.innerMember);

	return 0;
}
#endif

// ����ü ���� ����ü ������ ����
// ����ü ������ ����� �̿��� ���, 
// �� �ӿ� ���Ե� ����� �����Ϸ��� arrow�� �̿�
#if 0
// Inner Structure ����
struct InnerStruct {
	int innerMember;
};
// Outer Structure ����
struct OuterStruct {
	int outerMember;
	struct InnerStruct* innerStructPtr;
};
int main() {
	// Inner Structure ���� ���� �� �� ����
	struct InnerStruct inner;
	inner.innerMember = 20;
	// Outer Structure ���� ���� �� ��� ����
	struct OuterStruct myStruct;
	myStruct.outerMember = 10;
	myStruct.innerStructPtr = &inner;
	// �� ���
	printf("Outer Member: %d\n", myStruct.outerMember);
	printf("Inner Member: %d\n", myStruct.innerStructPtr->innerMember);
	return 0;
}
#endif

// ����ü�� �Լ�
//
// ����ü�� �Լ��� �μ��� �ѱ�� ���
//		call-by-value�� ����
//		���纻���� ����
// 
// ����ü�� �Լ��� ��ȯ���� �Ǵ� ���
//		���纻�� ������� ����
// 
// ����ü �μ��� call-by-reference
//		����ü ������ ���� �̿� �ʿ�


// �Լ� �μ��μ��� ����ü : call-by-value
//
// modifyStruct �Լ��� call-by-value ��Ģ
// 
// modifyStruct �Լ� ȣ�� ���� ���� ���� ���Ծ���
#if 0
// ����ü ����
struct MyStruct {
	int member1;
	int member2;
};
// �Լ� ����
void modifyStruct(struct MyStruct myStruct) {
	myStruct.member1 = 20; // ����ü�� ��� ���� ����
	myStruct.member2 = 30;
}
int main() {
	struct MyStruct myStruct;
	myStruct.member1 = 10;
	myStruct.member2 = 15;

	printf("Before modification:\n");
	printf("Member 1: %d\n", myStruct.member1);
	printf("Member 2: %d\n", myStruct.member2);

	modifyStruct(myStruct);

	printf("After modification:\n");
	printf("Member 1: %d\n", myStruct.member1);
	printf("Member 2: %d\n", myStruct.member2);
	return 0;
}
#endif

// �Լ� �μ��μ��� ����ü : call-by-reference
//
// modifyStruct �Լ��� ����ü ������ �μ� ���
// 
// �Լ� ȣ�� ���� �ķ� ���ؼ� �� ����
// 
// modifyStruct�Լ�ȣ���� ��, 
// myStruct��address operator &
// ����Ͽ� �ּ� ����
#if 0
// ����ü ����
struct MyStruct {
	int member1;
	int member2;
};
// �Լ� ����
void modifyStruct(struct MyStruct* myStruct) {
	myStruct->member1 = 20; // ����ü�� ��� ���� ����
	myStruct->member2 = 30;
}
int main() {
	struct MyStruct myStruct;
	myStruct.member1 = 10;
	myStruct.member2 = 15;

	printf("Before modification:\n");
	printf("Member 1: %d\n", myStruct.member1);
	printf("Member 2: %d\n", myStruct.member2);

	modifyStruct(&myStruct); // ����ü�� �ּҸ� ����

	printf("After modification:\n");
	printf("Member 1: %d\n", myStruct.member1);
	printf("Member 2: %d\n", myStruct.member2);
	return 0;
}
#endif

// �Լ� ��ȯ������ ����ü
// createStruct �Լ��� ����ü�� �����Ͽ� ��ȯ
#if 0
// ����ü ����
struct MyStruct {
	int member1;
	int member2;
};
// �Լ� ����
struct MyStruct createStruct(int value1, int value2) {
	struct MyStruct myStruct;
	myStruct.member1 = value1;
	myStruct.member2 = value2;
	return myStruct;
}
int main() {
	struct MyStruct resultStruct;
	resultStruct = createStruct(10, 20);
	printf("Member 1: %d\n", resultStruct.member1);
	printf("Member 2: %d\n", resultStruct.member2);
	return 0;
}
#endif


// ����ü (union) ����� �ʿ伺
//
// ���� ���������� ����� �ϳ��� �޸� ������ ����
//
// ����ü: ������� ���� ������ ����
// 
// �ʿ伺
//		�޸� ����
//		������ �������� �ɷ�
#if 0
// ����ü ����
union Data {
	int i;
	float f;
	char str[20];
};
int main() {
	union Data data; // ����ü ���� ����

	data.i = 10; // ������ ����� �� �Ҵ�
	printf("Data.i: %d\n", data.i);

	data.f = 3.14; // �Ǽ��� ����� �� �Ҵ�
	printf("Data.f: %f\n", data.f);

	strcpy(data.str, "Hello"); // ���ڿ� ����� �� �Ҵ�
	printf("Data.str: %s\n", data.str);
	return 0;
}
#endif

// ����ü�� ����ü ����
//
// ���� ����ü
//		������� �������� ����
//		����ü ���� = ������� ���� ��
// 
// ������ ����ü
//		������� ���� ����
//		����ü ���� = max(���i ����), ���i �� M,
//		    M�� ����ü ������� ����


// ����ü ������ �ʱ�ȭ
//
// ����ü�� ù ��° ����� ���������� ������ �ʱ�ȭ
//
// ���� ������, �ʱⰪ�� unsigned int ��
#if 0
union info {
	unsigned int sid;
	char name[10];
};
int main() {

	union info a[3] = {
		{200011},
		{20210002},
		{20210003},
	}

	return 0;
}
#endif

// enum (������) ����� ���
//
// Enumeration ����
//		����
// 
// ���������� ������ ������ ���������� ����
// 
// �������� ����������, ���� �̸� �ο�
//		0 : RED
//		1 : GREEN
//		2 : BLUE
// 
// �������� 0���� �ο��� �Ϲ���
#if 0
enum colors { RED, GREEN, BLUE };
enum days { SUN, MON, TUE, WED, THU, FRI, SAT };
int main() {

	enum colors c;

	c = RED;

	printf("c has value: %d", c);

	return 0;
}
#endif

// 0�� �ƴ� �������� �����ϴ� enum�� ����
//
// enum Days ���� ù ��° ����� MON=1 
// 
// TUE, WED ���� ���� �������� ���ڰ� �Ҵ�
// 
// �������� �ϰ����� ���ؼ� 0���� ���� ��õ
#if 0
enum Days {
	MON = 1,
	TUE,
	WED,
	THU,
	FRI,
	SAT,
	SUN
};
int main() {
	enum Days today = TUE;
	printf("Today is day number: %d\n", today);
	return 0;
}
#endif

// enum�� �������� ��
//
// enum�� �������� ������ ó��
// �񱳿����� ��� ����
// ��������� �Ұ���
#if 0
enum colors { RED, GREEN, BLUE };
int main() {

	enum colors c;

	c = RED;

	printf("c has value: %d\n", c);

	printf("RED, GREEN, BLUE: %d %d %d \n", RED, GREEN, BLUE);

	if (c < BLUE) {
		printf("red is smaller than blue");
	}
	else {
		printf("no!!!");
	}
	return 0;
}
#endif

// Ű���� typedef
//
// ���������� ���ο� �̸����� �����ϴ� Ű����
// 
// ���������� ��Ī �ο�
// 
// 1�� �������� �̸��� ���ؼ� �������� �������� �̸� ��� ����
//
// �Ʒ� ��: int�� ��Ī my_int32�� �ο�
#if 0
// typedef 'original name'  'new name'
#include<string.h>
typedef int my_int32;
my_int32 main() {

	return 0;
}
#endif

// Ű���� typedef�� ����ü�� ������ ����
//
// �������� ����ü ����� ���ÿ� ��ġ �ο�
// 
// �Ʒ� enum ��
//		COLORS ��Ī
//		enum Ű���� ���ʿ�
// 
// �Ʒ� struct ��
//		STUDENT ��Ī
//		struct Ű���� ���ʿ�
// 
// typedef ��Ī�� ��� ALL-Capital letters ����
#if 0
typedef enum { RED, GREEN, BLUE } COLORS;
typedef enum { SUN, MON, SAT } DAYS;

// 1
//struct student {
//	char names[10];
//	unsigned int sid;
//	float grade;
//};
//typedef struct student STUDENT;

typedef struct {
	char names[10];
	unsigned int sid;
	float grade;
} STUDENT;
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

