//Brianna Hill bhill28@student.gsu.edu
#include<stdio.h>
#include<stdlib.h>

// to return nothing
// also regards three arguements:  x for size, pointer array, id for ascending or descending order
void sort_numeric(int x, double* ptr, char id)
{
    
    // declare variable
    double temp;
    
    // Sort the numbers using pointers
    int i;
 for(i=0; i<x; i++)
    {
        
        // loop
        int o;
for(o=i+1; o<x; o++)
        {
        
        // Ascending order id
if(id == 'A' || id == 'a')
            {
                
                // to review if previous number is greater than next
if(*(ptr+o) < *(ptr+i))
                {
                
                // switch using temp    
 temp = *(ptr+i);   
                    *(ptr + i) = *(ptr + o);
                    *(ptr + o) = temp;
                }
            }
            
            // Descending order id
 
 else if(id == 'D' || id == 'd')
            {
                
                // recheck if next number is less than previous
if(*(ptr+o) > *(ptr+i))
                {
                
                // switch using temp
 temp = *(ptr+i);   
                    *(ptr + i) = *(ptr + o);
                    *(ptr + o) = temp;
                }
             
   
            }
        }
    }
}

// main
int main()
{

    // pointer
 double *ptr;

        double arr[] = { 10, 0.25, -2342, 12123, 3.145435, 6, 6, 5.999, -2, -5, -109.56 };


        // elements in array
       int x = sizeof(arr)/sizeof(arr[0]);

    // allocate dynamic memory to pointer using malloc  
        ptr = (double*) malloc(x * sizeof(double));


        //now  assign arr to ptr
        ptr = arr;


        // char variable set to id
                char id;
         // prompt for user inputer chose:  Ascending or Descending
printf("sort in Ascending order 'A' or 'a'\nsort in Descending order 'D' or 'd'\nEnter : ");
        scanf("%c", &id);


    // if valid choice 
 if(id == 'A' || id == 'a' || id == 'D' || id == 'd')
    {


        // to call function,
       sort_numeric(x, ptr, id);


       // print/display  array after sort
       // print message
printf("Sorted array : \n");
        int i2;
        for(i2=0; i2<x; i2++)
        {
            printf("%g ", *(arr + i2));
        }
    }
    else
{
        printf("Invalid choice !!");
    }

        return 0;
}

