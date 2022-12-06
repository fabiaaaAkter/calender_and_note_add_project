void showNote ( int mm ) {
    FILE * fp ;
    int i = 0 , isFound = 0 ;
    system ( " cls " ) ;
    fp = fopen ( " note . dat " , " rb " ) ;
    if ( fp = = NULL ) {
        printf ( " Error in opening the file " ) ;
    }
    while ( fread ( &R , sizeof ( R ) , 1 , fp ) = = 1 ) {
        if ( R.mm = = mm ) {
            gotoxy ( 10 , 5 + i ) ;
            printf ( " Note % d Day = % d : % s " , i + 1 , R . dd ,  R . note ) ;
            isFound = 1 ;
            i + + ;
        }
    }
    if ( isFound = = 0 ) {
        gotoxy ( 10 ,5 ) ;
        printf ( " This Month contains no note " ) ;
    }
    gotoxy ( 10 , 7 + i ) ;
    printf ( " Press any key to back....... " ) ;
    getch ( ) ;

}
