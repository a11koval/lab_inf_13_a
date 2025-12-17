

void prostokat(double a, double b, double *d, double *p, double *o)
{
    *d = sqrt(a*a + b*b);
    *p = a * b;
    *o = 2 * (a + b);
}

int main(void)
{
    double d, p, o;
    prostokat(3, 4, &d, &p, &o);

    printf("d=%lf p=%lf o=%lf\n", d, p, o);
    return 0;
}
