#include <stdio.h>

int main() {
    float waga, wzrost, bmi;

    printf("Podaj wage (kg): ");
    scanf("%f", &waga);

    printf("Podaj wzrost (m): ");
    scanf("%f", &wzrost);

    bmi = waga / (wzrost * wzrost);

    

    if (bmi < 16.0)
        printf("Wyglodzenie\n");
    else if (bmi < 17.0)
        printf("Wychudzenie\n");
    else if (bmi < 18.5)
        printf("Niedowaga\n");
    else if (bmi < 25.0)
        printf("Wartosc prawidlowa\n");
    else if (bmi < 30.0)
        printf("Nadwaga\n");
    else if (bmi < 35.0)
        printf("I stopien otylosci\n");
    else if (bmi < 40.0)
        printf("II stopien otylosci\n");
    else
        printf("III stopien otylosci\n");
        printf("Twoje BMI = %.2f\n", bmi);
    return 0;
    
}