/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     LPAREN_TOK = 258,
     GT_TOK = 259,
     LT_TOK = 260,
     RPAREN_TOK = 261,
     ASSIGN_TOK = 262,
     MINUS_TOK = 263,
     PLUS_TOK = 264,
     MULT_TOK = 265,
     DIV_TOK = 266,
     MOD_TOK = 267,
     NOT_TOK = 268,
     SEMICOLON_TOK = 269,
     HASH_TOK = 270,
     DOT_TOK = 271,
     COMMA_TOK = 272,
     LCURL_TOK = 273,
     RCURL_TOK = 274,
     LSQUARE_TOK = 275,
     RSQUARE_TOK = 276,
     BIT_AND_TOK = 277,
     BIT_OR_TOK = 278,
     BACKSLASH_TOK = 279,
     SPEECH_TOK = 280,
     INVCOMMA_TOK = 281,
     XOR_TOK = 282,
     NEG_TOK = 283,
     EQ_TOK = 284,
     GTE_TOK = 285,
     LTE_TOK = 286,
     LSHIFT_TOK = 287,
     RSHIFT_TOK = 288,
     AND_TOK = 289,
     OR_TOK = 290,
     NEQ_TOK = 291,
     INC_TOK = 292,
     DEC_TOK = 293,
     PLUS_ASSIGN_TOK = 294,
     MINUS_ASSIGN_TOK = 295,
     MULT_ASSIGN_TOK = 296,
     DIV_ASSIGN_TOK = 297,
     MOD_ASSIGN_TOK = 298,
     DO_TOK = 299,
     WHILE_TOK = 300,
     FOR_TOK = 301,
     IF_TOK = 302,
     ELSE_TOK = 303,
     RET_TOK = 304,
     PRINT_TOK = 305,
     SCAN_TOK = 306,
     DEF_TOK = 307,
     TYPEDEF_TOK = 308,
     BREAK_TOK = 309,
     CONTINUE_TOK = 310,
     SIZEOF_TOK = 311,
     CASE_TOK = 312,
     SWITCH_TOK = 313,
     MAIN_TOK = 314,
     INCLUDE_TOK = 315,
     PRINTF_TOK = 316,
     SCANF_TOK = 317,
     ID_TOK = 318,
     INT_CONST_TOK = 319,
     CHAR_CONST_TOK = 320,
     REAL_CONST_TOK = 321,
     STRING_CONST_TOK = 322,
     INT_TOK = 323,
     CHAR_TOK = 324,
     FLOAT_TOK = 325,
     DOUBLE_TOK = 326,
     LONG_TOK = 327,
     SHORT_TOK = 328,
     VOID_TOK = 329
   };
#endif
/* Tokens.  */
#define LPAREN_TOK 258
#define GT_TOK 259
#define LT_TOK 260
#define RPAREN_TOK 261
#define ASSIGN_TOK 262
#define MINUS_TOK 263
#define PLUS_TOK 264
#define MULT_TOK 265
#define DIV_TOK 266
#define MOD_TOK 267
#define NOT_TOK 268
#define SEMICOLON_TOK 269
#define HASH_TOK 270
#define DOT_TOK 271
#define COMMA_TOK 272
#define LCURL_TOK 273
#define RCURL_TOK 274
#define LSQUARE_TOK 275
#define RSQUARE_TOK 276
#define BIT_AND_TOK 277
#define BIT_OR_TOK 278
#define BACKSLASH_TOK 279
#define SPEECH_TOK 280
#define INVCOMMA_TOK 281
#define XOR_TOK 282
#define NEG_TOK 283
#define EQ_TOK 284
#define GTE_TOK 285
#define LTE_TOK 286
#define LSHIFT_TOK 287
#define RSHIFT_TOK 288
#define AND_TOK 289
#define OR_TOK 290
#define NEQ_TOK 291
#define INC_TOK 292
#define DEC_TOK 293
#define PLUS_ASSIGN_TOK 294
#define MINUS_ASSIGN_TOK 295
#define MULT_ASSIGN_TOK 296
#define DIV_ASSIGN_TOK 297
#define MOD_ASSIGN_TOK 298
#define DO_TOK 299
#define WHILE_TOK 300
#define FOR_TOK 301
#define IF_TOK 302
#define ELSE_TOK 303
#define RET_TOK 304
#define PRINT_TOK 305
#define SCAN_TOK 306
#define DEF_TOK 307
#define TYPEDEF_TOK 308
#define BREAK_TOK 309
#define CONTINUE_TOK 310
#define SIZEOF_TOK 311
#define CASE_TOK 312
#define SWITCH_TOK 313
#define MAIN_TOK 314
#define INCLUDE_TOK 315
#define PRINTF_TOK 316
#define SCANF_TOK 317
#define ID_TOK 318
#define INT_CONST_TOK 319
#define CHAR_CONST_TOK 320
#define REAL_CONST_TOK 321
#define STRING_CONST_TOK 322
#define INT_TOK 323
#define CHAR_TOK 324
#define FLOAT_TOK 325
#define DOUBLE_TOK 326
#define LONG_TOK 327
#define SHORT_TOK 328
#define VOID_TOK 329




/* Copy the first part of user declarations.  */
#line 1 "parser.y"

#include "lex.yy.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TABLE_SIZE 500
void yyerror(char *s);
int scope = 0;
int dtype;
int flag = 0;

typedef struct val {
	char name[20];
	int dtype;
	int scope;
	
	struct val *next;
} Symbol;
typedef struct table {
	Symbol *entry[TABLE_SIZE];
	int size;
} SymTable;

SymTable table;

int hash (char *str) {
	int h = 5381;
	int c;
	
	while((c = *str++)) {
		h = ((h << 5) + h) + c;	
	}
	
	return h % TABLE_SIZE;
}

