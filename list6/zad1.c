

double ocena(int pkt, int max)
{
    double proc = (double)pkt / max * 100;

    if (proc >= 92) return 5.0;
    else if (proc >= 85) return 4.5;
    else if (proc >= 76) return 4.0;
    else if (proc >= 68) return 3.5;
    else if (proc >= 60) return 3.0;
    else return 2.0;
}

int main(void)
{
    printf("%lf\n", ocena(78, 100));
    return 0;
}
