#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//int main()
//{
//	int a = 100;//���ڴ�����4�ֽڵĿռ�
//	printf("%p\n", &a);
//	int*p = &a;//int*�Ǳ�ʶ���� p��һ������-ָ�����
//	printf("%p\n", p);
//	printf("%d\n", sizeof(p));//32λ-4�ֽ�  64λ-8�ֽ�
//	*p=200;//�����ò�����/��ӷ��ʲ����� *p��ͨ��ָ���ҵ�a
//	printf("a=%d\n", a);
//	return 0;
//}



//struct Man//�ṹ�� - �����Լ�������һ������
//{
//	char name[10];//������
//	short sg;//180cm
//	short dd;//18cm
//};//�ز����� ;
//
//int main()
//{
//	//���ýṹ������-����һ�������͵Ľṹ�����
//	struct Man ling = { "������",180, 18 };//����Ϣ��ָ����ȥ
//	struct Man*pb=&ling;
//	printf("%dcm\n", (*pb).dd);//ָ�뷽ʽ��ȡ
//	printf("%dcm\n", pb->dd);// -> ������Ӧ���ڽṹ��ָ��->��Ա
//	printf("������%s\n", ling.name);//%s ���� .������Ӧ���ڽṹ�����.��Ա
//	printf("��ߣ�%dcm\n", ling.sg);
//	printf("������%dcm\n", ling.dd);
//	ling.dd = 18;
//	strcpy(ling.name, "������");//strcpy-string copy - �ַ������� - �⺯�� - <string.h>
//	printf("�޸ĺ��������%s\n", ling.name);
//	printf("�޸ĺ�Ķ������ȣ�%dmm\n",ling.dd);
//	return 0;
//}

//int main()
//{
//	printf("������������\n��ߣ�180cm\n������18cm\n");
//	return 0;
//}


//int main()
//{
//	int a = 0;//�ֺż�һ�����
//	;//�����
//	return 0;
//}


//��֧��� 
//if else  else�������ifƥ�� ע�������д�ķ��
//if(���ʽ)+��䣨���ʽ��Ϊ�棬ִ����䣩  
//���ʽ�бȽϳ����ͱ��� �ѳ������ڱ������ �ܼ���bug


//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	if (0 == a % 2)
//		printf("����Ϊż��\n");
//	else
//		printf("����Ϊ����\n");
//	return 0;
//}


//whileѭ��
//while(���ʽ)+��䣨���ʽ��Ϊ�棬ִ����䣩
//do+���  while (���ʽ)+��� 
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


//���֧����� switch�����ͱ��ʽ����������case(���ͳ������ʽ:) break����

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
	/*case 1:
		printf("����һ\n");
		break;
	case 2:
		printf("���ڶ�\n");
		break;
	case 3:
		printf("������\n");
		break;
	case 4:
		printf("������\n");
		break;
	case 5:
		printf("������\n");
		break;
	case 6:
		printf("������\n");
		break;
	case 7:
		printf("������\n");
		break;*///̫���¡�

//	case 1:
//		if (1 == day)//switch�п�����if���
//			printf("����\n");
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6: 	
//	case 7:
//		printf("��Ϣ��\n");
//		break;//���һ��Ҳ��Ҫ©��
//	default://default�Ӿ� ����Ƿ��߼�����ǰ�ɺ�
//		printf("�������\n");
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
//		switch (n)//switch����Ƕ��ʹ��
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