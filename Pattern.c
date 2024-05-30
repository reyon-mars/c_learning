#include<stdio.h>

void halfPyramid (int height)
{	
	int base=height;
	for(int i=0; i<height; i++)
		{
			for(int j=0; j<base; j++)
			{
				if (j<base-i){
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
	int base=height;
	for(int i=height; i>0; i--)
		{
			for(int j=0; j<base; j++)
			{
			printf("* ");	
			}
			printf("\n");
			base--;
		}
}

void rectanglePerimeter(int row , int column)
{
	for(int i=0; i<row; i++)
		{
			for(int j=0; j<column; j++)
				{
					if(i==0 || i==row-1)
					{	
					printf("*");
					}
					else if(j==0 || j==column-1)
					{
					 printf("*");
					}
					else{printf(" ");}
				}
			printf("\n");
		}

}

void rectangle(int row , int column)
{
	for(int i =0; i<row; i++)
		{
			for (int j=0; j<column; j++)
			{
				printf("*");
			}
			printf("\n");
		}
}

int main()
{
	rectanglePerimeter(5,8);
	printf("\n");
	invertedHalfPyramid(5);
	printf("\n");
	halfPyramid(7);
	return 0;
}

