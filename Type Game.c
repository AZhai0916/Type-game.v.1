/* type game */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
void show(void);	/* 說明 */ 
int main(void)
{
	char str[50],ch;    /* str=題目,ch=鍵入的字元 */
	int i,count,cor;		/* i=迴圈所需變數,count=正確字母的數量,cor=正確率 */ 
	clock_t start,end;
	float t_used;   
	
	begin:
		system("cls");
		count=0;          /* 每次回圈都要歸0 */ 
		show();
		
		ch=getch();		/* 案任意鍵開始 */ 
		start=clock();
		srand(time(NULL));		/* 根據時間產生英文 */ 
	
		for(i=0;i<50;i++)   /* 產生50個英文字母 */ 
			str[i]=rand()%26 + 97;
		str[50]='\0';					/* 第51個為字串結束字元 */ 
		
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
		
		printf("\n正確率: %d %%\n",count*2);
		printf("耗時 %.2f 秒\n",t_used);
		
		printf("按空白鍵重新開始遊戲,按Esc結束遊戲\n");
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
 	printf("|         此遊戲無法暫停        |\n");
 	printf("|    按任意建開始遊戲並開始計時 |\n");
 	printf("|  根據出現的字母輸入相符的英文 |\n");
 	printf("|     輸入錯誤的字母會顯示 ~    |\n");
 	printf("|    請使用英文小寫輸入 Ou<     |\n");
 	printf("|_______________________________|\n");
 }
