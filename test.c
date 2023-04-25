#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//struct Stu
//{
//	char name[20];
//	short age;
//	char tale[12];
//	char sex[5]
//}s1,s2,s3;//全局变量


//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tale[12];
//	char sex[5];
//}Stu;//全局变量

//int main()
//{
//	struct Stu s1 = { "张三",20,"156887455546","男" };//局部变量
//	Stu s2;
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//
//int main()
//{
//	char arr[] = "bit\n";
//	struct T t = { "hehe",{"10",'c',"hello world",3.14},arr };
//	printf("%s\n", t.ch);//hehe
//	printf("%s\n", t.s.arr);//hello world
//	printf("%lf\n", t.s.d);//3.14
//	printf("%s\n", t.pc);//bit
//	return 0;
//}

typedef struct Stu
{
	char name[20];
	short age;
	char tale[12];
	char sex[5];
}Stu;


void Printl(Stu tmp)
{
	printf("name: %s\n", tmp.name);
	printf("age:  %d\n", tmp.age);
	printf("tale: %s\n", tmp.tale);
	printf("sex:  %s\n", tmp.sex);
}


void Print2(Stu* ps)
{
	printf("name: %s\n", ps->name);
	printf("age:  %d\n", ps->age);
	printf("tale: %s\n", ps->tale);
	printf("sex:  %s\n", ps->sex);
}
int main()
{
	Stu s = { "李四",20,"1556668829","男" };
	Printl(s);
	Print2(&s);
	return 0;
}