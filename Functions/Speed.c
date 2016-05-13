#include <stdio.h>
#include <locale.h>

float speed(int from, int in, float value){


    switch(from){
        case 1: switch(in){
            case 1: printf("%f\n",value);
            return value;
            break;
            case 2: value*=1000;
            printf("%f\n",value);
            return value;
            break;
            case 3: value*=3600;
            printf("%f\n",value);
            return value;
            break;
            case 4: value*=60000;
            printf("%f\n",value);
            return value;
            break;
        }
        case 2: switch (in){
            case 1:    value/=1000;
            printf("%f\n",value);
            return value;
            break;
            case 2: printf("%f\n",value);
            return value;
            break;
            case 3: value*=3.6;
            printf("%f\n",value);
            return value;
            break;
            case 4: value*=60;
            printf("%f\n",value);
            return value;
            break;
        }
        break;
        case 3: switch(in){
            case 1: value/=3600;
            printf("%.5f\n",value);
            return value;
            break;
            case 2: value*=0.2778;
            printf("%f\n",value);
            return value;
            break;
            case 3: printf("%f\n",value);
            return value;
            break;
            case 4: value*=16.67;
            printf("%f\n",value);
            return value;
            break;
        }
        break;
        case 4: switch(in){
            case 1: value/=60000;
            printf("%.6f\n",value);
            return value;
            break;
            case 2: value/=60;
            printf("%.5f\n",value);
            return value;
            break;
            case 3: value*=0.06;
            printf("%f\n",value);
            return value;
            break;
            case 4:printf("%f\n",value);
            return value;
            break;
        }
        break;
    }

}
