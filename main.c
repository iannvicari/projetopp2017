#include "pizza.h"
#include "cliente.h"
#include "pedido.h"
#include "atendente.h"
#include "pizzaiolo.h"
#include <stdio.h>

int main(void)
{
    struct pizza pizza1 = {CALABRESA, "Pizza calabresa"};
    struct pizza pizza2 = {MUSSARELA, "Pizza mussarela"};
    struct atendente atendente1 = {ATENDENTE, "João"};
    struct pizzaiolo pizzaiolo1 = {PIZZAIOLO, "Paulo"};
    struct cliente cliente1 = {CLIENTE, "Ana", "Rua 1"};
    struct pedido pedido1 = {PEDIDO, cliente1, pizza1, "1"};

    printf("%s - ingredientes: %s\n", pizza1.sabor, pizza_ingredientes(&pizza1));
    printf("%s - ingredientes: %s\n", pizza2.sabor, pizza_ingredientes(&pizza2));
    
    printf("Cliente1 - Nome: %s, Endereço: %s\n", cliente1.nome, cliente1.endereco);
    printf("Pedido nº: %s\n", pedido1.numero);
    printf("Atendente: %s\n", atendente1.nome);
    printf("Pizzaiolo: %s\n", pizzaiolo1.nome);
    
    printf("%s - %s\n", cliente1.nome, cliente_fazpedido(&cliente1));
    printf("%s - %s e %s\n", atendente1.nome, atendente_registrapedido(&atendente1), atendente_repassapedido(&atendente1));
    printf("%s - %s\n", pizzaiolo1.nome, pizzaiolo_recebepedido(&pizzaiolo1));
    return 0;
}