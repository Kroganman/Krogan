#include <stdio.h>

int main()
{
    char probel,opr;
    int temp;
    float kelvin, celcius, far;
    scanf("%d%c%c", &temp,&probel,&opr);
    switch (opr)
    {
      case 'K':
        kelvin=temp;
        far=1.8*(kelvin - 273.15) + 32;
        celcius=kelvin -273.15;
        printf("F: %.2f\nC: %.2f", far, celcius);
        break;
      case 'C':
        celcius=temp;
        kelvin=celcius+273.15;
        far=1.8* celcius + 32;
        printf("F: %.2f\nK: %.2f", far, kelvin);
        break;
      case 'F':
        far=temp;
        celcius=5 * (far-32) / 9;
        kelvin=(5 * (far-32) / 9) +273.15;
        printf("K: %.2f\nC: %.2f", kelvin, celcius);
        break;
      default:
        kelvin=temp;
        far=1.8*(kelvin - 273.15) + 32;
        celcius=kelvin -273.15;
        printf("K: %.2f\nF: %f\nC: %.2f\n\n",kelvin, far, celcius);
        celcius=temp;
        kelvin=celcius+273.15;
        far=1.8* celcius + 32;
        printf("C: %.2f\nF: %.2f\nK: %.2f\n\n",celcius, far, kelvin);
        far=temp;
        celcius=5 * (far-32) / 9;
        kelvin=(5 * (far-32) / 9) +273.15;
        printf("F: %.2f\nK: %.2f\nC: %.2f",far, kelvin, celcius);


    }
}

