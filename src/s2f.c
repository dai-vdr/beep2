/*
 * beep2
 * Original Copyright (C) 1997 Josef Pavlik <jetset@ibm.net>
 * Copyright (C) 2002 YAMAGUCHI Shingo <shingo@kip.iis.toyama-u.ac.jp>
 */

#include "beep.h"

#ifdef HAVE_STRING_H
#include <string.h>
#endif

int get_frequency_from_sequence(char *scale)
{
  int i;
  char *def_scale[108] = {
    "C1", "C1#", "D1", "D1#", "E1", "F1",
    "F1#", "G1", "G1#", "A1", "A1#", "B1",
    "C2", "C2#", "D2", "D2#", "E2", "F2",
    "F2#", "G2", "G2#", "A2", "A2#", "B2",
    "C3", "C3#", "D3", "D3#", "E3", "F3",
    "F3#", "G3", "G3#", "A3", "A3#", "B3",
    "C4", "C4#", "D4", "D4#", "E4", "F4",
    "F4#", "G4", "G4#", "A4", "A4#", "B4",
    "C5", "C5#", "D5", "D5#", "E5", "F5",
    "F5#", "G5", "G5#", "A5", "A5#", "B5",
    "C6", "C6#", "D6", "D6#", "E6", "F6",
    "F6#", "G6", "G6#", "A6", "A6#", "B6",
    "C7", "C7#", "D7", "D7#", "E7", "F7",
    "F7#", "G7", "G7#", "A7", "A7#", "B7",
    "C8", "C8#", "D8", "D8#", "E8", "F8",
    "F8#", "G8", "G8#", "A8", "A8#", "B8",
    "C9", "C9#", "D9", "D9#", "E9", "F9",
    "F9#", "G9", "G9#", "A9", "A9#", "B9",
  };

  int def_freq[108] = {
    33, 35, 37, 39, 41, 44,
    46, 49, 52, 55, 58, 62,
    65, 69, 73, 78, 82, 87,
    92, 98, 104, 110, 117, 123,
    131, 139, 147, 156, 165, 175,
    185, 196, 208, 220, 233, 247,
    262, 277, 294, 311, 330, 349,
    370, 392, 415, 440, 466, 494,
    523, 554, 587, 622, 659, 698,
    740, 784, 831, 880, 932, 988,
    1047, 1109, 1175, 1245, 1319, 1397,
    1480, 1568, 1661, 1760, 1865, 1976,
    2093, 2217, 2349, 2489, 2637, 2794,
    2960, 3136, 3322, 3520, 3729, 3951,
    4186, 4435, 4699, 4978, 5274, 5588,
    5920, 6272, 6645, 7040, 7459, 7902,
    8372, 8870, 9397, 9956, 10548, 11175,
    11840, 12544, 13290, 14080, 14917, 15804
  };

  for (i = 0; i < 108; i++) {
    if (!strcmp(def_scale[i], scale)) {
      return def_freq[i];
    }
  }
  return 0;
}
