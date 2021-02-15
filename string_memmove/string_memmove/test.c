//#include<stdio.h>
//#include<string.h>
////void *memmove( void *dest, const void *src, size_t count );
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	memmove(arr + 2, arr, 16);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	memcpy(arr + 2, arr, 16);
//	return 0;
//}


#include<stdio.h>
#include<string.h>
#include<assert.h>
void* my_memmove(void* dest, const void* src, size_t count)
{
	assert(dest != NULL);//断言，当dest为空指针时报错
	assert(src != NULL);//断言，当src为空指针时报错
	void* ret = dest;
	if (dest < src)//从前往后拷贝
	{
		while (count--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}
	else if (dest>src)//从后往前拷贝
	{
		while (count--)
		{
			*((char*)dest + count) = *((char*)src + count);
		}
	}
	return ret;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	my_memmove(arr + 2, arr, 16);
	return 0;
}