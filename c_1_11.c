#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//int main()
//{
//	int a = 100;//向内存申请4字节的空间
//	printf("%p\n", &a);
//	int*p = &a;//int*是标识类型 p是一个变量-指针变量
//	printf("%p\n", p);
//	printf("%d\n", sizeof(p));//32位-4字节  64位-8字节
//	*p=200;//解引用操作符/间接访问操作符 *p即通过指针找到a
//	printf("a=%d\n", a);
//	return 0;
//}



//struct Man//结构体 - 我们自己创建的一种类型
//{
//	char name[10];//零兆鑫
//	short sg;//180cm
//	short dd;//18cm
//};//必不可少 ;
//
//int main()
//{
//	//利用结构体类型-创建一个该类型的结构体变量
//	struct Man ling = { "零兆鑫",180, 18 };//把信息都指定进去
//	struct Man*pb=&ling;
//	printf("%dcm\n", (*pb).dd);//指针方式提取
//	printf("%dcm\n", pb->dd);// -> 操作符应用于结构体指针->成员
//	printf("姓名：%s\n", ling.name);//%s 数组 .操作符应用于结构体变量.成员
//	printf("身高：%dcm\n", ling.sg);
//	printf("丁丁：%dcm\n", ling.dd);
//	ling.dd = 18;
//	strcpy(ling.name, "李治政");//strcpy-string copy - 字符串拷贝 - 库函数 - <string.h>
//	printf("修改后的姓名：%s\n", ling.name);
//	printf("修改后的丁丁长度：%dmm\n",ling.dd);
//	return 0;
//}

//int main()
//{
//	printf("姓名：零兆鑫\n身高：180cm\n丁丁：18cm\n");
//	return 0;
//}


//int main()
//{
//	int a = 0;//分号即一条语句
//	;//空语句
//	return 0;
//}


//分支语句 
//if else  else与最近的if匹配 注意代码书写的风格
//if(表达式)+语句（表达式如为真，执行语句）  
//表达式中比较常量和变量 把常量放在变量左边 能减少bug


//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	if (0 == a % 2)
//		printf("该数为偶数\n");
//	else
//		printf("该数为奇数\n");
//	return 0;
//}


//while循环
//while(表达式)+语句（表达式如为真，执行语句）
//do+语句  while (表达式)+语句 
//int main()
//{
//	int i = 0;
//	while (i <= 100)
//	{
//		if (1 == i % 2)//if(i%2!=0)
//			printf("%d,", i);
//		i++;
//	}
//	return 0;
//}


//多分支的语句 switch（整型表达式）后接语句项case(整型常量表达式:) break跳出

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
	/*case 1:
		printf("星期一\n");
		break;
	case 2:
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;
	case 4:
		printf("星期四\n");
		break;
	case 5:
		printf("星期五\n");
		break;
	case 6:
		printf("星期六\n");
		break;
	case 7:
		printf("星期日\n");
		break;*///太啰嗦。

//	case 1:
//		if (1 == day)//switch中可以有if语句
//			printf("无语\n");
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6: 	
//	case 7:
//		printf("休息日\n");
//		break;//最后一个也不要漏掉
//	default://default子句 处理非法逻辑，可前可后。
//		printf("输入错误\n");
//	}
//	return 0;
//}


//int main()
//{
//	int	n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//		switch (n)//switch允许嵌套使用
//		{
//		case 1:n++;
//		case 2:m++; n++; 
//			break;
//		}
//	case 4:m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d\n", m, n);
//
//	return 0;
//}