void setupSymbolTable() {
	for(int i=0;i<TABLE_SIZE;i++) {
		table.entry[i] = NULL;
	}
	table.size = 0;
}

void printTable() {
	printf("Entry no.\tSymbol name\tDatatype\tScope\n");
	for(int i=0;i<TABLE_SIZE;i++) {
		if(table.entry[i] != NULL) {
			Symbol *head = table.entry[i];
			while(head != NULL) {
				printf("%d\t\t%s\t\t%d\t\t%d\n", i, head->name, head->dtype, head->scope);
				head = head->next;
			}
		}
	}
}

int isPresent(char *sym) {
	int hval = hash(sym);
	Symbol *head = table.entry[hval];

	if(head == NULL) {
		return 0;
	}

	while(head != NULL) {
		if(strcmp(head->name, sym) == 0)
			return 1;
		
		head = head->next;
	}

	return 0;
}

int alreadyDeclared(char *sym) {
	int hval = hash(sym);
	Symbol *head = table.entry[hval];
	if(head == NULL) {
		return 0;
	}
	while(head != NULL) {
		if(strcmp(head->name, sym) == 0 && head->scope == scope) {
			if(head->dtype == dtype)
				return 1;
			else
				return 2;
		}
		head = head->next;
	}
	return 0;
}


int addSymbol(char *sym) {
	if(table.size == TABLE_SIZE) {
		return -1;
	}
	int hval = hash(sym);
	Symbol *head = table.entry[hval];
	Symbol *tmp = (Symbol *)malloc(sizeof(Symbol));
	strcpy(tmp->name, sym);
	tmp->dtype = dtype;
	tmp->scope = scope;
	tmp->next = NULL;
	if(head == NULL) {
		head = tmp;
		table.size++;
		table.entry[hval] = head;
		return 0;
	}
	while(head->next != NULL) {
		head = head->next;
	}
	head->next = tmp;
	return 0;
}


int addFunction(char *sym) {
	if(table.size == TABLE_SIZE) {
		return -1;
	}
	int hval = hash(sym);
	Symbol *head = table.entry[hval];
	Symbol *tmp = (Symbol *)malloc(sizeof(Symbol));
	strcpy(tmp->name, sym);
	tmp->dtype = dtype;
	tmp->scope = 0;
	tmp->next = NULL;
	if(head == NULL) {
		head = tmp;
		table.size++;
		table.entry[hval] = head;
		
		return 0;
	}
	while(head->next != NULL) {
		head = head->next;
	}
	head->next = tmp;
	return 0;
}


int getDatatype(char *sym) {
	int hval = hash(sym);
	Symbol *head = table.entry[hval];
	while(head != NULL && strcmp(head->name, sym) != 0) {
		head = head->next;
	}
	if(head == NULL) return 0;
	return head->dtype;
}


void deleteNodes(int i, int key) {
	Symbol *tmp, *p, *q;
	Symbol *head = table.entry[i];

	while(head != NULL && head->scope == key) {
		tmp = head;
		head = head->next;
		free(tmp);
	}

	if(head == NULL) {
		table.entry[i] = head;
		return;
	}

	table.entry[i] = head;
	p = head;
	q = head->next;
	while(q != NULL) {
		if(q->scope == key) {
			p->next = q->next;
			free(q);
			q = p->next;
		}
		else {
			p = p->next;
			q = q->next;
		}
	}
}


void deleteScopeSyms(int s) {
	for(int i=0;i<TABLE_SIZE;i++) {
		if(table.entry[i] != NULL) {
			deleteNodes(i, s);
			if(table.entry[i] == NULL) {
				table.size--;
			}
		}
	}
	
	
	
}


void freeTable() {
	for(int i=0;i<TABLE_SIZE;i++) {
		Symbol *head = table.entry[i];
		Symbol *tmp;
		while(head != NULL) {
			tmp = head;
			head = head->next;
			free(tmp);
		}
	}
}

FILE *out_file;
int interm_label = 0, temp_label = 0, backpatch_label = 0;
int new_tmp_index = 1;
int temp = 0;
char *interm_table[100];
char expr_var[20], tmp_var[20];

char *new_temp_var() {
	static char t[5];
	sprintf(t, "t%d", new_tmp_index);
	return t;
}

void generate(int label, char *str) {
	interm_table[label] = (char *)malloc((strlen(str) + 1) * sizeof(char));
	strcpy(interm_table[label], str); 
}

