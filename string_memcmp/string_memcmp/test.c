#include<stdio.h>
#include<string.h>
//int memcmp( const void *buf1, const void *buf2, size_t count );
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 1, 2, 4, 5, 6 };
	int ret1 = memcmp(arr1, arr2, 8);
	int ret2 = memcmp(arr1, arr2, 9);
	return 0;
}//Ð¡¶Ë