#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "./functions.h"


int main()
{
	setlocale (LC_ALL,"RUS");
	long m,l,k;
	float x;
        while (1)
	{
		printf ("Добро пожаловать в конвертёр величин! Выберите конвертируемую величину\n");
		printf ("1.Вес и масса\n2.Время\n3.Скорость\n4.Объем\n5.Длина\n6.Площадь\n");
		scanf ("%d",&k);
		switch (k)
		{
			case 1:
			printf("Выберите конвертируемую величину\n");
			printf("1.Миллиграмм\n2.Грамм\n3.Килограмм\n4.Центнер\n5.Тонна\n6.Карат\n7.Русский фунт\n8.Английский фунт\n9.Пуд\n10.Унция\n");
			scanf("%d",&m);
			printf("Выберите в какую величину конвертировать\n");
			printf("1.Миллиграмм\n2.Грамм\n3.Килограмм\n4.Центнер\n5.Тонна\n6.Карат\n7.Русский фунт\n8.Английский фунт\n9.Пуд\n10.Унция\n");
			scanf("%d",&l);
			printf("Численное значение конвертируемой величины:\n");
			scanf("%f",&x);
			vess(m,l,x);
		

			case 2:
			printf("Выберите конвертируемую величину\n");
			printf("1.Год\n2.Неделя\n3.Сутки\n4.Час\n5.Минута\n6.Секунда\n");
			scanf("%d",&m);
			printf("Выберите в какую величину конвертировать\n");
			printf("1.Год\n2.Неделя\n3.Сутки\n4.Час\n5.Минута\n6.Секунда\n");
			scanf("%d",&l);
			printf("Численное значение конвертируемой величины:\n");
			scanf("%f",&x);
			time(m,l,x);

			case 3:
			printf("Выберите конвертируемую величину\n");
			printf("1.Километр в секунду\n2.Метр в секунду\n3.Километр в час\n4.Метр в час\n");
			scanf("%d",&m);
			printf("Выберите в какую величину конвертировать\n");
			printf("1.Километр в секунду\n2.Метр в секунду\n3.Километр в час\n4.Метр в час\n");
			scanf("%d",&l);
			printf("Численное значение конвертируемой величины:\n");
			scanf("%f",&x);
			speed(m,l,x);

			case 4:
			printf("Выберите конвертируемую величину\n");
			printf("1.Кубический метр\n2.Кубический дециметр\n3.Кубический сантиметр\n4.Кубический миллиметр\n5.Литр\n");
			scanf("%d",&m);
			printf("Выберите в какую величину конвертировать\n");
			printf("1.Кубический метр\n2.Кубический дециметр\n3.Кубический сантиметр\n4.Кубический миллиметр\n5.Литр\n");
			scanf("%d",&l);
			printf("Численное значение конвертируемой величины:\n");
			scanf("%f",&x);
			objem(m,l,x);

			case 5:
			printf("Выберите конвертируемую величину\n");
			printf("1.Километр\n2.Метр\n3.Дециметр\n4.Сантиметр\n5.Миллиметр\n6.Фут\n7.Ярд\n");
			scanf("%d",&m);
			printf("Выберите в какую величину конвертировать\n");
			printf("1.Километр\n2.Метр\n3.Дециметр\n4.Сантиметр\n5.Миллиметр\n6.Фут\n7.Ярд\n");
			scanf("%d",&l);
			printf("Численное значение конвертируемой величины:\n");

			scanf("%f",&x);
			distance(m,l,x);

			case 6:
			printf("Выберите конвертируемую величину\n");
			printf("1.Квадратный километр\n2.Гектар\n3.Декар\n4.Ар\n5.Квадратный метр\n6.Квадратный сантиметр\n7.Квадратный миллииметр\n");
			scanf("%d",&m);
			printf("Выберите в какую величину конвертировать\n");
			printf("1.Квадратный километр\n2.Гектар\n3.Декар\n4.Ар\n5.Квадратный метр\n6.Квадратный сантиметр\n7.Квадратный миллииметр\n");
			scanf("%d",&l);
			printf("Численное значение конвертируемой величины:\n");
			scanf("%f",&x);
			square(m,l,x);
		}
system ("pause");
return 0;
}


		
		
		
