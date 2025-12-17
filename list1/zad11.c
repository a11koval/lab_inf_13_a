

int main(void) {
    int rok;
    scanf("%d", &rok);

    int wiek = 2025 - rok;
    printf("Wiek: %d\n", wiek);

    if (wiek >= 18)
        printf("Pelnoletni\n");
    else
        printf("Niepelnoletni\n");

    return 0;
}
