#include <stdio.h>

/**
 * gender (male = m or female = f)
*/
float getIdealWeight(char gender, float height) {
  switch (gender) {
    case 'm':
      return 72.7 * height - 58;
    
    case 'f':
      return 62.1 * height - 44.7;
  }

  return 0;
}

int main() {
  printf("Lucas 1.70m = %.2f\n", getIdealWeight('m', 1.70));
  printf("sla 1.52m = %.2f\n", getIdealWeight('f', 1.52));

  return 0; 
}
