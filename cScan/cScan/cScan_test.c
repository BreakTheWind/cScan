#include <conio.h>
#include <stdlib.h>

#include "scan.h"

int main(void)
{
	uint32_t date;
	uint64_t real;

	printf("Scanned %d", scan_arrowy(3, 0, 0));
	_getch();
	system("CLS");
	date = scan_date();
	printf("Scanned %d/%d/%d", date_day(date), date_month(date), date_year(date));
	_getch();
	system("CLS");
	real = scan_real(18, 1);
	printf("%d,%d", real_whole(real), real_decimal(real));
	_getch();
	system("CLS");

	return 0;
}