#include <stdio.h>

int orderedlinearsearch(int *array, int value, int length)
{
	for (int i = 0; i < length; i++)
	{

		if (array[i] == value)
		{
			return 1;
		}
		else if (array[i] > value)
		{
			return 0;
		}
	}
  return 0;
}

int main()
{
	return 0;
}
