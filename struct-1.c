struct date  // three members of type int
    {
      int day;
      int month;
      int year;
    };

    struct date yesterday;

    // data assignment
    yesterday.day = 12;
    yesterday.month = 8;
    yesterday.year = 2020;

    printf("The date of yesterday was %i-%i-%.2i.\n",            yesterday.day, yesterday.month, yesterday.year % 100);
