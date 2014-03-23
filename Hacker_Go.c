/*
 * =====================================================================================
 *
 * 	********* Hacker GO *********
 *       Filename:  Hacker_Go.c
 *
 *    Description:  NOTICE:This is a game demo!!!
 *
 *    Hacker GO is a game which gives you a cool feeling of hacking
 *
 *    This game contains four positions-->
 *    localhost(Pos0),hack routine(Pos1),gateway(Pos2),jackie_workspace(Pos3)
 *
 *        Version:  1.0
 *        Created:  03/22/2014 16:32:24
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo, j.kuo2012@gmail.com
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
#define cmd(a) !strcmp(cmd,a)
#define Pos0 (*p==0)
#define Pos1 (*p==1)
#define Pos2 (*p==2)
#define Pos3 (*p==3)
#define username_correct (!strcmp(username,"Jackie")||!strcmp(username,"jackie"))
#define password_correct (!strcmp(password,"password")||(!strcmp(password,"789456123")))
void welcome(){
	printf("\n\n********* Hacker GO *********\n\n\n");
	printf("Greetings,\n  You don't know who I am but I have been watching you for some time. Do not be alarmed, I am not connected with the authorities. I would like to hire you for something very important. I need to locate some information contained within the computer systems of an organization, and I believe you may know how to access it. \n  Accept my offer, and you will be generously rewarded.\n\nYour Future Employer\n\n  One thing more... I would be very disappointed if you were to decline my offer; I strongly suggest you accept it.\n\nPress any key to accept the offer......\n");
	getchar();
}
int main(){
	char cmd[100];
	void atip();
	void exit0(int *p);
	void gate(int *p);
	void help(int *p);
	void jackie_workspace(int *p);
	void ls(int *p);
	void run(int *p);
	void type(int *p);
	int position=0,*p=&position;
	welcome();
	printf("Local System Startup\n---------------------------->>100%%\n");
	printf("Bootup Complete\n2014 all rights reserved\ntype 'help' for help\n");
	for(;;){
		if(Pos0)
			printf("localhost$ ");
		else if(Pos1)
			printf("hack$ ");
		else if(Pos2)
			printf("gateway$ ");
		else if(Pos3)
			printf("workspace$ ");
		scanf("%s",cmd);
		if(Pos1&&cmd("atip"))
			atip();
		else if(cmd("exit")){
			if(Pos0)
				break;
			else{
				exit0(p);
				continue;
			}
		}
		else if(Pos1&&cmd("gate"))
			gate(p);
		else if(cmd("help"))
			help(p);
		else if(Pos2&&cmd("jump"))
			jackie_workspace(p);
		else if(cmd("ls"))
			ls(p);
		else if(Pos0&&cmd("run"))
			run(p);
		else if(cmd("type"))
			type(p);
		else
			printf("%s: command not found\n",cmd);
	}
	return 0;
}
void atip(){
	printf("You'll need a username and password to gain access to their systems, so I hope you'll be able to figure out Jackie's password.\nI don't think you'll mind me saying he's not very bright so figuring out his password should be a simple task for a senior hacker like you.\n");
}
void exit0(int *p){
	if(Pos1)
		printf("Exited from the hack routine.\n");
	if(Pos2)
		printf("Disconnected from the gateway system.\n");
	if(Pos3)
		printf("Disconnected from Jackie's workspace.\n");
	(*p)--;
}
void gate(int *p){
	char username[10],password[10];
	printf("Establishing a connection to the Gateway System...\nConnection Established.\nLog in with your Gateway account\nusername:");
	scanf("%s",username);
	if(username_correct){
		printf("password:");
		scanf("%s",password);
		if(password_correct){
			printf("Successfully login!\nHello,Jackie!\nWelcome to the Gateway System\n");
			*p=2;
		}
		else
			printf("Invalid Password!\nDisconnected from the gateway system.\n");
	}
	else
		printf("Invalid Username!\nDisconnected from the gateway system.\n");
}
void help(int *p){
	if(Pos0){
		printf("localhost help menu:\n");
		printf(" exit         log out and shut down your localhost\n");
		printf(" run          run the employer's hack routine\n");
	}
	else if(Pos1){
		printf("hack routine help menu:\n");
		printf(" atip         a tip on hacking\n");
		printf(" exit         exit this routine\n");
		printf(" gate         hack into the gateway\n");
	}
	else if(Pos2){
		printf("Gateway help menu:\n");
		printf(" exit  	      exits this gateway\n");
		printf(" jump         jump to your workstation\n");
	}
	else if(Pos3){
		printf("Workstation help menu:\n");
		printf(" exit         exits this workstation\n");
	}
	printf(" help         display a list of system commands\n");
	printf(" ls           list files in this dir\n");
	printf(" type         type out all files' contents\n");

}
void jackie_workspace(int *p){
	char password[10];
	printf("Establishing a connection to Jackie's Workstation...\nConnection Established.\nEnter your Workstation password.\npassword:");
	scanf("%s",password);
	if(password_correct){
		printf("Successfully login!\nLogged into Jackie's workstation\n");
		(*p)++;
	}
	else
		printf("Invalid Password!\nDisconnected from the worksapce.\n");
}
void ls(int *p){
	printf("File list:\n");
	if(Pos0)
		printf(" readme       1k  -rw wwr r-x\n");
	if(Pos1)
		printf(" no file in this directory\n");
	if(Pos2)
		printf(" no file in this directory\n");
	if(Pos3)
		printf(" TopSecret    2k  -rw wwr r-x\n");
}
void run(int *p){
	printf("running the hack routine...\nsuccessfully launched\ntype 'help' for help\n");
	(*p)++;
}
void type(int *p){
	if(Pos0)
		printf("I'm glad you decided to accept my offer. Trust me, I'll make it worth your while. By now the hack routine should be installed on your local system; just type 'run' to start it up.\n");
	if(Pos1)
		printf(" no file to type out\n");
	if(Pos2)
		printf(" no file to type out\n");
	if(Pos3){
		printf("\n********* Jackie's TopSecret *********\nJackie's Note:\nOk,this is very important!I have to remember this,and anyone else can know this!\nJust now I found a very interesting website,http://jackiekuo.com\nAnd I can just press any key to visit it now!!......");
		getchar();
		getchar();
		printf("\nI was just kidding! ^-^\nCongratulations!\nYou amazing hacker!\nYou have just passed this demo!\nPress any key to continue......");
		getchar();
	}
}
