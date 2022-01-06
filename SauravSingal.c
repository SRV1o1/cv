#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

//////For menu
void instructions();
///////Main operations
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void power();
void factorial();
void natural();
void ascii();
void lcm();
void gcd();
/////Additional game
void game();
////Additional Functions
void encrypt();
void decrypt();
void table();


int main()
{
int x = 1;
char get;
instructions();

     while(x == 1)
    {
        printf("\n");
        fflush(stdin);
        printf("Enter operation: ");
        scanf("%c", &get);

        switch(get)
        {
            //To remove \n when taking input.
            case '\n':
                      break;
            ////////////////////////////////
            case '+': addition();
                      break;
            case '-': subtraction();
                      break;
            case '*': multiplication();
                      break;
            case '/': division();
                      break;
            case '%': modulus();
                      break;
            case '!': factorial();
                      break;
            case '^': power();
                      break;
            case '#': natural();
                      break;
            case '@': ascii();
                      break;
            case '&': gcd();
                      break;
            case 'g':
            case 'G': game();
                      break;
            case '$': lcm();
                      break;
            case 'Q':
            ///////To exit
            case 'q': exit(0);
                      break;
            //////////////////////////         
            case 'c':
            case 'C': system("cls");
                      instructions();
                      break;
            case 't':
            case 'T': encrypt();
                      break;   

            case 'y':
            case 'Y': decrypt();                    
                      break;
            case 'v':
            case 'V': table();
                      break;          
                  


            default : system("cls");
                      printf("^^^^^^^^^^^^^^error^^^^^^^^^^^^^");
                      printf("\n**********You entered***********\n");
                      printf("\n*********invalid option***************\n\n\n");
                      instructions();
             }
    }
}
/////End of main//////

void instructions()
{
printf("\n################################   C PROJECT - CALCULATOR      ################################## \n");
printf("################################         BY  SAURAV            ################################## \n\n");
printf("*************************************************************************************************\n");
printf("*************************************************************************************************\n");
printf("\n");

    printf("Enter 'c' to clear the screen and                           Press 'q' to quit the program *******\n");
    printf("display options. \n\n");

    printf("Enter + symbol for Addition                                 Enter - symbol for Subtraction           \n");
    printf("Enter * symbol for Multiplication                           Enter / symbol for Division              \n");
    printf("Enter ? symbol for Modulus                                  Enter ^ symbol for Power                 \n");
    printf("Enter ! symbol for Factorial                                Enter # symbol for Sum of natural numbers\n");
    printf("Enter & symbol for GCD of two numbers                       Enter $ symbol for LCM of two numbers    \n");
    printf("Enter t letter for Encryption                               Enter y letter for Decryption            \n");
    printf("Enter @ symbol for Ascii value of a letter                  Enter v letter for multiplication table  \n");
    printf("Enter g for surprise Game!!!!!!\n");
}



void addition()
{
    int number = 0,a, n, sum=0;
    printf("How many numbers to add?\n");
if(scanf("%d", &a) == 1)  
    { 
      printf("\nEnter numbers one after another.\n");
    while(number < a)
                {
           if(scanf("%d", &n)==1){
            sum = sum +n;
            number++;
                 }
            else{
                printf("Invalid number.");
                break;
            }
                }
        printf("Total is %d", sum);
                 
    }
    else {
        printf("invalid number.");
    } 
}



void subtraction()
{
       int number, a=0 , n, sum=0;
    printf("Enter first number: \n");
    if (scanf("%d", &number)==1){
    printf("Enter second number: \n");
            if(scanf("%d", &n)==1){
            sum = number - n;
            printf("Result is %d\n",sum);
            }
            else{
                printf("Invalid number.");
                return;
            }
    }
    

    else{
        printf("invalid number.");
    }
}



void multiplication()
{
    float a, b;
    float mul;
    printf("\nPlease enter first number: ");
    if(scanf("%f", &a)==1){
    printf("Please enter second number: ");
    if(scanf("%f", &b)==1){
    mul = a*b;
    printf("\n%.2f X %.2f = %.3f\n",a,b,mul);}
    else{
          printf("Invalid input.");
          }      
         }
     else{
          printf("Invalid input.");}    
}

void division()
{
    float a, b, d=0;
    printf("\nPlease enter first number  : ");
    if(scanf("%f", &a)==1){
    printf("Please enter second number : ");
    if(scanf("%f", &b)==1){
    d= a/b;
    printf("\n %.2f divided by %.2f = %.3f\n",a,b,d);}
    else{
          printf("Invalid input.");}
    }
    else{
          printf("Invalid input.");
    }
}

