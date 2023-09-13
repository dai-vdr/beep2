/*
 * beep2
 * Original Copyright (C) 1997 Josef Pavlik <jetset@ibm.net>
 * Copyright (C) 2002 YAMAGUCHI Shingo <shingo@kip.iis.toyama-u.ac.jp>
 */

#include "beep.h"

#ifdef HAVE_STDIO_H
#include <stdio.h>
#endif
#ifdef HAVE_STDLIB_H
#include <stdlib.h>
#endif
#ifdef HAVE_STRING_H
#include <string.h>
#endif
#ifdef HAVE_UNISTD_H
#include <unistd.h>
#endif
#ifdef HAVE_PWD_H
#include <pwd.h>
#endif
#ifdef HAVE_SYS_TYPES_H
#include <sys/types.h>
#endif
#ifdef HAVE_SYSLOG_H
#include <syslog.h>
#endif

#ifdef SYSTEM_LOGGING

void write_log(int argc, char **argv)
{
  uid_t         execuid;
  struct passwd *execpwuid;
  char          *execuname;

  int           i;
  char          *execstr;

  execuname = (char*)malloc(BUFFER);
  execstr = (char*)malloc(BUFFER);

  /*
   * get execute user ID
   */
  execuid = getuid();
  execpwuid = getpwuid(execuid);
  strcpy(execuname, execpwuid->pw_name);

  /*
   * get execute string
   */
  for (i = 0; i <= argc - 1; i++) {
    sprintf(execstr, "%s %s", execstr, argv[i]);
  }

  /*
   * send log message to syslog
   */
  syslog(LOG_INFO, "user = %s, exec =%s\n", execuname, execstr);

  free(execuname);
  free(execstr);
}
#endif
