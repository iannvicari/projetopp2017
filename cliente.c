#include "cliente.h"

static const char *fazpedido(void)
{
    return "Seu pedido foi realizado com sucesso!";
}

const struct cliente_vtable_ CLIENTE[2] = { { fazpedido } };
