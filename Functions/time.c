#include <stdio.h>
#include <locale.h>
  
void time(int m, int l, float x){
	
		
	switch(m){
	case 1: switch(l){
		case 1: printf("%f",x);break;
		case 2: x*=52;
			printf("%f",x);break;
		case 3: x*=365;
			printf("%f",x);break;
		case 4: x*=8766;
			printf("%f",x);break;
		case 5: x*=526000;
			printf("%f",x);break;
		case 6: x*=31560000;
			printf("%f",x);break;
	}
	break;
	case 2: switch(l){
		case 1: x/=52;
			printf("%f",x);break;
		case 2: printf("%f",x);break;
		case 3: x*=7;
			printf("%f",x);break;
		case 4: x*=168;
			printf("%f",x);break;
		case 5: x*=10080;
			printf("%f",x);break;
		case 6: x*604800;
			printf("%f",x);break;
	}
	break;
	case 3: switch(l){
		case 1:x/=365;
			printf("%f",x);break;
		case 2: x/=7;
			printf("%f",x);break;
		case 3: printf("%f",x);break;
		case 4: x*=24;
			printf("%f",x);break;
		case 5: x*=168;
			printf("%f",x);break;
		case 6: x*=10080;
			printf("%f",x);break;
	}
	break;
	case 4: switch (l){
		case 1: x/=8760;
			printf("%f",x);break;
		case 2: x/=168;
			printf("%f",x);break;
		case 3: x/=24;
			printf("%f",x);break;
		case 4: printf("%f",x);break;
		case 5: x*=60;
			printf("%f",x);break;
		case 6: x*=3600;
			printf("%f",x);break;
	}
	break;
	case 5: switch(l){
		case 1: x/=526000;
			printf("%f",x);break;
		case 2: x/=10080;
			printf("%f",x);break;
		case 3: x/=1440;
			printf("%f",x);break;
		case 4: x/=60;
			printf("%f",x);break;
		case 5: printf("%f",x);break;
		case 6: x*=60;
			printf("%f",x);break;
	}
	break;
	case 6: switch(l){
		case 1: x/=31560000;
			printf("%f",x);break;
		case 2: x/=604800;
			printf("%f",x);break;
		case 3: x/=86400;
			printf("%f",x);break;
		case 4: x/=3600;
			printf("%f",x);break;
		case 5: x/=60;
			printf("%f",x);break;
		case 6: printf("%f",x);break;
	}
	break;
}
break;
}