void write_to_file() {
	for(int i=0;i<100;i++) {
		if(interm_table[i] != NULL) {
			fprintf(out_file, "%d: %s", i, interm_table[i]);
			free(interm_table[i]);
			interm_table[i] = NULL;
		}
	}
}


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 244 "parser.y"
{
	int number;		
	float decimal;	
	char *string;	
	struct Dtype {	
		int dtype;
		char *place;	
	} Dtype;
}
/* Line 193 of yacc.c.  */
#line 497 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 510 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   205

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  75
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  98
/* YYNRULES -- Number of states.  */
#define YYNSTATES  161

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   329

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    10,    13,    17,    20,    24,
      26,    28,    30,    33,    35,    37,    45,    49,    50,    56,
      57,    63,    67,    70,    75,    78,    80,    82,    84,    86,
      88,    90,    92,    96,    99,   103,   106,   108,   111,   113,
     116,   119,   121,   123,   126,   130,   132,   136,   138,   141,
     143,   145,   147,   149,   151,   155,   159,   161,   163,   165,
     167,   169,   172,   176,   180,   183,   187,   191,   193,   197,
     203,   207,   212,   215,   219,   220,   226,   227,   231,   234,
     237,   239,   241,   245,   247,   249,   251,   253,   255,   257,
     259,   261,   262,   268,   271,   274,   278,   281,   283
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      76,     0,    -1,    80,    76,    -1,    80,    -1,    81,    -1,
      83,    77,    -1,    97,    14,    77,    -1,    83,    77,    -1,
      97,    14,    77,    -1,    80,    -1,    83,    -1,    81,    -1,
      97,    14,    -1,     3,    -1,     6,    -1,    15,    60,     5,
      63,    16,    63,     4,    -1,    15,    60,    67,    -1,    -1,
      68,    59,    82,    85,    90,    -1,    -1,    87,    63,    84,
      85,    90,    -1,    78,    86,    79,    -1,     3,     6,    -1,
      87,    63,    17,    86,    -1,    87,    63,    -1,    68,    -1,
      70,    -1,    71,    -1,    69,    -1,    74,    -1,    18,    -1,
      19,    -1,    88,    91,    89,    -1,    88,    89,    -1,    90,
      92,    91,    -1,    92,    91,    -1,    92,    -1,    93,    92,
      -1,    93,    -1,    97,    14,    -1,   101,    14,    -1,   107,
      -1,   112,    -1,   113,    14,    -1,    49,    95,    14,    -1,
      94,    -1,    61,   114,    14,    -1,    63,    -1,    63,    98,
      -1,    64,    -1,    66,    -1,    65,    -1,    67,    -1,   113,
      -1,     3,    95,     6,    -1,    95,    96,    95,    -1,     9,
      -1,     8,    -1,    10,    -1,    11,    -1,    12,    -1,    87,
     100,    -1,    20,    63,    21,    -1,    20,    64,    21,    -1,
      20,    21,    -1,    20,    64,    21,    -1,    20,    66,    21,
      -1,    63,    -1,    63,    17,   100,    -1,    63,     7,    95,
      17,   100,    -1,    63,     7,    95,    -1,    63,    99,    17,
     100,    -1,    63,    99,    -1,    63,     7,    95,    -1,    -1,
      47,   103,    78,   108,    79,    -1,    -1,    48,   105,    90,
      -1,   102,    90,    -1,   106,   104,    -1,   106,    -1,    95,
      -1,    95,   109,    95,    -1,     4,    -1,     5,    -1,    30,
      -1,    31,    -1,    36,    -1,    29,    -1,    34,    -1,    35,
      -1,    -1,    45,   111,    78,   108,    79,    -1,   110,    90,
      -1,    63,   114,    -1,     3,   115,     6,    -1,     3,     6,
      -1,    95,    -1,    95,    17,   115,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   369,   369,   370,   371,   372,   373,   376,   377,   378,
     379,   380,   381,   384,   387,   390,   391,   394,   394,   407,
     407,   426,   427,   430,   448,   468,   469,   470,   471,   472,
     475,   478,   481,   482,   485,   486,   487,   490,   491,   494,
     495,   496,   497,   498,   499,   505,   508,   511,   521,   531,
     536,   541,   546,   551,   554,   557,   577,   578,   579,   580,
     581,   584,   587,   593,   594,   600,   601,   607,   625,   643,
     672,   701,   719,   739,   761,   761,   774,   774,   788,   791,
     792,   799,   802,   822,   823,   824,   825,   826,   827,   828,
     829,   832,   832,   846,   858,   871,   872,   875,   876
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LPAREN_TOK", "GT_TOK", "LT_TOK",
  "RPAREN_TOK", "ASSIGN_TOK", "MINUS_TOK", "PLUS_TOK", "MULT_TOK",
  "DIV_TOK", "MOD_TOK", "NOT_TOK", "SEMICOLON_TOK", "HASH_TOK", "DOT_TOK",
  "COMMA_TOK", "LCURL_TOK", "RCURL_TOK", "LSQUARE_TOK", "RSQUARE_TOK",
  "BIT_AND_TOK", "BIT_OR_TOK", "BACKSLASH_TOK", "SPEECH_TOK",
  "INVCOMMA_TOK", "XOR_TOK", "NEG_TOK", "EQ_TOK", "GTE_TOK", "LTE_TOK",
  "LSHIFT_TOK", "RSHIFT_TOK", "AND_TOK", "OR_TOK", "NEQ_TOK", "INC_TOK",
  "DEC_TOK", "PLUS_ASSIGN_TOK", "MINUS_ASSIGN_TOK", "MULT_ASSIGN_TOK",
  "DIV_ASSIGN_TOK", "MOD_ASSIGN_TOK", "DO_TOK", "WHILE_TOK", "FOR_TOK",
  "IF_TOK", "ELSE_TOK", "RET_TOK", "PRINT_TOK", "SCAN_TOK", "DEF_TOK",
  "TYPEDEF_TOK", "BREAK_TOK", "CONTINUE_TOK", "SIZEOF_TOK", "CASE_TOK",
  "SWITCH_TOK", "MAIN_TOK", "INCLUDE_TOK", "PRINTF_TOK", "SCANF_TOK",
  "ID_TOK", "INT_CONST_TOK", "CHAR_CONST_TOK", "REAL_CONST_TOK",
  "STRING_CONST_TOK", "INT_TOK", "CHAR_TOK", "FLOAT_TOK", "DOUBLE_TOK",
  "LONG_TOK", "SHORT_TOK", "VOID_TOK", "$accept", "S", "S1", "open_paren",
  "close_paren", "header", "MAIN_FN", "@1", "USER_FN", "@2", "param",
  "params", "datatype", "start_block", "end_block", "block", "blocks",
  "STATEMENTS", "stmt", "PRINTF_ST", "expression", "arith_op",
  "DECLARE_ASSIGN", "array_ele", "array_size", "varlist", "EXP_ASSIGN",
  "IF_ST", "@3", "ELSE_PART", "@4", "IF_PART", "CONDITIONAL", "cond_exp",
  "comparison", "WHILE_ST", "@5", "ITERATIVE", "FUNCTION_CALL", "args",
  "arg", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    75,    76,    76,    76,    76,    76,    77,    77,    77,
      77,    77,    77,    78,    79,    80,    80,    82,    81,    84,
      83,    85,    85,    86,    86,    87,    87,    87,    87,    87,
      88,    89,    90,    90,    91,    91,    91,    92,    92,    93,
      93,    93,    93,    93,    93,    93,    94,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    96,    96,    96,    96,
      96,    97,    98,    98,    98,    99,    99,   100,   100,   100,
     100,   100,   100,   101,   103,   102,   105,   104,   106,   107,
     107,   108,   108,   109,   109,   109,   109,   109,   109,   109,
     109,   111,   110,   112,   113,   114,   114,   115,   115
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,     2,     3,     2,     3,     1,
       1,     1,     2,     1,     1,     7,     3,     0,     5,     0,
       5,     3,     2,     4,     2,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     3,     2,     1,     2,     1,     2,
       2,     1,     1,     2,     3,     1,     3,     1,     2,     1,
       1,     1,     1,     1,     3,     3,     1,     1,     1,     1,
       1,     2,     3,     3,     2,     3,     3,     1,     3,     5,
       3,     4,     2,     3,     0,     5,     0,     3,     2,     2,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     5,     2,     2,     3,     2,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    25,    28,    26,    27,    29,     0,     3,     4,
       0,     0,     0,     0,    17,     1,     2,     5,     9,    11,
      10,     0,    19,    61,     0,     0,    16,     0,     7,    12,
       0,     0,     0,     0,    72,     6,     0,    13,     0,     0,
       8,     0,    47,    49,    51,    50,    52,    70,    53,    67,
      68,     0,     0,     0,     0,     0,    22,    25,     0,     0,
      30,     0,    18,     0,     0,     0,    48,    94,    57,    56,
      58,    59,    60,     0,     0,    65,    66,    20,    71,     0,
      14,    21,    24,    31,    91,    74,     0,     0,     0,     0,
      33,     0,     0,    36,    38,    45,     0,     0,     0,    80,
      41,     0,    42,     0,    54,    96,    97,     0,    64,     0,
       0,    69,    55,    15,     0,     0,     0,     0,     0,     0,
       0,    32,    35,    37,    39,    40,    78,    76,    79,    93,
      43,     0,    95,    62,    63,    23,    13,     0,     0,    44,
      46,    73,    34,     0,    98,    81,     0,     0,    77,    83,
      84,    88,    85,    86,    89,    90,    87,     0,    92,    75,
      82
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,    17,    38,    81,    18,    19,    27,    20,    33,
      39,    58,    11,    61,    90,    91,    92,    93,    94,    95,
     106,    74,    96,    66,    34,    23,    97,    98,   116,   128,
     143,    99,   100,   146,   157,   101,   115,   102,    48,    67,
     107
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -75
static const yytype_int16 yypact[] =
{
      11,   -50,   -25,   -75,   -75,   -75,   -75,    42,    11,   -75,
      11,   -14,    38,     7,   -75,   -75,   -75,   -75,   -75,   -75,
      11,    63,    89,   -75,    11,    25,   -75,    80,   -75,    11,
       6,    39,    -5,    80,    87,   -75,   100,   119,    23,   108,
     -75,     6,     3,   -75,   -75,   -75,   -75,   156,   -75,    34,
     -75,   113,   114,   108,    39,    70,   -75,   -75,   134,    78,
     -75,    68,   -75,   112,     1,   -16,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,    39,     6,   -75,   -75,   -75,   -75,   139,
     -75,   -75,   128,   -75,   -75,   -75,     6,   144,    92,    39,
     -75,   -31,   129,    83,   -31,   -75,   135,   136,   108,   110,
     -75,   108,   -75,   155,   -75,   -75,   166,   164,   -75,   150,
     158,   -75,   187,   -75,    23,   169,   169,   180,   170,     6,
      83,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,     6,   -75,   -75,   -75,   -75,   -75,     6,     6,   -75,
     -75,   187,   -75,   108,   -75,   151,   134,   134,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,     6,   -75,   -75,
     187
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -75,   185,    -7,   -40,   -35,    20,    21,   -75,    45,   -75,
     167,    88,   -36,   -75,   109,   -38,   -74,   -67,   -75,   -75,
     -30,   -75,    90,   -75,   -75,   -23,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,    65,   -75,   -75,   -75,   -75,   -58,   117,
      74
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -68
static const yytype_int16 yytable[] =
{
      47,    62,    59,   103,    41,   108,    64,   105,    50,    41,
      13,    63,    25,    28,    84,    77,    85,    35,    86,   122,
       8,     9,    40,    65,   120,    89,     1,   123,     8,     9,
      87,    78,    88,   103,    14,   103,   103,    57,     3,     4,
       5,    30,    15,     6,   112,    10,   142,   109,   110,    22,
     111,    31,    24,    10,    32,    89,   117,    89,    89,    51,
     126,    52,   103,   129,    42,    43,    44,    45,    46,    42,
      43,    44,    45,    46,    26,   137,   138,    29,    59,     2,
       3,     4,     5,    37,    89,     6,    60,    83,    36,   141,
      12,    57,     3,     4,     5,    64,    30,     6,    12,   119,
      21,    60,    49,   -67,    54,   148,    31,   145,   145,    32,
      21,   158,   159,    84,    21,    85,    55,    86,   104,    21,
      68,    69,    70,    71,    72,    56,    60,   160,    84,    87,
      85,    88,    86,    79,    75,    76,    57,     3,     4,     5,
      80,    82,     6,   113,    87,   114,    88,    64,    83,   124,
     125,    57,     3,     4,     5,   149,   150,     6,   127,    68,
      69,    70,    71,    72,    68,    69,    70,    71,    72,   130,
     132,   133,   136,    73,    68,    69,    70,    71,    72,   134,
     151,   152,   153,   131,   140,   154,   155,   156,    68,    69,
      70,    71,    72,    16,   139,    68,    69,    70,    71,    72,
      53,   121,   135,   147,   118,   144
};

static const yytype_uint8 yycheck[] =
{
      30,    39,    38,    61,     3,    21,     3,     6,    31,     3,
      60,    41,     5,    20,    45,    53,    47,    24,    49,    93,
       0,     0,    29,    20,    91,    61,    15,    94,     8,     8,
      61,    54,    63,    91,    59,    93,    94,    68,    69,    70,
      71,     7,     0,    74,    74,     0,   120,    63,    64,    63,
      73,    17,    14,     8,    20,    91,    86,    93,    94,    64,
      98,    66,   120,   101,    63,    64,    65,    66,    67,    63,
      64,    65,    66,    67,    67,   115,   116,    14,   114,    68,
      69,    70,    71,     3,   120,    74,    18,    19,    63,   119,
       0,    68,    69,    70,    71,     3,     7,    74,     8,     7,
      10,    18,    63,    14,    17,   143,    17,   137,   138,    20,
      20,   146,   147,    45,    24,    47,    16,    49,     6,    29,
       8,     9,    10,    11,    12,     6,    18,   157,    45,    61,
      47,    63,    49,    63,    21,    21,    68,    69,    70,    71,
       6,    63,    74,     4,    61,    17,    63,     3,    19,    14,
      14,    68,    69,    70,    71,     4,     5,    74,    48,     8,
       9,    10,    11,    12,     8,     9,    10,    11,    12,    14,
       6,    21,     3,    17,     8,     9,    10,    11,    12,    21,
      29,    30,    31,    17,    14,    34,    35,    36,     8,     9,
      10,    11,    12,     8,    14,     8,     9,    10,    11,    12,
      33,    92,   114,   138,    87,   131
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    15,    68,    69,    70,    71,    74,    76,    80,    81,
      83,    87,    97,    60,    59,     0,    76,    77,    80,    81,
      83,    97,    63,   100,    14,     5,    67,    82,    77,    14,
       7,    17,    20,    84,    99,    77,    63,     3,    78,    85,
      77,     3,    63,    64,    65,    66,    67,    95,   113,    63,
     100,    64,    66,    85,    17,    16,     6,    68,    86,    87,
      18,    88,    90,    95,     3,    20,    98,   114,     8,     9,
      10,    11,    12,    17,    96,    21,    21,    90,   100,    63,
       6,    79,    63,    19,    45,    47,    49,    61,    63,    87,
      89,    90,    91,    92,    93,    94,    97,   101,   102,   106,
     107,   110,   112,   113,     6,     6,    95,   115,    21,    63,
      64,   100,    95,     4,    17,   111,   103,    95,   114,     7,
      92,    89,    91,    92,    14,    14,    90,    48,   104,    90,
      14,    17,     6,    21,    21,    86,     3,    78,    78,    14,
      14,    95,    91,   105,   115,    95,   108,   108,    90,     4,
       5,    29,    30,    31,    34,    35,    36,   109,    79,    79,
      95
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 13:
#line 384 "parser.y"
    {scope++;}
    break;

  case 14:
#line 387 "parser.y"
    {scope--;}
    break;

  case 15:
#line 390 "parser.y"
    {printf("Header syntax correct;\tline no:\t%d\n", yylineno);}
    break;

  case 16:
#line 391 "parser.y"
    {printf("Header syntax correct;\tline no:\t%d\n", yylineno);}
    break;

  case 17:
#line 394 "parser.y"
    {	char msg[50];
														sprintf(msg, "main:\n");
														generate(interm_label, msg);
														interm_label++;
													}
    break;

  case 18:
#line 399 "parser.y"
    {	char msg[50];
														sprintf(msg, "end main\n");
														generate(interm_label, msg);
														interm_label++;
														printf("Main function syntax OK;\tline no:\t%d\n", yylineno);
													}
    break;

  case 19:
#line 407 "parser.y"
    {	int c = addFunction((yyvsp[(2) - (2)].string)); 
														if(c == -1) { 
															char msg[100]; 
															sprintf(msg, ": Symbol table full"); 
															yyerror(msg);
														}
														char msg[50];
														sprintf(msg, "%s:\n", (yyvsp[(2) - (2)].string));
														generate(interm_label, msg);
														interm_label++;
													}
    break;

  case 20:
#line 418 "parser.y"
    {	char msg[50];
														sprintf(msg, "end %s\n", (yyvsp[(2) - (5)].string));
														generate(interm_label, msg);
														interm_label++;
														printf("User defined function OK;\tline no:\t%d\n", yylineno);
													}
    break;

  case 23:
#line 430 "parser.y"
    {	int c = alreadyDeclared((yyvsp[(2) - (4)].string));
																		char msg[100];
																		if(c == 1) {
																			sprintf(msg, ": Multiple declarations of the identifier in same scope");
																			yyerror(msg);
																		}
																		else if(c == 2) {
																			sprintf(msg, ": Conflicting types for identifier");
																			yyerror(msg);
																		}
																		else {
																			int x = addSymbol((yyvsp[(2) - (4)].string));
																			if(x == -1) {
																				sprintf(msg, ": Symbol table full");
																				yyerror(msg);
																			}
																		}
																	}
    break;

  case 24:
#line 448 "parser.y"
    {	int c = alreadyDeclared((yyvsp[(2) - (2)].string));
																		char msg[100];
																		if(c == 1) {
																			sprintf(msg, ": Multiple declarations of the identifier in same scope");
																			yyerror(msg);
																		}
																		else if(c == 2) {
																			sprintf(msg, ": Conflicting types for identifier");
																			yyerror(msg);
																		}
																		else {
																			int x = addSymbol((yyvsp[(2) - (2)].string));
																			if(x == -1) {
																				sprintf(msg, ": Symbol table full");
																				yyerror(msg);
																			}
																		}
																	}
    break;

  case 25:
#line 468 "parser.y"
    {dtype = 1;}
    break;

  case 26:
#line 469 "parser.y"
    {dtype = 2;}
    break;

  case 27:
#line 470 "parser.y"
    {dtype = 2;}
    break;

  case 28:
#line 471 "parser.y"
    {dtype = 4;}
    break;

  case 29:
#line 472 "parser.y"
    {dtype = 5;}
    break;

  case 30:
#line 475 "parser.y"
    {scope++;}
    break;

  case 31:
#line 478 "parser.y"
    {deleteScopeSyms(scope); scope--;}
    break;

  case 39:
#line 494 "parser.y"
    {printf("Declaration over;\tline no:\t%d\n", yylineno);}
    break;

  case 40:
#line 495 "parser.y"
    {printf("Assignment over;\tline no:\t%d\n", yylineno);}
    break;

  case 41:
#line 496 "parser.y"
    {printf("Conditional block ends;\tline no:\t%d\n", yylineno);}
    break;

  case 42:
#line 497 "parser.y"
    {printf("Iterative block ends;\tline no:\t%d\n", yylineno);}
    break;

  case 44:
#line 499 "parser.y"
    {	char msg[50];
																		sprintf(msg, "return %s\n", (yyvsp[(2) - (3)].Dtype).place);
																		generate(interm_label, msg);
																		interm_label++;
																		printf("Return statement found;\tline no:\t%d\n", yylineno);
																	}
    break;

  case 46:
#line 508 "parser.y"
    {printf("printf statement found;\tline no:\t%d\n", yylineno);}
    break;

  case 47:
#line 511 "parser.y"
    {	if(!isPresent((yyvsp[(1) - (1)].string))) {
																			char msg[100];
																			sprintf(msg, ": Undefined identifier found");
																			yyerror(msg);
																		}
																		else {
																			(yyval.Dtype).dtype = getDatatype((yyvsp[(1) - (1)].string));
																			(yyval.Dtype).place = strdup((yyvsp[(1) - (1)].string));
																		}
																	}
    break;

  case 48:
#line 521 "parser.y"
    {	if(!isPresent((yyvsp[(1) - (2)].string))) {
																			char msg[100];
																			sprintf(msg, ": Undefined identifier found");
																			yyerror(msg);
																		}
																		else {
																			(yyval.Dtype).dtype = getDatatype((yyvsp[(1) - (2)].string));
																			(yyval.Dtype).place = strdup((yyvsp[(1) - (2)].string));
																		}
																	}
    break;

  case 49:
#line 531 "parser.y"
    {	(yyval.Dtype).dtype = 1;
				   														char tmp[20];
																		sprintf(tmp, "%d", (yyvsp[(1) - (1)].number));
																		(yyval.Dtype).place = strdup(tmp);
																	}
    break;

  case 50:
#line 536 "parser.y"
    {	(yyval.Dtype).dtype = 2;
																		char tmp[20];
																		sprintf(tmp, "%.2f", (yyvsp[(1) - (1)].decimal));
																		(yyval.Dtype).place = strdup(tmp);
																	}
    break;

  case 51:
#line 541 "parser.y"
    {	(yyval.Dtype).dtype = 4;
																		char tmp[5];
																		sprintf(tmp, "%s", (yyvsp[(1) - (1)].string));
																		(yyval.Dtype).place = strdup(tmp);
																	}
    break;

  case 52:
#line 546 "parser.y"
    {	(yyval.Dtype).dtype = 5;
																		char tmp[100];
																		sprintf(tmp, "%s", (yyvsp[(1) - (1)].string));
																		(yyval.Dtype).place = strdup(tmp);
																	}
    break;

  case 53:
#line 551 "parser.y"
    {	(yyval.Dtype).dtype = (yyvsp[(1) - (1)].Dtype).dtype;
																		(yyval.Dtype).place = strdup((yyvsp[(1) - (1)].Dtype).place);
																	}
    break;

  case 54:
#line 554 "parser.y"
    {	(yyval.Dtype).dtype = (yyvsp[(2) - (3)].Dtype).dtype;
																		(yyval.Dtype).place = strdup((yyvsp[(2) - (3)].Dtype).place);
																	}
    break;

  case 55:
#line 557 "parser.y"
    {	if((yyvsp[(1) - (3)].Dtype).dtype != (yyvsp[(3) - (3)].Dtype).dtype) {
																			char msg[100];
																			sprintf(msg, ": Type matching error in expression");
																			yyerror(msg);
																		}
																		else {
																			char *tmp = new_temp_var();
																			new_tmp_index++;
																			(yyval.Dtype).place = strdup(tmp);

																			char msg[50];
																			sprintf(msg, "%s = %s %s %s\n", (yyval.Dtype).place, (yyvsp[(1) - (3)].Dtype).place, (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].Dtype).place);
																			generate(interm_label, msg);
																			strcpy(expr_var, (yyval.Dtype).place);
																			interm_label++;
																		}
																		(yyval.Dtype).dtype = (yyvsp[(1) - (3)].Dtype).dtype;
																	}
    break;

  case 56:
#line 577 "parser.y"
    {(yyval.string) = strdup((yyvsp[(1) - (1)].string));}
    break;

  case 57:
#line 578 "parser.y"
    {(yyval.string) = strdup((yyvsp[(1) - (1)].string));}
    break;

  case 58:
#line 579 "parser.y"
    {(yyval.string) = strdup((yyvsp[(1) - (1)].string));}
    break;

  case 59:
#line 580 "parser.y"
    {(yyval.string) = strdup((yyvsp[(1) - (1)].string));}
    break;

  case 60:
#line 581 "parser.y"
    {(yyval.string) = strdup((yyvsp[(1) - (1)].string));}
    break;

  case 62:
#line 587 "parser.y"
    {	if(!isPresent((yyvsp[(2) - (3)].string))) {
																			char msg[100];
																			sprintf(msg, ": Undeclared identifier found");
																			yyerror(msg);
																		}
																	}
    break;

  case 64:
#line 594 "parser.y"
    {	char msg[100];
																		sprintf(msg, ": Unspecified array element access");
																		yyerror(msg);
																	}
    break;

  case 66:
#line 601 "parser.y"
    {	char msg[100];
																		sprintf(msg, ": Incorrect type for array size");
																		yyerror(msg);
																	}
    break;

  case 67:
#line 607 "parser.y"
    {	int c = alreadyDeclared((yyvsp[(1) - (1)].string));
																		char msg[100];
																		if(c == 1) {
																			sprintf(msg, ": Multiple declarations of the identifier in same scope");
																			yyerror(msg);
																		}
																		else if(c == 2) {
																			sprintf(msg, ": Conflicting types for identifier");
																			yyerror(msg);
																		}
																		else {
																			int x = addSymbol((yyvsp[(1) - (1)].string));
																			if(x == -1) {
																				sprintf(msg, ": Symbol table full");
																				yyerror(msg);
																			}
																		}
																	}
    break;

  case 68:
#line 625 "parser.y"
    {	int c = alreadyDeclared((yyvsp[(1) - (3)].string));
																		char msg[100];
																		if(c == 1) {
																			sprintf(msg, ": Multiple declarations of the identifier in same scope");
																			yyerror(msg);
																		}
																		else if(c == 2) {
																			sprintf(msg, ": Conflicting types for identifier");
																			yyerror(msg);
																		}
																		else {
																			int x = addSymbol((yyvsp[(1) - (3)].string));
																			if(x == -1) {
																				sprintf(msg, ": Symbol table full");
																				yyerror(msg);
																			}
																		}
																	}
    break;

  case 69:
#line 643 "parser.y"
    {	int c = alreadyDeclared((yyvsp[(1) - (5)].string));
																		char msg[100];
																		if(c == 1) {
																			sprintf(msg, ": Multiple declarations of identifier in same scope");
																			yyerror(msg);
																		}
																		else if(c == 2) {
																			sprintf(msg, ": Conflicting types for identifier");
																			yyerror(msg);
																		}
																		else {
																			int x = addSymbol((yyvsp[(1) - (5)].string));
																			if(x == -1) {
																				sprintf(msg, ": Symbol table full");
																				yyerror(msg);
																			}
																		}
																		if(dtype != (yyvsp[(3) - (5)].Dtype).dtype) {
																			sprintf(msg, ": Type mismatch between identifier and expression");
																			yyerror(msg);
																		}
																		else {
																			char msg[100];
																			sprintf(msg, "%s = %s\n", (yyvsp[(1) - (5)].string), (yyvsp[(3) - (5)].Dtype).place);
																			generate(interm_label, msg);
																			strcpy(expr_var, (yyvsp[(1) - (5)].string));
																			interm_label++;
																		}
																	}
    break;

  case 70:
#line 672 "parser.y"
    {	int c = alreadyDeclared((yyvsp[(1) - (3)].string));
																		char msg[100];
																		if(c == 1) {
																			sprintf(msg, ": Multiple declarations of identifier in same scope");
																			yyerror(msg);
																		}
																		else if(c == 2) {
																			sprintf(msg, ": Conflicting types for identifier");
																			yyerror(msg);
																		}
																		else {
																			int x = addSymbol((yyvsp[(1) - (3)].string));
																			if(x == -1) {
																				sprintf(msg, ": Symbol table full");
																				yyerror(msg);
																			}
																		}
																		if(getDatatype((yyvsp[(1) - (3)].string)) != (yyvsp[(3) - (3)].Dtype).dtype) {
																			sprintf(msg, ": Type mismatch between identifier and expression");
																			yyerror(msg);
																		}
																		else {
																			char msg[100];
																			sprintf(msg, "%s = %s\n", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].Dtype).place);
																			generate(interm_label, msg);
																			strcpy(expr_var, (yyvsp[(1) - (3)].string));
																			interm_label++;
																		}
																	}
    break;

  case 71:
