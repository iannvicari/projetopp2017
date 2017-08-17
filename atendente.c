#include "atendente.h"

static const char *registrapedido(void)
{
    return "Registrou seu pedido!";
}

static const char *repassapedido(void)
{
    return "Repassou o pedido para o pizzaiolo.";
}

const struct atendente_vtable_ ATENDENTE[1] = { { registrapedido, repassapedido } };