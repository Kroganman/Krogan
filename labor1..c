#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char opr;
    float temp, kelvin, celsius, far;
    if(argc==2) 
    {
        opr=0;
    }
        else
        {
            opr=*argv[2];
        }
    temp=atof(argv[1]);
    if(argc<4)
    {
      switch (opr)
      {
        case 'K': 
        case 'k':
          if(temp>0)
          {
             kelvin=temp;
             far=1.8*(kelvin - 273.15) + 32;
             celsius=kelvin -273.15;
             printf("F: %.2f\nC: %.2f", far, celsius);
          }
          else
             printf("Not lower than absolute zero!");
          break;
        case 'C': 
        case 'c':
          if(temp>-273)
          {
             celsius=temp;
             kelvin=celsius+273.15;
             far=1.8* celsius + 32;
             printf("F: %.2f\nK: %.2f", far, kelvin);
          }
          else
             printf("Not lower than absolute zero!");
          break;
        case 'F': /* Shkala Farengeita */
        case 'f':
          if(temp>-459)
          {
             far=temp;
             celsius=5 * (far-32) / 9;
             kelvin=(5 * (far-32) / 9) +273.15;
             printf("K: %.2f\nC: %.2f", kelvin, celsius);
          }
          else
             printf("Not lower than absolute zero!");
          break;
        default: /* Shkala ne ykazana */
          kelvin=temp;
          if(kelvin>0)
          {
             far=1.8*(kelvin - 273.15) + 32;
             celsius=kelvin -273.15;
             printf("K: %.2f\nF: %f\nC: %.2f\n\n",kelvin, far, celsius);
          }
          else
             printf("Not lower than absolute zero!\n\n");
          celsius=temp;
          if(celsius>-273)
          {
             kelvin=celsius+273.15;
             far=1.8* celsius + 32;
             printf("C: %.2f\nF: %.2f\nK: %.2f\n\n",celsius, far, kelvin);
          }
          else
             printf("Not lower than absolute zero!\n\n");
          far=temp;
          if(far>-459)
          {
             celsius=5 * (far-32) / 9;
             kelvin=(5 * (far-32) / 9) +273.15;
             printf("F: %.2f\nK: %.2f\nC: %.2f",far, kelvin, celsius);
          }
          else
             printf("Not lower than absolute zero!");

      }
    }
    else
        printf("Error!");
    return 0;
}
