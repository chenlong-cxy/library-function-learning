#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
////char *strcat( char *strDestination, const char *strSource );
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "csdn!";
//	strcat(arr1, arr2);
//	return 0;
//}


#include<stdio.h>
#include<string.h>
#include<assert.h>
char* my_strcat(char* dest, const char* src)
{
	assert(dest != NULL);//���ԣ�destΪ��ָ��ʱ����
	assert(src != NULL);//���ԣ�srcΪ��ָ��ʱ����
	char* ret = dest;
	//�ҵ�Ŀ��ռ��'\0'
	while (*dest)
	{
		dest++;
	}
	//׷��
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[20] = "hello ";
	char arr2[] = "csdn!";
	my_strcat(arr1, arr2);
	return 0;
}