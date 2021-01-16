#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//数学中我们常见到函数的概念。但是你了解C语言中的函数吗 维基百科中对函数的定义 : 子程序
//●在计算机科学中，子程序(英语 : Subroutine, procedure, function, routine, method,
//	subprogram, callable unit), 是一个大型程序中的某部分代码，由一个或多个语句块组
//	成。它负责完成某项特定任务, 而且相较于其他代码, 具备相对的独立性。
//● 一般会有输入参数并有返回值, 提供对过程的封装和细节的隐藏。这些代码通常被集成为软件库。

//	C语言中函数的分类 :
//1.库函数
//简单总结：
//●I0函数
//●字符串操作函数
//●字符操作函数
//●内存操作函数
//●时间 / 日期函数
//●数学函数
//●其他库函数

//2.自定义函数
//如果库函数能干所有的事情, 那还要程序员干什么 ?
//更加重要的是自定义函数。
//自定义函数和库函数一样, 有函数名, 返回值类型和函数参数。但是不一样的是这些都是我们自己来设计。
//这给程序员一个很大的发挥空间。

//函数的组成 :
//ret_type fun_ name(para1, *)
//{
//	statement;//语句项
//}
//ret_ type 返回类型（最后设定）
//fun_ name 函数名
//para1 函数参数



//strcpy - string copy -字符串拷贝
//strlen - string length -字符串长度
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "########";
//	strcpy(arr2,arr1);
//	//拷贝成 bit\0########
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



//void Swap1(int x, int y)//形式参数 - 形式上的参数，调用时再分配内存
//{                       //当实参传给形参时，形参其实是实参的一份临时拷贝
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}//把 a b 的值传过来，但 a b 没变，函数无用。
//
//void Swap2(int*px, int*py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}//用指针传过来，根据内存地址找到 a b 并赋值，函数成功。
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int tmp = 0;
//	printf("a=%d b=%d\n", a, b);
//
//	//调用Swap1函数 - 属于传值调用
//	Swap1(a,b);//实际参数 - 确定的值 
//	/*tmp = a;
//	a = b ;
//	b = tmp:*/
//	printf("a=%d b=%d\n", a, b);
//
//	//调用Swap2函数 - 属于传址调用
//	Swap2(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}


//用函数打印100-200之间的素数
//int is_prime(int n)
//{
//	int m = 0;
//	for (m = 2; m < n; m++)//优化 - for (m = 2; m<=sqrt(n); m++)
//	{
//		if (n % m == 0)
//			return 0;
//	}
//	//if(m==n) 可以省略，因为来到这后就只有这种情况了
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



//用函数打印1000-2000年的闰年
//int is_leap_year(year)
//{
//	if ((year % 4 == 0 && year % 100 != 0)||(year % 400 == 0))//&& 并  || 或 
//		return 1;
//	else
//		return 0;
//}//函数要简洁，可复用，不需要乱七八糟的功能
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



//用函数实现有序数组二分查找
//int binary_search(int arr[], int i,int sz)//此处的 int arr[] 本质是指针
//{
//	int left = 0;
//	int right = sz-1;
//	while (left <= right)//条件必须包括小于和等于
//	{
//		int mid = (left + right) / 2;//必须在循环里头，因为要多次求中间值
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
//	//if (left > right) 也可省略
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	printf("请输入需要查找的数字:> ");
//	scanf("%d", &i);
//	//int ret=binary_search(arr,i);//传过去的只是首元素的地址
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, i, sz);
//	if (-1 == ret)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是 %d ", ret);
//	}
//	return 0;
//}



//用函数实现调用一次函数，返回值加1
//void Add(int* p)
//{
//	//*p++;//++优先级高，需把*p括起来
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


//函数的嵌套调用和链式访问
//函数和函数之间可以有机的组合的。

//嵌套调用 - 函数中调用函数

//链式访问 - 把一个函数的返回值作为另一个函数的参数
//int main()
//{
//	int len = 0;
//
//	len = strlen("abc");//第一种
//	printf("%d\n",len);
//
//	printf("%d\n",strlen("abc"));//第二种
//	return 0;
//}

//int main()
//{
//	printf("%d",printf("%d",printf("%d",43)));//printf()函数返回值是它打印的字符的个数
//	return 0;
//}


//函数声明与定义 - 用于分模块 

//函数声明:
//1.告诉编译器有一个函数叫什么, 参数是什么, 返回类型是什么。但是具体是不是存在, 无关
//紧要。
//2.函数的声明一般出现在函数的使用之前。要满足先声明后使用。
//3.函数的声明一般要放在头文件中的。

//函数定义 :
//函数的定义是指函数的具体实现, 交待函数的功能实现。


//int Add(int x, int y);//函数声明
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);//函数调用
//	printf("%d\n",sum);
//	return 0;
//}
//
//int Add(int x, int y)//函数定义
//{
//	int z = x + y;
//	return z;
//}