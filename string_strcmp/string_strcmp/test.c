//#include<stdio.h>
//#include<string.h>
////int strcmp( const char *string1, const char *string2 );
////�ַ����Ƚϲ��ǱȽϳ���
////�Ƚϵ����ַ����ж�Ӧλ�õ��ַ���ASCIIֵ
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
	assert(str1 != NULL);//���ԣ�str1Ϊ��ָ��ʱ����
	assert(str2 != NULL);//���ԣ�str2Ϊ��ָ��ʱ����
	while (*str1 == *str2)
	{
		if (*str1 == '\0')//�ַ���ȫ���Ƚ����
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