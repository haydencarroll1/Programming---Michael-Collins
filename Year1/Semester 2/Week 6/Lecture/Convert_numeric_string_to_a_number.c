/*
Converting numeric strings into the equivalent numeric value
*/
#include <stdio.h>
#include <stdlib.h>


int main()
{
  char num_string[4] = "123";
  int my_num = 0;

    
  // atoi() means ascii-to-integer. This converts a numeric string into its
  // equivalent integer

  my_num = atoi(num_string);

  printf("\nmy_num contains %d", my_num);

  return 0;

} // end main()