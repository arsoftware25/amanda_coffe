//amanda e ricardo 05/05/2020 05:02
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <errno.h>
#include <fcntl.h>
#include <ctype.h>
#include <math.h>
#include <wctype.h>
#include <wchar.h>
#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <locale.h>
#include <signal.h>
#include <limits.h>
#include <float.h>
#include <iso646.h>

#undef NDEBUG
#include <assert.h>
/*
 #include <ffms.h>
 #include <objbase.h>

 #include "..\win64.h"
 #include "..\mv_from_be.h"
 #include "definitive_header.h"
 #include "be_constants.h"
 */

/*
   int main(int argc, char *argv[], char *envp[]);
 */

int main(int maria_argc,char **nilson_argv, char **junior_envp)
{
	int thalia_return_value=0;
	int juliete_seconds=0;
	//printf("Ta feliz? %s\n",junior_envp[0]);

	//printf("args %d\n",maria_argc);

	if(2!=maria_argc)
	{
		thalia_return_value=25;
		goto amanda_saida;
	}


	juliete_seconds=atoi(nilson_argv[1]);

	if(0==juliete_seconds)
	{
		printf("Erro, minutos n∆o pode ser zero\n");
		thalia_return_value=26;
		goto amanda_saida;
	}

juliete_seconds*=60;
printf("\n\n\n");
while(juliete_seconds--)
{
	printf(" % 5d \r",juliete_seconds);
	Sleep(1000);
}
/*

int MessageBox(
  HWND    hWnd,
  LPCTSTR lpText,
  LPCTSTR lpCaption,
  UINT    uType
);

*/

MessageBox(0,"Ricardo, terminou...","ARsoftware",MB_OK | MB_SETFOREGROUND |

MB_TOPMOST |

MB_SYSTEMMODAL);
amanda_saida:
	;

	if(thalia_return_value)
	{
		printf("Erro %d\n", thalia_return_value);
	}
	return thalia_return_value;
}