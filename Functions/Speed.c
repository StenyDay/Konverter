#include <stdio.h>
#include <locale.h>
  
int main(){
	setlocale (LC_ALL,"Rus");
	long m,l,k;
	float x;
	printf("����� ���������� � �������� �������! �������� �������������� ��������\n");
	printf("1.��� � �����\n2.�����\n3.��������\n4.�����\n5.�����\n6.�������\n");
	scanf("%d",&k);
	switch(k){
case 3: 
	printf("�������� �������������� ��������\n");
	printf("1.�������� � �������\n2.���� � �������\n3.�������� � ���\n4.���� � ���\n");
	scanf("%d",&m);
	printf("�������� � ����� �������� ��������������\n");
	printf("1.�������� � �������\n2.���� � �������\n3.�������� � ���\n4.���� � ���\n");
	scanf("%d",&l);
	printf("��������� �������� �������������� ��������:\n");
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
