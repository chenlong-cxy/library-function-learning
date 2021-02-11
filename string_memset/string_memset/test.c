#include<stdio.h>
#include<string.h>
//void *memset( void *dest, int c, size_t count );
int main()
{
	char arr[] = "hello world!";
	memset(arr, '*', 5);
	return 0;
}//一个字节一个字节地设置