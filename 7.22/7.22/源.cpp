#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 0;
	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, };
	for (i = 0; i <= 12; i++)
	{
		printf("hehe");
		arr[i] = 0;
	}

	return 0;
}//这里如何导致死循环的，main函数创建的i 和 arr，两个都是局部变量，局部变量放在栈上，又因为栈的默认的使用习惯是，
//先使用高地址，再使用低地址，arr就一定在i下面创建，又因为数组随着下标的增长地址是由低到高变化的，所以数组在使用的时候越界就有可能会访问到i
//在改变数组元素时，就有可能把i改变了，可能就会导致死循环
//自己创建strcpy

#include <assert.h>
//void my_strcpy(char* dest, const char*src)//3返回值char*
//{//assert（dest!=NULL）assert（src!=NULL）
//	while (*src != '\0')//优化while（*dest++=*src++）/0的arcsll 为0，后面为空语句
//	{//char*ret =dest 3
//		*dest = *src;//优化*dest++=*src++
//		src++;
//		dest++;
//	}
//	*dest = *src;//3return ret；
//}
//int main()
//{
//	char arr1[] = "#########";
//	char arr2[] = "bit";
//	my_strcpy(arr1,arr2);//当这里是NULL时，上面要判断一下
//	printf("%s\n", arr1);
//	//printf("%s\n", my_(arr1,arr2));
//	return 0;
//}
//const int num=10;
//const int*p=&num;
//*p=20;  //err const 放在指针变量的*左边时修饰的是*p，也就是说；不能通过p来改变*p（num）的值
//const 放在指针变量的*右边时修饰的是指针变量p本身，p不能被改变了
int my_strlen(const char*str)
{
	int count = 0;
	assert(str != NULL);
	while (*str != '\0')
	{
		count++;
		str++;
	}

	return count;
}


int main()
{
char arr[] = "abcdef";
int len =my_strlen(arr);
printf("%d\n", len);
return 0;

}