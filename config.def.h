/* color of non-question lore text */
#define CLR_AMBIENT 
/* color of the question/choice thingy thing */
#define CLR_QUESTION
/* color of the non-selected options */
#define CLR_OPTION
/* color of the selected option */
#define CLR_SELECTED
/* color of highlighted letters */
#define CLR_LETTERS

/* exit on parser error */
int parser_exit = 0;

/* auto-enter debug mode */
int debug = 0;

struct key keys[] = {
/*	 key           function */
	{9,            open_inventory}, /* C-I or tab */
	{27,           enter_debug}, /* C-[ */
	{7,            render}, /* C-G */
};

