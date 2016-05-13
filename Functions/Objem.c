#include <stdio.h>
#include <locale.h>

float objem(int from,int in, float value){



    switch(from){
        case 1: switch(in){
            case 1: printf("%f\n",value);
            return value;
            break;
            case 2: value*=1000;
            printf("%f\n",value);
            return value;
            break;
            case 3: value*=1000000;
            printf("%f\n",value);
            return value;
            break;
            case 4: value*=1000000000;
            printf("%f\n",value);
            return value;
            break;
            case 5: value*=1000;
            printf("%f\n",value);
            return value;
            break;
        }
        break;
        case 2: switch(in){
            case 1: value/=1000;
            printf("%f\n",value);
            return value;
            break;
            case 2: printf("%f\n",value);
            return value;
            break;
            case 3: value*=1000;
            printf("%f\n",value);
            return value;
            break;
            case 4: value*=1000000;
            printf("%f\n",value);
            return value;
            break;
            case 5: printf("%f\n",value);
            return value;
            break;
        }
        break;
        case 3: switch (in){
            case 1: value/=1000000;
            printf("%f\n",value);
            return value;
            break;
            case 2: value/=1000;
            printf("%f\n",value);
            return value;
            break;
            case 3: printf("%f\n",value);
            return value;
            break;
            case 4: value*=1000;
            printf("%f\n",value);
            return value;
            break;
            case 5: value/=1000;
            printf("%f\n",value);
            return value;
            break;
        }
        break;
        case 4:    switch(in){
            case 1: value/=1000000000;
            printf("%.5f\n",value);
            return value;
            break;
            case 2: value/=1000000;
            printf("%f\n",value);
            return value;
            break;
            case 3: value/=1000;
            printf("%f\n",value);
            return value;
            break;
            case 4: printf("%f\n",value);
            return value;
            break;
            case 5: value/=1000000;
            printf("%f\n",value);
            return value;
            break;
        }
        break;
        case 5: switch(in){
            case 1: value/=1000;
            printf("%f\n",value);
            return value;
            break;
            case 2: printf("%f\n",value);
            return value;
            break;
            case 3: value*=1000;
            printf("%f\n",value);
            return value;
            break;
            case 4: value*=1000000;
            printf("%f\n",value);
            return value;
            break;
            case 5: printf("%f\n",value);
            return value;
            break;
        }
        break;
    }

}