#line 701 "parser.y"
    {	int c = alreadyDeclared((yyvsp[(1) - (4)].string));
																		char msg[100];
																		if(c == 1) {
																			sprintf(msg, ": Multiple declarations of identifier in same scope");
																			yyerror(msg);
																		}
																		else if(c == 2) {
																			sprintf(msg, ": Conflicting types for identifier");
																			yyerror(msg);
																		}
																		else {
																			int x = addSymbol((yyvsp[(1) - (4)].string));
																			if(x == -1) {
																				sprintf(msg, ": Symbol table full");
																				yyerror(msg);
																			}
																		}
																	}
    break;

  case 72:
#line 719 "parser.y"
    {	int c = alreadyDeclared((yyvsp[(1) - (2)].string));
																		char msg[100];
																		if(c == 1) {
																			sprintf(msg, ": Multiple declarations of identifier in same scope");
																			yyerror(msg);
																		}
																		else if(c == 2) {
																			sprintf(msg, ": Conflicting types for identifier");
																			yyerror(msg);
																		}
																		else {
																			int x = addSymbol((yyvsp[(1) - (2)].string));
																			if(x == -1) {
																				sprintf(msg, ": Symbol table full");
																				yyerror(msg);
																			}
																		}
																	}
    break;

  case 73:
