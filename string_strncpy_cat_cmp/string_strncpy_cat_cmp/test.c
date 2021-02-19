#define _CRT_SECURE_NO_WARNINGS 1
//长度不受限制的字符串操作函数
//strcpy
//strcat
//strcmp

//#include<stdio.h>
//#include<string.h>
////char *strncpy( char *Dest, const char *Source, size_t count );
//int main()
//{
//	char arr1[20] = "########";
//	char arr2[] = "abcd";
//	strncpy(arr1, arr2, 3);
//	strncpy(arr1, arr2, 6);
//	return 0;
//}

//char* strncpy(char* dest,const char* source,size_t count)
//{
//	char* start = dest;
//	while (count && (*dest++ = *source++))
//		count--;
//	if (count)                        
//	while (--count)
//		*dest++ = '\0';
//	return start;
//}


//#include<stdio.h>
//#include<string.h>
////char *strncat( char *strDest, const char *strSource, size_t count );
//int main()
//{
//	char arr1[10] = "abc\0#####";
//	char arr2[] = "def";
//	strncat(arr1, arr2, 2);
//	strncat(arr1, arr2, 5);
//	return 0;
//}

//char* strncat(char * front,const char * back,size_t count)
//{
//	char *start = front;
//	while (*front++)
//	{
//		;
//	}
//	front--;
//	while (count--)
//	if (!(*front++ = *back++))
//		return start;
//	*front = '\0';
//	return start;
//}


#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "abcde";
	char arr2[] = "abcdf";
	int ret1 = strncmp(arr1, arr2, 4);
	int ret2 = strncmp(arr1, arr2, 5);
	return 0;
}

