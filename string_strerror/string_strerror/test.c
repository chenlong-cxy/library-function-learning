#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#include<errno.h>
//char *strerror( int errnum );
//�Ѵ�����ת��Ϊ��Ӧ�Ĵ�����Ϣ�����ش�����Ϣ��Ӧ�ַ�������ʼ��ַ
//int main()
//{
//	printf("%s\n", strerror(1));
//	return 0;
//}
//�⺯����ʹ�õ�ʱ������������󣬶����ж�Ӧ�Ĵ�����
//��Щ������ᱻ�����һ��ȫ�ֱ����У�errno
//#include<errno.h>


#include<stdio.h>
#include<string.h>
#include<errno.h>
//void perror( const char *string );
//FILE *fopen( const char *filename, const char *mode );
int main()
{
	FILE* pf = fopen("test.txt", "r");//��test.txt�ļ��Ķ�
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		perror("fopen");
	}
	return 0;
}