#include<bits/stdc++.h>
#include<windows.h>
#include<stdio.h>
#include<stdlib.h> 
#include<string>
using namespace std;
string str;
char command[100];
void error();
void maze();
void restart();
void credits();
int main()
{
	printf("zrx32 Terminal [�汾 1.0.0]\n");
	printf("(c) 2021 zrx32 Corporation. ��������Ȩ����\n");
	printf("\n-------------------------------------------------------------------------------------\n");
	printf("\n[������ʾ]"); 
	printf("\n��Ϊ�˳���������æ��ֻ�����˺���һ���ֹ��ܣ�����'help'���ɲ鿴ȫ�����ܡ�\n");
	printf("\n-------------------------------------------------------------------------------------\n\n");
	while(1){
		cout<<'>';
/*		cin>>str;
		const char* command = str.c_str();*/
		cin.getline(command,100);
		if(command[0]=='h'&&command[1]=='e'&&command[2]=='l'&&command[3]=='p'){
			printf("-------------Help:INDEX-------------\n");
			printf("cls       ������\n");
			printf("credits   ��'����'ҳ�档\n");
			printf("paint     ��ͼ��\n"); 
			printf("quit      �˳�����\n");
			printf("reboot    ��30����������ԡ�\n");
			printf("restart   ������������\n");
			printf("ver       ��ʾ����汾��\n");
			printf("m���� e    ���ʵ�:�Թ���Ϸ��\n"); 
			printf("------------------------------------\n");
		}
		else if(command[0]=='v'&&command[1]=='e'&&command[2]=='r'){
			printf("\nzrx32 Terminal [�汾 1.0.0]\n\n");
		}
		else if(command[0]=='r'&&command[1]=='e'&&command[2]=='b'&&command[3]=='o'&&command[4]=='o'&&command[5]=='t'){
			system("shutdown /r /t 30");
			printf("�ػ�������������ϵͳ����30���ػ�����cmd��ִ��shutdown /a��ȡ���ػ���\n");
		}
		else if(command[0]=='p'&&command[1]=='a'&&command[2]=='i'&&command[3]=='n'&&command[4]=='t'){
			system("mspaint.exe");
			printf("\n"); 
		}
		else if(command[0]=='q'&&command[1]=='u'&&command[2]=='i'&&command[3]=='t'){
			system("taskkill /f /im terminal.exe");
		}
		else if(command[0]=='c'&&command[1]=='l'&&command[2]=='s'){
			system("cls");
		}
		else if(command[0]=='m'&&command[1]=='a'&&command[2]=='z'&&command[3]=='e'){
			maze();
		}
		else if(command[0]=='r'&&command[1]=='e'&&command[2]=='s'&&command[3]=='t'&&command[4]=='a'&&command[5]=='r'&&command[6]=='t'){
			restart();
		}
		else if(command[0]=='c'&&command[1]=='r'&&command[2]=='e'&&command[3]=='d'&&command[4]=='i'&&command[5]=='t'&&command[6]=='s'){
			credits();
		}
		else error();
	}
	return 0;
}
void error()
{
	printf("ERROR:");
	printf(" Unknown command. Type 'help' for help.\n");
}
void maze()
{
	system("cls");
	printf("---------------------------------\n");
	printf("\n[������ʾ]\n");
	printf("��ϲ���ֲʵ���������һ���򵥵��Թ���ʹ��wasd���ƣ�ÿ������󰴻س�ȷ����\n");
	printf("��Ϸ��ɺ���Զ������ն������档\n");
	printf("\n---------------------------------\n");
	char a[50][50]={"######",
					"#O #  ",
					"# ## #",
					"#  # #",
					"##   #",
					"######",};
	int i,x,y,p,q;
	char ch;
	
	x=1;y=1;p=1;q=5;
	for(i=0;i<=5;i++) puts(a[i]);
	while(x!=p || y!=q){
		cin>>ch;
		if(ch=='s'){
			if(a[x+1][y]!='#'){
				a[x][y]=' ';
				x++;
				a[x][y]='O';
			}
		}
		
		if(ch=='w')
		{
			if(a[x-1][y]!='#')
			{
				a[x][y]=' ';
				x--;
				a[x][y]='O';
			}
		}
		if(ch=='a')
		{
			if(a[x][y-1]!='#')
			{
				a[x][y]=' ';
				y--;
				a[x][y]='O';
			}
		}
		if(ch=='d')
		{
			if(a[x][y+1]!='#')
			{
				a[x][y]=' ';
				y++;
				a[x][y]='O';
			}
		}
		printf("---------------------------------\n");
		printf("\n[������ʾ]\n");
		printf("��ϲ���ֲʵ���������һ���򵥵��Թ���ʹ��wasd���ƣ�ÿ������󰴻س�ȷ����\n");
		printf("��Ϸ��ɺ���Զ������ն������档\n");
		printf("\n---------------------------------\n");
		system("cls");
		for(i=0;i<=5;i++) puts(a[i]);
	}
	system("cls");
	printf("You win!\n");
	Sleep(5000);
	restart();
}
void restart()
{
	system("cls");
	printf("zrx32 Terminal [�汾 0.5.5]\n");
	printf("(c) 2021 zrx32 Corporation. ��������Ȩ����\n");
	printf("\n-------------------------------------------------------------------------------------\n");
	printf("\n[������ʾ]"); 
	printf("\n��Ϊ�˳���������æ��ֻ�����˺���һ���ֹ��ܣ�����'help'���ɲ鿴ȫ�����ܡ�\n");
	printf("\n-------------------------------------------------------------------------------------\n\n");
}
void credits() //���õ���ҳ����ʾ��ȥ���ú���������ע�ͷ���"//" 
{
//	system("cls");
	printf("---------------����---------------\n");
	printf("�����ߣ�ZRX32(https://zrx.rth.app)\n");
	printf("----------------------------------\n");
//	printf("\n���Ժ򣬽��Զ��˳���ҳ�档\n");
//	Sleep(10000);
//	restart();
}
