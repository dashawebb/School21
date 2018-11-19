

int ft_sqrt(int nb)
{
    int root;

    root = 0;
    if (nb < 0)
        return (0);
    while (root*root < nb)
        root++;
    if (root * root == nb)
        return(root);
    return (0);
}
