#include <stdio.h>
#include <stdlib.h>

void Menu() {
    system("cls");
    printf("\t    ( (   \t\n");
    printf("\t     ) )  \t\n");
    printf("\t  ........ \t\n");
    printf("\t  |      |] \t\n");
    printf("\t  \\      /  \t\n");
    printf("\t   `----'   \t\n");
    printf("%c", 201);
    for (int i = 0; i < 30; i++) {
        printf("%c", 205);
    }
    printf("%c\n", 187);
    printf("   ====== MENU COFFERIA ======\n");
    printf("%c 1 - Cafe longo........0,70 EU%c\n", 186, 186);
    printf("%c 2 - Curto.............0,70 EU%c\n", 186, 186);
    printf("%c 3 - Pingado...........0,80 EU%c\n", 186, 186);
    printf("%c 4 - Cappuccino........0,95 EU%c\n", 186, 186);
    printf("%c 5 - Chocolate.........0,85 EU%c\n", 186, 186);
    printf("%c 6 - Galao.............0,95 EU%c\n", 186, 186);
    printf("%c 7 - Cha de limao......0,60 EU%c\n", 186, 186);
    printf("%c -99 Sair da maquina          %c\n", 186, 186);
    printf("%c", 200);
    for (int i = 0; i < 30; i++) {
        printf("%c", 205);
    }
    printf("%c\n", 188);
}

float produtos(int op) {
    float preco = 0.0;
    system("cls");
    if (op == -99) {
        printf("Maquina desligando... Obrigado pela preferencia!\n");
        exit(0);    
    }
    switch (op) {
        case 1:
            preco = 0.70;
            printf("Voce escolheu Cafe longo. Preco: %.2f\n\n", preco);
            break;
        case 2:
            preco = 0.70;
            printf("Voce escolheu Cafe curto. Preco: %.2f\n\n", preco);
            break;
        case 3:
            preco = 0.80;
            printf("Voce escolheu Cafe pingado. Preco: %.2f\n\n", preco);
            break;
        case 4:
            preco = 0.95;
            printf("Voce escolheu Cappuccino. Preco: %.2f\n\n", preco);
            break;
        case 5:
            preco = 0.85;
            printf("Voce escolheu Chocolate. Preco: %.2f\n\n", preco);
            break;
        case 6:
            preco = 0.95;
            printf("Voce escolheu Galao. Preco: %.2f\n\n", preco);
            break;
        case 7:
            preco = 0.60;
            printf("Voce escolheu Cha de limao. Preco: %.2f\n\n", preco);
            break;
        default:
            printf("Nao temos essa opcao. Por favor, escolha uma existente.\n");
            return 0.0;
	}
    return preco;
}

void pagamentotroco(float preco) {
    float pagamento = 0.0, troco = 0.0;
    
    printf("Pague aqui! Obs: so aceitamos moedas de 1 e 2 e notas de 5, 10, 20, 50 EUROS\n");
    printf("Insira o valor do pagamento: \n");
    scanf("%f", &pagamento);

    if (pagamento < preco) {
        printf("Pagamento insuficiente. Tente novamente com um valor maior ou igual a EU %.2f.\n", preco);
    } else {
        troco = pagamento - preco;
        printf("Pagamento recebido: EU%.2f\n", pagamento);
        printf("Troco: EU%.2f\n", troco);
        printf("Produto entregue! Aproveite seu pedido :3\n");
        
        printf("\nPrima Enter para fazer mais um pedido!");
        getchar();
        getchar();
    } 
}

void kik() {
    char resposta;
    system("cls");
    printf("\nDeseja chutar a maquina? (S/N): ");
    scanf("%c", &resposta);
    if (resposta == 'S' || resposta == 's') {
        printf("\nChutar a maquina nao e permitido >:( CALM DOWN BABY.\n");
    } else {
        printf("\nObrigado por tratar a maquina com respeito -_-'\n");
    }
    
}

int main() {
    system("cls"); 
    
    int op;
    float preco;

    while (1) {
        Menu();
        printf("\nQual a melhor opcao para voce hoje? ");

    if (scanf("%d", &op) != 1) {
        printf("\nA maquina so aceita as opcoes anteriormente listadas.\n");
    	printf("Prima Enter para continuar...");
    while (getchar() != '\n'); 
        getchar(); 
        continue;
        }
        
        preco = produtos(op);
        if (preco > 0.0) {
            pagamentotroco(preco);
        }
        kik();
        getchar();
        getchar();
    }
    return 0;
}
