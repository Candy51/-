//���� 
#include <stdio.h>
void menu();
void cal_int();
void cal_avg();
void mat_plus();
void mat_mul();
void determinant();
void end();
int main()
{
	menu();
}
void menu()
{
	int number;
	printf("       CALCULATOR      \n");
	printf("========================\n");
	printf("        <<MENU>>\n");
	printf("      1.���� ��Ģ����\n");
	printf("      2.��ձ��ϱ�\n");
	printf("      3.��� ����\n");
	printf("      4.��� ����\n");
	printf("      5.��Ľ� �� ���ϱ�\n");
	printf("      6.����\n");
	printf("========================\n");
	printf("�޴��� �����ϼ���:");
	scanf("%d", &number);
	if (number == 1)
		cal_int();
	else if (number == 2)
		cal_avg();
	else if (number == 3)
		mat_plus();
	else if (number == 4)
		mat_mul();
	else if (number == 5)
		determinant();
	else if (number == 6)
		 end();
}
void cal_int()
{
	int x, y, ch;
	printf("�� ������ �Է��ϼ���:");
	scanf("%d %d", &x, &y);
	printf("<�����ȣ>\n1.����  2. ����  3.����  4.������\n");
	printf("���ϴ� ������ ��ȣ�� �Է��ϼ���:");
	scanf("%d", &ch);
	if (ch == 1)
		printf("������:%d\n", x + y);
	if (ch == 2)
		printf("������:%d\n", x - y);
	if (ch == 3)
		printf("������:%d\n", x * y);
	if (ch == 4)
		printf("������:%d\n", x / y);
	puts("");
	menu();
}
void cal_avg()
{
	int num,i, a[30] = { 0 };
	double sum = 0.0;
	printf("�Է��� ������ ����:");
	scanf("%d", &num);
	printf("���ڸ� �Է��ϼ���:");
	for (i = 0; i < num; i++)
	{
		scanf("%d", &a[i]);
		sum += a[i];
	}
	printf("���:%.2lf\n", sum / num);
	puts("");
	menu();
}
void mat_plus()
{
	int a[100][100], b[100][100], sum[100][100];
	int i, j, k, m,d,e,f,g;
	printf("��� ��=>�� ����� ���°� �����ؾ��Ѵ�.\n");
	printf("���� �Է�:");
	scanf("%d", &i);
	printf("���� �Է�:");
	scanf("%d", &j);
	printf("ù��° ��� �Է�\n");
	for (k = 0; k < i; k++)
	{
		for (m = 0; m < j; m++)
		{
			printf("a[%d][%d]:", k, m);
			scanf("%d", &a[k][m]);
		}
	}
	printf("�ι�° ��� �Է�\n");
	
	for (k = 0; k < i; k++)
	{
		for (m = 0; m < j; m++)
		{
			printf("b[%d][%d]:", k, m);
			scanf("%d", &b[k][m]);
		}
	}
	printf("�� ��� ���� ���\n");
	for (k = 0; k < i; k++)
	{
		for (m = 0; m < j; m++)
		{
			sum[k][m] = a[k][m] + b[k][m];
		}
	}
	//��� ���
	for (k = 0; k < i; k++)
	{
		for (m = 0; m < j; m++)
		{
			printf("%2d", sum[k][m]);
		}
		if (m = j - 1)
			puts("");
	}
	puts("");
	menu();
}

