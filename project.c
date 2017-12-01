//계산기 
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
	printf("      1.정수 사칙연산\n");
	printf("      2.평균구하기\n");
	printf("      3.행렬 덧셈\n");
	printf("      4.행렬 곱셈\n");
	printf("      5.행렬식 값 구하기\n");
	printf("      6.종료\n");
	printf("========================\n");
	printf("메뉴를 선택하세요:");
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
	printf("두 정수를 입력하세요:");
	scanf("%d %d", &x, &y);
	printf("<연산기호>\n1.덧셈  2. 뺄셈  3.곱셈  4.나눗셈\n");
	printf("원하는 연산의 번호를 입력하세요:");
	scanf("%d", &ch);
	if (ch == 1)
		printf("연산결과:%d\n", x + y);
	if (ch == 2)
		printf("연산결과:%d\n", x - y);
	if (ch == 3)
		printf("연산결과:%d\n", x * y);
	if (ch == 4)
		printf("연산결과:%d\n", x / y);
	puts("");
	menu();
}
void cal_avg()
{
	int num,i, a[30] = { 0 };
	double sum = 0.0;
	printf("입력할 숫자의 개수:");
	scanf("%d", &num);
	printf("숫자를 입력하세요:");
	for (i = 0; i < num; i++)
	{
		scanf("%d", &a[i]);
		sum += a[i];
	}
	printf("평균:%.2lf\n", sum / num);
	puts("");
	menu();
}
void mat_plus()
{
	int a[100][100], b[100][100], sum[100][100];
	int i, j, k, m,d,e,f,g;
	printf("행렬 합=>두 행렬의 형태가 동일해야한다.\n");
	printf("행을 입력:");
	scanf("%d", &i);
	printf("열을 입력:");
	scanf("%d", &j);
	printf("첫번째 행렬 입력\n");
	for (k = 0; k < i; k++)
	{
		for (m = 0; m < j; m++)
		{
			printf("a[%d][%d]:", k, m);
			scanf("%d", &a[k][m]);
		}
	}
	printf("두번째 행렬 입력\n");
	
	for (k = 0; k < i; k++)
	{
		for (m = 0; m < j; m++)
		{
			printf("b[%d][%d]:", k, m);
			scanf("%d", &b[k][m]);
		}
	}
	printf("두 행렬 덧셈 결과\n");
	for (k = 0; k < i; k++)
	{
		for (m = 0; m < j; m++)
		{
			sum[k][m] = a[k][m] + b[k][m];
		}
	}
	//결과 출력
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
	printf("행렬의 곱 조건(Aij x Bjm)\n");
	printf("첫번째 행렬 입력\n");
	printf("행을 입력:");
	scanf("%d", &i);
	printf("열을 입력:");
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
	printf("두번째 행렬 입력\n");
	printf("행을 입력:");
	scanf("%d", &j);
	printf("열을 입력:");
	scanf("%d", &d);
	

	for (k = 0; k < j; k++)
	{
		for (m = 0; m < d; m++)
		{
			printf("b[%d][%d]:", k, m);
			scanf("%d", &b[k][m]);
		}
	}
	//행렬 곱셈 계산
	for (k = 0; k < i; k++)//행
	{
		for (m = 0; m < d; m++)//열
		{
			cal[k][m] = 0;
			for (r = 0; r < j; r++)
			{
				cal[k][m] += a[k][r] * b[r][m];
			}
		}
	}
	puts("");
	printf("[행렬 곱셈 결과]\n");
	for (k = 0; k < i; k++)//행
	{
		for (m = 0; m < d; m++)//열
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
	printf("행렬의 종류를 선택하세요\n1.(3X3)  2.(4X4)\n");
	scanf("%d", &choice);
	if (choice == 1)
	{
		printf("(3X3)행렬식 값 계산\n");
		int i = 3, j = 3, a[3][3],g,k;
		printf("행렬을 입력하세요\n");
		for (g = 0; g < i; g++)//행
		{
			for (k = 0; k < j; k++)//열
			{
				printf("a[%d][%d]:", g, k);
				scanf("%d", &a[g][k]);
			}
		}
		printf("행렬 출력\n");
		for (g = 0; g < i; g++)//행
		{
			for (k = 0; k < j; k++)//열
			{
				printf("%3d", a[g][k]);
			}
			if (k = j - 1)
				puts("");
		}
		//행렬식 계산
		result=(a[0][0] * a[1][1] * a[2][2]) + (a[0][1] * a[1][2] * a[2][0]) + (a[0][2] * a[1][0] * a[2][1]) -(a[0][0] * a[1][2] * a[2][1]) - (a[0][1] * a[1][0] * a[2][2]) - (a[0][2] * a[1][1] * a[2][0]);
		
		printf("행렬식의 값:%d\n", result);

	}
	else if (choice == 2)
	{
		printf("(4X4)행렬식 값 계산\n");
		int i = 4, j = 4, b[4][4], g, k, result1, result2, result3, result4, result5, c1, c2, c3, c4;
		printf("행렬을 입력하세요\n");
		for (g = 0; g < i; g++)//행
		{
			for (k = 0; k < j; k++)//열
			{
				printf("b[%d][%d]:", g, k);
				scanf("%d", &b[g][k]);
			}
		}
		printf("행렬 출력\n");
		for (g = 0; g < i; g++)//행
		{
			for (k = 0; k < j; k++)//열
			{
				printf("%3d", b[g][k]);
			}
			if (k = j - 1)
				puts("");
		}
		//행렬식 계산
		c1 = (b[2][2] * b[3][3] * b[3][4]) + (b[2][3] * b[3][4] * b[4][2]) + (b[2][4] * b[3][2] * b[4][3]) - (b[2][2] * b[3][4] * b[4][3]) - (b[2][3] * b[3][2] * b[4][4]) - (b[2][4] * b[3][3] * b[4][2]);
		c2 = (b[1][2] * b[3][3] * b[4][4]) + (b[1][3] * b[3][4] * b[4][2]) + (b[1][4] * b[3][2] * b[4][3]) - (b[1][4] * b[3][3] * b[4][2]) - (b[1][2] * b[3][4] * b[4][3]) - (b[1][3] * b[3][2] * b[4][4]);
		c3 = (b[1][2] * b[2][3] * b[4][4]) + (b[1][3] * b[2][4] * b[4][2]) + (b[1][4] * b[2][2] * b[4][3]) - (b[1][2] * b[2][4] * b[4][3]) - (b[1][3] * b[2][2] * b[4][4]) - (b[1][4] * b[2][3] * b[4][2]);
		c4 = (b[1][2] * b[2][3] * b[3][4]) + (b[1][3] * b[2][4] * b[3][2]) + (b[1][4] * b[2][2] * b[3][3]) - (b[1][2] * b[2][4] * b[3][3]) - (b[1][3] * b[2][2] * b[3][4]) - (b[1][4] * b[2][3] * b[3][2]);
		result1 = b[1][1] * c1;
		result2 = b[2][1] * c2;
		result3 = b[3][1] * c3;
		result4 = b[4][1] * c4;
		result5 = result1 + result2 + result3 + result4;
		printf("행렬식의 값:%d\n", result5);
	}

	else
	{
		printf("잘못 누르셨습니다\n");
		determinant();
	}
	puts("");
	menu();

}
void end()
{
	int answer;
	printf("종료하시겠습니까?\n1.yes  2.no\n");
	scanf("%d", &answer);
	if (answer == 1)
		printf("종료합니다\n");
	else if(answer==2)
		menu();
}