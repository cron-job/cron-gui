#ifndef READ_CRONTAB_H
#define READ_CRONTAB_H

#include "pkg-cron/cron.h"

void check_error(	char	*msg);

void minuteOfEntryToString(entry *e, char* string);
void hourOfEntryToString(entry *e, char* string);
void domOfEntryToString(entry *e, char* string);
void monthOfEntryToString(entry *e, char* string);
void dowOfEntryToString(entry *e, char* string);
void commandOfEntryToString(entry *e, char* string);

void entryToString(entry *e, char* string);
void bitStrToString(bitstr_t* bitstr, char* string, unsigned int max,char *labels[]);
void rangeToString(char range[60][4] , char* string, unsigned int* rangeIndex, int* commaNeededOnNextRange);

int read_cron_tab();

#endif //READ_CRONTAB_H
