#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//char *strtok( char *strToken, const char *strDelimit );
int main()
{
	char arr1[] = "2957055542@qq.com";//���ָ��ַ���
	char arr2[] = "@.";//�ָ������ַ�����
	char arr3[20] = { 0 };
	strcpy(arr3, arr1);//�����ݿ���һ��ʹ�ã���ֹԭ���ݱ��޸�
	char* token = strtok(arr3, arr2);//��һ�δ����贫����ָ��ַ����׵�ַ
	while (token != NULL)//˵����δ�ָ���
	{
		printf("%s\n", token);
		token = strtok(NULL, arr2);//��ͬһ���ַ������зָ�ڶ��μ��Ժ�ĵ�һ������ΪNULL
	}
	return 0;
}