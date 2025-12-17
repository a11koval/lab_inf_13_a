

int main(void)
{
    char c;
    scanf(" %c", &c);

    if (c >= '0' && c <= '9')
        printf("cyfra\n");
    else if (c >= 'a' && c <= 'z')
        printf("mala litera\n");
    else if (c >= 'A' && c <= 'Z')
        printf("wielka litera\n");
    else
        printf("inny znak\n");

    return 0;
}
