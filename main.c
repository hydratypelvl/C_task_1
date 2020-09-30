// Uzrakstīt programmu, kas realizē sekojošo uzdevumu (cikls jāatkārto tik ilgi, kamēr lietotājs to vēlēsies):
// Ciklā tiek izsaukta funkcija, kurā kā parametu(s) saņem taisnstūra malu garumu un pārsūta tā laukumu
#include <stdio.h>

int main(void) {
  float augstums, platums, laukums;
  int cikls = 1;

  do{
    if(cikls == 1){
      printf("\n\nIevadiet lielumus centimetros!\n\n");

      printf("Ievadiet augstumu: ");
      scanf("%f", &augstums);

      printf("Ievadiet platumu: ");
      scanf("%f", &platums);

      laukums = augstums * platums;

      printf("\n\nTaisnstūra laukums ir: %f kvadrat centimeri\n\n", laukums);

      printf("Vai jus velaties atkartot?\n0 - nē \n1 - jā\n");
      scanf("%i", &cikls);  
    } else {
      return 0;
    }

  }while(cikls != 0);

  printf("\n\nProgrammas beigas!");
  return 0;
}