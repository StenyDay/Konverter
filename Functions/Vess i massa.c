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
		
	case 1: 
	printf("Выберите конвертируемую величину\n");
	printf("1.Миллиграмм\n2.Грамм\n3.Килограмм\n4.Центнер\n5.Тонна\n6.Карат\n7.Русский фунт\n8.Английский фунт\n9.Пуд\n10.Унция\n");
	scanf("%d",&m);
	printf("Выберите в какую величину конвертировать\n");
	printf("1.Миллиграмм\n2.Грамм\n3.Килограмм\n4.Центнер\n5.Тонна\n6.Карат\n7.Русский фунт\n8.Английский фунт\n9.Пуд\n10.Унция\n");
	scanf("%d",&l);
	printf("Численное значение конвертируемой величины:\n");
	scanf("%f",&x);
		
	switch(m){
	case 1: switch(l){                   //Вес и масса
		case 1: printf("%10.3f",x);break;
		case 2: x/=1000;
				printf("%10.3f",x);break;
		case 3: x/=1000000;
				printf("%10.3f",x);break;
		case 4: x/=100000000;
				printf("%10.3f",x);break;
		case 5: x/=1000000000;
				printf("%10.3f",x);break;
		case 6: x/=200;
				printf("%10.3f",x);break;
		case 7: x/=409500;
				printf("%10.3f",x);break;
		case 8: x/=453600;
				printf("%10.3f",x);break;
		case 9: x/=16380000;
				printf("%10.3f",x);break;
		case 10:x/=28350;
				printf("%10.3f",x);break;
		break;
		}
		break;	
	case 2: switch(l){
		case 1: x*=1000; break;
				printf("%20.3f",x);break;
		case 2: printf("%15.3f",x);break;
		case 3: x/=1000;
				printf("%10.3f",x);break;
		case 4: x/=100000;
				printf("%10.3f",x);break;
		case 5: x/=1000000;
				printf("%10.3f",x);break;
		case 6: x*=5;
				printf("%10.3f",x);break;
		case 7: x/=409.5;
				printf("%10.3f",x);break;
		case 8: x/=453.6;
				printf("%10.3f",x);break;
		case 9: x/=16380;
				printf("%10.3f",x);break;
		case 10:x/=28.35;
				printf("%10.3f",x);break;
		break;
	}
		break;
	case 3: switch(l){
		case 1: x*=1000000;
				printf("%15.3f",x);break;
		case 2: x*=1000;
				printf("%10.3f",x);break;
		case 3: printf("%10.3f",x);break;
		case 4: x/=100;
				printf("%10.3f",x);break;
		case 5: x/=1000;
				printf("%10.3f",x);break;
		case 6: x*=5000;
				printf("%10.3f",x);break;
		case 7: x*=2.442;
				printf("%10.3f",x);break;
		case 8: x*=2.205;
				printf("%10.3f",x);break;
		case 9: x/=16.38;
				printf("%10.3f",x);break;
		case 10: x/=35.27;
				printf("%10.3f",x);break;
				
				break;
	}
		break;
	case 4: switch(l){
		case 1: x*=100000000;
				printf("%20.3f",x);break;
		case 2: x*=100000;
				printf("%10.3f",x);break;
		case 3: x*=100;
				printf("%10.3f",x);break;
		case 4: printf("%10.3f",x);break;
		case 5: x/=10;
				printf("%10.3f",x);break;
		case 6: x*=500000;
				printf("%10.3f",x);break;
		case 7: x*=244.2;
				printf("%10.3f",x);break;
		case 8: x*=220.5;
				printf("%10.3f",x);break;
		case 9: x*=6.105;
				printf("%10.3f",x);break;
				
				break;
	}
		break;
	case 5: switch(l){
		case 1: x*=1000000000;
				printf("%20.3f",x);break;
		case 2: x*=1000000;
				printf("%20.3f",x);break;
		case 3: x*=1000;
				printf("%20.3f",x);break;
		case 4: x*=10;
				printf("%20.3f",x);break;
		case 5: printf("%20.3f",x);break;
		case 6: x*=500000;
				printf("%20.3f",x);break;
		case 7: x*=2442;
				printf("%20.3f",x);break;
		case 8: x*=2205;
				printf("%20.3f",x);break;
		case 9: x*=61.05;
				printf("%20.3f",x);break;
		case 10: x*=35270;
				printf("%20.3f",x);break;
			break;
	}
		break;
	case 6: switch(l){
		case 1: x*=200;
				printf("%20.3f",x);break;
		case 2: x/=5;
				printf("%20.3f",x);break;
		case 3: x/=5000;
				printf("%20.3f",x);break;
		case 4: x/=500000;
				printf("%20.3f",x);break;
		case 5: x/=5000000;
				printf("%20.3f",x);break;
		case 6: printf("%20.3f",x);break;
		case 7: x/=2048;
				printf("%20.3f",x);break;
		case 8: x/=2268;
				printf("%20.3f",x);break;
		case 9: x/=81900;
				printf("%20.3f",x);break;
		case 10: x/=147.7;
				printf("%20.3f",x);break;
			break;	
	}
		break;
	case 7: switch(l){
		case 1: x*=409500;
				printf("%20.3f",x);break;
		case 2: x*=409.5;
				printf("%20.3f",x);break;
		case 3: x/=2.442;
				printf("%20.3f",x);break;
		case 4: x/=244.2;
				printf("%20.3f",x);break;
		case 5: x/=2442;
				printf("%20.3f",x);break;
		case 6: x*=2048;
				printf("%20.3f",x);break;
		case 7: printf("%20.3f",x);break;
		case 8: x/=1.108;
				printf("%20.3f",x);break;
		case 9: x/=40;
				printf("%20.3f",x);break;
		case 10:x*=14.45;
				printf("%20.3f",x);break;
			break;
	}
		break;
	case 8: switch(l){
		case 1: x*=453600;
				printf("%20.3f",x);break;
		case 2: x*=453.6;
				printf("%20.3f",x);break;
		case 3: x/=2.205;
				printf("%20.3f",x);break;
		case 4: x/=2205;
				printf("%20.3f",x);break;
		case 5: x/=2205;
				printf("%20.3f",x);break;
		case 6: x*=2268;
				printf("%20.3f",x);break;
		case 7: x*=1.108;
				printf("%20.3f",x);break;
		case 8: printf("%20.3f",x);break;
		case 9: x/=36.11;
				printf("%20.3f",x);break;
		case 10: x*=16;
				printf("%20.3f",x);break;
			break; 
		}
	break;
	case 9: switch(l){
		case 1: x*=16380000;
				printf("%20.3f",x);break;
		case 2: x*=13680;
				printf("%20.3f",x);break;
		case 3: x*=16.38;
				printf("%20.3f",x);break;
		case 4: x*=0.164;
				printf("%20.3f",x);break;
		case 5: x*=0.0164;
				printf("%20.3f",x);break;
		case 6: x*=81900;
				printf("%20.3f",x);break;
		case 7: x*=40;
				printf("%20.3f",x);break;
		case 8: x*=36.11;
				printf("%20.3f",x);break;
		case 9: printf("%20.3f",x);break;
		case 10: x*=577.8;
				printf("%20.3f",x);break;
		break;
	}
	break;
	case 10: switch(l){
		case 1: x*=28350;
				printf("%20.3f",x);break;
		case 2: x*=28.35;
				printf("%20.3f",x);break;
		case 3: x*=0.0283;
				printf("%20.3f",x);break;
		case 4: x/=3527;
				printf("%20.3f",x);break;
		case 5: x/=35270;
				printf("%20.3f",x);break;
		case 6: x*=141.7;
				printf("%20.3f",x);break;
		case 7: x*=0.0692;
				printf("%20.3f",x);break;
		case 8: x*=0.0625;
				printf("%20.3f",x);break;
		case 9: x*=0.00173;
				printf("%20.3f",x);break;
		case 10: printf("%20.3f",x);break;
		break;
	}
	break;
	}
	break;
}
return 0;
}
