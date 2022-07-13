#include <stdio.h>

int main()
{
  int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int *ptr;
  ptr = arr;
  int i;
  int evenadd = 0;
  
  for(i = 0; i < 10; i++){
	  if(ptr[i]%2==0){
		  evenadd=evenadd + ptr[i];
	  }
	  }
	  
	  {
		  printf("The sum of the even numbers is %d" , evenadd);
		  
	  }
  
  
 
  

}