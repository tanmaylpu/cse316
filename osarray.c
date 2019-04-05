#include <stdio.h>
    void main ()
    {
 
        int number[30];
 
        int i, j, a, n;
        printf("Enter the number of Students:\n");
        scanf("%d", &n);
 
        for (i = 0; i < n; ++i) 
		{
        printf("Enter the Gift Price for student %d\n", i+1);
	    scanf("%d", &number[i]);
		}
 
       
 
        for (i = 0; i < n; ++i) 
        {
            for (j = i + 1; j < n; ++j) 
            {
                if (number[i] < number[j]) 
                {
                    a = number[i];
                    number[i] = number[j];
                    number[j] = a;//number 
                }
            }
        }
     printf("The numbers arranged in descending order are given below\n");
 
        for (i = 0; i < n; ++i) 
        {
            printf("%d\n", number[i]);
        }
 return 0;
    }
    