#line 739 "parser.y"
    {	if(!isPresent((yyvsp[(1) - (3)].string))) {
																			char msg[100];
																			sprintf(msg, ": Undefined identifier found");
																			yyerror(msg);
																		}
																		else {
																			if(getDatatype((yyvsp[(1) - (3)].string)) != (yyvsp[(3) - (3)].Dtype).dtype) {
																				char msg[100];
																				sprintf(msg, ": Type mismatch between identifier and expression");
																				yyerror(msg);
																			}
																			else {
																				char msg[100];
																				sprintf(msg, "%s = %s\n", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].Dtype).place);
																				generate(interm_label, msg);
																				strcpy(expr_var, (yyvsp[(1) - (3)].string));
																				interm_label++;
																			}
																		}
																	}
    break;

  case 74:
#line 761 "parser.y"
    {temp_label = interm_label;}
    break;

  case 75:
#line 762 "parser.y"
    {	char *tmp = new_temp_var();
																		new_tmp_index++;
																		char msg[50];
																		sprintf(msg, "%s = not %s\n", tmp, expr_var);
																		generate(interm_label, msg);
																		interm_label++;
																		backpatch_label = interm_label;
																		strcpy(tmp_var, tmp);
																		interm_label++;
																	}
    break;

  case 76:
#line 774 "parser.y"
    {	
								char msg[50];
								sprintf(msg, "if %s goto %d\n", tmp_var, interm_label+1);
								generate(backpatch_label, msg);
								backpatch_label = interm_label;
								interm_label++;
							}
    break;

  case 77:
