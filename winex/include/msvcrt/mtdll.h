#ifndef WINE_MTDLL_H
#define WINE_MTDLL_H

#if defined(_MT)

#define _mlock(locknum)   _lock(locknum)
#define _munlock(locknum) _unlock(locknum)

void _unlock( int locknum );
void _lock( int locknum );

#else

#define _mlock(locknum)   do {} while(0)
#define _munlock(locknum) do {} while(0)

#endif


#define _SIGNAL_LOCK    1
#define _IOB_SCAN_LOCK  2
#define _TMPNAM_LOCK    3
#define _INPUT_LOCK     4
#define _OUTPUT_LOCK    5
#define _CSCANF_LOCK    6
#define _CPRINTF_LOCK   7
#define _CONIO_LOCK     8
#define _HEAP_LOCK      9
#define _BHEAP_LOCK          10 /* No longer used? */
#define _TIME_LOCK      11
#define _ENV_LOCK       12
#define _EXIT_LOCK1     13
#define _EXIT_LOCK2          14 /* No longer used? */
#define _THREADDATA_LOCK     15 /* No longer used? */
#define _POPEN_LOCK     16
#define _LOCKTAB_LOCK   17
#define _OSFHND_LOCK    18
#define _SETLOCALE_LOCK 19
#define _LC_COLLATE_LOCK     20 /* No longer used? */
#define _LC_CTYPE_LOCK       21 /* No longer used? */
#define _LC_MONETARY_LOCK    22 /* No longer used? */
#define _LC_NUMERIC_LOCK     23 /* No longer used? */
#define _LC_TIME_LOCK        24 /* No longer used? */
#define _MB_CP_LOCK     25
#define _NLG_LOCK       26
#define _TYPEINFO_LOCK  27
#define _STREAM_LOCKS   28

/* Must match definition in msvcrt/stdio.h */
#define _IOB_ENTRIES    20

#define _LAST_STREAM_LOCK  (_STREAM_LOCKS+_IOB_ENTRIES-1)

#define _TOTAL_LOCKS        (_LAST_STREAM_LOCK+1)

#endif /* WINE_MTDLL_H */
