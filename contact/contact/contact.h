#define SIZEMAX 1000
#include<stdio.h>
#include<string.h>

#ifndef __INIT_H__
#define __INIT_H__
void init(struct person*);
#endif

#ifndef __ADD_H__
#define __ADD_H__
void add(struct person*);
#endif

#ifndef __MENU_H__
#define __MENU_H__
void menu();
#endif

#ifndef __DEL_H__
#define __DEL_H__
void del(struct person*);
#endif

#ifndef __SEARCH_H__
#define __SEARCH_H__
void search(struct person*);
#endif


#ifndef __CHANGE_H__
#define __CHANGE_H__
void change(struct person*);
#endif


#ifndef __SHOW_H__
#define __SHOW_H__
void show(struct person*);
#endif

struct personinf
{
	char name[20];
	char sex[10];
	int age;
	char tel[12];
	char addr[50];
};

struct person
{
	struct personinf data[SIZEMAX];
	int space;
};