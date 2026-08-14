#include <stdio.h>

double celsiusToFahrenheit(double celcius)
{
    double fahrenheit;
    fahrenheit = 32+ celcius * (180.0/100.0);
    return fahrenheit;

}

double fahrenheitToCelcius(double fahrenheit)
{
    double celcius;
    celcius = (fahrenheit-32)*(100.0/180.0);
    return celcius;

}

void printFarenheit(double fahrenheit)
{
    printf("%.2lf f",fahrenheit);
}

void printCelcius(double celcius)
{
    printf("%.2lf c",celcius);
}


int main()
{
    double num;
    char temp;

    scanf("%lf %c",&num,&temp);

    if(temp == 'c' || temp == 'C')
    {
        printFarenheit(celsiusToFahrenheit(num));
    }

    else
    {
        printCelcius(fahrenheitToCelcius(num));
    }

    return 0;
}