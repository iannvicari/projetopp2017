#ifndef CLIENTE_H_
#define CLIENTE_H_

struct cliente
{
    //faz um ponteiro chamado vtable_ que pode ser compartilhado entre as instâncias
    const struct cliente_vtable_ *vtable_;
    const char *nome;
    const char *endereco;
};

struct cliente_vtable_
{
    const char *(*fazpedido)(void);
};

static inline const char *cliente_fazpedido(struct cliente *cliente)
{
    return cliente->vtable_->fazpedido();
}

//faz os vetores do vtables para que possam ser usados como ponteiros
const struct cliente_vtable_ CLIENTE[2];

#endif