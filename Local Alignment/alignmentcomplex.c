//Subham Paul
//Chiranjeev Das

#include<stdio.h>
 int main()
 	{
 	int aa[100000],ab[100000],ac[100000],b[0000],i = 0,j = 0,k,l = 0,x = 1, y = 2, scoreA = 0,scoreB = 0, scoreC = 0,scoreT = 0;
	FILE *file1, *file2;
	

    printf("\n=============================================================================================\n");
    printf("\nDESCRIPTION:This program performs global alignment of two sequences by putting each sequence\ninto an array and comparing corresponding array elements.\n");
    printf("\nLIMITATIONS: Maximum sequence length: 100000 (In each file).\n");
    printf("\nLIMITATIONS: File must not have any extra (description) lines, spaces or special characters.\n");
    printf("\nNOTE: The first sequence will be evaluated 3 times, each time shifting it one position to the right\n");
        
    printf("\n=============================================================================================\n");

	file1 = fopen("test1.txt", "r");
	file2 = fopen("test2.txt", "r");
	
	if (file1) 
	{
    	printf("\nSequence 1 Reading Frame A:\n");
    	while ((aa[i] = getc(file1)) != EOF)
    	{	
    		printf("%c", aa[i] ); 
    		i=i+1;
    	}
    }
    
    printf("\n=============================================================================================\n");

    fclose(file1);
    file1 = fopen("test1.txt", "r");
    
    if (file1) 
	{
    	printf("\nSequence 1 Reading Frame B:\n");
    	ab[0] = ' ';
    	printf("%c", ab[0] );
    	while ((ab[x] = getc(file1)) != EOF)
    	{	
    		printf("%c", ab[x]); 
    		x=x+1;
    	}
    }

    printf("\n=============================================================================================\n");

    fclose(file1);
    file1 = fopen("test1.txt", "r");
    
    if (file1) 
	{

    	printf("\nSequence 1 Reading Frame C:\n");
    	ac[0]=' ';
    	ac[1]=' ';
    	printf("%c", ac[0] );
    	printf("%c", ac[1] );
    	
    	while ((ac[y] = getc(file1)) != EOF)
    	{	
    		printf("%c", ac[y] ); 
    		y=y+1;
    	}
    }
    
    printf("\n=============================================================================================\n");

    if (file2) 
	{
    	printf("\nSequence 2:\n");
    	while ((b[j] = getc(file2)) != EOF)
    	{	
    		printf("%c", b[j] ); 
    		j=j+1;
    	}
    }
    
    printf("\n=============================================================================================\n");

    if(y>j)
    	{
    		l=j;
    	}
    else if (y<j)
    	{
    		l=y;
    	}
    else if (y==j)
        {
            l=y;
        }

    for (int k = 0; k <= l; k++)
    { 
    	if (aa[k]==b[k])
    		{
    			scoreA = scoreA + 1;
    		}
    	if (ab[k]==b[k])
    		{
    			scoreB = scoreB + 1;
    		}
    	if (ac[k]==b[k])
    		{
    			scoreC = scoreC + 1;
    		}

    }

    scoreT = scoreA + scoreB + scoreC;

    fclose(file1);
    fclose(file2);

    printf("\n\nScore for reading frame A: %d\nScore for reading frame B: %d\nScore for reading frame C: %d\n", scoreA,scoreB,scoreC);
    printf("\n");
    printf("\nScore: %d\n", scoreT);
    printf("\n");
    
    printf("\n=============================================================================================\n");

    printf("\n");

    }





