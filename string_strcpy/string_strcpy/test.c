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
	char* ret = dest;//����Ŀ��ռ����ʼλ��
	assert(dest != NULL);//���ԣ�destΪ��ָ��ʱ����
	assert(src != NULL);//���ԣ�srcΪ��ָ��ʱ����
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