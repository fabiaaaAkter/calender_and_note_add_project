void DeleteNote(){
    FILE *fp, *ft;
    int i = 0, isFound = 0;
    system("cls");
    fp = fopen("note.dat","rb");
    ft = fopen("temp.dat","wb+");
    if(fp == NULL||ft == NULL){
        printf("Error in opening the file");
    }
    else{
        int dd,mm;
        printf("Enter day and month (DD MM) : ");
        scanf("%d %d",&dd,&mm);
        while(fread(&R,sizeof(R),1,fp) == 1){
            if(R.dd != dd||R.mm != mm){
                fwrite(&R, sizeof(R), 1, ft);
            }
            else isFound=1;
        }
        if(isFound==1){
            gotoxy(2,5);
            printf("All notes of this date was deleted");
        }
        else{
            gotoxy(2,5);
            printf("This Month contains no note");
        }
    }
    fclose(fp);
    fclose(ft);
    remove("note.dat");
    rename("temp.dat","note.dat");
    gotoxy(2,7);
    printf("Press any key to back.......");
    getch();
}
