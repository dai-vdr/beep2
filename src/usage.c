/*
 * beep2
 * Original Copyright (C) 1997 Josef Pavlik <jetset@ibm.net>
 * Copyright (C) 2002 YAMAGUCHI Shingo <shingo@kip.iis.toyama-u.ac.jp>
 */

#include "beep.h"

#ifdef HAVE_STDIO_H
#include <stdio.h>
#endif

void output_usage()
{
  fprintf(stderr, "beep2: Usage:\n");
  fprintf(stderr, "beep2: \t\tbeep2 [-dfs] [file]\n");
  fprintf(stderr, "beep2: \t\tbeep2 -v\n");
  fprintf(stderr, "beep2: \n");
  fprintf(stderr, "beep2: Options:\n");
  fprintf(stderr, "beep2: \t\t-d\tdebug mode\n");
  fprintf(stderr, "beep2: \t\t-f\tfrequency input mode(default)\n");
  fprintf(stderr, "beep2: \t\t-s\tscore input mode\n");
  fprintf(stderr, "beep2: \t\t-t tempo\tchange tempo\n");
  fprintf(stderr, "beep2: \t\t-v\tshow version and included functions\n");
}