void modulus()
{
    int a, b, d=0;
    printf("\nPlease enter first number   : ");
    if(scanf("%d", &a)==1){
    printf("Please enter second number  : ");
    if(scanf("%d", &b)==1)
      {
       d=a%b;
       printf(" %d %% %d  = %d\n", a, b, d);
      }
      else{
          printf("Invalid input.");
      }}
      else{
          printf("Invalid input.");
      }
}



void power()
{
    float a,num, p;
    printf("\nEnter two numbers to find the power \n");
    printf("number: ");
    if(scanf("%f",&a)== 1)
    {
    printf("power : ");
    if(scanf("%f",&num)==1){
    p=pow(a,num);
    printf("\n%.2f to the power %.2f = %.3f \n",a,num,p);}
    else{printf("Invalid input");}
    }
    else{
        printf("Invalid value.");
    }
}




void factorial()
{
    int i,fact=1,num;

    printf("\nEnter a number to find factorial : ");
   if (scanf("%d",&num) == 1){
    if (num<0)
    {
        printf("\nPlease enter a positive number to");
        printf(" find factorial and try again. \n");
        printf("\nFactorial can't be found for negative");
        printf(" values. It can be only positive or 0  \n");
    }

    for(i=1;i<=num;i++)
    fact=fact*i;
    printf("Factorial of entered number %d is: %d\n",num,fact);}
    else{
        printf("Invalid number.");
    }
}


void natural(){

    int a;
    int sum;
    printf("What is n?\n");
    if(scanf("%d", &a)==1){
        if (a<0)
    {
        printf("\nPlease enter a positive number to");
        printf(" find its sum. \n");
        printf("It can be only positive.  \n");
    }
    for(int i = 0; i <= a; i++)
   {
       sum = sum + i;
   }
    printf("sum of N numbers is %d", sum);
    }
    else{
        printf("invalid value.");
    }
}



void ascii(){
   char c; char temp;
   printf("NOTICE: only write a letter!!!!\n\n");
   printf("Enter single letter:  ");
   scanf("%c",&temp);
   scanf("%c", &c);

   printf("%c ascci value is %d.",c,c);
}





void game (){   srand(time(0));
    int random = rand()%100+1;
int guess, number = 0;
do{
    printf("guess the number generated which is between 1 - 100?    ****type 000 to exit.****\n");
     if(scanf("%d", &guess)==1){
     if ( guess > random)
     {
        printf("go lower\n\n");
        fflush(stdin);
     }
     else if(guess == 000){
         return;
     }
     else{
        printf("go higher\n\n");
        fflush(stdin);
     }
     number++;}
     else{
        printf("invalid number.");
        break;
     }
}while( guess != random);
        printf("found, the number of attempts was %d\n", number);
}


void lcm(){
int a,b,c;
    printf("\nPlease enter first number: ");
    if(scanf("%d", &a)==1){
        printf("Please enter second number: ");
    if(scanf("%d", &b)==1){
       for(c = 1; c<=a*b;c++){
        if(c%a==0 && c%b==0)
        break;}
        printf("LCM of %d and %d = %d",a,b,c);
    }
     else{
        printf("Invalid input.");
    }
    }
    else{
        printf("Invalid input.");
    }
}


void gcd()
{
     int a,b,gcd;

    printf("\nPlease enter first number: ");
    if(scanf("%d", &a)==1){
       printf("Please enter second number: ");
      if(scanf("%d", &b)==1){
        for(int i=1; i <= a && i <= b; ++i)
          {
          //// Checks if i is factor of both integers
        if(a%i==0 && b%i==0)
            gcd = i;
         }
    printf("G.C.D of %d and %d is %d", a,b, gcd);}
     else{
        printf("Invalid input.");
    }
    }
     else{
        printf("Invalid input.");
    }

}


void encrypt()
    {
 char arr[50];
       int j = 0;
       printf("\nEnter string: ");
        fflush(stdin);
       gets(arr);
       int t = strlen(arr);
     for(int i = 0; i < t;i++)
     {
         arr[i] = arr[i]+1;
     }
     printf("Encrypted code is: ");
     for(int i = 0; i < t; i++)
     {
     printf("%c", arr[i]);
     }
    
    }

void decrypt()
    {
 char arr[50];
       int j = 0;
       printf("\nEnter string: ");
        fflush(stdin);
       gets(arr);
       int t = strlen(arr);
     for(int i = 0; i < t;i++)
     {
         arr[i] = arr[i]-1;
     }
     printf("Decrypted code is: ");
     for(int i = 0; i < t; i++)
     {
     printf("%c", arr[i]);
     }
    
    }


void table(){
        int n, i;
    printf("Enter an integer: ");
    if(scanf("%d", &n)==1){
        for (i = 1; i <= 10; ++i) {
        printf("%d * %d = %d \n", n, i, n * i);
             }
         }
    else{
        printf("Invalid value.");
    }
}



