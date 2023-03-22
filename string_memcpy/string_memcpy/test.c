//#include<stdio.h>
//#include<string.h>
////void *memcpy( void *dest, const void *src, size_t count );
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6 };
//	int arr2[10] = { 0 };
//	memcpy(arr2, arr1, 16);
//	return 0;
//}
//memcpy函数在实现的时候，不知道未来会被用来拷贝什么样的数据


//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest != NULL);//断言，当dest为空指针时报错
//	assert(src != NULL);//断言，当src为空指针时报错
//	void* ret = dest;//保存dest，便于之后返回
//	while (num--)//循环num次，每次拷贝1个字节
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;//((char*)dest)++;
//		++(char*)src;//((char*)src)++;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6 };
//	int arr2[10] = { 0 };
//	my_memcpy(arr2, arr1, 16);
//	return 0;
//}



#include<stdio.h>
#include<assert.h>
#include<string.h>
void* my_memcpy(void* dest, const void* src, size_t num)
{
	assert(dest != NULL);//断言，当dest为空指针时报错
	assert(src != NULL);//断言，当src为空指针时报错
	void* ret = dest;//保存dest，便于之后返回
	while (num--)//循环num次，每次拷贝1个字节
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;//((char*)dest)++;
		++(char*)src;//((char*)src)++;
	}
	return ret;
}
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6 };
	int arr2[10] = { 0 };
	my_memcpy(arr2, arr1, 16);
	for (int i = 0; i < sizeof(arr2) / sizeof(int); i++) {
		printf("%d ", *(arr2 + i));
	}
	printf("\n");
	return 0;
}
