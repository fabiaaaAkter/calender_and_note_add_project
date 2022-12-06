int check_leapYear ( int year ) {  //checks whether the year passed is leap year or not
    if ( year % 400 = = 0 || ( year % 100 ! = 0 & & year % 4 = =0 ) )
       return 1 ;
    return 0 ;
}
