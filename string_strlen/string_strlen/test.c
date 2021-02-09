//#include<stdio.h>
//#include<string.h>
////size_t strlen( const char *string );
//int main()
//{
//	char arr[] = "abcdef";
//	size_t ret = strlen(arr);
//	return 0;
//}

//计算器的方式
//#include<stdio.h>
//#include<string.h>
//size_t my_strlen1(const char* str)
//{
//	size_t count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	size_t ret = my_strlen1(arr);
//	return 0;
//}

//递归的方式
//#include<stdio.h>
//#include<string.h>
//size_t my_strlen2(const char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen2(str + 1);
//}
//int main()
//{
//	char arr[] = "abcdef";
//	size_t ret = my_strlen2(arr);
//	return 0;
//}

//指针-指针的方式
#include<stdio.h>
#include<string.h>
size_t my_strlen3(const char* str)
{
	const char* p = str;
	while (*str != '\0')
		str++;
	return str - p;
}
int main()
{
	char arr[] = "abcdef";
	size_t ret = my_strlen3(arr);
	return 0;
}