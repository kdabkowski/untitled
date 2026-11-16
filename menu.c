#include <stdio.h>

void writeMenu(){
    const char menuHead[] = "=============";
    const char menuTitle[] = "Bank App";
    const char menu10[] = "Pokaz balans";
    const char menu20[] = "Wplac";
    const char menu30[] = "Wyplac";
    const char menu40[] = "Historia";
    const char menu50[] = "Zakoncz";
    const char prompt[] = "Podaj opcje:";

     const char * menuList [] = {
        menuHead, menuTitle, menuHead,
        menu10, 
        menu20, 
        menu30, 
        menu40, 
        menu50,
        menuHead,
        prompt
    };

    for(int i=0; i <10; i++){
        printf("%s\n", menuList[i]);
    }
}

int menu(){
    int response = 0;
    while(1==1){
        writeMenu();
        scanf("%d", &response);
        if(response == 1){
            printf("Wybrana opcja 1\n");
        }
        if(response == 2){
            printf("Wybrana opcja 2\n");
        }
        if(response == 3){
            printf("Wybrana opcja 3\n");
        }
        if(response == 4){
            printf("Wybrana opcja 4\n");
        }
        if(response == 5){
            return 0;
        }
    }
}
