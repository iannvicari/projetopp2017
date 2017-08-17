#ifndef PIZZA_H_
#define PIZZA_H_

struct pizza
{
    //faz um ponteiro chamado vtable_ que pode ser compartilhado entre as instâncias
    const struct pizza_vtable_ *vtable_;
    const char *sabor;
};

struct pizza_vtable_
{
    const char *(*ingredientes)(void);
    const char *(*preco)(void);
};

static inline const char *pizza_ingredientes(struct pizza *pizza)
{
    return pizza->vtable_->ingredientes();
}

static inline const char *pizza_preco(struct pizza *pizza)
{
    return pizza->vtable_->preco();
}

//faz os vetores do vtables para que possam ser usados como ponteiros
extern const struct pizza_vtable_ CALABRESA[], MUSSARELA[];

#endif