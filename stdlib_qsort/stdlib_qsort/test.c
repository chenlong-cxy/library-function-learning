
//void qsort( void *base, size_t num, size_t width, int (__cdecl *compare )(const void *elem1, const void *elem2 ) );

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void print(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//}
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void test1()
//{
//	int arr[] = { 4, 5, 6, 8, 9, 1, 2, 0, 3, 7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//int(*p)(const void*, const void*) = cmp_int;
//	qsort(arr, sz,sizeof(arr[0]), cmp_int);
//	print(arr, sz);
//}
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
//}
//void test2()
//{
//	struct Stu arr[] = { { "zhangsan", 16 }, { "lisi", 23 }, { "wangwu", 43 } };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_name);
//}
//int cmp_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//void test3()
//{
//	struct Stu arr[] = { { "zhangsan", 16 }, { "lisi", 23 }, { "wangwu", 20 } };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_age);
//}
//int main()
//{
//	test1();
//	test2();
//	test3();
//	return 0;
//}


//模仿qsort的功能实现一个通用的冒泡排序
//void qsort( void *base, size_t num, size_t width, int (__cdecl *compare )(const void *elem1, const void *elem2 ) );

#include<stdio.h>
#include<string.h>
void _swap(char* buf1, char* buf2, size_t width)
{
	while (width)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		width--;
		buf1++;
		buf2++;
	}
}
void Bubble_qsort(void* base, size_t num, size_t width, int(*cmp)(const void* e1, const void* e2))
{
	size_t i = 0;
	size_t j = 0;
	for (i = 0; i < num - 1; i++)
	{
		for (j = 0; j < num - 1 - i; j++)
		{
			if (cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
			{
				_swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
			}
		}
	}
}
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void test1()
{
	int arr[] = { 4, 5, 6, 8, 9, 1, 2, 0, 3, 7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//int(*p)(const void*, const void*) = cmp_int;
	Bubble_qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print(arr, sz);
}
struct Stu
{
	char name[20];
	int age;
};
int cmp_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}
void test2()
{
	struct Stu arr[] = { { "zhangsan", 16 }, { "lisi", 23 }, { "wangwu", 43 } };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Bubble_qsort(arr, sz, sizeof(arr[0]), cmp_name);
}
int cmp_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
void test3()
{
	struct Stu arr[] = { { "zhangsan", 16 }, { "lisi", 23 }, { "wangwu", 20 } };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Bubble_qsort(arr, sz, sizeof(arr[0]), cmp_age);
}
int main()
{
	test1();
	test2();
	test3();
	return 0;
}