#include <stdlib.h>
#include <stdio.h>

/*  
�� ������ ��� �� ������������ ��� ����� ������� ��� ���� ������ �����. 
� ������ ���������� �� ��������� ��� �� 40% ��� ������ ������� ��� ��� 60% 
��� ������� ������.
�� � ������ ���������� ����� ���� ��� 5 ���� �� ����������� �� ������ "�����!!!", 
�� ����� ���� ��� 5 ��� ����� 8.49 ���� �� ����������� �� ������ "����", 
��� ��� 8.5 ��� ���� �� ����������� �� ������ "������".

*/

int main(void){
float v_p, v_t; //v_p ������ ������� ��� v_t ������� ������ v_p=5  v_t=6
float t_v; // t_v ������ ����������
printf("Dwse vathmo proodou:\n");
scanf("%f",&v_p);
printf("Dwse teliko vathmo:\n");
scanf("%f",&v_t);
if(v_p>=0 && v_p<=10 && v_t>=0 && v_t<=10){
t_v=(v_p*40/100)+(v_t*60/100); //5.6
printf("I teliki vathmologia einai:%.2f\n",t_v);
	if(t_v>=0 && t_v<5)
		printf("Krima!!!\n");
	if(t_v>=5 && t_v<8.5)
		printf("Kala!!!\n");
	if(t_v>=8.5)
		printf("Arista!!!\n");

}
if(v_p<0 || v_p>10 || v_t<0 || v_t>10){
printf("Parakalw dwse vathmous sto diastima [0-10]\n");
}

system("PAUSE");
return 0;
}


