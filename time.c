#include <stdio.h>
#include <time.h>

/* time() localtime() and asctime() */

int main(void)
{
	time_t now;
	struct tm  *local;

	now = time(NULL);
	local= localtime(&now);

	printf("Calendar time is : %li\n" ,time(&now));
	printf("Local time is : %d: %d: %d\n", local->tm_hour,local->tm_min,local->tm_sec );
	printf(" The current date and time is: %s", asctime(local));
	return (0);
}
