//#include<stdio.h>
//#include<string.h>
////void *memcpy( void *dest, const void *src, size_t count );
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6 };
//	int arr2[10] = { 0 };
//	memcpy(arr2, arr1, 16);
//	return 0;
//}
//memcpy������ʵ�ֵ�ʱ�򣬲�֪��δ���ᱻ��������ʲô��������


//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest != NULL);//���ԣ���destΪ��ָ��ʱ����
//	assert(src != NULL);//���ԣ���srcΪ��ָ��ʱ����
//	void* ret = dest;//����dest������֮�󷵻�
//	while (num--)//ѭ��num�Σ�ÿ�ο���1���ֽ�
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;//((char*)dest)++;
//		++(char*)src;//((char*)src)++;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6 };
//	int arr2[10] = { 0 };
//	my_memcpy(arr2, arr1, 16);
//	return 0;
//}



#include<stdio.h>
#include<string.h>
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7 };
	memcpy(arr1 + 1, arr1, 8);
}