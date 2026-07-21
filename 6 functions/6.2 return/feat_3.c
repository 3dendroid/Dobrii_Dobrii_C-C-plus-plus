int sum_two(int a, int b)
{
    return a + b;
}

int main(void)
{
    int a = 3, b = 2;
    int res_1 = sum_two(++a, a);
    a = 3; b = 2;
    int res_2 = sum_two(++a, b);
    a = 3; b = 2;
    int res_3 = sum_two(a, b++);

    return 0;
}
