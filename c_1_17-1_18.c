//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>

//函数递归
//递归
//程序调用自身的编程技巧称为递归(recursion)。 递归做为一种算法在程序设计语言中广泛应用。
//一个过程或函数在其定义或说明中有直接或间接调用自身的一种方法, 它通常把一个大型复
//杂的问题层层转化为一个与原问题相似的规模较小的问题来求解, 递归策略只需少量的程序就可
//描述出解题过程所需要的多次重复计算, 大大地减少了程序的代码量。递归的主要思考方式在
//于 : 把大事化小。
//递归的两个必要条件
//●存在限制条件, 当满足这个限制条件的时候, 递归便不再继续。
//●每次递归调用之后越来越接近这个限制条件。

//最简单的递归
//int main()
//{
//	printf("hehe\n");
//	main();//main()函数调用自身
//	return 0;
//}//Stack overflow 栈溢出
//内存划分为几个区域 
//栈区 - 局部变量 函数形参
//堆区 - 动态开辟的内存 如malloc calloc
//静态区 - 全局变量 static修饰的变量

//接受一个整型值(无符号), 用递归的方法按照顺序打印它的每一位。例如:输入: 1234, 输出1 2 3 4 
//void print(int n)
//{
//	if (n > 9)//递归限制条件
//	{
//		printf(n / 10);//每次递归越来越接近限制条件
//	}
//	printf("%d ",n % 10);
//}
//int main()
//{
//	unsigned int num = 1234;
//	print(num);
//	return 0;
//}


//编写函数求字符串的长度。
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr)://求字符串长度
//	//printf("%d\n"，len):
//	//模拟实现strlen()
//	int len = my_strlen(arr); // arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
//	printf("len = %d\n",len) ;
//	return 0;
//}

//编写函数求字符串的长度。不允许创建临时变量。（递归）
//递归的方法 - 把大事化小
//my_strlen("bit");
//1+my_strlen(" it' ) ;
//1+1+my_strlen("t");
//1+1+1+my_strlen ("\0" )
//1+1+1+0
//3

//int my_strlen(char* str)
//{
//	if (*str != '\0')//递归限制条件
//		return 1 + my_strlen(str + 1);//每次递归越来越接近限制条件
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("len = %d\n",len) ;
//	return 0;
//}


//迭代
//求n的阶乘
//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int Fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n - 1);
//}
//int main()
//{
////求n的阶乘  //Fac(n) :n <= 1, 1;  n > 1, n * Fac(n - 1)
//	int n = 0;
//	int ret = 0;
//	scanf("%d",& n);
//	ret = Fac1(n);//循环的方式
//	ret = Fac2(n);//递归的方式
//	printf(" %d\n",ret);
//	return 0;
//}

//裴波那契数列
//1 1 2 3 5 8 13 21 34 55 ...
//Fib(n):n <= 2，1;  n > 2, Fib(n - 1) + Fib(n - 2)

////递归方式
//int count = 0;
//int Fib1(int n)
//{
//	if (3 == n)//测试第三个裴波那契数的计算次数
//	{
//		count++;
//	}
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
////迭代循环方式
//int Fib2(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		b = c;
//		a = b;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", & n);
//	//TDD -测试驱动开发（先写出来再开发）
//	//ret = Fib1(n);
//	ret = Fib2(n);
//	printf("ret = %d\n",ret);
//	printf("count = %d", count);
//	return 0;
//}

//两个限制条件具备，依然错误
//注意递归写作很容易出问题
//void test(int n)
//{
//	if (n < 10000)
//	{
//		test(n + 1);
//	}
//}
//int main()
//{
//	test(1);
//	return 0;
//}

//汉诺塔问题  青蛙跳台阶问题（出自《剑指offer》）




//一维数组、二维数组的 创建和初始化 使用 在内存中的存储
//数组作为函数参数
//数组的应用实例1 : 三子棋
//数组的应用实例2 : 扫雷游戏


//int main()
//{
////创建 ->  []中要给一个常量才可以,不能使用变量。
////初始化 -> 在创建数组的同时给数组的内容一些合理初始值(初始化)。

//int arr[10] = { 1,2,3 };//不完全初始化，剩下的元素默认初始化为0
//char arr2[5]={ 'a','b'};
//char arr3[5]= "ab";     //ok 结果一样但是方式不一样
//char arr4[5]={ 'a',98}; //ok 存储的是ASCII码值 也是‘b’
//char arr5[]="abcdef";   //7个字符
//printf("%d\n",sizeof(arr5));//变量、数组、类型的大小，单位字节 - 操作符
//printf("%d\n",strlen(arr5));//字符串长度 - '\0'前的字符 - 库函数 - 引用头文件
//char arr6[] = "abc";
//char arr7[] = { 'a', 'b', 'c' };
//printf("%d\n", sizeof(arr6));//4字节
//printf("%d\n", sizeof(arr7));//3字节
//printf("%d\n", strlen(arr6));//3
//printf("%d\n", strlen(arr7));//随机值 15
//return 0;
//}

//一维数组的使用
//[] ，下标引用操作符。它其实就数组访问的操作符。
//1.数组是使用下标来访问的，下标是从0开始。
//2.数组的大小可以通过计算得到。

//int main()
//{
//	char arr[] = "abcdef";//[a][b][e][d][e][f][\0]
//	//printf("%c\n",arr[3]);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < len; i++)
//	{
//		printf("%c ",arr[i]);
//	}
//return 0;
//}


//仔细观察输出的结果,我们知道,随着数组下标的增长,元素的地址,也在有规律的递增。由此可以得
//出结论:数组在内存中是连续存放的。
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n",i, & arr[i]);
//	}
//	return 0;
//}

//二维数组 - 几行几列的数组 - 行可以省略，列不能省略
//创建
//int main()
//{
//	//int arr[3][4];//创建三行有四个元素的数组
//	//int arr[3][4] = { {1,2,3},{4,5} };//初始化第0行三个元素，第1行两个元素
//	char ch[5][6];
//	return 0;
//}

//访问也是下标方式
//int main()
//{
//	int arr[3][4] = { {1,2,3}, {4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//	printf("\n");
//	}
//			return 0;
//}


////二维数组的存储
//int main()
//{
//	int arr[3][4];
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n",i,j,&arr[i][j]);
//		}
//	}
//	return 0;
//	}
////通过结果我们可以分析到, 其实二维数组在内存中也是连续存储的。
