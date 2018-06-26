void invert(char *e)
{ char s;    int m = 0;
  for (int m = 0; e[m] != '\0'; m++);
  for (int i = 0, j = m - 1; i < j; i++, j--)
   { s = e[i]; e[i] = e[j]; e[j] = s; }
}