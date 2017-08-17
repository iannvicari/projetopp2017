#ifndef PIZZAIOLO_H_
#define PIZZAIOLO_H_

struct pizzaiolo
{
    //faz um ponteiro chamado vtable_ que pode ser compartilhado entre as instâncias
    const struct pizzaiolo_vtable_ *vtable_;
    const char *nome;
};

struct pizzaiolo_vtable_
{
    const char *(*recebepedido)(void);
};

static inline const char *pizzaiolo_recebepedido(struct pizzaiolo *pizzaiolo)
{
    return pizzaiolo->vtable_->recebepedido();
}

//faz os vetores do vtables para que possam ser usados como ponteiros
const struct pizzaiolo_vtable_ PIZZAIOLO[1];

#endif