#include <stdio.h>
#include <locale.h>
  
void speed(int m, int l, float x){
	
		
	switch(m){
	case 1: switch(l){
		case 1: printf("%f\n",x);break;
		case 2: x*=1000;
			printf("%f\n",x);break;
		case 3: x*=3600;
			printf("%f\n",x);break;
		case 4: x*=60000;
			printf("%f\n",x);break;
	}
	case 2: switch (l){
		case 1:	x/=1000;
			printf("%f\n",x);break;
		case 2: printf("%f\n",x);break;
		case 3: x*=3.6;
			printf("%f\n",x);break;
		case 4: x*=60;
			printf("%f\n",x);break;
	}	
	break;
	case 3: switch(l){
		case 1: x/=3600;
			printf("%f\n",x);break;
		case 2: x*=0.2778;
			printf("%f\n",x);break;
		case 3: printf("%f\n",x);break;
		case 4: x*=16.67;
			printf("%f\n",x);break;
	}
	break;
	case 4: switch(l){
		case 1: x/=60000;
			printf("%f\n",x);break;
		case 2: x/=60;
			printf("%f\n",x);break;
		case 3: x*=0.06;
			printf("%f\n",x);break;
		case 4:printf("%f\n",x);break;
		}
		break;
  }

}
