#include "pizza.h"
#include "pedido.h"

static const char *ingredientes(void)
{
    return "Mussarela, tomate e azeitonas";
}

static const char *preco(void)
{
    return "R$28.50";
}

const struct pizza_vtable_ MUSSARELA[] = { { ingredientes, preco } };