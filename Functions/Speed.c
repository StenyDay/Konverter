#include <stdio.h>
#include <locale.h>
  
int main(){
	setlocale (LC_ALL,"Rus");
	long m,l,k;
	float x;
	printf("Добро пожаловать в конвертёр величин! Выберите конвертируемую величину\n");
	printf("1.Вес и масса\n2.Время\n3.Скорость\n4.Объём\n5.Длина\n6.Площадь\n");
	scanf("%d",&k);
	switch(k){
case 3: 
	printf("Выберите конвертируемую величину\n");
	printf("1.Километр в секунду\n2.Метр в секунду\n3.Километр в час\n4.Метр в час\n");
	scanf("%d",&m);
	printf("Выберите в какую величину конвертировать\n");
	printf("1.Километр в секунду\n2.Метр в секунду\n3.Километр в час\n4.Метр в час\n");
	scanf("%d",&l);
	printf("Численное значение конвертируемой величины:\n");
	scanf("%f",&x);
		
	switch(m){
	case 1: switch(l){
		case 1: printf("%f",x);break;
		case 2: x*=1000;
			printf("%f",x);break;
		case 3: x*=3600;
			printf("%f",x);break;
		case 4: x*=60000;
			printf("%f",x);break;
	}
	case 2: switch (l){
		case 1:	x/=1000;
			printf("%f",x);break;
		case 2: printf("%f",x);break;
		case 3: x*=3.6;
			printf("%f",x);break;
		case 4: x*=60;
			printf("%f",x);break;
	}	
	break;
	case 3: switch(l){
		case 1: x/=3600;
			printf("%f",x);break;
		case 2: x*=0.2778;
			printf("%f",x);break;
		case 3: printf("%f",x);break;
		case 4: x*=16.67;
			printf("%f",x);break;
	}
	break;
	case 4: switch(l){
		case 1: x/=60000;
			printf("%f",x);break;
		case 2: x/=60;
			printf("%f",x);break;
		case 3: x*=0.06;
			printf("%f",x);break;
		case 4:printf("%f",x);break;
		}
		break;
  }
break;
}
