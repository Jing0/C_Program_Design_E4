/*
 * =====================================================================================
 *
 *       Filename:  Eliza.c
 *
 *    Description:  This is Eliza written in C.
 *    Eliza is a very first chatbot.
 *
 *        Version:  0.1
 *        Created:  03/22/2014 23:00:45
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo, j.kuo2012@gmail.com,http://jackiekuo.com
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define random(x) (rand()%x)

/* generate random numbers from 0 to n-1 */
int get_rand(int n){
	int r=random(n);
	return r;
}
/* 11 defalut response
 * reponse when there is no key word in the user's scentence
 * If you add more default response,please edit NumofDeResponse
 */
char *defalut_response[]={
	"Sorry,I don't undersatnd.",
	"What do you mean by saying that?",
	"Can you elaborate on that?",
	"I would appreciate it if you would continue.",
	"Go on, don't be afraid.",
	"I need a little more detail please.",
	"You're being a bit brief, perhaps you could go into detail.",
	"Can you are more explicit?",
	"And?",
	"Why did you say that?",
	"Can you tell me more?",
	"Continue.",
	"Please Continue.",
	"Do you want to talk about something else?",
	"I am bored.",
	"Let's talk about something new.",
};
void drespond(){
	printf("%s\n",defalut_response[get_rand(16)]);
}

/* 脏话 */
char *foullst[]={
	"bitch",
	"shit",
	"bastard",
	"damn",
	"damned",
	"hell",
	"suck",
	"sucking",
	"ass",
	"whore",
	"asshole",
	"fuck",
	"fool",
};
char *foul_response[]={
	"Please watch your tongue!",
	"Please avoid such unwholesome thoughts!",
	"Please get your mind out of the gutter.",
	"Such lewdness is not appreciated.",
};
void foul(){
	printf("%s\n",foul_response[get_rand(4)]);
}

/* 打招呼 */
char *howdylst[]={
	"howdy",
	"hi", //This keyword doesn't work
	"hello",
};
char *howdy_response[]={
	"Hi there!",
	"Hi!",
	"Hello!",
	"How do you do?",
	"Howdy!",
};
void howdy(){
	printf("%s\n",howdy_response[get_rand(5)]);
}

/* Eliza */
char *elizalst[]={
	"you",
	"eliza",
	"emacs",
};
char *eliza_response[]={
	"I am the doctor.",
	"I can do anything i damn please.",
	"I could ask the same thing myself.",
	"Allow me to do the questioning.",
	"Try to answer that question yourself.",
};
void eliza(){
	printf("%s\n",eliza_response[get_rand(5)]);
}

/* Jackie */
char *jackielst[]={
	"jackie",
	"owner",
	"create",
};
char *jackie_response[]={
	"Do you know Jackie?",
	"Jackie is very creative,you know.",
	"If you want to know about Jackie,visit http://jackiekuo.com.",
};
void jackie(){
	printf("%s\n",jackie_response[get_rand(3)]);
}


/* love */
char *lovelst[]={
	"loves",
	"love",
	"loved",
	"loving",
};
char *love_response[]={
	"With whom are you in love?",
	"Do you really know about love?",
	"Can you describe love?",
	"Can you tell me about your feeling?",
};
void love(){
	printf("%s\n",love_response[get_rand(4)]);
}

/* 心情 */
char *moodlst[]={ 
	"alone", 
	"depressed",
	"annoyed",
	"upset",
	"unhappy",
	"excited ",
	"worried",
	"lonely",
	"angry",
	"mad",
	"pissed",
	"jealous",
	"happy",
	"bored",
	"nervous",
};
char *mood_response[]={
	"What cause you feel like that?",
	"Are you feeling that often?",
	"What causes you to be like that?",
	"Tell me more..",
};
/* 加入更多元素，Smarter */
void mood(int n){
	if(get_rand(2)>0) //在这里修改两方权重
		printf("%s\n",mood_response[get_rand(4)]);
	else
		printf("Why do you feel %s?\n",moodlst[n]);
}
 
/* school */
char *schoollst[]={
	"school",
	"schools",
	"grade",
	"grades",
	"teacher",
	"teachers",
	"class",
	"classes",
	"subject",
	"professor",
	"score",
};
char *school_response[]={
	"Maybe this is related to your attitude.",
	"Are you absent often?",
	"Maybe you should study something.",
	"Tell me more about it.",
};
void school(){
	printf("%s\n",school_response[get_rand(4)]);
}

/* hate */
char *hatelst[]={
	"hates",
	"hate",
	"hated",
	"dislikes",
	"dislike",
};
char *hate_response[]={
	"Maybe you should consult a doctor of medicine.",
	"I am a psychiatrist,you know.",
	"Please, go into more detail?",
};
void hate(){
	printf("%s\n",hate_response[get_rand(3)]);
}

/* last thing: chat */
char *chatlst[]={
	"chat",
};
char *chat_response[]={
	"Does our discussion bother you?",
	"It is a pleasure to chat with you.^_^",
	"Do you want to talk about something else?",
};
void chat(){
	printf("%s\n",chat_response[get_rand(3)]);
}
 
/* 将输入转换为小写字母 */
void convert2lower(char *str){
	char *p=str;
	for(;*p!='\0';p++)
		if(*p>='A'&&*p<='Z')
			*p+=32;
}

/* 是否存在单词 */
int exist(char keyword[],char input[]){
	//sign代表是否存在keyword，word_sign代表是否是独立的单词（必须为独立的单词才满足）
	int i,j,sign;
	char word[100];
	for(i=0,sign=0;input[i]!='\0';i++){
		for(j=0;input[i]!=' '&&input[i]!='\0';)
			word[j++]=input[i++];
		if(j!=0&&strcmp(keyword,word)==0){
			sign=1;
			break;
		}
	}
	return sign;
}

/* 是否存在于单词列表 */
int existlst(char **lst,char input[]){
	int sign;
	char **p=lst;
	for(sign=0;*p!='\0';p++)
		if(exist(*p,input)){
			sign=p-lst+1; //传递回去的为数组下标加1
			break;
		}
	return sign;
}

int main(){
	printf("\t\043\043\043 ELIZA \043\043\043\n");
	printf("I am Eliza, the psychotherapist.\nPlease, describe your problems.\n");
	printf("Each time you are finished talking, type RET.\n\n");
	char input[100];
	for(;;){
		printf("> ");
		gets(input);
		convert2lower(input);
		putchar('\n');
		if(existlst(foullst,input))
			foul();
	 	else if(existlst(howdylst,input))
			howdy();
		else if(existlst(elizalst,input))
			eliza();
		else if(existlst(jackielst,input))
			jackie();
		else if(existlst(moodlst,input))
			mood(existlst(moodlst,input)-1);
		else if(existlst(lovelst,input))
			love();
		else if(existlst(schoollst,input))
			school();
		else if(existlst(hatelst,input))
			hate();
		else if(existlst(chatlst,input))
			chat();
		else
			drespond();
		putchar('\n');
	}
	return 0;
}
