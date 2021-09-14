/* Attack via library
locale subsystem depends on LANG, LANGUAGE, NLSPATH, LOCPATH, LC_ALL, LC_MESSAGES which can be set by normal users.

# 0. before attack
cal
date
# Change locale, ex.
# 1. take a note of the old locale
OLDLANG=$LANG
echo OLDCN=${OLDLANG%%.*}
# 2. Change to new locale
sudo locale-gen zh_CN
sudo update-locale LANG=zh_CN.UTF-8
# 3. show the attack
cal
date
# 4. restore the locale
sudo locale-gen $OLDCN
sudo update-locale LANG=$OLDLANG

Refs:
1. https://www.tecmint.com/set-system-locales-in-linux/
2. https://docs.moodle.org/dev/Table_of_locales
3. /etc/locale.gen
4. https://askubuntu.com/questions/114759/warning-setlocale-lc-all-cannot-change-locale

## Software interface language translation
0. https://www.labri.fr/perso/fleury/posts/programming/a-quick-gettext-tutorial.html
1. https://help.ubuntu.com/community/poedit
2. https://poedit.net/
3. https://www.gnu.org/software/gettext/manual/gettext.html
4. https://en.wikipedia.org/wiki/Gettext
*/
#include <stdio.h>
#include <libintl.h>
#include <locale.h>
#include <stdlib.h>

int main(int argc, char* argv[], char* envp[])
{
  if (argc > 1)
  {
    printf(gettext("usage: %s filename\n"), argv[0]);
    return 1;
  }
  printf("normal execution proceeds...");
  
  return 0;
}