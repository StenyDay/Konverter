#include <stdio.h>
#include <locale.h>

float distance(int from, int in,float value)
{
    setlocale (LC_ALL,"Rus");
    switch(from)
    {
        case 1: switch(in)
        {
            case 1: printf("%f\n",value);
            return value;
            break;
            case 2: value*=1000;
            printf("%f\n",value);
            return value;
            break;
            case 3: value*=10000;
            printf("%f\n",value);
            return value;
            break;
            case 4: value*=100000;
            printf("%f\n",value);
            return value;
            break;
            case 5: value*=1000000;
            printf("%f\n",value);
            return value;
            break;
            case 6: value*=3281;
            printf("%f\n",value);
            return value;
            break;
            case 7: value*=1094;
            printf("%f\n",value);
            return value;
            break;
        } break;

        case 2: switch(in)
        {
            case 1: value/=1000;
            printf("%f\n",value);
            return value;
            break;
            case 2: printf("%f\n",value);
            return value;
            break;
            case 3: value*=10;
            printf("%f\n",value);
            return value;
            break;
            case 4: value*=100;
            printf("%f\n",value);
            return value;
            break;
            case 5: value*=1000;
            printf("%f\n",value);
            return value;
            break;
            case 6: value*=3.281;
            printf("%f\n",value);
            return value;
            break;
            case 7: value*=1.094;
            printf("%f\n",value);
            return value;
            break;
        } break;

        case 3: switch(in)
        {
            case 1: value/=10000;
            printf("%f\n",value);
            return value;
            break;
            case 2: value/=10;
            printf("%f\n",value);
            return value;
            break;
            case 3: printf("%f\n",value);
            return value;
            break;
            case 4: value*=10;
            printf("%f\n",value);
            return value;
            break;
            case 5: value*=100;
            printf("%f\n",value);
            return value;
            break;
            case 6: value/=3.048;
            printf("%f\n",value);
            return value;
            break;
            case 7: value/=9.144;
            printf("%f\n",value);
            return value;
            break;
        }
        break;

        case 4: switch(in)
        {
            case 1: value/=100000;
            printf("%f\n",value);
            return value;
            break;
            case 2: value/=100;
            printf("%f\n",value);
            return value;
            break;
            case 3: value/=10;
            printf("%f\n",value);
            return value;
            break;
            case 4: printf("%f\n",value);
            return value;
            break;
            case 5: value*=10;
            printf("%f\n",value);
            return value;
            break;
            case 6: value/=30.48;
            printf("%f\n",value);
            return value;
            break;
            case 7: value/=91.44;
            printf("%f\n",value);
            return value;
            break;
        }
        break;

        case 5: switch(in)
        {
            case 1: value/=1000000;
            printf("%f\n",value);
            return value;
            break;
            case 2: value/=1000;
            printf("%f\n",value);
            return value;
            break;
            case 3: value/=100;
            printf("%f\n",value);
            return value;
            break;
            case 4: value/=10;
            printf("%f\n",value);
            return value;
            break;
            case 5: printf("%f\n",value);
            return value;
            break;
            case 6: value/=304.8;
            printf("%f\n",value);
            return value;
            break;
            case 7: value/=914.4;
            printf("%f\n",value);
            return value;
            break;
        }
        break;

        case 6: switch(in)
        {
            case 1: value/=3281;
            printf("%f\n",value);
            return value;
            break;
            case 2: value/=3.281;
            printf("%f\n",value);
            return value;
            break;
            case 3: value/=0.328;
            printf("%f\n",value);
            return value;
            break;
            case 4: value*=3048;
            printf("%f\n",value);
            return value;
            break;
            case 5: value*=304.8;
            printf("%f\n",value);
            return value;
            break;
            case 6: printf("%f\n",value);
            return value;
            break;
            case 7: value/=3;
            printf("%f\n",value);
            return value;
            break;
        }
        break;

        case 7: switch(in)
        {
            case 1: value/=1094;
            printf("%f\n",value);
            return value;
            break;
            case 2: value/=1.094;
            printf("%f\n",value);
            return value;
            break;
            case 3: value/=0.109;
            printf("%f\n",value);
            return value;
            break;
            case 4: value*=91.44;
            printf("%f\n",value);
            return value;
            break;
            case 5: value*=914.4;
            printf("%f\n",value);
            return value;
            break;
            case 6: value*=3;
            printf("%f\n",value);
            return value;
            break;
            case 7: printf("%f\n",value);
            return value;
            break;
        }
        break;
    }

}
