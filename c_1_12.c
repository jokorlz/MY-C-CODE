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
//		break;//while�е�break����ֹѭ��
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
//		continue;//while�е�continue����ֹ����ѭ������ת���ж�
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	//ctrl + z -> getchar���յ�����EOF 
//	//EOF - end of file�ļ�������־ -> ֵΪ-1
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
//	printf("����������:>");
//	scanf("%s",password);//�������룬�������passsword������
//	//��������ʣ��һ��'\n'
//	//��ȡ��'\n��
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();//Y/N
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
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


//for(exp1//������ʼ��;exp2//�ж�ʽ����;exp3//��������
//1.������forѭ�������޸�ѭ������, ��ֹforѭ��ʧȥ���ơ�
//2.����for����ѭ�����Ʊ�����ȡֵ���á�ǰ�պ����䡱д����

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		//if (5 == i)//����Ƕ��ʹ��
//			//continue;//��ֹ����Ĵ���
//			//break;//��ֹѭ��
//		printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	for (;;)//1. forѭ���ĳ�ʼ�����������ж϶�����ʡ�� �� 
//			//forѭ�����жϲ��������ʡ��, ���ж��������� : ��Ϊ��
//			//2.������Ƿǳ�����.���鲻Ҫ���ʡ��
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


//do while ѭ��
//int main() 
//{
//	int i= 1;
//	do
//	{
//		//if (5 == i)
//			//break;//��ֹѭ��
//			//continue;//�������ѭ��
//		printf("%d",i); 
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}


//����n�Ľ׳�
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

//����1��+2��+3��+4��+...+10!
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret * n;//�Ż���Ĵ�����һ��ѭ��
//		/*ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}*/  //n�Ľ׳�
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}


/*��һ�����������в��Ҿ����ĳ������n����дint binsearch(int x, int v0, int n); ����:��v[0]
<= v[1] <= v[2] <= ... = v[n - 1]�������в���x.*/
//������
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9, 10 };
//	int k = 17;
//	//дһ�����룬��arr����(�����)���ҵ�17
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±���: %d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ���\n");
//	return 0;
//}

//������/���ֲ����㷨
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
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
//			printf("�ҵ��ˣ��±���: %d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}


//��д����, ��ʾ����ַ��������ƶ�, ���м��ۡ�
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
//		Sleep(1000);//��Ϣһ�� ����<windows.h>
//		system("cls");//ִ��ϵͳ�����һ������ cls �����Ļ ����<stdlib.h>
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


/*��д����, ʵ��ģ���û���¼�龰, ����ֻ�ܵ�¼���Ρ�(ֻ����������������, ���������ȷ����ʾ��¼�ɹ�,
������ξ��������, ���˳�����*/
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		//if (password == "123456")
//		// == ���������Ƚ������ַ����Ƿ���ȣ�Ӧ����һ���⺯��-strcmp
//		//strcmp �����ַ�����ȷ���0 ��һ��>�ڶ��� ����>0������ ��һ��<�ڶ��� ����<0������
//		if(strcmp(password,"qweasdzxc123456")==0)
//		{
//			printf("��¼�ɹ�,��ӭ����~\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if(3==i)
//		printf("������������������Σ������˳�\n");
//	return 0;
//}











