#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

//��������Ϸ
//1.��������һ�������  2.��Ҳ�����  3.��������һ��

//void menu()
//{
//	char arr0[] = { "################################\n" };
//	char arr1[] = { "********************************\n" };
//	char arr2[] = { "################################\n" };
//	char arr3[] = { "******!��ӭ������������Ϸ!******\n" };
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
//	//1.����һ�����޷�Χ�������  2.��Ҳ�����
//	int ret = 0;
//	int guess = 0;
//	ret = rand()%100+1;//1.��ģ100���޷ǵõ�1-99֮�������  ����1-100�������  //printf("%d\n",ret);
//	while (1)
//	{
//		printf("����һ�����֣����� 1 - 100 ֮��\n");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("��ҪСһ��\n");
//		}
//		else if (guess < ret)
//		{
//			printf("�ٴ�һ��\n");
//		}
//		else
//		{
//			printf("good job!��¶���~\n");
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
//	srand((unsigned int )time(NULL));//ֻ����һ��
//	//ʱ��� ����ǰ�������ʱ�� - ���������ʼʱ��( 1970.1.1.0:0:0 )= ( xxxx )��
//	//time_t time(time_t *timer)
//	do
//	{
//		menu();
//		printf("��ѡ�� 1 / 0 \n");
//		scanf("%d", &input1);
//		switch (input1)
//		{
//		case 1:
//			printf("��ʼ��Ϸ\n");
//			Sleep(2000);
//			game();
//			printf("����һ��?( 1 / 0 )\n");
//			scanf("%d", &input2);
//			switch (input2)
//			{
//			case 1:
//				break;
//			case 0:
//				printf("�˳���Ϸ\n");
//				Sleep(2000);
//				input1 == 0;
//				continue;
//			default:
//				printf("��������,�˳���Ϸ\n");
//				Sleep(2000);
//				input1 == 0;
//				continue;
//			}
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default :
//			printf("��������,����������\n");
//			Sleep(2000);
//			break;
//		}
//	} 
//	while (input1);
//	return 0;
//}



//goto��� ��ת��goto�趨��Ŀ��ȥ//����ĳЩ���Ƕ�׵ĳ���
//int main()
//{
//again:
//	printf("hello world\n");
//	goto again;
//	return 0;
//}



//�趨�ػ�
//goto����
//int main()
//{
//	char input[20] = { 0 };
//	// shutdown -s -t 60
//	//system() ִ��ϵͳ����
//	system(" shutdown -s -t 60");
//	again:
//	printf("��ע�⣬��ĵ�����1�����ڹػ����������:��������ȡ���ػ�\n������>:");
//	scanf("%s",&input);
//	if (strcmp(input, "������") == 0)//�Ƚ������ַ���  strcmp()
//	{
//	system("shutdown -a" );
//	}
//	else
//	{
//		goto again;
//	}
//return 0;
//}

//����goto
//int main()
//{
//	char input[20] = { 0 };
//	// shutdown -s -t 60
//	//system() ִ��ϵͳ����
//	system(" shutdown -s -t 60");
//	while (1)
//	{
//		printf("��ע�⣬��ĵ�����1�����ڹػ����������:��������ȡ���ػ�\n������>:");
//		scanf("%s", &input);
//		if (strcmp(input, "������") == 0)//�Ƚ������ַ���  strcmp()
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}