#line 781 "parser.y"
    {	
								char msg[50];
								sprintf(msg, "goto %d\n", interm_label);
								generate(backpatch_label, msg);
							}
    break;

  case 80:
#line 792 "parser.y"
    {	
								char msg[50];
								sprintf(msg, "if %s goto %d\n", tmp_var, interm_label);
								generate(backpatch_label, msg);
							}
    break;

  case 81:
#line 799 "parser.y"
    {	(yyval.Dtype).dtype = (yyvsp[(1) - (1)].Dtype).dtype;
																		(yyval.Dtype).place = strdup((yyvsp[(1) - (1)].Dtype).place);
																	}
    break;

  case 82:
#line 802 "parser.y"
    {	if((yyvsp[(1) - (3)].Dtype).dtype != (yyvsp[(3) - (3)].Dtype).dtype) {
																			char msg[100];
																			sprintf(msg, ": Type matching error in expression");
																			yyerror(msg);
																		}
																		else {
																			char *tmp = new_temp_var();
																			new_tmp_index++;
																			(yyval.Dtype).place = strdup(tmp);

																			char msg[50];
																			sprintf(msg, "%s = %s %s %s\n", (yyval.Dtype).place, (yyvsp[(1) - (3)].Dtype).place, (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].Dtype).place);
																			generate(interm_label, msg);
																			strcpy(expr_var, (yyval.Dtype).place);
																			interm_label++;
																		}
																		(yyval.Dtype).dtype = (yyvsp[(1) - (3)].Dtype).dtype;
																	}
    break;

  case 83:
