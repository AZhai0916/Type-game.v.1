/* type game */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
void show(void);	/* ���� */ 
int main(void)
{
	char str[50],ch;    /* str=�D��,ch=��J���r�� */
	int i,count,cor;		/* i=�j��һ��ܼ�,count=���T�r�����ƶq,cor=���T�v */ 
	clock_t start,end;
	float t_used;   
	
	begin:
		system("cls");
		count=0;          /* �C���^�鳣�n�k0 */ 
		show();
		
		ch=getch();		/* �ץ��N��}�l */ 
		start=clock();
		srand(time(NULL));		/* �ھڮɶ����ͭ^�� */ 
	
		for(i=0;i<50;i++)   /* ����50�ӭ^��r�� */ 
			str[i]=rand()%26 + 97;
		str[50]='\0';					/* ��51�Ӭ��r�굲���r�� */ 
		
		printf("\nQ: %s\nA: ",str);
		
		for(i=0;i<50;i++)
		{
			ch=getch();
			if(ch==str[i])
			{
				printf("%c",ch);
				count++;
			} 
			else
				printf("%c",'~');
		}
		end=clock();
		t_used=(float)(end-start)/CLK_TCK;
		
		printf("\n���T�v: %d %%\n",count*2);
		printf("�Ӯ� %.2f ��\n",t_used);
		
		printf("���ť��䭫�s�}�l�C��,��Esc�����C��\n");
		ch=getch();
		
		while(1)
		{
			if(ch==32)
				goto begin;
			else if(ch==27)
				break;
		} 
	 
	return 0;
 } 
 
 void show(void)
 {
 	printf("_________________________________\n");
 	printf("|            Type Game          |\n");
 	printf("|         ���C���L�k�Ȱ�        |\n");
 	printf("|    �����N�ض}�l�C���ö}�l�p�� |\n");
 	printf("|  �ھڥX�{���r����J�۲Ū��^�� |\n");
 	printf("|     ��J���~���r���|��� ~    |\n");
 	printf("|    �Шϥέ^��p�g��J Ou<     |\n");
 	printf("|_______________________________|\n");
 }