void mat_mul()//ixjxjxd=>ixd
{
	int a[100][100], b[100][100], cal[100][100];
	int i, j, k, m, d, e, r;
	printf("����� �� ����(Aij x Bjm)\n");
	printf("ù��° ��� �Է�\n");
	printf("���� �Է�:");
	scanf("%d", &i);
	printf("���� �Է�:");
	scanf("%d", &j);
	
	for (k = 0; k < i; k++)
	{
		for (m = 0; m < j; m++)
		{
			printf("a[%d][%d]:", k, m);
			scanf("%d", &a[k][m]);
		}
	}
	puts("");
	puts("");
	printf("�ι�° ��� �Է�\n");
	printf("���� �Է�:");
	scanf("%d", &j);
	printf("���� �Է�:");
	scanf("%d", &d);
	

	for (k = 0; k < j; k++)
	{
		for (m = 0; m < d; m++)
		{
			printf("b[%d][%d]:", k, m);
			scanf("%d", &b[k][m]);
		}
	}
	//��� ���� ���
	for (k = 0; k < i; k++)//��
	{
		for (m = 0; m < d; m++)//��
		{
			cal[k][m] = 0;
			for (r = 0; r < j; r++)
			{
				cal[k][m] += a[k][r] * b[r][m];
			}
		}
	}
	puts("");
	printf("[��� ���� ���]\n");
	for (k = 0; k < i; k++)//��
	{
		for (m = 0; m < d; m++)//��
		{
			printf("%3d", cal[k][m]);
		}
		if (m = d - 1)
			puts("");
	}
	puts("");
	menu();
}
void determinant()
{
	int choice, result;
	printf("����� ������ �����ϼ���\n1.(3X3)  2.(4X4)\n");
	scanf("%d", &choice);
	if (choice == 1)
	{
		printf("(3X3)��Ľ� �� ���\n");
		int i = 3, j = 3, a[3][3],g,k;
		printf("����� �Է��ϼ���\n");
		for (g = 0; g < i; g++)//��
		{
			for (k = 0; k < j; k++)//��
			{
				printf("a[%d][%d]:", g, k);
				scanf("%d", &a[g][k]);
			}
		}
		printf("��� ���\n");
		for (g = 0; g < i; g++)//��
		{
			for (k = 0; k < j; k++)//��
			{
				printf("%3d", a[g][k]);
			}
			if (k = j - 1)
				puts("");
		}
		//��Ľ� ���
		result=(a[0][0] * a[1][1] * a[2][2]) + (a[0][1] * a[1][2] * a[2][0]) + (a[0][2] * a[1][0] * a[2][1]) -(a[0][0] * a[1][2] * a[2][1]) - (a[0][1] * a[1][0] * a[2][2]) - (a[0][2] * a[1][1] * a[2][0]);
		
		printf("��Ľ��� ��:%d\n", result);

	}
	else if (choice == 2)
	{
		printf("(4X4)��Ľ� �� ���\n");
		int i = 4, j = 4, b[4][4], g, k, result1, result2, result3, result4, result5, c1, c2, c3, c4;
		printf("����� �Է��ϼ���\n");
		for (g = 0; g < i; g++)//��
		{
			for (k = 0; k < j; k++)//��
			{
				printf("b[%d][%d]:", g, k);
				scanf("%d", &b[g][k]);
			}
		}
		printf("��� ���\n");
		for (g = 0; g < i; g++)//��
		{
			for (k = 0; k < j; k++)//��
			{
				printf("%3d", b[g][k]);
			}
			if (k = j - 1)
				puts("");
		}
		//��Ľ� ���
		c1 = (b[2][2] * b[3][3] * b[3][4]) + (b[2][3] * b[3][4] * b[4][2]) + (b[2][4] * b[3][2] * b[4][3]) - (b[2][2] * b[3][4] * b[4][3]) - (b[2][3] * b[3][2] * b[4][4]) - (b[2][4] * b[3][3] * b[4][2]);
		c2 = (b[1][2] * b[3][3] * b[4][4]) + (b[1][3] * b[3][4] * b[4][2]) + (b[1][4] * b[3][2] * b[4][3]) - (b[1][4] * b[3][3] * b[4][2]) - (b[1][2] * b[3][4] * b[4][3]) - (b[1][3] * b[3][2] * b[4][4]);
		c3 = (b[1][2] * b[2][3] * b[4][4]) + (b[1][3] * b[2][4] * b[4][2]) + (b[1][4] * b[2][2] * b[4][3]) - (b[1][2] * b[2][4] * b[4][3]) - (b[1][3] * b[2][2] * b[4][4]) - (b[1][4] * b[2][3] * b[4][2]);
		c4 = (b[1][2] * b[2][3] * b[3][4]) + (b[1][3] * b[2][4] * b[3][2]) + (b[1][4] * b[2][2] * b[3][3]) - (b[1][2] * b[2][4] * b[3][3]) - (b[1][3] * b[2][2] * b[3][4]) - (b[1][4] * b[2][3] * b[3][2]);
		result1 = b[1][1] * c1;
		result2 = b[2][1] * c2;
		result3 = b[3][1] * c3;
		result4 = b[4][1] * c4;
		result5 = result1 + result2 + result3 + result4;
		printf("��Ľ��� ��:%d\n", result5);
	}

	else
	{
		printf("�߸� �����̽��ϴ�\n");
		determinant();
	}
	puts("");
	menu();

}
void end()
{
	int answer;
	printf("�����Ͻðڽ��ϱ�?\n1.yes  2.no\n");
	scanf("%d", &answer);
	if (answer == 1)
		printf("�����մϴ�\n");
	else if(answer==2)
		menu();
}