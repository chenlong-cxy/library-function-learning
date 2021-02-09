//#include<stdio.h>
//#include<string.h>
////char *strstr( const char *string, const char *strCharSet );
//int main()
//{
//	char arr1[] = "abcdefbcd";
//	char arr2[] = "bcd";
//	char* ret = strstr(arr1, arr2);//��arr1�в���arr2�ַ�����һ�γ��ֵ�λ��
//	if (ret != NULL)
//		printf("%s\n", ret);
//	else
//		printf("�Ҳ���\n");
//	return 0;
//}

//ģ��ʵ��
#include<stdio.h>
#include<string.h>
#include<assert.h>
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1&&str2);//����
//	const char* cp = str1;//��¼��ʼƥ��ʱ����ʼλ��
//	if (*str2 == '\0')
//		return (char*)str1;
//	while (*cp)
//	{
//		const char* p1 = cp;
//		const char* p2 = str2;
//		while ((*p1) && (*p2) && (*p1 == *p2))
//		{
//			p1++;
//			p2++;
//		}
//		if (*p2 == '\0')
//			return (char*)cp;
//		cp++;
//	}
//	return NULL;
//}
char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 != NULL);//���ԣ���str1Ϊ��ָ�뱨��
	assert(str2 != NULL);//���ԣ���str2Ϊ��ָ�뱨��
	const char* cp = str1;//��¼��ʼƥ��ʱ����ʼλ��
	if (*str2 == '\0')//Ҫ���ҵ��ַ���Ϊ���ַ���
		return (char*)str1;
	while (*cp)
	{
		const char* p1 = cp;
		const char* p2 = str2;
		while ((*p1!='\0') && (*p2!='\0') && (*p1 == *p2))
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')//Ŀ���ַ����ѱ�������
			return (char*)cp;
		cp++;
	}
	return NULL;//�Ҳ���Ŀ���ַ���
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "";
	char* ret = my_strstr(arr1, arr2);
	if (ret != NULL)
		printf("%s\n", ret);
	else
		printf("�Ҳ���\n");
	return 0;
}
