#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//矩阵乘法
/*
int n, m, k, i, j, x, y;
int a[100][100], b[100][100], c[100][100];
int main()
{
	scanf("%d %d %d", &n, &m, &k);
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			scanf("%d", &a[i][j]);
	for (i = 0; i < m; i++)
		for (j = 0; j < k; j++)
			scanf("%d", &b[i][j]);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < k; j++)
		{
			y = 0;
			for (x = 0; x < m; x++)
				y = y + a[i][x] * b[x][j];
			c[i][j] = y;
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < k; j++)
			printf("%d ", c[i][j]);
		printf("\n");
	}
}*/

//矩阵顺时针旋转90度
/*
int n, m, a[100][100], b[100][100], i, j;
int main()
{
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			scanf("%d", &a[i][j]);//输入
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			b[i][j] = a[n - j - 1][i];//旋转
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			printf("%d ", b[i][j]);
		printf("\n");
	}
}*/
//Í¼ÏñÐý×ª
