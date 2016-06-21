#include "scan.h"
#include "conio.h"

int main(void)
{
	int choice;
	int i;
	uint32_t date;
	uint64_t real;

	printf("Scanned %d", scan_arrowy(3, 0, 0));
	getch();
	system("CLS");
	date = scan_date();
	printf("Scanned %d/%d/%d", date_day(date), date_month(date), date_year(date));
	getch();
	system("CLS");
	real = scan_real(18, 1);
	printf("%d,%d", real_whole(real), real_decimal(real));
	getch();
	system("CLS");
	getch();
	system("CLS");
	getch();
	system("CLS");
	getch();
	system("CLS");
	getch();
	system("CLS");

	return 0;
}