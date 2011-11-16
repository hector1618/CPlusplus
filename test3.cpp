# include <stdio.h>

int main()
{
  char * cp;
  const char * cp1; // = cp; -- This is a standard way
  cp1 = cp; // Valid
  //cp = cp1;  -- Not valid
  return 0;
    
}
