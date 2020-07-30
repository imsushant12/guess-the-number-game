main()
{
    int n,guess,nguess=0;
    srand(time(0));
    n=rand()%100;
    //printf("No is %d\n",n);//
    do
    {
        printf("Guess the number between 1 and 100\n");
        scanf("%d",&guess);
        if(guess>n)
            printf("Lower number please\n");
        else if(n>guess)
            printf("Higher number please\n");
        else
            printf("You guessed in %d attempts\n",nguess);
        nguess++;
    }while(guess!=n);
}

