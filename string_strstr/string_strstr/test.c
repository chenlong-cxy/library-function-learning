//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "bcd";
//	char* ret = strstr(arr1, arr2);//在arr1中查找arr2字符串第一次出现的位置
//	if (ret != NULL)
//		printf("%s\n", ret);
//	else
//		printf("找不到\n");
//	return 0;
//}

//模拟实现
#include<stdio.h>
#include<string.h>
#include<assert.h>
char* my_strstr(const char* str1, const char* str2)
{
	assert(str1&&str2);//断言
	const char* cp = str1;//记录开始匹配时的起始位置
	if (*str2 == '\0')
		return (char*)str1;
	while (*cp)
	{
		const char* p1 = cp;
		const char* p2 = str2;
		while ((*p1) && (*p2) && (*p1 == *p2))
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')
			return (char*)cp;
		cp++;
	}
	return NULL;
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "bcd";
	char* ret = my_strstr(arr1, arr2);
	if (ret != NULL)
		printf("%s\n", ret);
	else
		printf("找不到\n");
	return 0;
}
