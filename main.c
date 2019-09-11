/*write a program to print even index even numbers and odd index odd numbers*/
#include<stdio.h>
int fun1(int arr[]);
int main(void)
{
 int arr[]={10,7,5,4},i;
 printf("The given array numbers:");
 for(i=0;i<4;i++)
        printf("%d\n",arr[i]);
 fun1(arr);
 return 0;

}
int fun1(int arr[])
{
 int i;
 for(i=0;i<4;i++)
 {
     //10  7 5 4
  if(arr[i]%2==0)

      arr[i]=arr[i];

  else
    arr[i]=arr[i+1];

 }
 printf("The Array values:\n");
 for(i=0;i<4;i++){
printf("%d\n",arr[i]);
 }
}
