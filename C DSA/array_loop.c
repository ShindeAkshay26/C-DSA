#include<stdio.h>

int main()
{
    printf("2D matrix is: \n");
    int arr[3][3]={10,20,30,40,50,60,70,80,90};
    for ( int i = 0; i<3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;   
}
/*// C Program to illustrate 2d array
#include <stdio.h>

int main()
{
	// declaring and initializing 2d array
	int arr[2][3] = { 10, 20, 30, 40, 50, 60 };

printf("2D Array:\n");
	// printing 2d array
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
*/