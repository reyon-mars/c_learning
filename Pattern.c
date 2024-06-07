#include <stdio.h>

void butterfly(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; i++)
		{
			if()
		}
		
	}
	
}

void floydsTriangle(int height)
{
	int digit = 1;
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%d  ", digit);
			digit++;
		}
		printf("\n");
	}
}

void numberPyramid(int height)
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%d ", i + 1);
		}
		printf("\n");
	}
}

void halfPyramidRight(int height)
{
	int base = height;
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < base; j++)
		{
			if (j < base - i)
			{
				printf(" ");
			}
			else
				printf("*");
		}
		printf("\n");
	}
}

void invertedHalfPyramid(int height)
{
	int base = height;
	for (int i = height; i > 0; i--)
	{
		for (int j = 0; j < base; j++)
		{
			printf("* ");
		}
		printf("\n");
		base--;
	}
}

void rectanglePerimeter(int row, int column)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			if (i == 0 || i == row - 1)
			{
				printf("*");
			}
			else if (j == 0 || j == column - 1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}

void rectangle(int row, int column)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

int main()
{
	rectanglePerimeter(5, 8);
	printf("\n");
	invertedHalfPyramid(5);
	printf("\n");
	halfPyramidRight(7);
	printf("\n");
	numberPyramid(8);
	floydsTriangle(5);
	return 0;
}
