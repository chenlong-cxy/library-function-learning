//#include<stdio.h>
//#include<string.h>
////int strcmp( const char *string1, const char *string2 );
////字符串比较不是比较长度
////比较的是字符串中对应位置的字符的ASCII值
//int main()
//{
//	char arr1[20] = "hello world!";
//	char arr2[20] = "hello csdn!";
//	int ret = strcmp(arr1, arr2);
//	return 0;
//}


#include<stdio.h>
#include<string.h>
#include<assert.h>
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 != NULL);//断言，str1为空指针时报错
	assert(str2 != NULL);//断言，str2为空指针时报错
	while (*str1 == *str2)
	{
		if (*str1 == '\0')//字符串全部比较完毕
			return 0;
		str1++;
		str2++;
	}
	return *str1 - *str2;
}
int main()
{
	char arr1[20] = "hello world!";
	char arr2[20] = "hello csdn!";
	int ret = my_strcmp(arr1, arr2);
	return 0;
}