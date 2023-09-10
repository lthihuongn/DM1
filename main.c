#include <stdio.h>

int nb_table(int number){
    if (number <= 2){
        return 1;
    }else if (number > 2 && number <= 4){
        return 2;
    }else if (number > 4 && number <= 8){
        return 3;
    }
}

int addition(char dish, char drink, char dessert){
    int cout;

    if (dish == 'c'){
        cout += 15;
    }else if (dish == 't'){
        cout += 8;
    }else if (dish == 'r'){
        cout += 23;
    }

    if (drink == 's'){
        cout += 5;
    }else if (drink == 'e'){
        cout += 2;
    }else if (drink == 'l'){
        cout += 12;
    }

    if (dessert == 't'){
        cout +=62;  // un peu cher le tiramisu...
    }else if (dessert == 'g'){
        cout += 3;
    }else if (dessert == 'm'){
        cout += 8;
    }
    return cout;
}

int total (int nb, int order){
    return nb * order;
}


int main() {
    int number;
    printf("Combien etes-vous ?\n");
    scanf("%d", &number);
    if (number >=1 && number <= 8){
        printf("Vous serez a la table numero %d.\n", nb_table(number));
        char meal, drink, dessert ;
        printf("Veuillez choisir un plat : c' : couscous, 't' : tomates, 'r' : risotto\n");
        scanf(" %c", &meal);
        printf("Veuillez choisir une boisson : 's': soda, 'e': eau, 'l' : limonade\n");
        scanf(" %c", &drink);
        printf("Veuillez choisir un dessert : 't': tiramisu, 'g': glace, 'm': macaron\n");
        scanf(" %c", &dessert);
        printf("Voici l'addition a payer : %d $.", total(number, addition(meal, drink, dessert)));
    }else{
        printf("Navres, nous ne pouvons pas vous accueillir.");
    }

    return 0;
}
