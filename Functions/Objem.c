#include <stdio.h>
#include <locale.h>
  
void objem(int m,int l, float x){
	
	
		
	switch(m){
	case 1: switch(l){
		case 1: printf("%f",x);break;
		case 2: x*=1000;
			printf("%f",x);break;
		case 3: x*=1000000;
			printf("%f",x);break;
		case 4: x*=1000000000;
			printf("%f",x);break;
		case 5: x*=1000;
			printf("%f",x);break;
}
		break;
	case 2: switch(l){
		case 1: x/=1000;
			printf("%f",x);break;
		case 2: printf("%f",x);break;
		case 3: x*=1000;
			printf("%f",x);break;
		case 4: x*=1000000;
			printf("%f",x);break;
		case 5:	printf("%f",x);break;
		}
		break;
	case 3: switch (l){
		case 1: x/=1000000;
			printf("%f",x);break;
		case 2: x/=1000;
			printf("%f",x);break;
		case 3: printf("%f",x);break;
		case 4: x*=1000;
			printf("%f",x);break;
		case 5: x/=1000;
			printf("%f",x);break;
	} 
	break;
	case 4:	switch(l){
		case 1: x/1000000000;
			printf("%f",x);break;
		case 2: x/1000000;
			printf("%f",x);break;
		case 3: x/1000;
			printf("%f",x);break;
		case 4: printf("%f",x);break;
		case 5: x/=1000000;
			printf("%f",x);break;
	}
	break;
	case 5: switch(l){
		case 1: x/=1000;
			printf("%f",x);break;
		case 2: printf("%f",x);break;
		case 3: x*=1000;
			printf("%f",x);break;
		case 4: x*=1000000;
		case 5: printf("%f",x);break;
	}
	break;
		}
break;
}
