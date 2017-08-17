#ifndef ATENDENTE_H_
#define ATENDENTE_H_

struct atendente
{
    //faz um ponteiro chamado vtable_ que pode ser compartilhado entre as instâncias
    const struct atendente_vtable_ *vtable_;
    const char *nome;
};

struct atendente_vtable_
{
    const char *(*registrapedido)(void);
    const char *(*repassapedido)(void);
};

static inline const char *atendente_registrapedido(struct atendente *atendente)
{
    return atendente->vtable_->registrapedido();
}

static inline const char *atendente_repassapedido(struct atendente *atendente)
{
    return atendente->vtable_->repassapedido();
}

//faz os vetores do vtables para que possam ser usados como ponteiros
const struct atendente_vtable_ ATENDENTE[1];

#endif