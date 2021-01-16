#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

//猜数字游戏
//1.电脑生成一个随机数  2.玩家猜数字  3.可以再来一把

//void menu()
//{
//	char arr0[] = { "################################\n" };
//	char arr1[] = { "********************************\n" };
//	char arr2[] = { "################################\n" };
//	char arr3[] = { "******!欢迎来到猜数字游戏!******\n" };
//	char arr4[] = { "################################\n" };
//	char arr5[] = { "******** 1.play  2.exit ********\n" };
//	char arr6[] = { "################################\n" };
//	char arr7[] = { "********************************\n" };
//	int left = 0;
//	int right = strlen(arr0 + 2);
//	while (left <= right)
//	{
//		arr0[left] = arr1[left];
//		arr0[right] = arr1[right];
//		arr2[left] = arr3[left];
//		arr2[right] = arr3[right];
//		arr4[left] = arr5[left];
//		arr4[right] = arr5[right];
//		arr6[left] = arr7[left];
//		arr6[right] = arr7[right];
//		printf("%s\n%s\n%s\n%s\n", arr0, arr2, arr4, arr6);
//		Sleep(85);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n%s\n%s\n%s\n", arr0, arr2, arr4, arr6);
//}
//
//void game()
//{
//	//1.生成一个有限范围的随机数  2.玩家猜数字
//	int ret = 0;
//	int guess = 0;
//	ret = rand()%100+1;//1.（模100，无非得到1-99之间得数）  生成1-100的随机数  //printf("%d\n",ret);
//	while (1)
//	{
//		printf("来猜一个数字，它在 1 - 100 之间\n");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("还要小一点\n");
//		}
//		else if (guess < ret)
//		{
//			printf("再大一点\n");
//		}
//		else
//		{
//			printf("good job!你猜对了~\n");
//			Sleep(2000);
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input1 = 0;
//	int input2 = 0;
//	srand((unsigned int )time(NULL));//只调用一次
//	//时间戳 ：当前计算机的时间 - 计算机的起始时间( 1970.1.1.0:0:0 )= ( xxxx )秒
//	//time_t time(time_t *timer)
//	do
//	{
//		menu();
//		printf("请选择 1 / 0 \n");
//		scanf("%d", &input1);
//		switch (input1)
//		{
//		case 1:
//			printf("开始游戏\n");
//			Sleep(2000);
//			game();
//			printf("再来一把?( 1 / 0 )\n");
//			scanf("%d", &input2);
//			switch (input2)
//			{
//			case 1:
//				break;
//			case 0:
//				printf("退出游戏\n");
//				Sleep(2000);
//				input1 == 0;
//				continue;
//			default:
//				printf("输入有误,退出游戏\n");
//				Sleep(2000);
//				input1 == 0;
//				continue;
//			}
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default :
//			printf("输入有误,请重新输入\n");
//			Sleep(2000);
//			break;
//		}
//	} 
//	while (input1);
//	return 0;
//}



//goto语句 跳转至goto设定的目标去//跳出某些深层嵌套的场景
//int main()
//{
//again:
//	printf("hello world\n");
//	goto again;
//	return 0;
//}



//设定关机
//goto类型
//int main()
//{
//	char input[20] = { 0 };
//	// shutdown -s -t 60
//	//system() 执行系统命令
//	system(" shutdown -s -t 60");
//	again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入:我是猪，就取消关机\n请输入>:");
//	scanf("%s",&input);
//	if (strcmp(input, "我是猪") == 0)//比较两个字符串  strcmp()
//	{
//	system("shutdown -a" );
//	}
//	else
//	{
//		goto again;
//	}
//return 0;
//}

//不用goto
//int main()
//{
//	char input[20] = { 0 };
//	// shutdown -s -t 60
//	//system() 执行系统命令
//	system(" shutdown -s -t 60");
//	while (1)
//	{
//		printf("请注意，你的电脑在1分钟内关机，如果输入:我是猪，就取消关机\n请输入>:");
//		scanf("%s", &input);
//		if (strcmp(input, "我是猪") == 0)//比较两个字符串  strcmp()
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}

