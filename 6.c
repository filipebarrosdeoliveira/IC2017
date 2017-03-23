 #include <stdio.h>

int main() {

    int horasTrabalhadas,salarioHora, numeroDependentes ;


      printf ("Horas Trabalhadas:");
      scanf("%d",& horasTrabalhadas);
      printf ("Código:");
      scanf("%d",& salarioHora)
      scanf("%d", & numeroDependentes);




       float salarioBruto,INSS,IR,salarioLiquido;

        salarioBruto = horasTrabalhadas * salarioHora + (50 * numeroDependentes);

        if (salarioBruto <= 1000) {
            INSS = (float) (salarioBruto * 8.5/100);
        }
        if (salarioBruto > 1000) {
            INSS = (float) (salarioBruto * 9/100);
        }

        if (salarioBruto <= 500) {
            IR = 0;
        }
        if (salarioBruto > 500 && salarioBruto <= 1000) {
           IR = salarioBruto * 5/100;
        }
        if (salarioBruto > 1000) {
            IR = salarioBruto *7/100;
        }

        return 0;
}
