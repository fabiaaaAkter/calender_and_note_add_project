void AddNote ( ) {
    FILE * fp ;
    fp = fopen ( " note.dat " , " ab+ " ) ;
    system ( " cls " ) ;
    gotoxy ( 5 ,7 ) ;
    printf ( " Enter the date ( DD / MM ) : " ) ;
    scanf ( " % d % d " , & R . dd , & R . mm ) ;
    gotoxy ( 5 , 8 ) ;
    printf ( " Enter the Note ( 50 character max ) : " ) ;
    fflush ( stdin ) ;
    scanf ( " % [ ^ \ n ] " , R.note ) ;
    if ( fwrite ( & R , sizeof ( R ) , 1 , fp ) ) {
        gotoxy ( 5 , 12 ) ;
        puts ( " Note is saved sucessfully " ) ;
        fclose ( fp ) ;
    }else {
        gotoxy ( 5 , 12 ) ;
        SetColor ( 12 ) ;
        puts ( " \ a Fail to save!! \ a " ) ;
        ClearColor ( ) ;
    }
    gotoxy ( 5 , 15 ) ;
    printf ( " Press any key............" ) ;
    getch ( ) ;
    fclose ( fp ) ;
}
