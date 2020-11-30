/* 
  *********************************************
  * C Program to Display
  * Odd and Even Numbers 
  * between 1 and 30 or specified end number
  * Author: Simeon Adedokun
  * Date: May 14, 2020
  * Email: ayoade@simdols.com
  * Website: https://educlancy.blogspot.com
  ********************************************
*/

#include<stdio.h>

void main()
{

 int i,end_number;

 end_number = 30;//specific end number
 
 //Display Even Numbers
 printf("\n Even Numbers:\n ");
 i = 2;//initial even number
 while(i<=end_number)
 {
  printf(" %d",i);
  i = i + 2;//increment i by 2
 }

 //Display Odd Numbers
 printf("\n\n Odd Numbers:\n ");
 i=1;//initial odd number
 while(i <= end_number)
 {
  printf(" %d",i);
  i = i + 2;//increment i by 2
 }
 getchar();
}