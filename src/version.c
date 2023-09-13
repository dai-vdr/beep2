/*
 * beep2
 * Original Copyright (C) 1997 Josef Pavlik <jetset@ibm.net>
 * Copyright (C) 2002 YAMAGUCHI Shingo <shingo@kip.iis.toyama-u.ac.jp>
 */

#include "beep.h"

#ifdef HAVE_STDIO_H
#include <stdio.h>
#endif

#include "beep.h"

void output_version()
{
  fprintf(stderr, "\nbeep2 version "PACKAGE_VERSION"\n\n");
  fprintf(stderr, "  Original Copyright (C) 1997 Josef Pavlik ");
  fprintf(stderr, "(jetset@ibm.net)\n");
  fprintf(stderr, "  Copyright (C) 2002 YAMAGUCHI Shingo ");
  fprintf(stderr, "<shingo@kip.iis.toyama-u.ac.jp>\n\n");

  fprintf(stderr, "Function information:\n\n");
  fprintf(stderr, "  Supported OS type: ");
#ifdef OSTYPE_BSD
  fprintf(stderr, "BSD (FreeBSD etc...)\n");
#else
  fprintf(stderr, "Linux\n");
#endif
  fprintf(stderr, "            Logging: ");
#ifdef SYSTEM_LOGGING
  fprintf(stderr, "enabled\n\n");
#else
  fprintf(stderr, "disabled\n\n");
#endif

  fprintf(stderr, "The latest release is here:\n\n");
  fprintf(stderr, "  http://www.kip.iis.toyama-u.ac.jp");
  fprintf(stderr, "/~shingo/beep/index.html (English)\n");
  fprintf(stderr, "  http://www.kip.iis.toyama-u.ac.jp");
  fprintf(stderr, "/~shingo/beep/index-j.html (Japanese)\n\n");
}
