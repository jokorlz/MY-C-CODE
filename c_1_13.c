#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<math.h>

//�����������Ӵ�С���

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("�������������ݣ��ÿո����\n");
//	scanf("%d%d%d", &a,&b,&c);//�Ƽ����ӷָ���
//	//�㷨ʵ��: a �з����ֵ��b ��֮��c �з���Сֵ
//	//ֻ��Ƚ����� ab ac bc
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("�������ݴӴ�СΪ:> %d > %d > %d", a, b, c);
//	return 0;
//}


//��ӡ1-100֮������3�ı���������

//whileѭ��
//int main()
//{
//	int i = 1;
//	while (i<=100)
//	{
//		i++;
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

//forѭ��
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ",i);
//	}
//	return 0;
//}


//���������������������������Լ��
//շת�����:����ȡģ��ģ ���ܱ�С����������ģ��Ϊ���Լ����
//�㷨ʵ��: a b ȡģ,ģֵ c Ϊ�㣬b����a��c����b
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("�����������ݣ��ÿո����\n");
//	scanf("%d%d", &a, &b);
//	while (c=a % b)
//	{
//		//c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("%d", b);
//	return 0;
//}


//��ӡ1000�굽2000��֮�������
//int main()
//{
//	int year = 0;
//	int count = 0;//ͳ���ж��ٸ�����
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�Ƿ�Ϊ����
//		//1.�ܱ�4�������Ҳ��ܱ�100���� ������
//		//2.�ܱ�400����������
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\n����%d������", count);
//	return 0;
//}

//����
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for(year=1000;year<=2000;year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}



//��ӡ100~200֮�������
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=100;i<=200;i++)
//	{
//		//�ж�i�Ƿ�Ϊ���� ֻ�ܱ�1�ͱ�������
//		//�����жϹ���֮һ ���Գ��� ��������Ϊi ����2��i-1������ȥ��i ����ģΪ������
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//			if (j== i)
//			{
//				count++;
//				printf("%d ", i);
//			}
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}


//����2����ƽ��i������ȥ��i ����ģΪ������
//��������Ϊi  i=a*b  a��b��������һ������ <= ��ƽ��i
// int main()
//{
//	int i = 0;
//	int count = 0;
//	/*for(i=100;i<=200;i++)*/
//	for (i = 101; i <= 200; i+=2)//��������ż��
//	{
//		int j = 0;
//		for (j = 2; j <=sqrt(i); j++)//sqrt() ��ƽ�� ����<math.h> �Ż�
//		/*for(j = 2; j <=i/2; j++)*/
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//			if (j > sqrt(i))
//			/*if (j > i/2)*/
//			{
//				count++;
//				printf("%d ", i);
//			}
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}


//��һ��1��100�����������г��ֶ��ٸ�����9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//������� ��λ��ʮλΪ��
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("count = %d\n", count);
//		return 0;
//}


//����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5.... + 1 / 99 - 1 / 100��ֵ����ӡ�����
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;//Ҫ��һ���Ǹ���
//		//1/1+1/2+1/3+...
//		//1+0+0+...
//		flag = -flag;//ѭ���������Ӽ�
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//��10�����������ֵ
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	//int max = 0;
//	//����һ�����ֵ��������������ȥ�Ƚ�
//	//��ֵΪ�㣬������Ϊ������ʧЧ��
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d", max);
//	return 0;
//}


//����Ļ�����9 * 9�˷��ھ���
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j=1;j < i;j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//��д������һ���������������в��Ҿ����ĳ������Ҫ�� : �ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ��������:�Ҳ�����
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };//������������
//	int x = 0;//�����������
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;
//	int right = sz-1;
//	//���������±�
//	printf("��������Ҫ���ҵ�����:> ");
//	scanf("%d", &x);
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//�����м�ֵ
//		if (arr[mid] > x)//�Ƚ��м�ֵ��������ҵ�����
//		{
//			right = mid - 1;//�м�ֵ����ֵ
//		}
//		else if (arr[mid] < x)
//		{
//			left = mid + 1;//�м�ֵ����ֵ
//		}
//		else
//		{
//			printf("�ҵ��ˣ������ݵ��±��� %d \n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}