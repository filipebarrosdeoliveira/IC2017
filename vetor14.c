#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[20] = {1,0,3,0,0,0,5,0,6,0} , i ,aux;

       for(i = 0 ; i < 10 ; i++)
        {

             if(a[i] == 0)
              {
                     aux = a[i];
                     a[i] = a[i+1];
                     a[i+1] = aux;  

              }


        }

      for(i = 0 ; i < 10; i++)
       {
             printf("\n %d \n ",a[i]);
       }
}
