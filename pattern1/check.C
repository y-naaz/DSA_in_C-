#include<stdio.h>
int main(){
  int a;
  char ch;

  printf("Enter your age : \n");
  scanf("%d",&a);
  printf("Enter your gender like M for male and F for female: ");
  scanf("%c",&ch);
  if((a>=20) && (ch=='M'|| ch=='F'))
  {
    printf("ELIGIBLE");
    }
  else {printf("NOT ELIGIBLE");}
   return 0;
}

 