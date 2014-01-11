#include <stdio.h>
#include <stdlib.h>
#include "gen_card.h"


void gen_age(void)
{
    FILE *myfile;
	char string[80];
	int age = 0;
	int i = 0;
	double portion = 0;
	double total_portion = 0;
    myfile = fopen("./feature_pool/age.txt", "w");
    if(myfile != NULL){
		rewind(myfile);
		age = 18;
		do {
			portion = 2 + ((double)(rand() % 100)) / 100; 
			if( 100 - total_portion > portion) {
				fprintf(myfile, "%f %d\n", portion, age);
				dbg("%f %d\n", portion, age);
			} else {
				fprintf(myfile, "%f %d\n", 100 - total_portion, age);
				dbg("%f %d\n",  total_portion - portion, age);
				break;
			}
			total_portion += portion;
			age++;
			dbg("portion = %f, total_portion = %f\n", portion, total_portion);
		} while(total_portion <= 100);

    }else{
		dbg("*** open file error\n");
    }
	fclose(myfile);

}


void gen_salary(void)
{
    FILE *myfile;
	char string[80];
	int i = 0;
	int salary = 0;
	double portion = 0;
	double total_portion = 0;
    myfile = fopen("./feature_pool/salary.txt", "w");
    if(myfile != NULL){
		rewind(myfile);
		portion = 10.0;
		salary = 22000;
		i = 10;
		do {
			if( 100 - total_portion > portion) {
				fprintf(myfile, "%f %d\n", portion, salary);
				dbg("%f %d\n", portion, salary);
			} else {
				fprintf(myfile, "%f %d\n", 100 - total_portion, salary);
				dbg("%f %d\n",  total_portion - portion, salary);
				break;
			}
			portion -= 1.2;
			if (portion < 0) {
				portion = 1;
			}
			total_portion += portion;
			salary += 1000;
			dbg("portion = %f, total_portion = %f\n", portion, total_portion);
		} while(total_portion <= 100);

    }else{
		dbg("*** open file error\n");
    }
	fclose(myfile);

}


int main (int argc, char *argv[])
{
	gen_age();
}
