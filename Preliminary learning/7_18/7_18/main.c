#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	return 0;
//}


//if���
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("δ����\n");
//		printf("��������\n");
//	}
//	else if (age >= 18 && age<=28)
//		printf("����\n");
//	else
//		printf("׳��\n");
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//		else
//			printf("haha\n");
//	return 0;
//}

//int main()
//{
//	int num = 3;
//	if (num == 5)
//		printf("hehe\n");
//	return 0;
//}

//int main()
//{
//	int num = 1;
//	//scanf("%d", &num);
//	while(num <= 100)
//	{
//		if (num % 2 == 1)
//			printf("����%d",num);
//		else
//			printf("ż��%d",num);
//		num++;
//	}
//	return 0;
//}

//switch
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		printf("hehe\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("����ȷ����");
//		break;
//	}
//	return 0;
//}

//while
//int main()
//{
//	int i = 0;
//	while (i<10)
//	{
//		i++;
//		if (5 == i)
//			continue;
//
//		printf("%d\n",i);
//	}
//	return 0;
//}


//int main()
//{
//	int ch = getchar();
//	EOF;
//	printf("%c\n", ch);
//	putchar(ch);
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}


//int main()
//{
//	char password[20] = { 0 };
//	printf("���������룺>");
//	scanf("%s", &password);
//	int ch = 0;
//	while (ch = getchar() != '\n'); //��������
//
//	printf("��ȷ�����루Y/N����>");
//	int ret = getchar();
//
//	if (ret == 'Y')
//		printf("YES");
//	else
//		printf("NO");
//
//	return 0;
//}


//#include <string.h>
//int main()
//{
//	char password[20] = { 0 };
//	scanf(" %s",&password);
//	printf("%zu",strlen(password));
//	return 0;
//}


//int main()
//{
//	int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	while (i < sz)
//	{
//		printf("%c", arr[i]);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year,&month,&date);//%4d ��ʾȡ4λ
//	printf("year=%d\nmonth=%02d\nday=%02d\n", year, month, date);//%02d ��ʾ��0���䲻����λ��
//
//	return 0;
//}



//int main()
//{
//	int id = 0;
//	float scoreC = 0.0f;//��ʹ��f�ᱻ��ΪΪdouble����
//	float math = 0.0f;
//	float english = 0.0f;
//	scanf("%d;%f,%f,%f", &id, &scoreC, &math, &english);
//	printf("The each subject score of No.%d is %.2f, %.2f, %.2f.", id, scoreC, math, english);
//	return 0;
//}


//int main()
//{
//	int ret = 0;
//	ret = printf("Hello World!");
//	printf("\n%d\n", ret);
//	return 0;
//}


//int main()
//{
//	printf("printf(\"Hello world!\\n\");\n");
//	printf("cout<<\"Hello World!\"<<endl;\n");
//	return 0;
//}


//int main()
//{
//	int arr[4] = { 0 };
//	scanf("%d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3]);
//	int i = 0;
//	while (i < 3)
//	{
//		if (arr[i] > arr[i + 1])
//			arr[i + 1] = arr[i];
//		i++;
//	}
//	printf("%d\n", arr[3]);
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	int max = 0;
//	int num = 0;
//	scanf("%d", &max);
//	while (i < 4)
//	{
//		scanf("%d", &num);
//		if (num > max)
//			max = num;
//		i++;
//	}
//	printf("%d", max);
//	return 0;
//}



//int main()
//{
//	double r = 0.0;
//	double v = 0.0;
//	scanf("%lf", &r);
//	v = 4 * 3.1415926 * r * r * r / 3;
//	printf("%.3lf\n", v);
//	return 0;
//}



//int main()
//{
//	int height = 0;
//	int weight = 0;
//	float BMI = 0.0f;
//	scanf("%d %d", &weight, &height);
//	BMI = weight / (height / 100.0) / (height / 100.0);
//	printf("%.2f\n", BMI);
//	return 0;
//}


//int main()
//{
//	for (int i = 0; i <= 10; i++)
//		printf("%d", i);
//	return 0;
//}


//int main()
//{
//	for (;;)//��ѭ��
//		printf("hehe\n");
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d\n", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}


//int jiecheng(int n)
//{
//	int result = 1;
//	for (int i = 1; i <= n; i++)
//		result = result * i;
//	return result;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int result = jiecheng(n);
//	printf("%d", result);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int result = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		result += jiecheng(i);
//	}
//	printf("%d", result);
//	return 0;
//}


////���ֲ���
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9.10 };
//	int k = 7;
//	int left = 0;
//	int count = sizeof(arr) / sizeof(arr[0]);
//	int right = count - 1;
//	int middle = 0;
//	while (left <= right)
//	{
//		//middle = (right +  left) / 2;
//		middle = (right - left) / 2 + left;
//		if (arr[middle] > k)
//			right = middle - 1;
//		else if (arr[middle] < k)
//			left = middle + 1;
//		else
//		{
//			printf("�ҵ��ˣ��±���%d\n", middle);
//			break;
//		}
//	}
//	printf("%d", arr[middle]);
//	return 0;
//}


//#include<windows.h>
//#include<stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "******************";
//	//int right = strlen(arr1) - 1;
//	int count = sizeof(arr1) / sizeof(arr1[0]);//���Ԫ�ظ�������\0
//	int left = 0;
//	int right = count - 2;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//����һ��
//		system("cls");//ִ��ϵͳ����
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}




//#include <string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 740 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "abcdef") == 0)//�Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��strcmp,����ֵΪ0��˵�������ַ������
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//			printf("�������\n");
//	}
//	if (i == 3)
//		printf("�������������\n");
//	return 0;
//}
 


////������
//#include <time.h>
//void game()
//{
//	int i = 0;
//	int guess = 0;
//	int ret = rand()%100+1;//���������
//	for (i = 0; i < 3; i++)
//	{
//		printf("������֣�>");
//		scanf("%d", &guess); 
//		if (guess < ret)
//			printf("С��\n");
//		else if (guess > ret)
//			printf("����\n");
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//	if (i == 3)
//		printf("�Բ������λ��������ˣ�û�в¶ԣ�����%d\n", ret);
//
//}
//void menu()
//{
//	printf("**********************\n");
//	printf("******* 1.play *******\n");
//	printf("******* 0.exit *******\n");
//	printf("**********************\n");
//}
//int main()
//{
//	srand((unsigned int)time(NULL));//ȷ������������  //time��������ʱ���
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf(" %d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("������\n");
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����,����ѡ��!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//goto ���
#include <stdlib.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("��ע�⣬��ĵ�����60s�ڹػ����������:��������ȡ���ػ�\n");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}