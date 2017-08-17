#include "pizza.h"
#include "pedido.h"

static const char *ingredientes(void)
{
    return "Mussarela, calabresa, cebola e azeitonas";
}

static const char *preco(void)
{
    return "R$31";
}

const struct pizza_vtable_ CALABRESA[] = { { ingredientes, preco } };