#line 822 "parser.y"
    {(yyval.string) = strdup((yyvsp[(1) - (1)].string));}
    break;

  case 84:
#line 823 "parser.y"
    {(yyval.string) = strdup((yyvsp[(1) - (1)].string));}
    break;

  case 85:
#line 824 "parser.y"
    {(yyval.string) = strdup((yyvsp[(1) - (1)].string));}
    break;

  case 86:
#line 825 "parser.y"
    {(yyval.string) = strdup((yyvsp[(1) - (1)].string));}
    break;

  case 87:
#line 826 "parser.y"
    {(yyval.string) = strdup((yyvsp[(1) - (1)].string));}
    break;

  case 88:
#line 827 "parser.y"
    {(yyval.string) = strdup((yyvsp[(1) - (1)].string));}
    break;

  case 89:
#line 828 "parser.y"
    {(yyval.string) = strdup((yyvsp[(1) - (1)].string));}
    break;

  case 90:
#line 829 "parser.y"
    {(yyval.string) = strdup((yyvsp[(1) - (1)].string));}
    break;

  case 91:
#line 832 "parser.y"
    {temp_label = interm_label;}
    break;

  case 92:
#line 833 "parser.y"
    {	
															char *tmp = new_temp_var();
															new_tmp_index++;
															char msg[50];
															sprintf(msg, "%s = not %s\n", tmp, expr_var);
															generate(interm_label, msg);
															interm_label++;
															backpatch_label = interm_label;
															strcpy(tmp_var, tmp);
															interm_label++;
														}
    break;

  case 93:
