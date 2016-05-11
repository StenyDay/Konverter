#include <stdio.h>
#include <locale.h>

void time(int from, int in, float value){


    switch(from){
        case 1: switch(in){
            case 1: printf("%f\n",value);
            return value;
            break;
            case 2: value*=52;
            printf("%f\n",value);
            return value;
            break;
            case 3: value*=365;
            printf("%f\n",value);
            return value;
            break;
            case 4: value*=8766;
            printf("%f\n",value);
            return value;
            break;
            case 5: value*=526000;
            printf("%f\n",value);
            return value;
            break;
            case 6: value*=31560000;
            printf("%f\n",value);
            return value;
            break;
        }
        break;
        case 2: switch(in){
            case 1: value/=52;
            printf("%f\n",value);
            return value;
            break;
            case 2: printf("%f\n",value);
            return value;
            break;
            case 3: value*=7;
            printf("%f\n",value);
            return value;
            break;
            case 4: value*=168;
            printf("%f\n",value);
            return value;
            break;
            case 5: value*=10080;
            printf("%f\n",value);
            return value;
            break;
            case 6: value*604800;
            printf("%f\n",value);
            return value;
            break;
        }
        break;
        case 3: switch(in){
            case 1:value/=365;
            printf("%f\n",value);
            return value;
            break;
            case 2: value/=7;
            printf("%f\n",value);
            return value;
            break;
            case 3: printf("%f\n",value);
            return value;
            break;
            case 4: value*=24;
            printf("%f\n",value);
            return value;
            break;
            case 5: value*=168;
            printf("%f\n",value);
            return value;
            break;
            case 6: value*=10080;
            printf("%f\n",value);
            return value;
            break;
        }
        break;
        case 4: switch (in){
            case 1: value/=8760;
            printf("%f\n",value);
            return value;
            break;
            case 2: value/=168;
            printf("%f\n",value);
            return value;
            break;
            case 3: value/=24;
            printf("%f\n",value);
            return value;
            break;
            case 4: printf("%f\n",value);
            return value;
            break;
            case 5: value*=60;
            printf("%f\n",value);
            return value;
            break;
            case 6: value*=3600;
            printf("%f\n",value);
            return value;
            break;
        }
        break;
        case 5: switch(in){
            case 1: value/=526000;
            printf("%f\n",value);
            return value;
            break;
            case 2: value/=10080;
            printf("%f\n",value);
            return value;
            break;
            case 3: value/=1440;
            printf("%f\n",value);
            return value;
            break;
            case 4: value/=60;
            printf("%f\n",value);
            return value;
            break;
            case 5: printf("%f\n",value);
            return value;
            break;
            case 6: value*=60;
            printf("%f\n",value);
            return value;
            break;
        }
        break;
        case 6: switch(in){
            case 1: value/=31560000;
            printf("%f\n",value);
            return value;
            break;
            case 2: value/=604800;
            printf("%f\n",value);
            return value;
            break;
            case 3: value/=86400;
            printf("%f\n",value);
            return value;
            break;
            case 4: value/=3600;
            printf("%f\n",value);
            return value;
            break;
            case 5: value/=60;
            printf("%f\n",value);
            return value;
            break;
            case 6: printf("%f\n",value);
            return value;
            break;
        }
        break;
    }

}
