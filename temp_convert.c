#include<stdio.h>
#include<ctype.h>

int  main(){


    char unit;
    float temp;

    printf("\nIs the temperature in (F) or (C)? : ");
    fflush(stdout);
    scanf("%c",&unit);
    unit = toupper(unit); 

    if(unit == 'C')
    {
        printf("\nEnter the temp in Celsius: ");
        fflush(stdout);
        scanf("%f" , &temp);
        temp = (temp *9 /5) + 32;
        printf("\n The temp in Fahrenheit is : %.1f",temp);


    }

    else if(unit=='F')
    {
        printf("Enter the temp in Fahrenheit: ");
        fflush(stdout);
        scanf("%f",temp);
        temp =((temp-32) *5) /9 ;
        printf("\nThe temp in Celsius is: %.1f",temp);

    }

    else
    {

        printf("\n %C is not a valid unit of measurment!",unit);
    }











    return 0;
}
