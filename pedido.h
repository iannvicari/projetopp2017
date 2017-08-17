#ifndef PEDIDO_H_
#define PEDIDO_H_

#include "cliente.h"
#include "pizza.h"

struct pedido
{
    //faz um ponteiro chamado vtable_ que pode ser compartilhado entre as instâncias
    const struct pedido_vtable_ *vtable_;
    struct cliente cliente;
    struct pizza pizza;
    const char *numero;
};

struct pedido_vtable_
{
    const char *(*imprime)(void);
};

static inline const char *pedido_imprime(struct pedido *pedido)
{
    return pedido->vtable_->imprime();
}

//faz os vetores do vtables para que possam ser usados como ponteiros
const struct pedido_vtable_ PEDIDO[1];

#endif