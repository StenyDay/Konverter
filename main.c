//#include <iostream>
#include <conio.h>
#include <stdio.h>
  
int main(){
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
	case 2: 
	printf("Выберите конвертируемую величину\n");
	printf("1.Год\n2.Неделя\n3.Сутки\n4.Час\n5.Минута\n6.Секунда\n");
	scanf("%d",&m);
	printf("Выберите в какую величину конвертировать\n");
	printf("1.Год\n2.Неделя\n3.Сутки\n4.Час\n5.Минута\n6.Секунда\n");
	scanf("%d",&l);
	printf("Численное значение конвертируемой величины:\n");
	scanf("%f",&x);
		
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
	case 4: 
	printf("Выберите конвертируемую величину\n");
	printf("1.Кубический метр\n2.Кубический дециметр\n3.Кубический сантиметр\n4.Кубисечкий миллиметр\n5.Литр\n");
	scanf("%d",&m);
	printf("Выберите в какую величину конвертировать\n");
	printf("1.Кубический метр\n2.Кубический дециметр\n3.Кубический сантиметр\n4.Кубисечкий миллиметр\n5.Литр\n");
	scanf("%d",&l);
	printf("Численное значение конвертируемой величины:\n");
	scanf("%f",&x);
		
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
	case 5: 
	printf("Выберите конвертируемую величину\n");
	printf("1.Километр\n2.Метр\n3.Дециметр\n4.Сантиметр\n5.Миллиметр\n6.Фут\n7.Ярд\n");
	scanf("%d",&m);
	printf("Выберите в какую величину конвертировать\n");
	printf("1.Километр\n2.Метр\n3.Дециметр\n4.Сантиметр\n5.Миллиметр\n6.Фут\n7.Ярд\n");
	scanf("%d",&l);
	printf("Численное значение конвертируемой величины:\n");
	scanf("%f",&x);
		
	switch(m){
	case 1: switch(l){
		case 1: printf("%f",x);break;
		case 2: x*=1000;
				printf("%f",x);break;
		case 3: x*=10000;
				printf("%f",x);break;
		case 4: x*=100000;
				printf("%f",x);break;
		case 5: x*=1000000;
				printf("%f",x);break;
		case 6: x*=3281;
				printf("%f",x);break;
		case 7: x*=1094;
				printf("%f",x);break;
	}
	case 2: switch(l){
		case 1: x/=1000;
				printf("%f",x);break;
		case 2: printf("%f",x);break;
		case 3: x*=10;
				printf("%f",x);break;
		case 4: x*=100;
				printf("%f",x);break;
		case 5: x*=1000;
				printf("%f",x);break;
		case 6: x*=3.281;
				printf("%f",x);break;
		case 7: x*=1.094;
				printf("%f",x);break;
		}
	break;
	case 3: switch(l){
		case 1: x/=10000;
				printf("%f",x);break;
		case 2: x/=10;
				printf("%f",x);break;
		case 3: printf("%f",x);break;
		case 4: x*=10;
				printf("%f",x);break;
		case 5: x*=100;
				printf("%f",x);break;
		case 6: x/=3.048;
				printf("%f",x);break;
		case 7: x/=9.144;
				printf("%f",x);break;
	}
	break;
	case 4: switch(l){
		case 1: x/=100000;
				printf("%f",x);break;
		case 2: x/=100;
				printf("%f",x);break;
		case 3: x/=10;
				printf("%f",x);break;
		case 4: printf("%f",x);break;
		case 5: x*=10;
				printf("%f",x);break;
		case 6: x/=30.48;
				printf("%f",x);break;
		case 7: x/=91.44;
				printf("%f",x);break;
	}
	break;
	case 5: switch(l){
		case 1: x/=1000000;
				printf("%f",x);break;
		case 2: x/=1000;
				printf("%f",x);break;
		case 3: x/=100;
				printf("%f",x);break;
		case 4: x/=10;
				printf("%f",x);break;
		case 5: printf("%f",x);break;
		case 6: x/=304.8;
				printf("%f",x);break;
		case 7: x/=914.4;
				printf("%f",x);break;
	}
	break;
	case 6: switch(l){
	case 1: x/=3281;
			printf("%f",x);break;
	case 2: x/=3.281;
			printf("%f",x);break; 
	case 3: x/=0.328;
			printf("%f",x);break;
	case 4: x*=3048;
			printf("%f",x);break;
	case 5: x*=304.8;
			printf("%f",x);break;
	case 6: printf("%f",x);break;
	case 7: x/=3;
			printf("%f",x);break;
	}
	break;
	case 7: switch(l){
	case 1: x/=1094;
			printf("%f",x);break;
	case 2: x/=1.094;
			printf("%f",x);break;
	case 3: x/=0.109;
			printf("%f",x);break;
	case 4: x*=91.44;
			printf("%f",x);break;
	case 5: x*=914.4;
			printf("%f",x);break;
	case 6: x*=3;
			printf("%f",x);break;
	case 7: printf("%f",x);break;
	}
	break;
}
		break;
	case 6: 
	printf("Выберите конвертируемую величину\n");
	printf("1.Квадратный километр\n2.Гектар\n3.Декар\n4.Ар\n5.Квадратный метр\n6.Квадратный сантиметр\n7.Квадратный миллииметр\n");
	scanf("%d",&m);
	printf("Выберите в какую величину конвертировать\n");
	printf("1.Квадратный километр\n2.Гектар\n3.Декар\n4.Ар\n5.Квадратный метр\n6.Квадратный сантиметр\n7.Квадратный миллииметр\n");
	scanf("%d",&l);
	printf("Численное значение конвертируемой величины:\n");
	scanf("%f",&x);
		
	switch(m){
	case 1: switch(l){
		case 1: printf("%f",x);break;
		case 2: x*=100;
				printf("%f",x);break;
		case 3: x*=1000;
				printf("%f",x);break;
		case 4: x*=10000;
				printf("%f",x);break;
		case 5: x*=1000000;
				printf("%f",x);break;
		case 6: x*=1000000000;
				printf("%f",x);break;
		case 7: x*=1000000000000;
				printf("%f",x);break;
	}
		break;
	case 2: switch(l){
		case 1: x/=100;
				printf("%f",x);break;
		case 2: printf("%f",x);break;
		case 3: x*=10;
				printf("%f",x);break;
		case 4: x*=100;
				printf("%f",x);break;
		case 5: x*=10000;
				printf("%f",x);break;
		case 6: x*=100000000;
				printf("%f",x);break;
		case 7: x*=10000000000;
				printf("%f",x);break; 
	}
		break;
	case 3: switch(l){
		case 1: x/=1000;
				printf("%f",x);break;
		case 2: x/=10;
				printf("%f",x);break;
		case 3: printf("%f",x);break;
		case 4: x*=10;
				printf("%f",x);break;
		case 5: x*=1000;
				printf("%f",x);break;
		case 6: x*=10000000;
				printf("%f",x);break;
		case 7: x*=1000000000;
				printf("%f",x);break;
	}
		break;
	case 4: switch(l){
		case 1: x/=10000;
				printf("%f",x);break;
		case 2: x/=100;
				printf("%f",x);break;
		case 3: x/=10;
				printf("%f",x);break;
		case 4: printf("%f",x);break;
		case 5: x*=100;
				printf("%f",x);break;
		case 6: x*=1000000;
				printf("%f",x);break;
		case 7: x*=100000000;
				printf("%f",x);break;
	}
		break;
	case 5: switch(l){
		case 1: x/=1000000;
				printf("%f",x);break;
		case 2: x/=10000;
				printf("%f",x);break;
		case 3: x/=1000;
				printf("%f",x);break;
		case 4: x/=100;
				printf("%f",x);break;
		case 5: printf("%f",x);break;
		case 6: x*=10000;
				printf("%f",x);break;
		case 7: x*=1000000;
				printf("%f",x);break;
	}
		break;
	case 6: switch(l){
		case 1: x/=1000000000;
				printf("%f",x);break;
		case 2: x/=100000000;
				printf("%f",x);break;
		case 3: x/=10000000;
				printf("%f",x);break;
		case 4: x/=1000000;
				printf("%f",x);break;
		case 5: x/=10000;
				printf("%f",x);break;
		case 6: printf("%f",x);break;
		case 7: x*=100;
				printf("%f",x);break;
}
		break;
	case 7: switch(l){
		case 1: x/=1000000000000;
				printf("%f",x);break;
		case 2: x/=10000000000;
				printf("%f",x);break;
		case 3: x/=1000000000;
				printf("%f",x);break;
		case 4: x/=100000000;
				printf("%f",x);break;
		case 5: x/=1000000;
				printf("%f",x);break;
		case 6: x/=1000;
				printf("%f",x);break;
		case 7: printf("%f",x);break;
	}
		break;
}
break;

		
}
	getch();
}

	
	

