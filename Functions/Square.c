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

case 6: 
	printf("�������� �������������� ��������\n");
	printf("1.���������� ��������\n2.������\n3.�����\n4.��\n5.���������� ����\n6.���������� ���������\n7.���������� ����������\n");
	scanf("%d",&m);
	printf("�������� � ����� �������� ��������������\n");
	printf("1.���������� ��������\n2.������\n3.�����\n4.��\n5.���������� ����\n6.���������� ���������\n7.���������� ����������\n");
	scanf("%d",&l);
	printf("��������� �������� �������������� ��������:\n");
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
