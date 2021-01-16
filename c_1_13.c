#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<math.h>

//将三个数按从大到小输出

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入三个数据，用空格隔开\n");
//	scanf("%d%d%d", &a,&b,&c);//推荐不加分隔符
//	//算法实现: a 中放最大值，b 次之，c 中放最小值
//	//只需比较三次 ab ac bc
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
//	printf("输入数据从大到小为:> %d > %d > %d", a, b, c);
//	return 0;
//}


//打印1-100之间所有3的倍数的数字

//while循环
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

//for循环
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


//给定两个数，求这两个数的最大公约数
//辗转相除法:俩数取模，模 如能被小的数整除，模就为最大公约数。
//算法实现: a b 取模,模值 c 为零，b赋给a，c赋给b
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输两个数据，用空格隔开\n");
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


//打印1000年到2000年之间的闰年
//int main()
//{
//	int year = 0;
//	int count = 0;//统计有多少个闰年
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是否为闰年
//		//1.能被4整除并且不能被100整除 是闰年
//		//2.能被400整除是闰年
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
//	printf("\n共有%d个闰年", count);
//	return 0;
//}

//简洁后
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



//打印100~200之间的素数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=100;i<=200;i++)
//	{
//		//判断i是否为素数 只能被1和本身整除
//		//素数判断规则之一 ：试除法 定义数字为i 产生2到i-1的数字去除i 若有模为零跳出
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


//产生2到开平方i的数字去除i 若有模为零跳出
//定义数字为i  i=a*b  a和b中至少有一个数字 <= 开平方i
// int main()
//{
//	int i = 0;
//	int count = 0;
//	/*for(i=100;i<=200;i++)*/
//	for (i = 101; i <= 200; i+=2)//跳过所有偶数
//	{
//		int j = 0;
//		for (j = 2; j <=sqrt(i); j++)//sqrt() 开平方 引用<math.h> 优化
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


//数一下1到100的所有整数中出现多少个数字9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//两种情况 个位与十位为九
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("count = %d\n", count);
//		return 0;
//}


//计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5.... + 1 / 99 - 1 / 100的值，打印出结果
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;//要有一方是浮点
//		//1/1+1/2+1/3+...
//		//1+0+0+...
//		flag = -flag;//循环正负做加减
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//求10个整数中最大值
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	//int max = 0;
//	//定义一个最大值，用数组内数据去比较
//	//赋值为零，数组内为负数就失效了
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


//在屏幕上输出9 * 9乘法口诀表
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



//编写代码在一个整形有序数组中查找具体的某个数。要求 : 找到了就打印数字所在的下标，找不到则输出:找不到。
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };//定义有序数组
//	int x = 0;//定义查找数据
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;
//	int right = sz-1;
//	//定义左右下标
//	printf("请输入需要查找的数据:> ");
//	scanf("%d", &x);
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//定义中间值
//		if (arr[mid] > x)//比较中间值与所需查找的数据
//		{
//			right = mid - 1;//中间值变右值
//		}
//		else if (arr[mid] < x)
//		{
//			left = mid + 1;//中间值变左值
//		}
//		else
//		{
//			printf("找到了，该数据的下标是 %d \n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}