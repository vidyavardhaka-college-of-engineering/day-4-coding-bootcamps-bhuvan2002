//Write a C program to get two rows and columns of integers from the user and print them in matrix fashion.

//Example:
//Input: 
//1 2 3 4
//Output: 
//1   2
//3   4

 #include<stdio.h> 
int main()
{
  //Declare all the variables[row, col, array a(2D array), i] used in the code
  int row,col,a[100][100],i , j;
   //Read the Value of row and coloumn of the matrix (i.e size of matrix) using scanf statement
   printf("Enter the number of rows");
   scanf("%d", &row);
    printf("Enter the number of columns");
   scanf("%d", &col);
  
   //Read the elements of matrix a using nested for loop and scanf statment
   for(i=0; i<row; i++) 
  {
      for(j=0;j<col;j++) 
      {
         
         scanf("%d", &a[i][j]);
      }
   }
  
   //Print the elements of matrix a using nested for loop and printf statment as per the above specified format
    printf("Two Dimensional array elements:\n");
   for(i=0; i<row; i++)
    {
      for(j=0;j<col;j++)
       {
         printf("%d ", a[i][j]);
         
      }
      printf("\n");

   }
  return 0;
 }
