#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#include<errno.h>
//char *strerror( int errnum );
//把错误码转换为对应的错误信息，返回错误信息对应字符串的起始地址
//int main()
//{
//	printf("%s\n", strerror(1));
//	return 0;
//}
//库函数在使用的时候，如果发生错误，都会有对应的错误码
//这些错误码会被存放在一个全局变量中：errno
//#include<errno.h>


#include<stdio.h>
#include<string.h>
#include<errno.h>
//void perror( const char *string );
//FILE *fopen( const char *filename, const char *mode );
int main()
{
	FILE* pf = fopen("test.txt", "r");//打开test.txt文件阅读
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		perror("fopen");
	}
	return 0;
}