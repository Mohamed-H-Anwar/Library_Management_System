#pragma once
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
void reg();
void intro();
void signin();
int checkid(FILE *fptr, char id[50]);
void getdata(char * string, int length);
void returnfunc(void);
void addbooks(void);
void editbooks(void);
void deletebooks(void);
void searchbooks(void);
void viewbooks(void);
void issuebooks(void);
void adminmenu(void);
void stmenu(void);

