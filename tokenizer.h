#ifndef TOKENIZER_H
#define TOKENIZER_H

#include <stdlib.h>

enum token_type {
	literal,
	open_paren,
	close_paren,
	goto_room,
	set_var,
	if_expr,
	numeric_literal,
	semicolon,
	eof,
	operator,
}

struct token {
	enum token_type type;
	char *data;
	unsigned short int length;
	struct token *next;
};

struct token *tokenize(FILE *f);
struct token make_token(FILE *f);
void attach_token(struct token *head, struct token *new);
struct token next_token(struct token this_token);

struct token *tokenize(FILE *f) {
	struct token *token head = (struct token *)malloc(sizeof(struct token)), *current;
	
	*head = make_token(f);
	current = head;

	while(current.type != eof) {
		if(current != head) attach_token(head, current);
		current = make_token(f);
	}

	return head;
}



#endif

