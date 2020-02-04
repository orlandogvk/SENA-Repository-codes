#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <io.h>
#include <fcntl.h>
#include <time.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string>
#include <iostream>
using namespace std;

struct reg_alumno {
	char nombre[31];
	int codigo;
	char carrera[31];
};
int i;
reg_alumno alumn[5];
int main() {
	for(i = 1; i <= 5; i++){
		cprintf("Write the student's name: ");
		gets(alumn[i - 1].nombre);
		cprintf("Write the student's code: ");
		cin >> alumn[i - 1].codigo;
		cprintf("Write the program: ");
		gets(alumn[i - 1].carrera);
		system("cls");
	}
	for(i = 1; i <= 5; i++){
		cprintf("\r\n");
		cprintf("The student %s", alumn[i - 1].nombre);
		cprintf("\r\n");
		cprintf("With code %d study %s", alumn[i - 1].codigo, alumn[i - 1].carrera);
	}
}