#line 846 "parser.y"
    {
															char msg[50];
															sprintf(msg, "goto %d\n", temp_label);
															generate(interm_label, msg);
															interm_label++;

															
															sprintf(msg, "if %s goto %d\n", tmp_var, interm_label);
															generate(backpatch_label, msg);
														}
    break;

  case 94:
#line 858 "parser.y"
    {	printf("Function call statement found;\tline no:\t%d\n", yylineno);
																		if(!isPresent((yyvsp[(1) - (2)].string))) {
																			char msg[100];
																			sprintf(msg, ": Undeclared identifier found");
																			yyerror(msg);
																		}
																		else {
																			(yyval.Dtype).dtype = getDatatype((yyvsp[(1) - (2)].string));
																			(yyval.Dtype).place = strdup((yyvsp[(1) - (2)].string));
																		}
																	}
    break;


/* Line 1267 of yacc.c.  */
#line 2556 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 879 "parser.y"


void yyerror(char *s) {
	flag = 1;
	printf("\nParsing error at line: %d; Error%s\n\n", yylineno, s);
}

int main() {
	yyin = fopen("test.c", "r");
	out_file = fopen("im-code.txt", "w");
	setupSymbolTable();
	if(yyparse() == 0){
		if(flag == 0)
			printf("Parsed Successfully\n");
		else
			printf("Parsing Finished\n");
	}
	else {
		printf("\nSyntax error at line no.: %d\n", yylineno);
		printf("Last read token: %s\n", yytext);
	}
	write_to_file();
	fclose(yyin);
	fclose(out_file);
	freeTable();
	return 0;
}


