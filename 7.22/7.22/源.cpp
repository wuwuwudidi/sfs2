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
}//������ε�����ѭ���ģ�main����������i �� arr���������Ǿֲ��������ֲ���������ջ�ϣ�����Ϊջ��Ĭ�ϵ�ʹ��ϰ���ǣ�
//��ʹ�øߵ�ַ����ʹ�õ͵�ַ��arr��һ����i���洴��������Ϊ���������±��������ַ���ɵ͵��߱仯�ģ�����������ʹ�õ�ʱ��Խ����п��ܻ���ʵ�i
//�ڸı�����Ԫ��ʱ�����п��ܰ�i�ı��ˣ����ܾͻᵼ����ѭ��
//�Լ�����strcpy

#include <assert.h>
//void my_strcpy(char* dest, const char*src)//3����ֵchar*
//{//assert��dest!=NULL��assert��src!=NULL��
//	while (*src != '\0')//�Ż�while��*dest++=*src++��/0��arcsll Ϊ0������Ϊ�����
//	{//char*ret =dest 3
//		*dest = *src;//�Ż�*dest++=*src++
//		src++;
//		dest++;
//	}
//	*dest = *src;//3return ret��
//}
//int main()
//{
//	char arr1[] = "#########";
//	char arr2[] = "bit";
//	my_strcpy(arr1,arr2);//��������NULLʱ������Ҫ�ж�һ��
//	printf("%s\n", arr1);
//	//printf("%s\n", my_(arr1,arr2));
//	return 0;
//}
//const int num=10;
//const int*p=&num;
//*p=20;  //err const ����ָ�������*���ʱ���ε���*p��Ҳ����˵������ͨ��p���ı�*p��num����ֵ
//const ����ָ�������*�ұ�ʱ���ε���ָ�����p����p���ܱ��ı���
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