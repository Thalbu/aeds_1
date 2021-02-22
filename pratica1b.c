#include <stdio.h>
int main() {
  float altura_brutus = 1.84;
  float peso_brutus = 122.0;
  float altura_olivia = 1.76;
  float peso_olivia = 45.0;
  float imc_brutus = 0.00;
  float imc_olivia = 0.00;
  float imc_saldavel = 25.00;
  float imc_saldavel2 = 18.5;
  float peso_adequado_brutus = 0.00;
  float peso_adequado_olivia = 0.00;
  float perda_brutus = 0.00;
  float ganha_olivia = 0.00;
    imc_brutus = peso_brutus / (altura_brutus * altura_brutus);
    imc_olivia = peso_olivia / (altura_olivia * altura_olivia);
    peso_adequado_brutus = imc_saldavel * (altura_brutus * altura_brutus);
    peso_adequado_olivia = imc_saldavel2 * (altura_olivia * altura_olivia);
    perda_brutus = peso_brutus - peso_adequado_brutus;
    ganha_olivia = peso_adequado_olivia - peso_olivia;

  printf("%.2f %.2f %.2f %.2f\n", imc_brutus, imc_olivia, perda_brutus, ganha_olivia);
  return 0;
}
