// Author: John Sweetall jts6052@psu.edu
// Collaborator: Caroline Brustoloni cxb5766@psu.edu
// Collaborator: Siddhant Rajoriya sbr5632@psu.edu
// Collaborator: Saeed Alshebli saa6016@psu.edu
// Section: 2
// Breakout: 11

#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int main(void) {

char *part1 = readline("Enter your CMPSC 131 grade: ");
double grade = atof(part1); 

if (grade >= 93.0) {
  printf("Your letter grade for CMPSC 131 is A.\n");
}

else if (grade >= 90.0 ) {
  printf("Your letter grade for CMPSC 131 is A-.\n");
}

else if (grade >= 87.0) {
  printf("Your letter grade for CMPSC 131 is B+.\n");
}

else if (grade >= 83.0) {
  printf("Your letter grade for CMPSC 131 is B.\n");
}

else if (grade >= 80.0) {
  printf("Your letter grade for CMPSC 131 is B-.\n");
}

else if (grade >= 77.0) {
  printf("Your letter grade for CMPSC 131 is C+.\n");
}

else if (grade >= 70.0) {
  printf("Your letter grade for CMPSC 131 is C.\n");
}

else if (grade >= 60.0) {
  printf("Your letter grade for CMPSC 131 is D.\n");
}

else if (grade < 60.0) {
  printf("Your letter grade for CMPSC 131 is F.\n");
}

}