#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//��ѧ�����ǳ����������ĸ���������˽�C�����еĺ����� ά���ٿ��жԺ����Ķ��� : �ӳ���
//���ڼ������ѧ�У��ӳ���(Ӣ�� : Subroutine, procedure, function, routine, method,
//	subprogram, callable unit), ��һ�����ͳ����е�ĳ���ִ��룬��һ������������
//	�ɡ����������ĳ���ض�����, �����������������, �߱���ԵĶ����ԡ�
//�� һ���������������з���ֵ, �ṩ�Թ��̵ķ�װ��ϸ�ڵ����ء���Щ����ͨ��������Ϊ����⡣

//	C�����к����ķ��� :
//1.�⺯��
//���ܽ᣺
//��I0����
//���ַ�����������
//���ַ���������
//���ڴ��������
//��ʱ�� / ���ں���
//����ѧ����
//�������⺯��

//2.�Զ��庯��
//����⺯���ܸ����е�����, �ǻ�Ҫ����Ա��ʲô ?
//������Ҫ�����Զ��庯����
//�Զ��庯���Ϳ⺯��һ��, �к�����, ����ֵ���ͺͺ������������ǲ�һ��������Щ���������Լ�����ơ�
//�������Աһ���ܴ�ķ��ӿռ䡣

//��������� :
//ret_type fun_ name(para1, *)
//{
//	statement;//�����
//}
//ret_ type �������ͣ�����趨��
//fun_ name ������
//para1 ��������



//strcpy - string copy -�ַ�������
//strlen - string length -�ַ�������
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "########";
//	strcpy(arr2,arr1);
//	//������ bit\0########
//	printf("%s\n",arr2);
//	return 0;
//}


//int main()
//{
//	char arr[] = "hello world";
//	memset(arr,'*',5);
//	printf("%s\n",arr);
//	//***** world
//	return 0;
//}



//void Swap1(int x, int y)//��ʽ���� - ��ʽ�ϵĲ���������ʱ�ٷ����ڴ�
//{                       //��ʵ�δ����β�ʱ���β���ʵ��ʵ�ε�һ����ʱ����
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}//�� a b ��ֵ���������� a b û�䣬�������á�
//
//void Swap2(int*px, int*py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}//��ָ�봫�����������ڴ��ַ�ҵ� a b ����ֵ�������ɹ���
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int tmp = 0;
//	printf("a=%d b=%d\n", a, b);
//
//	//����Swap1���� - ���ڴ�ֵ����
//	Swap1(a,b);//ʵ�ʲ��� - ȷ����ֵ 
//	/*tmp = a;
//	a = b ;
//	b = tmp:*/
//	printf("a=%d b=%d\n", a, b);
//
//	//����Swap2���� - ���ڴ�ַ����
//	Swap2(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}


//�ú�����ӡ100-200֮�������
//int is_prime(int n)
//{
//	int m = 0;
//	for (m = 2; m < n; m++)//�Ż� - for (m = 2; m<=sqrt(n); m++)
//	{
//		if (n % m == 0)
//			return 0;
//	}
//	//if(m==n) ����ʡ�ԣ���Ϊ��������ֻ�����������
//		return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}



//�ú�����ӡ1000-2000�������
//int is_leap_year(year)
//{
//	if ((year % 4 == 0 && year % 100 != 0)||(year % 400 == 0))//&& ��  || �� 
//		return 1;
//	else
//		return 0;
//}//����Ҫ��࣬�ɸ��ã�����Ҫ���߰���Ĺ���
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (1 == is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}



//�ú���ʵ������������ֲ���
//int binary_search(int arr[], int i,int sz)//�˴��� int arr[] ������ָ��
//{
//	int left = 0;
//	int right = sz-1;
//	while (left <= right)//�����������С�ں͵���
//	{
//		int mid = (left + right) / 2;//������ѭ����ͷ����ΪҪ������м�ֵ
//		if (arr[mid] > i)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < i)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	//if (left > right) Ҳ��ʡ��
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	printf("��������Ҫ���ҵ�����:> ");
//	scanf("%d", &i);
//	//int ret=binary_search(arr,i);//����ȥ��ֻ����Ԫ�صĵ�ַ
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, i, sz);
//	if (-1 == ret)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��� %d ", ret);
//	}
//	return 0;
//}



//�ú���ʵ�ֵ���һ�κ���������ֵ��1
//void Add(int* p)
//{
//	//*p++;//++���ȼ��ߣ����*p������
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num = %d\n", num);//1
//	Add(&num);
//	printf("num = %d\n", num);//2
//	Add(&num);
//	printf("num = %d\n", num);//3
//	return 0;
//}


//������Ƕ�׵��ú���ʽ����
//�����ͺ���֮������л�����ϵġ�

//Ƕ�׵��� - �����е��ú���

//��ʽ���� - ��һ�������ķ���ֵ��Ϊ��һ�������Ĳ���
//int main()
//{
//	int len = 0;
//
//	len = strlen("abc");//��һ��
//	printf("%d\n",len);
//
//	printf("%d\n",strlen("abc"));//�ڶ���
//	return 0;
//}

//int main()
//{
//	printf("%d",printf("%d",printf("%d",43)));//printf()��������ֵ������ӡ���ַ��ĸ���
//	return 0;
//}


//���������붨�� - ���ڷ�ģ�� 

//��������:
//1.���߱�������һ��������ʲô, ������ʲô, ����������ʲô�����Ǿ����ǲ��Ǵ���, �޹�
//��Ҫ��
//2.����������һ������ں�����ʹ��֮ǰ��Ҫ������������ʹ�á�
//3.����������һ��Ҫ����ͷ�ļ��еġ�

//�������� :
//�����Ķ�����ָ�����ľ���ʵ��, ���������Ĺ���ʵ�֡�


//int Add(int x, int y);//��������
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);//��������
//	printf("%d\n",sum);
//	return 0;
//}
//
//int Add(int x, int y)//��������
//{
//	int z = x + y;
//	return z;
//}