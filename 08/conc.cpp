void conc (char* c1, char* c2)
{ int m = 0; int i = 0;
  for (int m = 0; c1[m] != '\0'; m++)
  for (int i = 0; c2[i] != '\0'; i++) c1[m + i] = c2[i];
  c1[m + i] = '\0';
}

