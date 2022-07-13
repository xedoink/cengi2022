#include <stdio.h>

int main()
{
  int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int *ptr;
  ptr = arr;
  int i;
  
  int arraylength = sizeof(ptr)/sizeof(ptr[0]);
  
  for(i = arraylength - 1; i >= 0; i--){
	  printf("The reversed array is %d" , ptr);

}
}