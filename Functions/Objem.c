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
case 4: 
	printf("�������� �������������� ��������\n");
	printf("1.���������� ����\n2.���������� ��������\n3.���������� ���������\n4.���������� ���������\n5.����\n");
	scanf("%d",&m);
	printf("�������� � ����� �������� ��������������\n");
	printf("1.���������� ����\n2.���������� ��������\n3.���������� ���������\n4.���������� ���������\n5.����\n");
	scanf("%d",&l);
	printf("��������� �������� �������������� ��������:\n");
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
}