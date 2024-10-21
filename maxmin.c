#include<stdio.h>
#include<conio.h>

int main()
{
    int num1,num2,num3,max,min;
    printf("Enter three numbers");
    scanf("%d %d %d",&num1,&num2, &num3);
    max= num1;
    min=num1;
    //maximum
    if(num2>max)
    {
        max=num2;
    }
    else if (num3>max)
    {
        max=num3;
    }
   //minum
    if(num2<min)
    {
        min=num2;
    }
    else if (num3<min)
    {
        min=num3;
    }
   /*if(num1>num2)
    {
      if(num1>num3)
      {
        max=num1;
      }
      else
      {
        max=num3;
      }
    }

else{
    max=num2;
}

  if(num1<num2)
    {
      if(num1<num3)
      {
        min=num1;
      }
      else
      {
        min=num3;
      }
    }

else{
    min=num2;
}*/
printf("The max number is= %d \n ",max);
printf("The min number is= %d",min);
getch();
return 0;
}