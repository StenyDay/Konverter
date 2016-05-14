#include <stdio.h>
#include <locale.h>


float vess(int from, int in,float value)
{
    setlocale (LC_ALL,"Rus");

    switch(from)
    {
        case 1: switch(in)
        {
            case 1: printf("%f\n",value);
            return value;
            break;
            case 2: value/=1000;
            printf("%f\n",value);
            return value;
            break;
            case 3: value/=1000000;
            printf("%f\n",value);
            return value;
            break;
            case 4: value/=100000000;
            printf("%f\n",value);
            return value;
            break;
            case 5: value/=1000000000;
            printf("%f\n",value);
            return value;
            break;
            case 6: value/=200;
            printf("%f\n",value);
            return value;
            break;
            case 7: value/=409500;
            printf("%f\n",value);
            return value;
            break;
            case 8: value/=453600;
            printf("%f\n",value);
            return value;
            break;
            case 9: value/=16380000;
            printf("%f\n",value);
            return value;
            break;
            case 10:value/=28350;
            printf("%.4f\n",value);
            return value;
            break;

        }
        break;
        case 2: switch(in)
        {
            case 1: value*=1000;
            printf("%f\n",value);
            return value;
            break;
            case 2: printf("%15.3f\n",value);
            return value;
            break;
            case 3: value/=1000;
            printf("%f\n",value);
            return value;
            break;
            case 4: value/=100000;
            printf("%f\n",value);
            return value;
            break;
            case 5: value/=1000000;
            printf("%f\n",value);
            return value;
            break;
            case 6: value*=5;
            printf("%f\n",value);
            return value;
            break;
            case 7: value/=409.5;
            printf("%f\n",value);
            return value;
            break;
            case 8: value/=453.6;
            printf("%f\n",value);
            return value;
            break;
            case 9: value/=16380;
            printf("%f\n",value);
            return value;
            break;
            case 10:value/=28.35;
            printf("%f\n",value);
            return value;
            break;

        }
        break;
        case 3: switch(in)
        {
            case 1: value*=1000000;
            printf("%15.3f\n",value);
            return value;
            break;
            case 2: value*=1000;
            printf("%f\n",value);
            return value;
            break;
            case 3: printf("%f\n",value);
            return value;
            break;
            case 4: value/=100;
            printf("%f\n",value);
            return value;
            break;
            case 5: value/=1000;
            printf("%f\n",value);
            return value;
            break;
            case 6: value*=5000;
            printf("%f\n",value);
            return value;
            break;
            case 7: value*=2.442;
            printf("%f\n",value);
            return value;
            break;
            case 8: value*=2.205;
            printf("%f\n",value);
            return value;
            break;
            case 9: value/=16.38;
            printf("%f\n",value);
            return value;
            break;
            case 10: value/=35.27;
            printf("%f\n",value);
            return value;
            break;


        }
        break;
        case 4: switch(in)
        {
            case 1: value*=100000000;
            printf("%f\n",value);
            return value;
            break;
            case 2: value*=100000;
            printf("%f\n",value);
            return value;
            break;
            case 3: value*=100;
            printf("%f\n",value);
            return value;
            break;
            case 4: printf("%f\n",value);
            return value;
            break;
            case 5: value/=10;
            printf("%f\n",value);
            return value;
            break;
            case 6: value*=500000;
            printf("%f\n",value);
            return value;
            break;
            case 7: value*=244.2;
            printf("%f\n",value);
            return value;
            break;
            case 8: value*=220.5;
            printf("%f\n",value);
            return value;
            break;
            case 9: value*=6.105;
            printf("%f\n",value);
            return value;
            break;
            case 10: value*=3527;
            printf("f\n",value);
            return value;
            break;


        }
        break;
        case 5: switch(in)
        {
            case 1: value*=1000000000;
            printf("%f\n",value);
            return value;
            break;
            case 2: value*=1000000;
            printf("%f\n",value);
            return value;
            break;
            case 3: value*=1000;
            printf("%f\n",value);
            return value;
            break;
            case 4: value*=10;
            printf("%f\n",value);
            return value;
            break;
            case 5: printf("%f\n",value);
            return value;
            break;
            case 6: value*=500000;
            printf("%f\n",value);
            return value;
            break;
            case 7: value*=2442;
            printf("%f\n",value);
            return value;
            break;
            case 8: value*=2205;
            printf("%f\n",value);
            return value;
            break;
            case 9: value*=61.05;
            printf("%f\n",value);
            return value;
            break;
            case 10: value*=35270;
            printf("%f\n",value);
            return value;
            break;

        }
        break;
        case 6: switch(in)
        {
            case 1: value*=200;
            printf("%f\n",value);
            return value;
            break;
            case 2: value/=5;
            printf("%f\n",value);
            return value;
            break;
            case 3: value/=5000;
            printf("%f\n",value);
            return value;
            break;
            case 4: value/=500000;
            printf("%f\n",value);
            return value;
            break;
            case 5: value/=5000000;
            printf("%f\n",value);
            return value;
            break;
            case 6: printf("%f\n",value);
            return value;
            break;
            case 7: value/=2048;
            printf("%f\n",value);
            return value;
            break;
            case 8: value/=2268;
            printf("%f\n",value);
            return value;
            break;
            case 9: value/=81900;
            printf("%f\n",value);
            return value;
            break;
            case 10: value/=147.7;
            printf("%f\n",value);
            return value;
            break;

        }
        break;
        case 7: switch(in)
        {
            case 1: value*=409500;
            printf("%f\n",value);
            return value;
            break;
            case 2: value*=409.5;
            printf("%f\n",value);
            return value;
            break;
            case 3: value/=2.442;
            printf("%f\n",value);
            return value;
            break;
            case 4: value/=244.2;
            printf("%f\n",value);
            return value;
            break;
            case 5: value/=2442;
            printf("%f\n",value);
            return value;
            break;
            case 6: value*=2048;
            printf("%f\n",value);
            return value;
            break;
            case 7: printf("%f\n",value);
            return value;
            break;
            case 8: value/=1.108;
            printf("%f\n",value);
            return value;
            break;
            case 9: value/=40;
            printf("%f\n",value);
            return value;
            break;
            case 10:value*=14.45;
            printf("%f\n",value);
            return value;
            break;

        }
        break;
        case 8: switch(in)
        {
            case 1: value*=453600;
            printf("%f\n",value);
            return value;
            break;
            case 2: value*=453.6;
            printf("%f\n",value);
            return value;
            break;
            case 3: value/=2.205;
            printf("%f\n",value);
            return value;
            break;
            case 4: value/=2205;
            printf("%f\n",value);
            return value;
            break;
            case 5: value/=2205;
            printf("%f\n",value);
            return value;
            break;
            case 6: value*=2268;
            printf("%f\n",value);
            return value;
            break;
            case 7: value*=1.108;
            printf("%f\n",value);
            return value;
            break;
            case 8: printf("%f\n",value);
            return value;
            break;
            case 9: value/=36.11;
            printf("%f\n",value);
            return value;
            break;
            case 10: value*=16;
            printf("%f\n",value);
            return value;
            break;

        }
        break;
        case 9: switch(in)
        {
            case 1: value*=16380000;
            printf("%f\n",value);
            return value;
            break;
            case 2: value*=13680;
            printf("%f\n",value);
            return value;
            break;
            case 3: value*=16.38;
            printf("%f\n",value);
            return value;
            break;
            case 4: value*=0.164;
            printf("%f\n",value);
            return value;
            break;
            case 5: value*=0.0164;
            printf("%f\n",value);
            return value;
            break;
            case 6: value*=81900;
            printf("%f\n",value);
            return value;
            break;
            case 7: value*=40;
            printf("%f\n",value);
            return value;
            break;
            case 8: value*=36.11;
            printf("%f\n",value);
            return value;
            break;
            case 9: printf("%f\n",value);
            return value;
            break;
            case 10: value*=577.8;
            printf("%f\n",value);
            return value;
            break;

        }
        break;
        case 10: switch(in)

        {
            case 1: value*=28350;
            printf("%f\n",value);
            return value;
            break;
            case 2: value*=28.35;
            printf("%f\n",value);
            return value;
            break;
            case 3: value*=0.0283;
            printf("%f\n",value);
            return value;
            break;
            case 4: value/=3527;
            printf("%f\n",value);
            return value;
            break;
            case 5: value/=35270;
            printf("%f\n",value);
            return value;
            break;
            case 6: value*=141.7;
            printf("%f\n",value);
            return value;
            break;
            case 7: value*=0.0692;
            printf("%f\n",value);
            return value;
            break;
            case 8: value*=0.0625;
            printf("%f\n",value);
            return value;
            break;
            case 9: value*=0.00173;
            printf("%f\n",value);
            return value;
            break;
            case 10: printf("%f\n",value);
            return value;
            break;

        }
        break;
    }

}
