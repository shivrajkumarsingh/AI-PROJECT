#include <stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
int main()
{
	int Array[10], i, j, temp;
	
	
	printf("\nPlease Enter total gifts  of each student \n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &Array[i]);
    }     
	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if(Array[i] < Array[j])
			{
				temp = Array[i];
				Array[i] = Array[j];
				Array[j] = temp;
			}
			
		}
	}
	printf("\n the students having the no of gifts will be entertained in this order: ****\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d\t", Array[i]);
	}
	
	return 0;
}
