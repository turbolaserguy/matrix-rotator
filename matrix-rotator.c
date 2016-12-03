#include <stdio.h>

int main()
{
  int a[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
  int b[4][4];
  int i,j,k;
    
  // Print the original array
  printf("Original Array:\n");
  for(i = 0; i < 4; i++){
    for(j = 0; j < 4; j++){
      printf("%5d", a[i][j]);
    }
    printf("\n");
  }
    
  //Rotate the Array
  printf("Rotating the array...\n");
  for(i = 0; i < 4; i++){
    for(j = 0; j < 4; j++){
      b[i][j] = a[3 - j][i];
    }
  }
  printf("Done!\n");
    
  //Print the rotated array
  printf("Rotated Array:\n");
  for(i = 0; i < 4; i++){
    for(j = 0; j < 4; j++){
      printf("%5d", b[i][j]);
    }
    printf("\n");
  }

  return 0;
}
