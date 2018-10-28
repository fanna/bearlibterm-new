#include <stdio.h>
#include "include/BearLibTerminal.h"

int main (int argc, char **argv)
{
  terminal_open();
  terminal_set("window: size=80x25; font: ./UbuntuMono-R.ttf, size=12");
  terminal_color("#50FF25");

  terminal_print(10, 10, "Hello, world!");
  terminal_refresh();

  while (terminal_read() != TK_CLOSE);

  terminal_close();
}
