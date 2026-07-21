int get_square(int x)
{
    return x * x;
}

int main(void)
{
    int a = 7, b = 7, c = 7;
    int res_1 = get_square(a);
    int res_2 = get_square(b++);
    int res_3 = get_square(--c);

    return 0;
}
