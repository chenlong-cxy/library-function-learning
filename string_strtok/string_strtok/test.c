#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//char *strtok( char *strToken, const char *strDelimit );
int main()
{
	char arr1[] = "2957055542@qq.com";//待分割字符串
	char arr2[] = "@.";//分隔符的字符集合
	char arr3[20] = { 0 };
	strcpy(arr3, arr1);//将数据拷贝一份使用，防止原数据被修改
	char* token = strtok(arr3, arr2);//第一次传参需传入待分割字符串首地址
	while (token != NULL)//说明还未分割完
	{
		printf("%s\n", token);
		token = strtok(NULL, arr2);//对同一个字符串进行分割，第二次及以后的第一个参数为NULL
	}
	return 0;
}