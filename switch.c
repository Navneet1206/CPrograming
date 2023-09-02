#include<stdio.h>

int main()
{
      float a,b;
      
      char ch;
      printf("Enter any number in a : ");
      scanf("%f",&a);
      printf("Your choise sign : ");
      scanf(" %c",&ch);    
      printf("Enter any number in b : ");
      scanf("%f",&b);

      switch (ch)
      {
      case '+': printf("sum=%f",a+b);
        
        break;
    
       case '-': printf("sub=%f",a-b);
        
        break;
    
         case '*': printf("multi=%f",a*b);
    
        break;
        
         case '/': printf("div=%f",a/b);
        
        break;
        

      default: printf("Wrong inpuur");
        break;
      }
    
    return 0;
}