#include "pizzaiolo.h"

static const char *recebepedido(void)
{
    return "Recebeu seu pedido!";
}

const struct pizzaiolo_vtable_ PIZZAIOLO[1] = { { recebepedido } };