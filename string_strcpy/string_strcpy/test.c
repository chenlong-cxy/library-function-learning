#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
////char *strcpy( char *strDestination, const char *strSource );
//int main()
//{
//	char arr1[10] = "abc";
//	char arr2[] = "def";
//	strcpy(arr1, arr2);
//	return 0;
//}


#include<stdio.h>
#include<string.h>
#include<assert.h>
char* my_strcpy(char* dest, char* src)
{
	char* ret = dest;//保存目标空间的起始位置
	assert(dest != NULL);//断言，dest为空指针时报错
	assert(src != NULL);//断言，src为空指针时报错
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[10] = "abc";
	char arr2[] = "def";
	my_strcpy(arr1, arr2);
	return 0;
}