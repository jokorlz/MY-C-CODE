#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

//int main()
//{
//	int i = 1;
//		while (i <= 10)
//		{
//			printf("%d ", i);
//			i++;
//		}
//	return 0;
//}
//
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i);
//		break;//while中的break：终止循环
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i);
//		continue;//while中的continue：终止本次循环，跳转到判断
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	//ctrl + z -> getchar接收到就是EOF 
//	//EOF - end of file文件结束标志 -> 值为-1
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	//int ch = getchar();
//	putchar (ch) ;
//	printf("%c\n",ch);
//	return 0;
//}


//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s",password);//输入密码，并存放在passsword数组中
//	//缓冲区还剩余一个'\n'
//	//读取走'\n’
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认(Y/N):>");
//	ret = getchar();//Y/N
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//	putchar(ch);
//	}
//	return 0;
//}


//for(exp1//变量初始化;exp2//判断式部分;exp3//调整部分
//1.不可在for循环体内修改循环变量, 防止for循环失去控制。
//2.建议for语句的循环控制变量的取值采用”前闭后开区间”写法。

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		//if (5 == i)//可以嵌套使用
//			//continue;//终止后面的代码
//			//break;//终止循环
//		printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	for (;;)//1. for循环的初始化、调整、判断都可以省略 但 
//			//for循环的判断部分如果被省略, 那判断条件就是 : 恒为正
//			//2.如果不是非常熟练.建议不要随便省略
//	{
//		printf("haha\n");    
//	}
//	return 0;
//}

//int main()
//{
//	int i, k;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}


//do while 循环
//int main() 
//{
//	int i= 1;
//	do
//	{
//		//if (5 == i)
//			//break;//终止循环
//			//continue;//跳出这次循环
//		printf("%d",i); 
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}


//计算n的阶乘
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i= 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret=%d\n", ret);
//	return 0;
//}

//计算1！+2！+3！+4！+...+10!
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret * n;//优化后的代码少一个循环
//		/*ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}*/  //n的阶乘
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}


/*在一个有序数组中查找具体的某个数字n。编写int binsearch(int x, int v0, int n); 功能:在v[0]
<= v[1] <= v[2] <= ... = v[n - 1]的数组中查找x.*/
//遍历法
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9, 10 };
//	int k = 17;
//	//写一个代码，在arr数组(有序的)中找到17
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是: %d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到\n");
//	return 0;
//}

//拆半查找/二分查找算法
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是: %d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}


//编写代码, 演示多个字符从两端移动, 向中间汇聚。
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!";
//	char arr2[] = "###################";
//	int left = 0;
//	//int right = sizeof (arr1)/sizeof (arr1[0])-1;//error
//	//int right = sizeof (arr1)/sizeof (arr1[0])-2;
//	int right = strlen(arr1) -1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n",arr2);
//		Sleep(1000);//休息一秒 引用<windows.h>
//		system("cls");//执行系统命令的一个函数 cls 清空屏幕 引用<stdlib.h>
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


/*编写代码, 实现模拟用户登录情景, 并且只能登录三次。(只允许输入三次密码, 如果密码正确则提示登录成功,
如果三次均输入错误, 则退出程序。*/
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		//if (password == "123456")
//		// == 不能用来比较俩个字符串是否相等，应该用一个库函数-strcmp
//		//strcmp 两个字符串相等返回0 第一个>第二个 返回>0的数字 第一个<第二个 返回<0的数字
//		if(strcmp(password,"qweasdzxc123456")==0)
//		{
//			printf("登录成功,欢迎回来~\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if(3==i)
//		printf("您已输入密码错误三次，程序将退出\n");
//	return 0;
//}











