#include "pedido.h"
#include "pizza.h"
#include "atendente.h"
#include "cliente.h"

static const char *imprime(struct cliente *cliente, struct atendente *atendente, struct pizza *pizza)
{
    //return "Seu pedido foi realizado com sucesso!";
    return printf("%s %s %s\n", cliente.nome, atendente.nome, pizza.sabor);
}

const struct pedido_vtable_ PEDIDO[1] = { { imprime } };
