#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <dirent.h>
#include <termios.h>
#include <sys/ioctl.h>
#include <signal.h>

#define var long
#define STR(s) ((long)(s + 2))

var main__main(void);
var std__free(var mem);

#define D__std___SIZE 0
#define D__std___ID 1
long std__delete(long o);
#define D__console___SIZE 0
#define D__console___ID 2
long console__log(long str);
long console__log_str(long str);
long console__log_int(long n);
#define D__object___SIZE 0
#define D__object___ID 3
#define object__CAclass 1
#define object__CAemmiter 2
#define D__Astatement___SIZE 6
#define D__Astatement___ID 4
long Astatement__new(long type_, long parent_, long depth_);
long Astatement__dispose(long __this);
long Astatement__get_type(long __this);
long Astatement__get_depth(long __this);
long Astatement__get_parent(long __this);
long Astatement__get_statements(long __this);
long Astatement__get_else(long __this);
long Astatement__get_expression(long __this);
long Astatement__add_else(long __this, long type_);
long Astatement__add_statement(long __this, long statement_);
long Astatement__set_expression(long __this, long expr_);
#define D__response___SIZE 5
#define D__response___ID 5
long response__new(long type_, long instance_);
long response__dispose(long __this);
long response__clear(long __this);
long response__set_string(long __this, long status_, long data_);
long response__set_bytes(long __this, long status_, long data_);
long response__get_status(long __this);
long response__get_string(long __this);
long response__get_bytes(long __this);
#define D__Amember___SIZE 9
#define D__Amember___ID 6
long Amember__new(long kind_, long type_, long type_id_, long name_);
long Amember__dispose(long __this);
long Amember__get_kind(long __this);
long Amember__get_type(long __this);
long Amember__get_type_id(long __this);
long Amember__get_name(long __this);
long Amember__get_name_string(long __this);
long Amember__get_initial_value(long __this);
long Amember__set_initial_value(long __this, long initial_value_);
long Amember__set_index(long __this, long index_);
long Amember__get_index(long __this);
long Amember__get_body(long __this);
long Amember__get_vars(long __this);
long Amember__get_params(long __this);
long Amember__add_param(long __this, long kind_, long type_, long type_id_, long name_);
long Amember__add_var(long __this, long kind_, long type_, long type_id_, long name_);
long Amember__add_statement(long __this, long statement_);
#define D__Avirtual___SIZE 3
#define D__Avirtual___ID 7
long Avirtual__new(long memb_, long class_);
long Avirtual__dispose(long __this);
long Avirtual__set_next(long __this, long n);
long Avirtual__get_next(long __this);
long Avirtual__get_class_name(long __this);
long Avirtual__get_member(long __this);
long Avirtual__get_member_name(long __this);
#define D__buffer___SIZE 3
#define D__buffer___ID 8
long buffer__new(long initial_size);
long buffer__dispose(long __this);
long buffer__length(long __this);
long buffer__empty(long __this);
long buffer__set_at(long __this, long idx, long elem);
long buffer__get_at(long __this, long idx);
long buffer__push(long __this, long elem);
long buffer__set_last(long __this, long elem);
long buffer__get_last(long __this);
long buffer__pop(long __this);
long buffer__unshift(long __this, long elem);
long buffer__shift(long __this);
#define D__Aexpr___SIZE 10
#define D__Aexpr___ID 9
long Aexpr__new(long op_, long precedence_, long associativity_);
long Aexpr__dispose(long __this);
long Aexpr__get_origin(long __this);
long Aexpr__set_origin(long __this, long orig);
long Aexpr__get_right(long __this);
long Aexpr__set_right(long __this, long r);
long Aexpr__get_left(long __this);
long Aexpr__set_left(long __this, long l);
long Aexpr__get_parent(long __this);
long Aexpr__set_parent(long __this, long p);
long Aexpr__get_value2(long __this);
long Aexpr__set_value2(long __this, long v);
long Aexpr__get_value(long __this);
long Aexpr__set_value(long __this, long v);
long Aexpr__get_op(long __this);
long Aexpr__get_flags(long __this);
long Aexpr__set_flags(long __this, long flags_);
long Aexpr__set_precedence(long __this, long p);
long Aexpr__get_precedence(long __this);
long Aexpr__get_associativity(long __this);
long Aexpr__close(long __this, long op_);
long Aexpr__add(long __this, long ex);
long Aexpr__dump(long __this, long depth);
#define D__Aparser___SIZE 7
#define D__Aparser___ID 10
#define Aparser__Croot 1
#define Aparser__Cclass_dec 2
#define Aparser__Cstatement 3
#define Aparser__Cstatements 4
#define Aparser__Cexpression 5
#define Aparser__Creturn_statem1 6
#define Aparser__Cexpression1 7
#define Aparser__Cterm 8
#define Aparser__Cterm1 9
#define Aparser__Cterm2 10
#define Aparser__Cexpr_list 11
#define Aparser__Cexpr_list1 12
#define Aparser__Csub_call1 13
#define Aparser__Clet_statem1 14
#define Aparser__Clet_statem2 15
#define Aparser__Cdo_statem1 16
#define Aparser__Cwhile_statem1 17
#define Aparser__Cwhile_statem2 18
#define Aparser__Csubrout_body1 19
#define Aparser__Csubroutine_dec 20
#define Aparser__Cclass_dec1 21
#define Aparser__Cif_statem1 22
#define Aparser__Cif_statem2 23
#define Aparser__Celse_statem 29
#define Aparser__Celse_statem1 30
#define Aparser__Celse_statem2 31
long Aparser__new();
long Aparser__dispose(long __this);
long Aparser__get_data(long __this);
long Aparser__get_next(long __this);
long Aparser__release(long __this);
long Aparser__parse(long __this, long lexer_);
long Aparser__error(long __this, long e);
long Aparser__push(long __this, long step_);
long Aparser__pop(long __this);
long Aparser__root(long __this);
long Aparser__class_dec(long __this);
long Aparser__class_dec1(long __this);
long Aparser__class_var_dec(long __this);
long Aparser__var_name(long __this);
long Aparser__type(long __this);
long Aparser__clas_const_dec(long __this);
long Aparser__subroutine_dec(long __this);
long Aparser__param_list(long __this);
long Aparser__direction(long __this);
long Aparser__subrout_body(long __this);
long Aparser__subrout_body1(long __this);
long Aparser__var_dec(long __this);
long Aparser__statements(long __this);
long Aparser__statement(long __this);
long Aparser__if_statem(long __this, long type_);
long Aparser__if_statem1(long __this);
long Aparser__else_statem(long __this);
long Aparser__else_statem1(long __this);
long Aparser__while_statem(long __this);
long Aparser__while_statem1(long __this);
long Aparser__while_statem2(long __this);
long Aparser__return_statem(long __this);
long Aparser__return_statem1(long __this);
long Aparser__dolet_statem(long __this);
long Aparser__let_statem(long __this, long id);
long Aparser__let_statem1(long __this);
long Aparser__let_statem2(long __this);
long Aparser__do_statem(long __this, long id);
long Aparser__do_statem1(long __this);
long Aparser__expression(long __this);
long Aparser__expression1(long __this);
long Aparser__op(long __this);
long Aparser__term(long __this);
long Aparser__subrout_call(long __this, long id);
long Aparser__term1(long __this);
long Aparser__term2(long __this);
long Aparser__sub_call(long __this, long class_, long id);
long Aparser__sub_call1(long __this);
long Aparser__expr_list(long __this);
long Aparser__expr_list1(long __this);
long Aparser__eat(long __this);
long Aparser__match_id(long __this, long id);
long Aparser__match_op(long __this, long id);
long Aparser__match_newline(long __this);
long Aparser__match_str(long __this, long id);
long Aparser__state_machine(long __this);
#define D__bytes___SIZE 0
#define D__bytes___ID 11
#define D__array___SIZE 0
#define D__array___ID 12
long array__new(long size);
long array__dispose(long __this);
long array__get_size(long __this);
#define D__Aclass___SIZE 14
#define D__Aclass___ID 13
#define Aclass__Cstatic 2
#define Aclass__Cfield 3
#define Aclass__Cconst 4
#define Aclass__Cint 5
#define Aclass__Cvoid 7
#define Aclass__Cconstructor 8
#define Aclass__Cfunction 9
#define Aclass__Cmethod 10
#define Aclass__Cvirtual 11
#define Aclass__Cidentifier 12
#define Aclass__Cin 13
#define Aclass__Cout 14
#define Aclass__Cio 15
#define Aclass__Cvar 16
#define Aclass__Cbreak 17
#define Aclass__Cif 18
#define Aclass__Cwhile 19
#define Aclass__Creturn 20
#define Aclass__Cdo 21
#define Aclass__Clet 22
#define Aclass__Celse 23
#define Aclass__Celseif 24
#define Aclass__Cthis 25
#define Aclass__Cnull 26
#define Aclass__Cint_const 27
#define Aclass__Cchar_const 28
#define Aclass__Cstr_const 29
#define Aclass__Croot 1000
#define Aclass__Cequal 1026
#define Aclass__Cnotequal 1027
#define Aclass__Clargerequal 1028
#define Aclass__Clesserequal 1029
#define Aclass__Clarger 1030
#define Aclass__Clesser 1031
#define Aclass__Clogicaland 1032
#define Aclass__Clogicalor 1033
#define Aclass__Cadd 1034
#define Aclass__Csub 1035
#define Aclass__Cmult 1036
#define Aclass__Cdiv 1037
#define Aclass__Cmodulo 1038
#define Aclass__Clogicalnot 1039
#define Aclass__Cparenthesis 1040
#define Aclass__Cunaryplus 1041
#define Aclass__Cunaryminus 1042
#define Aclass__Cdot 1043
#define Aclass__Ccall 1044
#define Aclass__Cindex 1045
#define Aclass__Ccomma 1046
#define Aclass__Cexpr 1047
#define Aclass__Cassign 1048
#define Aclass__Cconstant 1049
#define Aclass__Clr 1
#define Aclass__Crl 2
long Aclass__new(long token);
long Aclass__dispose(long __this);
long Aclass__error(long __this, long err);
long Aclass__get_members(long __this);
long Aclass__get_nb_fields(long __this);
long Aclass__set_next(long __this, long n);
long Aclass__get_next(long __this);
long Aclass__get_name(long __this);
long Aclass__pad(long __this, long p);
long Aclass__prepare_kind(long __this, long kind_);
long Aclass__prepare_type(long __this, long type_);
long Aclass__prepare_type_identifier(long __this, long id_);
long Aclass__prepare_set_name(long __this, long id_);
long Aclass__valid_member_name(long __this);
long Aclass__valid_param(long __this);
long Aclass__valid_var(long __this);
long Aclass__begin_else(long __this, long type_);
long Aclass__begin_stm(long __this, long type_, long orig);
long Aclass__finish_stm(long __this);
long Aclass__finish_const(long __this, long initialiser_);
long Aclass__finish_subroutine(long __this);
long Aclass__begin_expr(long __this, long orig);
long Aclass__finish_expr(long __this);
long Aclass__expr_op(long __this, long op_, long orig);
long Aclass__expr_open_par(long __this);
long Aclass__expr_in_par(long __this);
long Aclass__expr_close_par(long __this);
long Aclass__expr_open_index(long __this, long id_, long orig);
long Aclass__expr_close_index(long __this);
long Aclass__expr_begin_sub_call(long __this, long class_, long name_, long orig);
long Aclass__expr_next_expr(long __this, long orig);
long Aclass__expr_finish_sub_call(long __this);
long Aclass__expr_term(long __this, long term_, long orig);
long Aclass__expr_var(long __this, long name_, long orig);
long Aclass__expr_int_const(long __this, long value_, long orig);
long Aclass__expr_char_const(long __this, long value_, long orig);
long Aclass__expr_str_const(long __this, long value_, long orig);
long Aclass__expr_constant(long __this, long class_name_, long const_name_, long orig);
#define D__file___SIZE 2
#define D__file___ID 14
long file__new(long folder, long fscb);
long file__dispose(long __this);
long file__mkfolder(long __this);
long file__mkdir(long __this, long name);
long file__read(long __this, long name, long seek, long size_);
long file__write(long __this, long name, long data, long seek, long size);
long file__filesize(long __this, long name);
long file__scandir(long __this, long name);
long file__rmdir(long __this, long name);
long file__unlink(long __this, long name);
#define D__hash___SIZE 2
#define D__hash___ID 15
#define hash__Cnext 0
#define hash__Chash 1
#define hash__Ckey 2
#define hash__Cvalue 3
long hash__new(long size_);
long hash__dispose(long __this);
long hash__add(long __this, long key, long value);
long hash__get(long __this, long key);
#define D__Atoken___SIZE 4
#define D__Atoken___ID 16
long Atoken__new(long type1, long _data1, long line1, long file1);
long Atoken__dispose(long __this);
long Atoken__get_data(long __this);
long Atoken__get_type(long __this);
long Atoken__get_line(long __this);
long Atoken__get_file(long __this);
#define D__Alexer___SIZE 22
#define D__Alexer___ID 17
#define Alexer__Cstring 1
#define Alexer__Cquote 2
#define Alexer__Ccomment 3
#define Alexer__Casm 4
#define Alexer__Cnumber 5
#define Alexer__Cidentifier 6
#define Alexer__Coperator 7
#define Alexer__Cerror 8
#define Alexer__Cnewline 9
#define Alexer__Cend 10
long Alexer__new();
long Alexer__dispose(long __this);
long Alexer__begin(long __this, long file_);
long Alexer__get_at(long __this, long x);
long Alexer__shift(long __this);
long Alexer__empty(long __this);
long Alexer__set_enable_escape(long __this, long v);
long Alexer__add(long __this, long str_);
long Alexer__tokenize(long __this);
long Alexer__is_digit(long __this, long c);
long Alexer__is_letter(long __this, long c);
long Alexer__is_space(long __this, long c);
long Alexer__next(long __this);
long Alexer__validate(long __this, long type_);
long Alexer__error(long __this, long msg);
long Alexer__state(long __this);
long Alexer__finish(long __this);
#define D__string___SIZE 2
#define D__string___ID 18
long string__new(long alloc);
long string__dispose(long __this);
#define string__dispose(___this) virtual__dispose(___this)
long string___V_dispose(long __this);
long string__get_buf(long __this);
long string__set_buf(long __this, long b);
long string__get_size(long __this);
long string__set_size(long __this, long ns);
long string__length(long __this);
long string__set_int(long __this, long num);
long string__set(long __this, long src);
long string__add_char(long __this, long num);
long string__add(long __this, long src);
long string__indexof(long __this, long start_pos, long needle);
long string__substr(long __this, long start_pos, long length_, long result);
long string__to_string(long __this);
long string__to_int(long __this);
long string__compare(long __this, long other);
long string__get_hash(long __this);
long string__get_at(long __this, long at);
long string__set_at(long __this, long at, long v);
#define D__Aemmiter___SIZE 15
#define D__Aemmiter___ID 19
long Aemmiter__new();
long Aemmiter__dispose(long __this);
long Aemmiter__emmit(long __this, long par);
long Aemmiter__get_head(long __this);
long Aemmiter__get_data(long __this);
long Aemmiter__get_mid(long __this);
long Aemmiter__gen_class(long __this);
long Aemmiter__gen_member(long __this, long mb);
long Aemmiter__gen_conditional_call(long __this, long v, long mb);
long Aemmiter__gen_virtuals(long __this);
long Aemmiter__pass_0(long __this, long str, long mb, long k);
long Aemmiter__pass_1(long __this, long str, long mb, long k);
long Aemmiter__pass_2(long __this, long str, long mb, long k);
long Aemmiter__pad(long __this, long depth);
long Aemmiter__find_param(long __this, long stri);
long Aemmiter__find_member(long __this, long stri);
long Aemmiter__find_field(long __this, long stri);
long Aemmiter__find_static(long __this, long stri);
long Aemmiter__find_meth_virt(long __this, long stri);
long Aemmiter__find_local(long __this, long stri);
long Aemmiter__expr_gen_call(long __this, long expr);
long Aemmiter__expr_gen_sub_expr(long __this, long expr);
long Aemmiter__expr_gen_comma(long __this, long expr);
long Aemmiter__expr_gen_index(long __this, long expr);
long Aemmiter__expr_gen_par(long __this, long expr);
long Aemmiter__expr_gen_constant(long __this, long expr);
long Aemmiter__expr_gen_dot(long __this, long expr);
long Aemmiter__gen_string(long __this, long s2, long value);
long Aemmiter__expr_gen_str_const(long __this, long expr);
long Aemmiter__expr_gen_char_const(long __this, long expr);
long Aemmiter__expr_gen0(long __this, long expr, long op);
long Aemmiter__expr_gen1(long __this, long expr, long op);
long Aemmiter__expr_gen_assign(long __this, long expr, long op);
long Aemmiter__expr_gen2(long __this, long expr, long op);
long Aemmiter__expr_gen_var(long __this, long expr);
long Aemmiter__expr_process(long __this, long expr);
long Aemmiter__expr_gen(long __this, long expr);
long Aemmiter__body_gen(long __this, long mb, long k, long vars_, long body_);
long Aemmiter__gen_type(long __this, long mb);
long Aemmiter__add_virtual(long __this, long mb);
long Aemmiter__gen_virtual_caller(long __this, long mb);
long Aemmiter__gen_method_decl(long __this, long dest, long c_name, long name, long mb, long k);
long Aemmiter__pass_3(long __this, long str, long mb, long k);
long Aemmiter__pass_4(long __this, long str, long mb, long k);
long Aemmiter__error(long __this, long t, long e);
long Aemmiter__dump(long __this);
#define D__main___SIZE 0
#define D__main___ID 20
#define main__Cblock 10
#define main__Chello STR(__string_mainChello)
long main__copyto(long f, long output);
long main__process_file(long f, long lex);
long main__main();
long virtual__dispose(long __this);
static char __strings_Astatement1[]="DONT KNOW WAHT";
static long __string_Astatement1[]={0,0, (long) __strings_Astatement1,-1};
static char __strings_Aexpr2[]=" ";
static long __string_Aexpr2[]={0,0, (long) __strings_Aexpr2,-1};
static char __strings_Aexpr3[]="";
static long __string_Aexpr3[]={0,0, (long) __strings_Aexpr3,-1};
static char __strings_Aparser4[]=": found '";
static long __string_Aparser4[]={0,0, (long) __strings_Aparser4,-1};
static char __strings_Aparser5[]="' at line(";
static long __string_Aparser5[]={0,0, (long) __strings_Aparser5,-1};
static char __strings_Aparser6[]="): ";
static long __string_Aparser6[]={0,0, (long) __strings_Aparser6,-1};
static char __strings_Aparser7[]="class";
static long __string_Aparser7[]={0,0, (long) __strings_Aparser7,-1};
static char __strings_Aparser8[]="expecting 'class' keyword";
static long __string_Aparser8[]={0,0, (long) __strings_Aparser8,-1};
static char __strings_Aparser9[]="expecting identifier";
static long __string_Aparser9[]={0,0, (long) __strings_Aparser9,-1};
static char __strings_Aparser10[]="{";
static long __string_Aparser10[]={0,0, (long) __strings_Aparser10,-1};
static char __strings_Aparser11[]="expecting '{'";
static long __string_Aparser11[]={0,0, (long) __strings_Aparser11,-1};
static char __strings_Aparser12[]="}";
static long __string_Aparser12[]={0,0, (long) __strings_Aparser12,-1};
static char __strings_Aparser13[]="expecting '}'";
static long __string_Aparser13[]={0,0, (long) __strings_Aparser13,-1};
static char __strings_Aparser14[]="field";
static long __string_Aparser14[]={0,0, (long) __strings_Aparser14,-1};
static char __strings_Aparser15[]="static";
static long __string_Aparser15[]={0,0, (long) __strings_Aparser15,-1};
static char __strings_Aparser16[]=",";
static long __string_Aparser16[]={0,0, (long) __strings_Aparser16,-1};
static char __strings_Aparser17[]=";";
static long __string_Aparser17[]={0,0, (long) __strings_Aparser17,-1};
static char __strings_Aparser18[]="';' expected.";
static long __string_Aparser18[]={0,0, (long) __strings_Aparser18,-1};
static char __strings_Aparser19[]="Name of variable expected.";
static long __string_Aparser19[]={0,0, (long) __strings_Aparser19,-1};
static char __strings_Aparser20[]="int";
static long __string_Aparser20[]={0,0, (long) __strings_Aparser20,-1};
static char __strings_Aparser21[]="void";
static long __string_Aparser21[]={0,0, (long) __strings_Aparser21,-1};
static char __strings_Aparser22[]="Type expected.";
static long __string_Aparser22[]={0,0, (long) __strings_Aparser22,-1};
static char __strings_Aparser23[]="const";
static long __string_Aparser23[]={0,0, (long) __strings_Aparser23,-1};
static char __strings_Aparser24[]=":=";
static long __string_Aparser24[]={0,0, (long) __strings_Aparser24,-1};
static char __strings_Aparser25[]="':=' expected.";
static long __string_Aparser25[]={0,0, (long) __strings_Aparser25,-1};
static char __strings_Aparser26[]=";";
static long __string_Aparser26[]={0,0, (long) __strings_Aparser26,-1};
static char __strings_Aparser27[]="Expected constant initialiser.";
static long __string_Aparser27[]={0,0, (long) __strings_Aparser27,-1};
static char __strings_Aparser28[]=";";
static long __string_Aparser28[]={0,0, (long) __strings_Aparser28,-1};
static char __strings_Aparser29[]="';' expected.";
static long __string_Aparser29[]={0,0, (long) __strings_Aparser29,-1};
static char __strings_Aparser30[]="constructor";
static long __string_Aparser30[]={0,0, (long) __strings_Aparser30,-1};
static char __strings_Aparser31[]="function";
static long __string_Aparser31[]={0,0, (long) __strings_Aparser31,-1};
static char __strings_Aparser32[]="method";
static long __string_Aparser32[]={0,0, (long) __strings_Aparser32,-1};
static char __strings_Aparser33[]="virtual";
static long __string_Aparser33[]={0,0, (long) __strings_Aparser33,-1};
static char __strings_Aparser34[]="void";
static long __string_Aparser34[]={0,0, (long) __strings_Aparser34,-1};
static char __strings_Aparser35[]="(";
static long __string_Aparser35[]={0,0, (long) __strings_Aparser35,-1};
static char __strings_Aparser36[]="'(' expected.";
static long __string_Aparser36[]={0,0, (long) __strings_Aparser36,-1};
static char __strings_Aparser37[]=")";
static long __string_Aparser37[]={0,0, (long) __strings_Aparser37,-1};
static char __strings_Aparser38[]="')' expected.";
static long __string_Aparser38[]={0,0, (long) __strings_Aparser38,-1};
static char __strings_Aparser39[]=")";
static long __string_Aparser39[]={0,0, (long) __strings_Aparser39,-1};
static char __strings_Aparser40[]=",";
static long __string_Aparser40[]={0,0, (long) __strings_Aparser40,-1};
static char __strings_Aparser41[]="in";
static long __string_Aparser41[]={0,0, (long) __strings_Aparser41,-1};
static char __strings_Aparser42[]="out";
static long __string_Aparser42[]={0,0, (long) __strings_Aparser42,-1};
static char __strings_Aparser43[]="io";
static long __string_Aparser43[]={0,0, (long) __strings_Aparser43,-1};
static char __strings_Aparser44[]="Expected 'in/out/io'.";
static long __string_Aparser44[]={0,0, (long) __strings_Aparser44,-1};
static char __strings_Aparser45[]="{";
static long __string_Aparser45[]={0,0, (long) __strings_Aparser45,-1};
static char __strings_Aparser46[]="'{' expected.";
static long __string_Aparser46[]={0,0, (long) __strings_Aparser46,-1};
static char __strings_Aparser47[]="}";
static long __string_Aparser47[]={0,0, (long) __strings_Aparser47,-1};
static char __strings_Aparser48[]="'}' expected at end of subroutine body.";
static long __string_Aparser48[]={0,0, (long) __strings_Aparser48,-1};
static char __strings_Aparser49[]="var";
static long __string_Aparser49[]={0,0, (long) __strings_Aparser49,-1};
static char __strings_Aparser50[]=",";
static long __string_Aparser50[]={0,0, (long) __strings_Aparser50,-1};
static char __strings_Aparser51[]=";";
static long __string_Aparser51[]={0,0, (long) __strings_Aparser51,-1};
static char __strings_Aparser52[]="';' expected at end of variable declaration";
static long __string_Aparser52[]={0,0, (long) __strings_Aparser52,-1};
static char __strings_Aparser53[]="break";
static long __string_Aparser53[]={0,0, (long) __strings_Aparser53,-1};
static char __strings_Aparser54[]=";";
static long __string_Aparser54[]={0,0, (long) __strings_Aparser54,-1};
static char __strings_Aparser55[]="';' expected after break";
static long __string_Aparser55[]={0,0, (long) __strings_Aparser55,-1};
static char __strings_Aparser56[]="if";
static long __string_Aparser56[]={0,0, (long) __strings_Aparser56,-1};
static char __strings_Aparser57[]="(";
static long __string_Aparser57[]={0,0, (long) __strings_Aparser57,-1};
static char __strings_Aparser58[]="'(' expected after if.";
static long __string_Aparser58[]={0,0, (long) __strings_Aparser58,-1};
static char __strings_Aparser59[]=")";
static long __string_Aparser59[]={0,0, (long) __strings_Aparser59,-1};
static char __strings_Aparser60[]="')' expected after if condition.";
static long __string_Aparser60[]={0,0, (long) __strings_Aparser60,-1};
static char __strings_Aparser61[]="{";
static long __string_Aparser61[]={0,0, (long) __strings_Aparser61,-1};
static char __strings_Aparser62[]="'{' expected after if ().";
static long __string_Aparser62[]={0,0, (long) __strings_Aparser62,-1};
static char __strings_Aparser63[]="}";
static long __string_Aparser63[]={0,0, (long) __strings_Aparser63,-1};
static char __strings_Aparser64[]="'}' expected after if body.";
static long __string_Aparser64[]={0,0, (long) __strings_Aparser64,-1};
static char __strings_Aparser65[]="else";
static long __string_Aparser65[]={0,0, (long) __strings_Aparser65,-1};
static char __strings_Aparser66[]="if";
static long __string_Aparser66[]={0,0, (long) __strings_Aparser66,-1};
static char __strings_Aparser67[]="{";
static long __string_Aparser67[]={0,0, (long) __strings_Aparser67,-1};
static char __strings_Aparser68[]="'{' expected after else.";
static long __string_Aparser68[]={0,0, (long) __strings_Aparser68,-1};
static char __strings_Aparser69[]="}";
static long __string_Aparser69[]={0,0, (long) __strings_Aparser69,-1};
static char __strings_Aparser70[]="'}' expected after else body.";
static long __string_Aparser70[]={0,0, (long) __strings_Aparser70,-1};
static char __strings_Aparser71[]="while";
static long __string_Aparser71[]={0,0, (long) __strings_Aparser71,-1};
static char __strings_Aparser72[]="(";
static long __string_Aparser72[]={0,0, (long) __strings_Aparser72,-1};
static char __strings_Aparser73[]="'(' expected after while.";
static long __string_Aparser73[]={0,0, (long) __strings_Aparser73,-1};
static char __strings_Aparser74[]=")";
static long __string_Aparser74[]={0,0, (long) __strings_Aparser74,-1};
static char __strings_Aparser75[]="')' expected after while condition.";
static long __string_Aparser75[]={0,0, (long) __strings_Aparser75,-1};
static char __strings_Aparser76[]="{";
static long __string_Aparser76[]={0,0, (long) __strings_Aparser76,-1};
static char __strings_Aparser77[]="'{' expected after while ().";
static long __string_Aparser77[]={0,0, (long) __strings_Aparser77,-1};
static char __strings_Aparser78[]="}";
static long __string_Aparser78[]={0,0, (long) __strings_Aparser78,-1};
static char __strings_Aparser79[]="'}' expected after while body.";
static long __string_Aparser79[]={0,0, (long) __strings_Aparser79,-1};
static char __strings_Aparser80[]="return";
static long __string_Aparser80[]={0,0, (long) __strings_Aparser80,-1};
static char __strings_Aparser81[]=";";
static long __string_Aparser81[]={0,0, (long) __strings_Aparser81,-1};
static char __strings_Aparser82[]=";";
static long __string_Aparser82[]={0,0, (long) __strings_Aparser82,-1};
static char __strings_Aparser83[]="';' expected";
static long __string_Aparser83[]={0,0, (long) __strings_Aparser83,-1};
static char __strings_Aparser84[]=":=";
static long __string_Aparser84[]={0,0, (long) __strings_Aparser84,-1};
static char __strings_Aparser85[]="[";
static long __string_Aparser85[]={0,0, (long) __strings_Aparser85,-1};
static char __strings_Aparser86[]="}";
static long __string_Aparser86[]={0,0, (long) __strings_Aparser86,-1};
static char __strings_Aparser87[]=":=";
static long __string_Aparser87[]={0,0, (long) __strings_Aparser87,-1};
static char __strings_Aparser88[]="[";
static long __string_Aparser88[]={0,0, (long) __strings_Aparser88,-1};
static char __strings_Aparser89[]=";";
static long __string_Aparser89[]={0,0, (long) __strings_Aparser89,-1};
static char __strings_Aparser90[]="';' expected at end of let statement";
static long __string_Aparser90[]={0,0, (long) __strings_Aparser90,-1};
static char __strings_Aparser91[]="]";
static long __string_Aparser91[]={0,0, (long) __strings_Aparser91,-1};
static char __strings_Aparser92[]="']' expected in left side of let statement";
static long __string_Aparser92[]={0,0, (long) __strings_Aparser92,-1};
static char __strings_Aparser93[]=":=";
static long __string_Aparser93[]={0,0, (long) __strings_Aparser93,-1};
static char __strings_Aparser94[]="':=' expected in let statement";
static long __string_Aparser94[]={0,0, (long) __strings_Aparser94,-1};
static char __strings_Aparser95[]=";";
static long __string_Aparser95[]={0,0, (long) __strings_Aparser95,-1};
static char __strings_Aparser96[]="';' expected at end of do statement";
static long __string_Aparser96[]={0,0, (long) __strings_Aparser96,-1};
static char __strings_Aparser97[]="+";
static long __string_Aparser97[]={0,0, (long) __strings_Aparser97,-1};
static char __strings_Aparser98[]="-";
static long __string_Aparser98[]={0,0, (long) __strings_Aparser98,-1};
static char __strings_Aparser99[]="*";
static long __string_Aparser99[]={0,0, (long) __strings_Aparser99,-1};
static char __strings_Aparser100[]="/";
static long __string_Aparser100[]={0,0, (long) __strings_Aparser100,-1};
static char __strings_Aparser101[]="%";
static long __string_Aparser101[]={0,0, (long) __strings_Aparser101,-1};
static char __strings_Aparser102[]="&&";
static long __string_Aparser102[]={0,0, (long) __strings_Aparser102,-1};
static char __strings_Aparser103[]="||";
static long __string_Aparser103[]={0,0, (long) __strings_Aparser103,-1};
static char __strings_Aparser104[]="==";
static long __string_Aparser104[]={0,0, (long) __strings_Aparser104,-1};
static char __strings_Aparser105[]="!=";
static long __string_Aparser105[]={0,0, (long) __strings_Aparser105,-1};
static char __strings_Aparser106[]=">=";
static long __string_Aparser106[]={0,0, (long) __strings_Aparser106,-1};
static char __strings_Aparser107[]="<=";
static long __string_Aparser107[]={0,0, (long) __strings_Aparser107,-1};
static char __strings_Aparser108[]=">";
static long __string_Aparser108[]={0,0, (long) __strings_Aparser108,-1};
static char __strings_Aparser109[]="<";
static long __string_Aparser109[]={0,0, (long) __strings_Aparser109,-1};
static char __strings_Aparser110[]="this";
static long __string_Aparser110[]={0,0, (long) __strings_Aparser110,-1};
static char __strings_Aparser111[]="null";
static long __string_Aparser111[]={0,0, (long) __strings_Aparser111,-1};
static char __strings_Aparser112[]="[";
static long __string_Aparser112[]={0,0, (long) __strings_Aparser112,-1};
static char __strings_Aparser113[]=".$";
static long __string_Aparser113[]={0,0, (long) __strings_Aparser113,-1};
static char __strings_Aparser114[]="constant name expected.";
static long __string_Aparser114[]={0,0, (long) __strings_Aparser114,-1};
static char __strings_Aparser115[]="-";
static long __string_Aparser115[]={0,0, (long) __strings_Aparser115,-1};
static char __strings_Aparser116[]="+";
static long __string_Aparser116[]={0,0, (long) __strings_Aparser116,-1};
static char __strings_Aparser117[]="!";
static long __string_Aparser117[]={0,0, (long) __strings_Aparser117,-1};
static char __strings_Aparser118[]="(";
static long __string_Aparser118[]={0,0, (long) __strings_Aparser118,-1};
static char __strings_Aparser119[]="unexpected term";
static long __string_Aparser119[]={0,0, (long) __strings_Aparser119,-1};
static char __strings_Aparser120[]="(";
static long __string_Aparser120[]={0,0, (long) __strings_Aparser120,-1};
static char __strings_Aparser121[]=".";
static long __string_Aparser121[]={0,0, (long) __strings_Aparser121,-1};
static char __strings_Aparser122[]=")";
static long __string_Aparser122[]={0,0, (long) __strings_Aparser122,-1};
static char __strings_Aparser123[]="')' expected after term";
static long __string_Aparser123[]={0,0, (long) __strings_Aparser123,-1};
static char __strings_Aparser124[]="]";
static long __string_Aparser124[]={0,0, (long) __strings_Aparser124,-1};
static char __strings_Aparser125[]="']' expected after term";
static long __string_Aparser125[]={0,0, (long) __strings_Aparser125,-1};
static char __strings_Aparser126[]="(";
static long __string_Aparser126[]={0,0, (long) __strings_Aparser126,-1};
static char __strings_Aparser127[]="'(' expected in subroutine call.";
static long __string_Aparser127[]={0,0, (long) __strings_Aparser127,-1};
static char __strings_Aparser128[]=")";
static long __string_Aparser128[]={0,0, (long) __strings_Aparser128,-1};
static char __strings_Aparser129[]=")";
static long __string_Aparser129[]={0,0, (long) __strings_Aparser129,-1};
static char __strings_Aparser130[]="')' expected at end of subroutrine call";
static long __string_Aparser130[]={0,0, (long) __strings_Aparser130,-1};
static char __strings_Aparser131[]=",";
static long __string_Aparser131[]={0,0, (long) __strings_Aparser131,-1};
static char __strings_Aparser132[]=",";
static long __string_Aparser132[]={0,0, (long) __strings_Aparser132,-1};
static char __strings_Aparser133[]="unexpected state";
static long __string_Aparser133[]={0,0, (long) __strings_Aparser133,-1};
static char __strings_Aclass134[]="\t";
static long __string_Aclass134[]={0,0, (long) __strings_Aclass134,-1};
static char __strings_Aclass135[]="Unknown operator.";
static long __string_Aclass135[]={0,0, (long) __strings_Aclass135,-1};
static char __strings_Aclass136[]="What a mess in parenthesis..";
static long __string_Aclass136[]={0,0, (long) __strings_Aclass136,-1};
static char __strings_Aclass137[]="What a mess in index..";
static long __string_Aclass137[]={0,0, (long) __strings_Aclass137,-1};
static char __strings_Aclass138[]="What a mess..";
static long __string_Aclass138[]={0,0, (long) __strings_Aclass138,-1};
static char __strings_Alexer139[]="Lexer: ";
static long __string_Alexer139[]={0,0, (long) __strings_Alexer139,-1};
static char __strings_Alexer140[]=" @ (";
static long __string_Alexer140[]={0,0, (long) __strings_Alexer140,-1};
static char __strings_Alexer141[]=") : '";
static long __string_Alexer141[]={0,0, (long) __strings_Alexer141,-1};
static char __strings_Alexer142[]="' ";
static long __string_Alexer142[]={0,0, (long) __strings_Alexer142,-1};
static char __strings_Alexer143[]="newline in string.";
static long __string_Alexer143[]={0,0, (long) __strings_Alexer143,-1};
static char __strings_Alexer144[]="TOKEN";
static long __string_Alexer144[]={0,0, (long) __strings_Alexer144,-1};
static char __strings_Alexer145[]="unterminated token.";
static long __string_Alexer145[]={0,0, (long) __strings_Alexer145,-1};
static char __strings_string146[]="";
static long __string_string146[]={0,0, (long) __strings_string146,-1};
static char __strings_Aemmiter147[]="// class ";
static long __string_Aemmiter147[]={0,0, (long) __strings_Aemmiter147,-1};
static char __strings_Aemmiter148[]="\n";
static long __string_Aemmiter148[]={0,0, (long) __strings_Aemmiter148,-1};
static char __strings_Aemmiter149[]="#define D__";
static long __string_Aemmiter149[]={0,0, (long) __strings_Aemmiter149,-1};
static char __strings_Aemmiter150[]="___SIZE ";
static long __string_Aemmiter150[]={0,0, (long) __strings_Aemmiter150,-1};
static char __strings_Aemmiter151[]="\n";
static long __string_Aemmiter151[]={0,0, (long) __strings_Aemmiter151,-1};
static char __strings_Aemmiter152[]="#define D__";
static long __string_Aemmiter152[]={0,0, (long) __strings_Aemmiter152,-1};
static char __strings_Aemmiter153[]="___ID ";
static long __string_Aemmiter153[]={0,0, (long) __strings_Aemmiter153,-1};
static char __strings_Aemmiter154[]="\n";
static long __string_Aemmiter154[]={0,0, (long) __strings_Aemmiter154,-1};
static char __strings_Aemmiter155[]="\tcase D__";
static long __string_Aemmiter155[]={0,0, (long) __strings_Aemmiter155,-1};
static char __strings_Aemmiter156[]="___ID:\n\t\treturn ";
static long __string_Aemmiter156[]={0,0, (long) __strings_Aemmiter156,-1};
static char __strings_Aemmiter157[]="___V_";
static long __string_Aemmiter157[]={0,0, (long) __strings_Aemmiter157,-1};
static char __strings_Aemmiter158[]="(__this";
static long __string_Aemmiter158[]={0,0, (long) __strings_Aemmiter158,-1};
static char __strings_Aemmiter159[]=", ";
static long __string_Aemmiter159[]={0,0, (long) __strings_Aemmiter159,-1};
static char __strings_Aemmiter160[]=");\n";
static long __string_Aemmiter160[]={0,0, (long) __strings_Aemmiter160,-1};
static char __strings_Aemmiter161[]="virtual";
static long __string_Aemmiter161[]={0,0, (long) __strings_Aemmiter161,-1};
static char __strings_Aemmiter162[]=";\n";
static long __string_Aemmiter162[]={0,0, (long) __strings_Aemmiter162,-1};
static char __strings_Aemmiter163[]="virtual";
static long __string_Aemmiter163[]={0,0, (long) __strings_Aemmiter163,-1};
static char __strings_Aemmiter164[]="\n{\n\tlong cid;\n";
static long __string_Aemmiter164[]={0,0, (long) __strings_Aemmiter164,-1};
static char __strings_Aemmiter165[]="\tcid = ((long*)__this)[-1];\n";
static long __string_Aemmiter165[]={0,0, (long) __strings_Aemmiter165,-1};
static char __strings_Aemmiter166[]="\tswitch (cid) {\n";
static long __string_Aemmiter166[]={0,0, (long) __strings_Aemmiter166,-1};
static char __strings_Aemmiter167[]="\tdefault:\n\t\tstd__panic();\n\t}\n";
static long __string_Aemmiter167[]={0,0, (long) __strings_Aemmiter167,-1};
static char __strings_Aemmiter168[]="\treturn 0;\n}\n";
static long __string_Aemmiter168[]={0,0, (long) __strings_Aemmiter168,-1};
static char __strings_Aemmiter169[]="#define ";
static long __string_Aemmiter169[]={0,0, (long) __strings_Aemmiter169,-1};
static char __strings_Aemmiter170[]="__";
static long __string_Aemmiter170[]={0,0, (long) __strings_Aemmiter170,-1};
static char __strings_Aemmiter171[]=" ";
static long __string_Aemmiter171[]={0,0, (long) __strings_Aemmiter171,-1};
static char __strings_Aemmiter172[]="STR(__string_";
static long __string_Aemmiter172[]={0,0, (long) __strings_Aemmiter172,-1};
static char __strings_Aemmiter173[]=")";
static long __string_Aemmiter173[]={0,0, (long) __strings_Aemmiter173,-1};
static char __strings_Aemmiter174[]="\n";
static long __string_Aemmiter174[]={0,0, (long) __strings_Aemmiter174,-1};
static char __strings_Aemmiter175[]="#define _";
static long __string_Aemmiter175[]={0,0, (long) __strings_Aemmiter175,-1};
static char __strings_Aemmiter176[]="_";
static long __string_Aemmiter176[]={0,0, (long) __strings_Aemmiter176,-1};
static char __strings_Aemmiter177[]=" ((long*)__this)[";
static long __string_Aemmiter177[]={0,0, (long) __strings_Aemmiter177,-1};
static char __strings_Aemmiter178[]="]\n";
static long __string_Aemmiter178[]={0,0, (long) __strings_Aemmiter178,-1};
static char __strings_Aemmiter179[]="static long ";
static long __string_Aemmiter179[]={0,0, (long) __strings_Aemmiter179,-1};
static char __strings_Aemmiter180[]="__";
static long __string_Aemmiter180[]={0,0, (long) __strings_Aemmiter180,-1};
static char __strings_Aemmiter181[]=" = 0;\n";
static long __string_Aemmiter181[]={0,0, (long) __strings_Aemmiter181,-1};
static char __strings_Aemmiter182[]="\t";
static long __string_Aemmiter182[]={0,0, (long) __strings_Aemmiter182,-1};
static char __strings_Aemmiter183[]="__";
static long __string_Aemmiter183[]={0,0, (long) __strings_Aemmiter183,-1};
static char __strings_Aemmiter184[]="(__this, ";
static long __string_Aemmiter184[]={0,0, (long) __strings_Aemmiter184,-1};
static char __strings_Aemmiter185[]=")";
static long __string_Aemmiter185[]={0,0, (long) __strings_Aemmiter185,-1};
static char __strings_Aemmiter186[]="(__this)";
static long __string_Aemmiter186[]={0,0, (long) __strings_Aemmiter186,-1};
static char __strings_Aemmiter187[]="cannot find method.";
static long __string_Aemmiter187[]={0,0, (long) __strings_Aemmiter187,-1};
static char __strings_Aemmiter188[]="wrong type of method.";
static long __string_Aemmiter188[]={0,0, (long) __strings_Aemmiter188,-1};
static char __strings_Aemmiter189[]="__";
static long __string_Aemmiter189[]={0,0, (long) __strings_Aemmiter189,-1};
static char __strings_Aemmiter190[]="(";
static long __string_Aemmiter190[]={0,0, (long) __strings_Aemmiter190,-1};
static char __strings_Aemmiter191[]="_";
static long __string_Aemmiter191[]={0,0, (long) __strings_Aemmiter191,-1};
static char __strings_Aemmiter192[]="_";
static long __string_Aemmiter192[]={0,0, (long) __strings_Aemmiter192,-1};
static char __strings_Aemmiter193[]=",";
static long __string_Aemmiter193[]={0,0, (long) __strings_Aemmiter193,-1};
static char __strings_Aemmiter194[]=")";
static long __string_Aemmiter194[]={0,0, (long) __strings_Aemmiter194,-1};
static char __strings_Aemmiter195[]="__";
static long __string_Aemmiter195[]={0,0, (long) __strings_Aemmiter195,-1};
static char __strings_Aemmiter196[]="(";
static long __string_Aemmiter196[]={0,0, (long) __strings_Aemmiter196,-1};
static char __strings_Aemmiter197[]=")";
static long __string_Aemmiter197[]={0,0, (long) __strings_Aemmiter197,-1};
static char __strings_Aemmiter198[]=",";
static long __string_Aemmiter198[]={0,0, (long) __strings_Aemmiter198,-1};
static char __strings_Aemmiter199[]="((long*)";
static long __string_Aemmiter199[]={0,0, (long) __strings_Aemmiter199,-1};
static char __strings_Aemmiter200[]=")[";
static long __string_Aemmiter200[]={0,0, (long) __strings_Aemmiter200,-1};
static char __strings_Aemmiter201[]="]";
static long __string_Aemmiter201[]={0,0, (long) __strings_Aemmiter201,-1};
static char __strings_Aemmiter202[]="(";
static long __string_Aemmiter202[]={0,0, (long) __strings_Aemmiter202,-1};
static char __strings_Aemmiter203[]=")";
static long __string_Aemmiter203[]={0,0, (long) __strings_Aemmiter203,-1};
static char __strings_Aemmiter204[]="__";
static long __string_Aemmiter204[]={0,0, (long) __strings_Aemmiter204,-1};
static char __strings_Aemmiter205[]="static char __strings_";
static long __string_Aemmiter205[]={0,0, (long) __strings_Aemmiter205,-1};
static char __strings_Aemmiter206[]="[]=";
static long __string_Aemmiter206[]={0,0, (long) __strings_Aemmiter206,-1};
static char __strings_Aemmiter207[]=";\n";
static long __string_Aemmiter207[]={0,0, (long) __strings_Aemmiter207,-1};
static char __strings_Aemmiter208[]="static long __string_";
static long __string_Aemmiter208[]={0,0, (long) __strings_Aemmiter208,-1};
static char __strings_Aemmiter209[]="[]={0,0, ";
static long __string_Aemmiter209[]={0,0, (long) __strings_Aemmiter209,-1};
static char __strings_Aemmiter210[]="(long) __strings_";
static long __string_Aemmiter210[]={0,0, (long) __strings_Aemmiter210,-1};
static char __strings_Aemmiter211[]=",-1};\n";
static long __string_Aemmiter211[]={0,0, (long) __strings_Aemmiter211,-1};
static char __strings_Aemmiter212[]="STR(__string_";
static long __string_Aemmiter212[]={0,0, (long) __strings_Aemmiter212,-1};
static char __strings_Aemmiter213[]=")";
static long __string_Aemmiter213[]={0,0, (long) __strings_Aemmiter213,-1};
static char __strings_Aemmiter214[]="'";
static long __string_Aemmiter214[]={0,0, (long) __strings_Aemmiter214,-1};
static char __strings_Aemmiter215[]="'";
static long __string_Aemmiter215[]={0,0, (long) __strings_Aemmiter215,-1};
static char __strings_Aemmiter216[]="(";
static long __string_Aemmiter216[]={0,0, (long) __strings_Aemmiter216,-1};
static char __strings_Aemmiter217[]=")";
static long __string_Aemmiter217[]={0,0, (long) __strings_Aemmiter217,-1};
static char __strings_Aemmiter218[]="(";
static long __string_Aemmiter218[]={0,0, (long) __strings_Aemmiter218,-1};
static char __strings_Aemmiter219[]=")";
static long __string_Aemmiter219[]={0,0, (long) __strings_Aemmiter219,-1};
static char __strings_Aemmiter220[]="(";
static long __string_Aemmiter220[]={0,0, (long) __strings_Aemmiter220,-1};
static char __strings_Aemmiter221[]=")";
static long __string_Aemmiter221[]={0,0, (long) __strings_Aemmiter221,-1};
static char __strings_Aemmiter222[]="_";
static long __string_Aemmiter222[]={0,0, (long) __strings_Aemmiter222,-1};
static char __strings_Aemmiter223[]="_";
static long __string_Aemmiter223[]={0,0, (long) __strings_Aemmiter223,-1};
static char __strings_Aemmiter224[]="__";
static long __string_Aemmiter224[]={0,0, (long) __strings_Aemmiter224,-1};
static char __strings_Aemmiter225[]="0";
static long __string_Aemmiter225[]={0,0, (long) __strings_Aemmiter225,-1};
static char __strings_Aemmiter226[]="__this";
static long __string_Aemmiter226[]={0,0, (long) __strings_Aemmiter226,-1};
static char __strings_Aemmiter227[]="wrong expression...";
static long __string_Aemmiter227[]={0,0, (long) __strings_Aemmiter227,-1};
static char __strings_Aemmiter228[]="=";
static long __string_Aemmiter228[]={0,0, (long) __strings_Aemmiter228,-1};
static char __strings_Aemmiter229[]="==";
static long __string_Aemmiter229[]={0,0, (long) __strings_Aemmiter229,-1};
static char __strings_Aemmiter230[]="!=";
static long __string_Aemmiter230[]={0,0, (long) __strings_Aemmiter230,-1};
static char __strings_Aemmiter231[]=">=";
static long __string_Aemmiter231[]={0,0, (long) __strings_Aemmiter231,-1};
static char __strings_Aemmiter232[]="<=";
static long __string_Aemmiter232[]={0,0, (long) __strings_Aemmiter232,-1};
static char __strings_Aemmiter233[]=">";
static long __string_Aemmiter233[]={0,0, (long) __strings_Aemmiter233,-1};
static char __strings_Aemmiter234[]="<";
static long __string_Aemmiter234[]={0,0, (long) __strings_Aemmiter234,-1};
static char __strings_Aemmiter235[]="&&";
static long __string_Aemmiter235[]={0,0, (long) __strings_Aemmiter235,-1};
static char __strings_Aemmiter236[]="||";
static long __string_Aemmiter236[]={0,0, (long) __strings_Aemmiter236,-1};
static char __strings_Aemmiter237[]="+";
static long __string_Aemmiter237[]={0,0, (long) __strings_Aemmiter237,-1};
static char __strings_Aemmiter238[]="-";
static long __string_Aemmiter238[]={0,0, (long) __strings_Aemmiter238,-1};
static char __strings_Aemmiter239[]="*";
static long __string_Aemmiter239[]={0,0, (long) __strings_Aemmiter239,-1};
static char __strings_Aemmiter240[]="/";
static long __string_Aemmiter240[]={0,0, (long) __strings_Aemmiter240,-1};
static char __strings_Aemmiter241[]="%";
static long __string_Aemmiter241[]={0,0, (long) __strings_Aemmiter241,-1};
static char __strings_Aemmiter242[]="!";
static long __string_Aemmiter242[]={0,0, (long) __strings_Aemmiter242,-1};
static char __strings_Aemmiter243[]="+";
static long __string_Aemmiter243[]={0,0, (long) __strings_Aemmiter243,-1};
static char __strings_Aemmiter244[]="-";
static long __string_Aemmiter244[]={0,0, (long) __strings_Aemmiter244,-1};
static char __strings_Aemmiter245[]="UNKNOW OP\n";
static long __string_Aemmiter245[]={0,0, (long) __strings_Aemmiter245,-1};
static char __strings_Aemmiter246[]="{\n";
static long __string_Aemmiter246[]={0,0, (long) __strings_Aemmiter246,-1};
static char __strings_Aemmiter247[]="\tlong ";
static long __string_Aemmiter247[]={0,0, (long) __strings_Aemmiter247,-1};
static char __strings_Aemmiter248[]=";\n";
static long __string_Aemmiter248[]={0,0, (long) __strings_Aemmiter248,-1};
static char __strings_Aemmiter249[]="\tlong __this;\n";
static long __string_Aemmiter249[]={0,0, (long) __strings_Aemmiter249,-1};
static char __strings_Aemmiter250[]="\t__this = std__alloc(D__";
static long __string_Aemmiter250[]={0,0, (long) __strings_Aemmiter250,-1};
static char __strings_Aemmiter251[]="___SIZE);\n";
static long __string_Aemmiter251[]={0,0, (long) __strings_Aemmiter251,-1};
static char __strings_Aemmiter252[]="\t((long*)__this)[-1] = D__";
static long __string_Aemmiter252[]={0,0, (long) __strings_Aemmiter252,-1};
static char __strings_Aemmiter253[]="___ID;\n";
static long __string_Aemmiter253[]={0,0, (long) __strings_Aemmiter253,-1};
static char __strings_Aemmiter254[]="\n";
static long __string_Aemmiter254[]={0,0, (long) __strings_Aemmiter254,-1};
static char __strings_Aemmiter255[]=" else if (";
static long __string_Aemmiter255[]={0,0, (long) __strings_Aemmiter255,-1};
static char __strings_Aemmiter256[]="if (";
static long __string_Aemmiter256[]={0,0, (long) __strings_Aemmiter256,-1};
static char __strings_Aemmiter257[]=") {";
static long __string_Aemmiter257[]={0,0, (long) __strings_Aemmiter257,-1};
static char __strings_Aemmiter258[]=" else {";
static long __string_Aemmiter258[]={0,0, (long) __strings_Aemmiter258,-1};
static char __strings_Aemmiter259[]="break;";
static long __string_Aemmiter259[]={0,0, (long) __strings_Aemmiter259,-1};
static char __strings_Aemmiter260[]="return ";
static long __string_Aemmiter260[]={0,0, (long) __strings_Aemmiter260,-1};
static char __strings_Aemmiter261[]=";";
static long __string_Aemmiter261[]={0,0, (long) __strings_Aemmiter261,-1};
static char __strings_Aemmiter262[]="return 0;";
static long __string_Aemmiter262[]={0,0, (long) __strings_Aemmiter262,-1};
static char __strings_Aemmiter263[]=";";
static long __string_Aemmiter263[]={0,0, (long) __strings_Aemmiter263,-1};
static char __strings_Aemmiter264[]=";";
static long __string_Aemmiter264[]={0,0, (long) __strings_Aemmiter264,-1};
static char __strings_Aemmiter265[]="while (";
static long __string_Aemmiter265[]={0,0, (long) __strings_Aemmiter265,-1};
static char __strings_Aemmiter266[]=") {";
static long __string_Aemmiter266[]={0,0, (long) __strings_Aemmiter266,-1};
static char __strings_Aemmiter267[]="ERROR !!";
static long __string_Aemmiter267[]={0,0, (long) __strings_Aemmiter267,-1};
static char __strings_Aemmiter268[]="\n";
static long __string_Aemmiter268[]={0,0, (long) __strings_Aemmiter268,-1};
static char __strings_Aemmiter269[]="}";
static long __string_Aemmiter269[]={0,0, (long) __strings_Aemmiter269,-1};
static char __strings_Aemmiter270[]="\n";
static long __string_Aemmiter270[]={0,0, (long) __strings_Aemmiter270,-1};
static char __strings_Aemmiter271[]="}";
static long __string_Aemmiter271[]={0,0, (long) __strings_Aemmiter271,-1};
static char __strings_Aemmiter272[]="\n";
static long __string_Aemmiter272[]={0,0, (long) __strings_Aemmiter272,-1};
static char __strings_Aemmiter273[]="long";
static long __string_Aemmiter273[]={0,0, (long) __strings_Aemmiter273,-1};
static char __strings_Aemmiter274[]="void";
static long __string_Aemmiter274[]={0,0, (long) __strings_Aemmiter274,-1};
static char __strings_Aemmiter275[]="unknown type";
static long __string_Aemmiter275[]={0,0, (long) __strings_Aemmiter275,-1};
static char __strings_Aemmiter276[]="#define ";
static long __string_Aemmiter276[]={0,0, (long) __strings_Aemmiter276,-1};
static char __strings_Aemmiter277[]="__";
static long __string_Aemmiter277[]={0,0, (long) __strings_Aemmiter277,-1};
static char __strings_Aemmiter278[]="(___this";
static long __string_Aemmiter278[]={0,0, (long) __strings_Aemmiter278,-1};
static char __strings_Aemmiter279[]=", ";
static long __string_Aemmiter279[]={0,0, (long) __strings_Aemmiter279,-1};
static char __strings_Aemmiter280[]=") virtual__";
static long __string_Aemmiter280[]={0,0, (long) __strings_Aemmiter280,-1};
static char __strings_Aemmiter281[]="(___this";
static long __string_Aemmiter281[]={0,0, (long) __strings_Aemmiter281,-1};
static char __strings_Aemmiter282[]=", ";
static long __string_Aemmiter282[]={0,0, (long) __strings_Aemmiter282,-1};
static char __strings_Aemmiter283[]=")\n";
static long __string_Aemmiter283[]={0,0, (long) __strings_Aemmiter283,-1};
static char __strings_Aemmiter284[]="long ";
static long __string_Aemmiter284[]={0,0, (long) __strings_Aemmiter284,-1};
static char __strings_Aemmiter285[]="__";
static long __string_Aemmiter285[]={0,0, (long) __strings_Aemmiter285,-1};
static char __strings_Aemmiter286[]="(";
static long __string_Aemmiter286[]={0,0, (long) __strings_Aemmiter286,-1};
static char __strings_Aemmiter287[]="long __this";
static long __string_Aemmiter287[]={0,0, (long) __strings_Aemmiter287,-1};
static char __strings_Aemmiter288[]=", ";
static long __string_Aemmiter288[]={0,0, (long) __strings_Aemmiter288,-1};
static char __strings_Aemmiter289[]="long ";
static long __string_Aemmiter289[]={0,0, (long) __strings_Aemmiter289,-1};
static char __strings_Aemmiter290[]=")";
static long __string_Aemmiter290[]={0,0, (long) __strings_Aemmiter290,-1};
static char __strings_Aemmiter291[]=";\n";
static long __string_Aemmiter291[]={0,0, (long) __strings_Aemmiter291,-1};
static char __strings_Aemmiter292[]="_V_";
static long __string_Aemmiter292[]={0,0, (long) __strings_Aemmiter292,-1};
static char __strings_Aemmiter293[]=";\n";
static long __string_Aemmiter293[]={0,0, (long) __strings_Aemmiter293,-1};
static char __strings_Aemmiter294[]="\n";
static long __string_Aemmiter294[]={0,0, (long) __strings_Aemmiter294,-1};
static char __strings_Aemmiter295[]="\n";
static long __string_Aemmiter295[]={0,0, (long) __strings_Aemmiter295,-1};
static char __strings_Aemmiter296[]=": at line (";
static long __string_Aemmiter296[]={0,0, (long) __strings_Aemmiter296,-1};
static char __strings_Aemmiter297[]=") '";
static long __string_Aemmiter297[]={0,0, (long) __strings_Aemmiter297,-1};
static char __strings_Aemmiter298[]="' ";
static long __string_Aemmiter298[]={0,0, (long) __strings_Aemmiter298,-1};
static char __strings_mainChello[]=" --- The Jack 3.0.3 ---";
static long __string_mainChello[]={0,0, (long) __strings_mainChello,-1};
static char __strings_main299[]="Including : ";
static long __string_main299[]={0,0, (long) __strings_main299,-1};
static char __strings_main300[]="";
static long __string_main300[]={0,0, (long) __strings_main300,-1};
static char __strings_main301[]="Compiling : ";
static long __string_main301[]={0,0, (long) __strings_main301,-1};
static char __strings_main302[]="";
static long __string_main302[]={0,0, (long) __strings_main302,-1};
static char __strings_main303[]="";
static long __string_main303[]={0,0, (long) __strings_main303,-1};
static char __strings_main304[]="wrong number of command line arguments";
static long __string_main304[]={0,0, (long) __strings_main304,-1};
static char __strings_main305[]=".jack.c";
static long __string_main305[]={0,0, (long) __strings_main305,-1};
static char __strings_main306[]="";
static long __string_main306[]={0,0, (long) __strings_main306,-1};
static char __strings_main307[]="\n";
static long __string_main307[]={0,0, (long) __strings_main307,-1};
static char __strings_main308[]=".jack";
static long __string_main308[]={0,0, (long) __strings_main308,-1};
static char __strings_main309[]=".h";
static long __string_main309[]={0,0, (long) __strings_main309,-1};
static char __strings_main310[]=".c";
static long __string_main310[]={0,0, (long) __strings_main310,-1};
static char __strings_main311[]="\n";
static long __string_main311[]={0,0, (long) __strings_main311,-1};
static char __strings_main312[]="";
static long __string_main312[]={0,0, (long) __strings_main312,-1};
static char __strings_main313[]="Output to : ";
static long __string_main313[]={0,0, (long) __strings_main313,-1};

#define GETSTR(s) ((char*) string__get_buf(s))
#define GETLEN(s) ((long)strlen(GETSTR(s)))

var std__alloc(var size)
{
	var *m;
	m = (var*)malloc(sizeof(var) * (size + 2));
	m[0] = 0;
	m[1] = size;
	return (var)(m + 2);
}

var std__panic()
{
	printf("PANIC!\n");
	exit(-1);
	return 0;
}

var bytes__new(var size)
{
	var s;
	var r;
	s = (size + sizeof(var) - 1) / sizeof(var);
	r = std__alloc(s + 1);
	((var*)r)[0] = size;
	return r;
}

var bytes__dispose(var bb)
{
	std__free(bb);
	return 0;
}

var bytes__get_buf(var bb)
{
	return (var)(((var*)bb) + 1);
}

var bytes__get_at(var bb, var at)
{
	char *b = (char*)(((var*)bb) + 1);
	return b[at];
}

var bytes__set_at(var bb, var at, var v)
{
	char *b = (char*)(((var*)bb) + 1);
	b[at] = v & 0xFF;
	return 0;
}

var bytes__set_size(var bb, var v)
{
	((var*)bb)[0] = v;
	return 0;
}


var bytes__get_size(var bb)
{
	return ((var*)bb)[0];
}


var std__stralloc(var obj, var len)
{
	char *b;
	b = malloc(len); // UTF-8
	b[0] = 0;
	string__set_buf(obj, (var)b);
	return (var)b;
}

var std__strfree(var b)
{
	free((void*)string__get_buf(b));
	return 0;
}

var std__strlen(var str)
{
	return (var)strlen((char*)string__get_buf(str));
}

var std__strcat(var dest, var src, var maxlen)
{
	strncat((char*)string__get_buf(dest), 
		(char*)string__get_buf(src), maxlen);
	return 0;
}

var std__strsub(var dest, var start,  var src, var maxlen)
{
	strncat((char*)string__get_buf(dest), 
		((char*)string__get_buf(src))+start, maxlen);
	return 0;
}

var std__str_set_int(var dest, var maxlen, var n)
{
	snprintf((char*)string__get_buf(dest), maxlen, "%ld", n);
	return 0;
}

var std__str_toint(var src)
{
	return atol((char*)string__get_buf(src));
}

var std__str_set_at(var dest, var pos, var val)
{
	char *b = (char*)string__get_buf(dest);
	b[pos] = (char)val;
	return 0;
}

var std__str_get_at(var dest, var pos)
{
	return ((char*)string__get_buf(dest))[pos];
}

var std__strindex(var haystack, var offest, var needle)
{
	char *r;
	char *h = (char*)string__get_buf(haystack);
	char *n = (char*)string__get_buf(needle);
	r = strstr(h + offest, n);
	if (r == NULL) {
		return -1;
	}
	return (long)(r - h);
}

var std__strcmp(var s1, var s2)
{
	return strcmp((char*)string__get_buf(s1), (char*)string__get_buf(s2));
}

var std__strhash(var s)
{
	char *p = (char*)string__get_buf(s);
	var h = 0;
	while (*p) {
		h = (h << 4) ^ *p;
		p++;
	}
	return h;
}

var std__get_size(var mem)
{
	var *m;
	m = (var*)((mem - 1) * sizeof(var));
	return (-m[0]) - 1;
}

var std__free(var mem)
{
	free(((var*)mem) - 2);
	return 0;
}

var std__string2native(var data, char *buf, size_t maxlen)
{
	var l;
	char *sb;
	var i;

	l = GETLEN(data);
	sb = GETSTR(data);
	i = 0;
	while (i <= l && ((size_t)i < maxlen)) {
		buf[i] = sb[i]; // FIXME UTF-8
		i++;
	}
	if ((size_t)i == maxlen) {
		buf[i-1] = 0;
	} else {
		buf[i] = 0;
	}
	return i;
}
	
var std__native2string(char *buf)
{
	size_t l;
	char *sb;
	var data;
	size_t i;

	l = strlen(buf);
	data = string__new(l + 1);
	sb = GETSTR(data);
	i = 0;
	while (i <= l) {
		sb[i] = buf[i]; // FIXME UTF-8
		i++;
	}
	return data;
}
	
var std__mkfolder(var fs_cb)
{
	var status = 200;
	var data = 0;
	time_t t;
	struct tm *tp;
	char buf[255];
	int r;

	t = time(NULL);
	if (t < 0) {
		status = 403;
	} else {
		tp = gmtime(&t);
		if (tp == NULL) {
			status = 403;
		} else {
			snprintf(buf, sizeof(buf), 
				"%s/%04d%02d%02d%02d%02d%02d", 
				getenv("HOME"), tp->tm_year + 1900,
				tp->tm_mon + 1, tp->tm_mday,
				tp->tm_hour, tp->tm_min, tp->tm_sec);
		}
	}
	if (status == 200) {
		r = mkdir(buf, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
		if (r == 0) {
			data = std__native2string(buf);
		} else {
			data = std__native2string(strerror(errno));
			status = 403;
		}
	}	
	response__set_string(fs_cb, status, data);
	return 0;
}

static var std__concat(var folder, var name, char *buf, var size)
{
	var l;
	var fullpath;

	fullpath = string__new(1024);
	string__add(fullpath, folder);
	string__add(fullpath, name);
	l = std__string2native(fullpath, buf, size);
	if (l >= size) {
		string__dispose(fullpath);
		fullpath = 0;
	}
	return fullpath;
}


var std__mkdir(var folder, var name, var fs_cb)
{
	char buf[1024];
	var status = 200;
	var data = 0;
	var fullpath;
	int r;

	fullpath = std__concat(folder, name, buf, sizeof(buf));

	if (fullpath == 0) {
		data = std__native2string("invalid name.");
		status = 403;
	} else {
		r = mkdir(buf, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
		if (r == 0) {
			data = fullpath;
		} else {
			string__dispose(fullpath);
			data = std__native2string(strerror(errno));
			status = 403;
		}
	}
	response__set_string(fs_cb, status, data);
	return 0;
}

var std__read(var folder, var name, var seek, var size, var fs_cb)
{
	char fname[1024];
	var status = 200;
	var data = 0;
	var fullpath;
	FILE *fp;
	char *buf;
	int r;
	struct stat st;
	fullpath = std__concat(folder, name, fname, sizeof(fname));

	if (fullpath == 0) {
		data = std__native2string("invalid name.");
		status = 403;
	} else {
		if (size < 1) {
			if (access(fname, 0) == 0) {
				stat(fname, &st);
				if ((st.st_mode & S_IFDIR) != 0) {
					data = std__native2string(
						"path is a directory.");
					status = 403;
				} else {
					size = st.st_size;
				}
			}
		}
		if (seek < 0) {
			seek = 0;
		}
		if (size > 0 && status == 200) {
			data = bytes__new(size + 1);
			buf = (char*)bytes__get_buf(data);
			fp = fopen(fname, "r");
			if (fp) {
				fseek(fp, seek, SEEK_SET);
				r = fread(buf, 1, size, fp);
				fclose(fp);
			} else {
				r = -1;
			}
			bytes__set_size(data, r);
			if (r > size || r < 0) {
				bytes__dispose(data);
				data = std__native2string(
					"error reading file.");
				status = 403;
			} else {		
			      	if (r == 0) {
					status = 201;
				}
				buf[r] = '\0';
				bytes__set_size(data, r);
				response__set_bytes(fs_cb, status, data);
				return 0;
			}
		} else {
			data = std__native2string("nothing to read.");
			status = 403;
		}
	}
	response__set_string(fs_cb, status, data);
	return 0;
}

var std__write(var folder, var name, var data, var seek, var size, var fs_cb)
{
	char fname[1024];
	var status = 200;
	var outstr = 0;
	var fullpath;
	FILE *fp;
	char *buf;
	int r;
	struct stat st;
	char *mode = "w";

	fullpath = std__concat(folder, name, fname, sizeof(fname));
	if (fullpath == 0) {
		outstr = std__native2string("invalid name.");
		status = 403;
	} else {
		if (access(fname, 0) == 0) {
			stat(fname, &st);
			if ((st.st_mode & S_IFDIR) != 0) {
				string__dispose(fullpath);
				outstr = std__native2string(
					"path is a directory.");
				status = 403;
			} else {
				mode = "rs+";
			}
		}
		if (seek < 0) {
			seek = 0;
			truncate(fname, 0);
		}
		if (size > 0 && status == 200) {
			buf = (char*)bytes__get_buf(data);
			buf -= sizeof(long);
			fp = fopen(fname, mode);
			if (fp) {
				if (seek != 0) {
					fseek(fp, seek, SEEK_SET);
				}
				r = 0;
				if (r < size) {
					r = fwrite(buf, 1, size, fp);
				}
				fclose(fp);
			} else {
				r = -1;
			}
			bytes__set_size(data, r);
			if (r != size) {
				string__dispose(fullpath);
				outstr = std__native2string(
					"error writing file.");
				status = 403;
			} else {
				outstr = fullpath;
			}
		} else {
			string__dispose(fullpath);
			data = std__native2string("nothing to read.");
			status = 403;
		}
	}
	response__set_string(fs_cb, status, outstr);
	return 0;
}

var std__filesize(var folder, var name, var fs_cb)
{
	char fname[1024];
	var status = 200;
	var outstr = 0;
	var fullpath;
	var size;
	struct stat st;

	fullpath = std__concat(folder, name, fname, sizeof(fname));
	if (fullpath == 0) {
		outstr = std__native2string("invalid name.");
		status = 403;
	} else {
		if (access(fname, 0) == 0) {
			stat(fname, &st);
			if ((st.st_mode & S_IFDIR) != 0) {
				string__dispose(fullpath);
				outstr = std__native2string(
					"path is a directory.");
				status = 403;
			} else {
				size = st.st_size;
				string__set_int(fullpath, size);
				outstr = fullpath;
			}
		} else {
			string__dispose(fullpath);
			outstr = std__native2string(strerror(errno));
			status = 403;
		}
	}
	response__set_string(fs_cb, status, outstr);
	return 0;
}

var std__scandir(var folder, var name, var fs_cb)
{
	char dname[1024];
	var status = 200;
	var outstr = 0;
	var fullpath;
	struct dirent *dp;
	DIR *dir;
	char *s;
	char *outp;
	size_t outl;
	size_t outa;
	size_t l;
	size_t dl;
	char *tmp;

	fullpath = std__concat(folder, name, dname, sizeof(dname));

	if (fullpath == 0) {
		outstr = std__native2string("invalid name.");
		status = 403;
	} else {
		dir = opendir(dname);
		if (dir == 0) {
			string__dispose(fullpath);
			outstr = std__native2string(strerror(errno));
			status = 403;
		}		
	}
	if (status == 200) {
		string__dispose(fullpath);
		
		std__string2native(name, dname, sizeof(dname) - 1);
		dl = strlen(dname);
		if (dl == 0) {
			std__string2native(folder, dname, sizeof(dname) - 1);
			dl = strlen(dname);
			if (dl == 0 || (dname[dl - 1] != '/')) {
				dname[0] = '\0';
				strcat(dname, "./");
				dl = 2;
			}
		} else {
			if (dname[dl - 1] != '/') {
				dname[dl] = '/';
				dl++;
				dname[dl] = '\0';
			}
		}
		dp = readdir(dir);
		outl = 0;
		outa = 4096;
		outp = malloc(outa);
		outp[0] = '\0';
		while (dp != 0) {
			s = dp->d_name;
			if (s[0] == '.' && (s[1] == '\0' ||
				(s[1] == '.' && s[2] == '\0')))
			{

			} else {
				l = strlen(s);
				while ((outa - outl) <= (l + dl + 3)) {
					outa += 4096;
					tmp = malloc(outa);
					tmp[0] = '\0';
					strcat(tmp, outp);	
					free(outp);
					outp = tmp;
				}
				strcat(outp + outl, dname);
				outl += dl;
				strcat(outp + outl, s);
				outl += l;
				if (dp->d_type == DT_DIR) {
					outp[outl] = '/';
					outl++;
				}
				outp[outl] = '\n';
				outl++;
			}
			dp = readdir(dir);
		}
		closedir(dir);
		outstr = std__native2string(outp);
		free(outp);
	}
	response__set_string(fs_cb, status, outstr);
	return 0;
}

var std__rmdir(var folder, var name, var fs_cb)
{
	char fname[1024];
	var status = 200;
	var outstr = 0;
	var fullpath;
	var r;

	fullpath = std__concat(folder, name, fname, sizeof(fname));
	if (fullpath == 0) {
		outstr = std__native2string("invalid name.");
		status = 403;
	} else {
		r = rmdir(fname);
		if (r != 0) {
			string__dispose(fullpath);
			outstr = std__native2string(strerror(errno));
			status = 403;
		} else {
			outstr = fullpath;
		}		
	}
	response__set_string(fs_cb, status, outstr);
	return 0;
}

var std__unlink(var folder, var name, var fs_cb)
{
	char fname[1024];
	var status = 200;
	var outstr = 0;
	var fullpath;
	var r;
	struct stat st;

	fullpath = std__concat(folder, name, fname, sizeof(fname));
	if (fullpath == 0) {
		outstr = std__native2string("invalid name.");
		status = 403;
	} else {
		if (access(fname, 0) == 0) {
			stat(fname, &st);
			if ((st.st_mode & S_IFDIR) != 0) {
				string__dispose(fullpath);
				outstr = std__native2string(
					"path is a directory.");
				status = 403;
			} else {
				r = unlink(fname);
				if (r == -1) {
					string__dispose(fullpath);
					outstr = std__native2string(
						strerror(errno));
					status = 403;
				} else {
					outstr = fullpath;
				}
			}
		} else {
			string__dispose(fullpath);
			outstr = std__native2string(strerror(errno));
			status = 403;
		}
	}
	response__set_string(fs_cb, status, outstr);
	return 0;
}

var std__echo_nl()
{
	printf("\n");
	return 0;
}

var std__echo_int(var n)
{
	printf("%ld", n);
	return 0;
}

var std__echo(var str)
{
	printf("%s", GETSTR(str));
	return 0;
}

var std__exit(var n)
{
	exit(n);
	return 0;
}

static var std_args = 0;

var std__get_args()
{
	return std_args;
}

int main(int argc, char *argv[]) {
	int i;
	var s;
	std_args = array__new(argc);
	for (i = 0; i < argc; i++) {
		s = std__native2string(argv[i]);
		((var*)std_args)[i] = s;
	}
	main__main();
	// FIXME cleanup
	return 0;
}

// class std
long std__delete(long o)
{
	long type;
	long array_;
	long string_;

	return 0;
	type=((long*)o)[-(1)];
	if (type<1) {
		return 0;
	}
	if (type==1) {
		array_=o;
		std__free(array_);
		return 0;
	}
	if (type==2) {
		string_=o;
		string__dispose(string_);
		return 0;
	}
	return 0;
}
// class console
long console__log(long str)
{

	std__echo(str);
	std__echo_nl();
	return 0;
}
long console__log_str(long str)
{

	std__echo(str);
	return 0;
}
long console__log_int(long n)
{

	std__echo_int(n);
	return 0;
}
// class object
// class Astatement
#define _Astatement_type ((long*)__this)[0]
#define _Astatement_expr ((long*)__this)[1]
#define _Astatement_statements ((long*)__this)[2]
#define _Astatement_else_stms ((long*)__this)[3]
#define _Astatement_parent ((long*)__this)[4]
#define _Astatement_depth ((long*)__this)[5]
long Astatement__new(long type_, long parent_, long depth_)
{
	long __this;
	__this = std__alloc(D__Astatement___SIZE);
	((long*)__this)[-1] = D__Astatement___ID;

	_Astatement_type=type_;
	_Astatement_parent=parent_;
	_Astatement_depth=depth_;
	_Astatement_expr=0;
	_Astatement_statements=0;
	_Astatement_else_stms=0;
	return __this;
}
long Astatement__dispose(long __this)
{

	return 0;
}
long Astatement__get_type(long __this)
{

	return _Astatement_type;
}
long Astatement__get_depth(long __this)
{

	return _Astatement_depth;
}
long Astatement__get_parent(long __this)
{

	return _Astatement_parent;
}
long Astatement__get_statements(long __this)
{

	return _Astatement_statements;
}
long Astatement__get_else(long __this)
{

	return _Astatement_else_stms;
}
long Astatement__get_expression(long __this)
{

	return _Astatement_expr;
}
long Astatement__add_else(long __this, long type_)
{
	long st;

	_Astatement_else_stms=buffer__new(2);
	st=Astatement__new(type_,_Astatement_parent,_Astatement_depth);
	Astatement__add_statement(__this, st);
	return 0;
}
long Astatement__add_statement(long __this, long statement_)
{

	if (_Astatement_statements==0) {
		_Astatement_statements=buffer__new(2);
	}
	if (_Astatement_else_stms!=0) {
		buffer__push(_Astatement_else_stms,statement_);
	} else {
		buffer__push(_Astatement_statements,statement_);
	}
	return 0;
}
long Astatement__set_expression(long __this, long expr_)
{

	if (_Astatement_type==(Aclass__Cif)) {
		_Astatement_expr=expr_;
	} else if (_Astatement_type==(Aclass__Celseif)) {
		_Astatement_expr=expr_;
	} else if (_Astatement_type==(Aclass__Clet)) {
		_Astatement_expr=expr_;
	} else if (_Astatement_type==(Aclass__Cdo)) {
		_Astatement_expr=expr_;
	} else if (_Astatement_type==(Aclass__Cwhile)) {
		_Astatement_expr=expr_;
	} else if (_Astatement_type==(Aclass__Creturn)) {
		_Astatement_expr=expr_;
	} else {
		console__log(STR(__string_Astatement1));
		std__exit(-(1));
	}
	return 0;
}
// class response
#define _response_status ((long*)__this)[0]
#define _response_str ((long*)__this)[1]
#define _response_byt ((long*)__this)[2]
#define _response_typ ((long*)__this)[3]
#define _response_instan ((long*)__this)[4]
long response__new(long type_, long instance_)
{
	long __this;
	__this = std__alloc(D__response___SIZE);
	((long*)__this)[-1] = D__response___ID;

	_response_status=0;
	_response_typ=type_;
	_response_instan=instance_;
	_response_byt=0;
	_response_str=0;
	return __this;
}
long response__dispose(long __this)
{

	std__free(__this);
	return 0;
}
long response__clear(long __this)
{

	_response_status=0;
	if (_response_byt!=0) {
		bytes__dispose(_response_byt);
		_response_byt=0;
	}
	if (_response_str!=0) {
		string__dispose(_response_str);
		_response_str=0;
	}
	return 0;
}
long response__set_string(long __this, long status_, long data_)
{

	_response_status=status_;
	_response_str=data_;
	return 0;
}
long response__set_bytes(long __this, long status_, long data_)
{

	_response_status=status_;
	_response_byt=data_;
	return 0;
}
long response__get_status(long __this)
{

	return _response_status;
}
long response__get_string(long __this)
{

	return _response_str;
}
long response__get_bytes(long __this)
{

	return _response_byt;
}
// class Amember
#define _Amember_kind ((long*)__this)[0]
#define _Amember_type ((long*)__this)[1]
#define _Amember_type_id ((long*)__this)[2]
#define _Amember_name ((long*)__this)[3]
#define _Amember_initial_value ((long*)__this)[4]
#define _Amember_index ((long*)__this)[5]
#define _Amember_params ((long*)__this)[6]
#define _Amember_vars ((long*)__this)[7]
#define _Amember_body ((long*)__this)[8]
long Amember__new(long kind_, long type_, long type_id_, long name_)
{
	long __this;
	__this = std__alloc(D__Amember___SIZE);
	((long*)__this)[-1] = D__Amember___ID;

	_Amember_kind=kind_;
	_Amember_type=type_;
	_Amember_type_id=type_id_;
	_Amember_name=name_;
	_Amember_initial_value=0;
	_Amember_index=-(1);
	_Amember_params=0;
	_Amember_vars=0;
	_Amember_body=0;
	return __this;
}
long Amember__dispose(long __this)
{

	return 0;
}
long Amember__get_kind(long __this)
{

	return _Amember_kind;
}
long Amember__get_type(long __this)
{

	return _Amember_type;
}
long Amember__get_type_id(long __this)
{

	return _Amember_type_id;
}
long Amember__get_name(long __this)
{

	return _Amember_name;
}
long Amember__get_name_string(long __this)
{

	return Atoken__get_data(_Amember_name);
}
long Amember__get_initial_value(long __this)
{

	return _Amember_initial_value;
}
long Amember__set_initial_value(long __this, long initial_value_)
{

	_Amember_initial_value=initial_value_;
	return 0;
}
long Amember__set_index(long __this, long index_)
{

	_Amember_index=index_;
	return 0;
}
long Amember__get_index(long __this)
{

	return _Amember_index;
}
long Amember__get_body(long __this)
{

	return _Amember_body;
}
long Amember__get_vars(long __this)
{

	return _Amember_vars;
}
long Amember__get_params(long __this)
{

	return _Amember_params;
}
long Amember__add_param(long __this, long kind_, long type_, long type_id_, long name_)
{
	long p;

	if (_Amember_params==0) {
		_Amember_params=buffer__new(4);
	}
	p=Amember__new(kind_,type_,type_id_,name_);
	buffer__push(_Amember_params,p);
	return 0;
}
long Amember__add_var(long __this, long kind_, long type_, long type_id_, long name_)
{
	long p;

	if (_Amember_vars==0) {
		_Amember_vars=buffer__new(4);
	}
	p=Amember__new(kind_,type_,type_id_,name_);
	buffer__push(_Amember_vars,p);
	return 0;
}
long Amember__add_statement(long __this, long statement_)
{

	if (_Amember_body==0) {
		_Amember_body=buffer__new(4);
	}
	buffer__push(_Amember_body,statement_);
	return Astatement__get_parent(statement_);
}
// class Avirtual
#define _Avirtual__class ((long*)__this)[0]
#define _Avirtual__memb ((long*)__this)[1]
#define _Avirtual_next ((long*)__this)[2]
long Avirtual__new(long memb_, long class_)
{
	long __this;
	__this = std__alloc(D__Avirtual___SIZE);
	((long*)__this)[-1] = D__Avirtual___ID;

	_Avirtual__class=class_;
	_Avirtual__memb=memb_;
	_Avirtual_next=0;
	return __this;
}
long Avirtual__dispose(long __this)
{

	return 0;
}
long Avirtual__set_next(long __this, long n)
{

	_Avirtual_next=n;
	return 0;
}
long Avirtual__get_next(long __this)
{

	return _Avirtual_next;
}
long Avirtual__get_class_name(long __this)
{

	return _Avirtual__class;
}
long Avirtual__get_member(long __this)
{

	return _Avirtual__memb;
}
long Avirtual__get_member_name(long __this)
{

	return Amember__get_name_string(_Avirtual__memb);
}
// class buffer
#define _buffer__arr ((long*)__this)[0]
#define _buffer_size ((long*)__this)[1]
#define _buffer_pos ((long*)__this)[2]
long buffer__new(long initial_size)
{
	long i;
	long __this;
	__this = std__alloc(D__buffer___SIZE);
	((long*)__this)[-1] = D__buffer___ID;

	_buffer__arr=array__new(initial_size);
	_buffer_size=initial_size;
	_buffer_pos=0;
	i=0;
	while (i<initial_size) {
		((long*)_buffer__arr)[i]=0;
		i=i+1;
	}
	return __this;
}
long buffer__dispose(long __this)
{

	array__dispose(_buffer__arr);
	std__free(__this);
	return 0;
}
long buffer__length(long __this)
{

	return _buffer_pos;
}
long buffer__empty(long __this)
{

	if (_buffer_pos>0) {
		return 0;
	}
	return 1;
}
long buffer__set_at(long __this, long idx, long elem)
{
	long a;
	long i;

	if (idx>=_buffer_size) {
		a=array__new(idx+8);
		i=0;
		while (i<_buffer_size) {
			((long*)a)[i]=((long*)_buffer__arr)[i];
			i=i+1;
		}
		_buffer_size=idx+8;
		while (i<_buffer_size) {
			((long*)a)[i]=0;
			i=i+1;
		}
		array__dispose(_buffer__arr);
		_buffer__arr=a;
	}
	((long*)_buffer__arr)[idx]=elem;
	if (((idx+1))>_buffer_pos) {
		_buffer_pos=idx+1;
	}
	return 0;
}
long buffer__get_at(long __this, long idx)
{

	return ((long*)_buffer__arr)[idx];
}
long buffer__push(long __this, long elem)
{
	long p;

	p=_buffer_pos+1;
	buffer__set_at(__this, _buffer_pos,elem);
	_buffer_pos=p;
	return 0;
}
long buffer__set_last(long __this, long elem)
{

	if (_buffer_pos<1) {
		return 0;
	}
	((long*)_buffer__arr)[_buffer_pos-1]=elem;
	return 0;
}
long buffer__get_last(long __this)
{

	if (_buffer_pos<1) {
		return 0;
	}
	return ((long*)_buffer__arr)[_buffer_pos-1];
}
long buffer__pop(long __this)
{
	long elem;

	elem=0;
	if (_buffer_pos>0) {
		_buffer_pos=_buffer_pos-1;
		elem=buffer__get_at(__this, _buffer_pos);
	}
	return elem;
}
long buffer__unshift(long __this, long elem)
{
	long i;
	long p;

	p=_buffer_pos+1;
	buffer__set_at(__this, _buffer_pos,0);
	i=_buffer_pos;
	while (i>1) {
		i=i-1;
		((long*)_buffer__arr)[i]=((long*)_buffer__arr)[i-1];
	}
	((long*)_buffer__arr)[0]=elem;
	_buffer_pos=p;
	return 0;
}
long buffer__shift(long __this)
{
	long elem;
	long i;
	long p;

	if (_buffer_pos<1) {
		return 0;
	}
	p=_buffer_pos-1;
	elem=buffer__get_at(__this, 0);
	i=0;
	while (i<_buffer_pos) {
		((long*)_buffer__arr)[i]=((long*)_buffer__arr)[i+1];
		i=i+1;
	}
	_buffer_pos=p;
	return elem;
}
// class Aexpr
#define _Aexpr_op ((long*)__this)[0]
#define _Aexpr_prec ((long*)__this)[1]
#define _Aexpr_asso ((long*)__this)[2]
#define _Aexpr_left ((long*)__this)[3]
#define _Aexpr_right ((long*)__this)[4]
#define _Aexpr_parent ((long*)__this)[5]
#define _Aexpr_value ((long*)__this)[6]
#define _Aexpr_value2 ((long*)__this)[7]
#define _Aexpr_flags ((long*)__this)[8]
#define _Aexpr_origin ((long*)__this)[9]
long Aexpr__new(long op_, long precedence_, long associativity_)
{
	long __this;
	__this = std__alloc(D__Aexpr___SIZE);
	((long*)__this)[-1] = D__Aexpr___ID;

	_Aexpr_op=op_;
	_Aexpr_prec=precedence_;
	_Aexpr_asso=associativity_;
	_Aexpr_parent=0;
	_Aexpr_left=0;
	_Aexpr_right=0;
	_Aexpr_value=0;
	_Aexpr_value2=0;
	_Aexpr_flags=0;
	_Aexpr_origin=0;
	return __this;
}
long Aexpr__dispose(long __this)
{

	return 0;
}
long Aexpr__get_origin(long __this)
{

	return _Aexpr_origin;
}
long Aexpr__set_origin(long __this, long orig)
{

	_Aexpr_origin=orig;
	return 0;
}
long Aexpr__get_right(long __this)
{

	return _Aexpr_right;
}
long Aexpr__set_right(long __this, long r)
{

	_Aexpr_right=r;
	return 0;
}
long Aexpr__get_left(long __this)
{

	return _Aexpr_left;
}
long Aexpr__set_left(long __this, long l)
{

	_Aexpr_left=l;
	return 0;
}
long Aexpr__get_parent(long __this)
{

	return _Aexpr_parent;
}
long Aexpr__set_parent(long __this, long p)
{

	_Aexpr_parent=p;
	return 0;
}
long Aexpr__get_value2(long __this)
{

	return _Aexpr_value2;
}
long Aexpr__set_value2(long __this, long v)
{

	_Aexpr_value2=v;
	return 0;
}
long Aexpr__get_value(long __this)
{

	return _Aexpr_value;
}
long Aexpr__set_value(long __this, long v)
{

	_Aexpr_value=v;
	return 0;
}
long Aexpr__get_op(long __this)
{

	return _Aexpr_op;
}
long Aexpr__get_flags(long __this)
{

	return _Aexpr_flags;
}
long Aexpr__set_flags(long __this, long flags_)
{

	_Aexpr_flags=flags_;
	return 0;
}
long Aexpr__set_precedence(long __this, long p)
{

	_Aexpr_prec=p;
	return 0;
}
long Aexpr__get_precedence(long __this)
{

	return _Aexpr_prec;
}
long Aexpr__get_associativity(long __this)
{

	return _Aexpr_asso;
}
long Aexpr__close(long __this, long op_)
{
	long cur;

	cur=__this;
	while (cur!=0) {
		if ((Aexpr__get_op(cur))==op_) {
			return cur;
		}
		cur=Aexpr__get_parent(cur);
	}
	return 0;
}
long Aexpr__add(long __this, long ex)
{
	long pre;
	long ass;
	long cur;
	long ri;
	long le;
	long par;
	long child;
	long p;

	pre=Aexpr__get_precedence(ex);
	ass=Aexpr__get_associativity(ex);
	cur=__this;
	par=Aexpr__get_parent(cur);
	child=0;
	while (par!=0) {
		p=Aexpr__get_precedence(cur);
		if (p>pre) {
			child=cur;
			cur=par;
			par=Aexpr__get_parent(cur);
		} else {
			if (((p==pre))&&((ass==(Aclass__Clr)))) {
				child=cur;
				cur=par;
				par=Aexpr__get_parent(cur);
			} else {
				par=0;
			}
		}
	}
	Aexpr__set_parent(ex,cur);
	ri=Aexpr__get_right(cur);
	if (ri==child) {
		if (ri!=0) {
			Aexpr__set_left(ex,ri);
			Aexpr__set_parent(ri,ex);
		}
		Aexpr__set_right(cur,ex);
	} else {
		le=Aexpr__get_left(cur);
		if (le!=0) {
			Aexpr__set_left(ex,le);
			Aexpr__set_parent(le,ex);
		}
		Aexpr__set_left(cur,ex);
	}
	return ex;
}
long Aexpr__dump(long __this, long depth)
{
	long i;

	if (_Aexpr_left!=0) {
		Aexpr__dump(_Aexpr_left,depth+1);
	}
	i=depth;
	while (i>0) {
		i=i-1;
		console__log_str(STR(__string_Aexpr2));
	}
	if (_Aexpr_value!=0) {
		console__log_str(_Aexpr_value);
	}
	console__log_int(_Aexpr_op);
	console__log(STR(__string_Aexpr3));
	if (_Aexpr_right!=0) {
		Aexpr__dump(_Aexpr_right,depth+1);
	}
	return 0;
}
// class Aparser
#define _Aparser__states ((long*)__this)[0]
#define _Aparser_lex ((long*)__this)[1]
#define _Aparser_lookahead ((long*)__this)[2]
#define _Aparser_lookstring ((long*)__this)[3]
#define _Aparser_status ((long*)__this)[4]
#define _Aparser_debug ((long*)__this)[5]
#define _Aparser__class ((long*)__this)[6]
long Aparser__new()
{
	long __this;
	__this = std__alloc(D__Aparser___SIZE);
	((long*)__this)[-1] = D__Aparser___ID;

	_Aparser_debug=0;
	_Aparser_status=0;
	_Aparser_lex=0;
	_Aparser__states=buffer__new(8);
	_Aparser__class=0;
	Aparser__push(__this, Aparser__Croot);
	return __this;
}
long Aparser__dispose(long __this)
{

	buffer__dispose(_Aparser__states);
	std__free(__this);
	return 0;
}
long Aparser__get_data(long __this)
{

	return _Aparser_lookstring;
}
long Aparser__get_next(long __this)
{

	return _Aparser__class;
}
long Aparser__release(long __this)
{
	long c;

	c=_Aparser__class;
	while (c!=0) {
		_Aparser__class=Aclass__get_next(c);
		Aclass__dispose(c);
		c=_Aparser__class;
	}
	_Aparser__class=0;
	return 0;
}
long Aparser__parse(long __this, long lexer_)
{

	_Aparser_lex=lexer_;
	while ((Alexer__empty(_Aparser_lex))==0) {
		_Aparser_lookahead=Alexer__get_at(_Aparser_lex,0);
		_Aparser_lookstring=Atoken__get_data(_Aparser_lookahead);
		if ((((Atoken__get_type(_Aparser_lookahead))==(Alexer__Cnewline)))||(((Atoken__get_type(_Aparser_lookahead))==(Alexer__Ccomment)))) {
			Aparser__eat(__this);
		} else {
			Aparser__state_machine(__this);
		}
		if ((Atoken__get_type(_Aparser_lookahead))==(Alexer__Cend)) {
			Aparser__eat(__this);
			return 0;
		}
	}
	return 0;
}
long Aparser__error(long __this, long e)
{

	console__log_str(Atoken__get_file(_Aparser_lookahead));
	console__log_str(STR(__string_Aparser4));
	console__log_str(Atoken__get_data(_Aparser_lookahead));
	console__log_str(STR(__string_Aparser5));
	console__log_int(Atoken__get_line(_Aparser_lookahead));
	console__log_str(STR(__string_Aparser6));
	console__log(e);
	std__exit(-(1));
	_Aparser_status=-(1);
	return 0;
}
long Aparser__push(long __this, long step_)
{

	buffer__push(_Aparser__states,step_);
	return 0;
}
long Aparser__pop(long __this)
{

	buffer__pop(_Aparser__states);
	return 0;
}
long Aparser__root(long __this)
{

	if (_Aparser_status!=0) {
		return -(1);
	}
	Aparser__push(__this, Aparser__Cclass_dec);
	return 0;
}
long Aparser__class_dec(long __this)
{
	long c;

	if ((Aparser__match_id(__this, STR(__string_Aparser7)))==0) {
		Aparser__error(__this, STR(__string_Aparser8));
		return 0;
	}
	Aparser__eat(__this);
	if ((Aparser__match_id(__this, 0))==0) {
		Aparser__error(__this, STR(__string_Aparser9));
		return 0;
	}
	c=_Aparser__class;
	_Aparser__class=Aclass__new(_Aparser_lookahead);
	Aclass__set_next(_Aparser__class,c);
	Aparser__eat(__this);
	if ((Aparser__match_op(__this, STR(__string_Aparser10)))==0) {
		Aparser__error(__this, STR(__string_Aparser11));
		return 0;
	}
	Aparser__eat(__this);
	while (_Aparser_status>=0) {
		Aparser__class_var_dec(__this);
	}
	_Aparser_status=0;
	while (_Aparser_status>=0) {
		Aparser__clas_const_dec(__this);
	}
	_Aparser_status=0;
	Aparser__push(__this, Aparser__Cclass_dec1);
	Aparser__push(__this, Aparser__Csubroutine_dec);
	return 0;
}
long Aparser__class_dec1(long __this)
{

	_Aparser_status=0;
	if ((Aparser__match_op(__this, STR(__string_Aparser12)))==0) {
		Aparser__error(__this, STR(__string_Aparser13));
		return 0;
	}
	Aparser__eat(__this);
	Aparser__pop(__this);
	return 0;
}
long Aparser__class_var_dec(long __this)
{

	if ((Aparser__match_id(__this, STR(__string_Aparser14)))!=0) {
		Aclass__prepare_kind(_Aparser__class,Aclass__Cfield);
	} else if ((Aparser__match_id(__this, STR(__string_Aparser15)))!=0) {
		Aclass__prepare_kind(_Aparser__class,Aclass__Cstatic);
	} else {
		_Aparser_status=-(1);
		return 0;
	}
	Aparser__eat(__this);
	Aparser__type(__this);
	Aparser__var_name(__this);
	while ((Aparser__match_op(__this, STR(__string_Aparser16)))!=0) {
		Aclass__valid_member_name(_Aparser__class);
		Aparser__var_name(__this);
	}
	if ((Aparser__match_op(__this, STR(__string_Aparser17)))==0) {
		Aparser__error(__this, STR(__string_Aparser18));
		return 0;
	}
	Aclass__valid_member_name(_Aparser__class);
	Aparser__eat(__this);
	return 0;
}
long Aparser__var_name(long __this)
{

	if ((Aparser__match_id(__this, 0))!=0) {
		Aclass__prepare_set_name(_Aparser__class,_Aparser_lookahead);
		Aparser__eat(__this);
		return 0;
	}
	Aparser__error(__this, STR(__string_Aparser19));
	return 0;
}
long Aparser__type(long __this)
{

	if ((Aparser__match_id(__this, STR(__string_Aparser20)))!=0) {
		Aclass__prepare_type(_Aparser__class,Aclass__Cint);
	} else if ((Aparser__match_id(__this, STR(__string_Aparser21)))!=0) {
		Aclass__prepare_type(_Aparser__class,Aclass__Cvoid);
	} else if ((Aparser__match_id(__this, 0))!=0) {
		Aclass__prepare_type_identifier(_Aparser__class,_Aparser_lookahead);
	} else {
		Aparser__error(__this, STR(__string_Aparser22));
		return 0;
	}
	Aparser__eat(__this);
	return 0;
}
long Aparser__clas_const_dec(long __this)
{

	if ((Aparser__match_id(__this, STR(__string_Aparser23)))!=0) {
		Aclass__prepare_kind(_Aparser__class,Aclass__Cconst);
	} else {
		_Aparser_status=-(1);
		return 0;
	}
	Aparser__eat(__this);
	Aparser__type(__this);
	Aparser__var_name(__this);
	if ((Aparser__match_op(__this, STR(__string_Aparser24)))==0) {
		Aparser__error(__this, STR(__string_Aparser25));
		return 0;
	}
	Aparser__eat(__this);
	if ((Aparser__match_op(__this, STR(__string_Aparser26)))==0) {
		Aclass__finish_const(_Aparser__class,_Aparser_lookahead);
	} else {
		Aparser__error(__this, STR(__string_Aparser27));
		return 0;
	}
	Aparser__eat(__this);
	if ((Aparser__match_op(__this, STR(__string_Aparser28)))==0) {
		Aparser__error(__this, STR(__string_Aparser29));
		return 0;
	}
	Aparser__eat(__this);
	return 0;
}
long Aparser__subroutine_dec(long __this)
{

	if (_Aparser_status!=0) {
		Aparser__pop(__this);
		return 0;
	}
	if ((Aparser__match_id(__this, STR(__string_Aparser30)))!=0) {
		Aclass__prepare_kind(_Aparser__class,Aclass__Cconstructor);
	} else if ((Aparser__match_id(__this, STR(__string_Aparser31)))!=0) {
		Aclass__prepare_kind(_Aparser__class,Aclass__Cfunction);
	} else if ((Aparser__match_id(__this, STR(__string_Aparser32)))!=0) {
		Aclass__prepare_kind(_Aparser__class,Aclass__Cmethod);
	} else if ((Aparser__match_id(__this, STR(__string_Aparser33)))!=0) {
		Aclass__prepare_kind(_Aparser__class,Aclass__Cvirtual);
	} else {
		Aparser__pop(__this);
		_Aparser_status=-(1);
		return 0;
	}
	Aparser__eat(__this);
	if ((Aparser__match_id(__this, STR(__string_Aparser34)))!=0) {
		Aclass__prepare_type(_Aparser__class,Aclass__Cvoid);
		Aparser__eat(__this);
	} else {
		Aparser__type(__this);
	}
	Aparser__var_name(__this);
	Aclass__valid_member_name(_Aparser__class);
	if ((Aparser__match_op(__this, STR(__string_Aparser35)))==0) {
		Aparser__error(__this, STR(__string_Aparser36));
		return 0;
	}
	Aparser__eat(__this);
	Aparser__param_list(__this);
	if ((Aparser__match_op(__this, STR(__string_Aparser37)))==0) {
		Aparser__error(__this, STR(__string_Aparser38));
		return 0;
	}
	Aparser__eat(__this);
	Aparser__subrout_body(__this);
	return 0;
}
long Aparser__param_list(long __this)
{

	if ((Aparser__match_op(__this, STR(__string_Aparser39)))!=0) {
		return 0;
	}
	Aparser__direction(__this);
	Aparser__type(__this);
	Aparser__var_name(__this);
	while ((Aparser__match_op(__this, STR(__string_Aparser40)))!=0) {
		Aclass__valid_param(_Aparser__class);
		Aparser__eat(__this);
		Aparser__direction(__this);
		Aparser__type(__this);
		Aparser__var_name(__this);
	}
	Aclass__valid_param(_Aparser__class);
	return 0;
}
long Aparser__direction(long __this)
{

	if ((Aparser__match_id(__this, STR(__string_Aparser41)))!=0) {
		Aclass__prepare_kind(_Aparser__class,Aclass__Cin);
		Aparser__eat(__this);
		return 0;
	} else if ((Aparser__match_id(__this, STR(__string_Aparser42)))!=0) {
		Aclass__prepare_kind(_Aparser__class,Aclass__Cout);
		Aparser__eat(__this);
		return 0;
	} else if ((Aparser__match_id(__this, STR(__string_Aparser43)))!=0) {
		Aclass__prepare_kind(_Aparser__class,Aclass__Cio);
		Aparser__eat(__this);
		return 0;
	}
	Aparser__error(__this, STR(__string_Aparser44));
	return 0;
}
long Aparser__subrout_body(long __this)
{

	if ((Aparser__match_op(__this, STR(__string_Aparser45)))==0) {
		Aparser__error(__this, STR(__string_Aparser46));
		return 0;
	}
	Aparser__eat(__this);
	while (_Aparser_status==0) {
		Aparser__var_dec(__this);
	}
	_Aparser_status=0;
	Aparser__push(__this, Aparser__Csubrout_body1);
	Aparser__push(__this, Aparser__Cstatements);
	return 0;
}
long Aparser__subrout_body1(long __this)
{

	Aparser__pop(__this);
	if ((Aparser__match_op(__this, STR(__string_Aparser47)))==0) {
		Aparser__error(__this, STR(__string_Aparser48));
		return 0;
	}
	Aparser__eat(__this);
	Aclass__finish_subroutine(_Aparser__class);
	return 0;
}
long Aparser__var_dec(long __this)
{

	if ((Aparser__match_id(__this, STR(__string_Aparser49)))==0) {
		_Aparser_status=1;
		return 0;
	}
	Aparser__eat(__this);
	Aclass__prepare_kind(_Aparser__class,Aclass__Cvar);
	Aparser__type(__this);
	Aparser__var_name(__this);
	while ((Aparser__match_op(__this, STR(__string_Aparser50)))!=0) {
		Aclass__valid_var(_Aparser__class);
		Aparser__eat(__this);
		Aparser__var_name(__this);
	}
	Aclass__valid_var(_Aparser__class);
	if ((Aparser__match_op(__this, STR(__string_Aparser51)))==0) {
		Aparser__error(__this, STR(__string_Aparser52));
		return 0;
	}
	Aparser__eat(__this);
	return 0;
}
long Aparser__statements(long __this)
{

	if (_Aparser_status==0) {
		Aparser__push(__this, Aparser__Cstatement);
		return 0;
	}
	if (_Aparser_status>0) {
		_Aparser_status=0;
	}
	Aparser__pop(__this);
	return 0;
}
long Aparser__statement(long __this)
{
	long r;

	Aparser__pop(__this);
	r=0;
	if ((Aparser__match_id(__this, STR(__string_Aparser53)))!=0) {
		r=1;
		Aclass__begin_stm(_Aparser__class,Aclass__Cbreak,_Aparser_lookahead);
		Aparser__eat(__this);
		if ((Aparser__match_op(__this, STR(__string_Aparser54)))==0) {
			Aparser__error(__this, STR(__string_Aparser55));
			return 0;
		}
		Aclass__finish_stm(_Aparser__class);
		Aparser__eat(__this);
		return 0;
	}
	if (r==0) {
		r=Aparser__if_statem(__this, Aclass__Cif);
	}
	if (r==0) {
		r=Aparser__while_statem(__this);
	}
	if (r==0) {
		r=Aparser__return_statem(__this);
	}
	if (r==0) {
		r=Aparser__dolet_statem(__this);
	}
	if (r==0) {
		_Aparser_status=1;
	}
	return 0;
}
long Aparser__if_statem(long __this, long type_)
{

	if ((Aparser__match_id(__this, STR(__string_Aparser56)))==0) {
		return 0;
	}
	Aclass__begin_stm(_Aparser__class,type_,_Aparser_lookahead);
	Aparser__eat(__this);
	if ((Aparser__match_op(__this, STR(__string_Aparser57)))==0) {
		Aparser__error(__this, STR(__string_Aparser58));
		return 1;
	}
	Aparser__eat(__this);
	Aparser__push(__this, Aparser__Cif_statem1);
	Aparser__push(__this, Aparser__Cexpression);
	Aclass__begin_expr(_Aparser__class,_Aparser_lookahead);
	return 1;
}
long Aparser__if_statem1(long __this)
{

	Aparser__pop(__this);
	if ((Aparser__match_op(__this, STR(__string_Aparser59)))==0) {
		Aparser__error(__this, STR(__string_Aparser60));
		return 0;
	}
	Aclass__finish_expr(_Aparser__class);
	Aparser__eat(__this);
	if ((Aparser__match_op(__this, STR(__string_Aparser61)))==0) {
		Aparser__error(__this, STR(__string_Aparser62));
		return 0;
	}
	Aparser__eat(__this);
	Aparser__push(__this, Aparser__Celse_statem);
	Aparser__push(__this, Aparser__Cstatements);
	return 0;
}
long Aparser__else_statem(long __this)
{

	Aparser__pop(__this);
	if ((Aparser__match_op(__this, STR(__string_Aparser63)))==0) {
		Aparser__error(__this, STR(__string_Aparser64));
		return 0;
	}
	Aparser__eat(__this);
	if ((Aparser__match_id(__this, STR(__string_Aparser65)))==0) {
		Aclass__finish_stm(_Aparser__class);
		return 0;
	}
	Aparser__eat(__this);
	if ((Aparser__match_id(__this, STR(__string_Aparser66)))!=0) {
		Aclass__finish_stm(_Aparser__class);
		Aparser__if_statem(__this, Aclass__Celseif);
		return 0;
	}
	Aclass__begin_else(_Aparser__class,Aclass__Celse);
	if ((Aparser__match_op(__this, STR(__string_Aparser67)))==0) {
		Aparser__error(__this, STR(__string_Aparser68));
		return 0;
	}
	Aparser__eat(__this);
	Aparser__push(__this, Aparser__Celse_statem1);
	Aparser__push(__this, Aparser__Cstatements);
	return 0;
}
long Aparser__else_statem1(long __this)
{

	Aparser__pop(__this);
	if ((Aparser__match_op(__this, STR(__string_Aparser69)))==0) {
		Aparser__error(__this, STR(__string_Aparser70));
		return 0;
	}
	Aclass__finish_stm(_Aparser__class);
	Aparser__eat(__this);
	return 0;
}
long Aparser__while_statem(long __this)
{

	if ((Aparser__match_id(__this, STR(__string_Aparser71)))==0) {
		return 0;
	}
	Aclass__begin_stm(_Aparser__class,Aclass__Cwhile,_Aparser_lookahead);
	Aparser__eat(__this);
	if ((Aparser__match_op(__this, STR(__string_Aparser72)))==0) {
		Aparser__error(__this, STR(__string_Aparser73));
		return 1;
	}
	Aparser__eat(__this);
	Aclass__begin_expr(_Aparser__class,_Aparser_lookahead);
	Aparser__push(__this, Aparser__Cwhile_statem1);
	Aparser__push(__this, Aparser__Cexpression);
	return 1;
}
long Aparser__while_statem1(long __this)
{

	Aparser__pop(__this);
	if ((Aparser__match_op(__this, STR(__string_Aparser74)))==0) {
		Aparser__error(__this, STR(__string_Aparser75));
		return 0;
	}
	Aclass__finish_expr(_Aparser__class);
	Aparser__eat(__this);
	if ((Aparser__match_op(__this, STR(__string_Aparser76)))==0) {
		Aparser__error(__this, STR(__string_Aparser77));
		return 0;
	}
	Aparser__eat(__this);
	Aparser__push(__this, Aparser__Cwhile_statem2);
	Aparser__push(__this, Aparser__Cstatements);
	return 0;
}
long Aparser__while_statem2(long __this)
{

	Aparser__pop(__this);
	if ((Aparser__match_op(__this, STR(__string_Aparser78)))==0) {
		Aparser__error(__this, STR(__string_Aparser79));
		return 0;
	}
	Aclass__finish_stm(_Aparser__class);
	Aparser__eat(__this);
	return 0;
}
long Aparser__return_statem(long __this)
{

	if ((Aparser__match_id(__this, STR(__string_Aparser80)))==0) {
		return 0;
	}
	Aclass__begin_stm(_Aparser__class,Aclass__Creturn,_Aparser_lookahead);
	Aparser__eat(__this);
	if ((Aparser__match_op(__this, STR(__string_Aparser81)))!=0) {
		Aclass__finish_stm(_Aparser__class);
		Aparser__eat(__this);
	} else {
		Aclass__begin_expr(_Aparser__class,_Aparser_lookahead);
		Aparser__push(__this, Aparser__Creturn_statem1);
		Aparser__push(__this, Aparser__Cexpression);
	}
	return 1;
}
long Aparser__return_statem1(long __this)
{

	if ((Aparser__match_op(__this, STR(__string_Aparser82)))!=0) {
		Aclass__finish_expr(_Aparser__class);
		Aclass__finish_stm(_Aparser__class);
		Aparser__eat(__this);
		Aparser__pop(__this);
		return 0;
	}
	Aparser__error(__this, STR(__string_Aparser83));
	return 0;
}
long Aparser__dolet_statem(long __this)
{
	long id;

	if ((Aparser__match_id(__this, 0))==0) {
		return 0;
	}
	id=_Aparser_lookahead;
	Aparser__eat(__this);
	if ((((Aparser__match_op(__this, STR(__string_Aparser84)))!=0))||(((Aparser__match_op(__this, STR(__string_Aparser85)))!=0))) {
		Aclass__begin_stm(_Aparser__class,Aclass__Clet,_Aparser_lookahead);
		return Aparser__let_statem(__this, id);
	} else if ((Aparser__match_op(__this, STR(__string_Aparser86)))==0) {
		Aclass__begin_stm(_Aparser__class,Aclass__Cdo,_Aparser_lookahead);
		return Aparser__do_statem(__this, id);
	}
	return 0;
}
long Aparser__let_statem(long __this, long id)
{

	if ((Aparser__match_op(__this, STR(__string_Aparser87)))!=0) {
		Aclass__expr_var(_Aparser__class,Atoken__get_data(id),_Aparser_lookahead);
		Aclass__expr_op(_Aparser__class,Aclass__Cassign,_Aparser_lookahead);
		Aparser__eat(__this);
		Aparser__push(__this, Aparser__Clet_statem1);
		Aparser__push(__this, Aparser__Cexpression);
		return 1;
	} else if ((Aparser__match_op(__this, STR(__string_Aparser88)))!=0) {
		Aclass__expr_open_index(_Aparser__class,Atoken__get_data(id),_Aparser_lookahead);
		Aparser__eat(__this);
		Aparser__push(__this, Aparser__Clet_statem2);
		Aparser__push(__this, Aparser__Cexpression);
		return 1;
	}
	return 0;
}
long Aparser__let_statem1(long __this)
{

	Aparser__pop(__this);
	if ((Aparser__match_op(__this, STR(__string_Aparser89)))==0) {
		Aparser__error(__this, STR(__string_Aparser90));
		return 0;
	}
	Aclass__finish_expr(_Aparser__class);
	Aclass__finish_stm(_Aparser__class);
	Aparser__eat(__this);
	return 0;
}
long Aparser__let_statem2(long __this)
{

	Aparser__pop(__this);
	if ((Aparser__match_op(__this, STR(__string_Aparser91)))==0) {
		Aparser__error(__this, STR(__string_Aparser92));
		return 0;
	}
	Aclass__expr_close_index(_Aparser__class);
	Aparser__eat(__this);
	if ((Aparser__match_op(__this, STR(__string_Aparser93)))!=0) {
		Aclass__expr_op(_Aparser__class,Aclass__Cassign,_Aparser_lookahead);
		Aparser__eat(__this);
		Aparser__push(__this, Aparser__Clet_statem1);
		Aparser__push(__this, Aparser__Cexpression);
		return 0;
	}
	Aparser__error(__this, STR(__string_Aparser94));
	return 0;
}
long Aparser__do_statem(long __this, long id)
{

	Aparser__push(__this, Aparser__Cdo_statem1);
	return Aparser__subrout_call(__this, id);
}
long Aparser__do_statem1(long __this)
{

	Aparser__pop(__this);
	if ((Aparser__match_op(__this, STR(__string_Aparser95)))==0) {
		Aparser__error(__this, STR(__string_Aparser96));
		return 0;
	}
	Aclass__finish_expr(_Aparser__class);
	Aclass__finish_stm(_Aparser__class);
	Aparser__eat(__this);
	return 0;
}
long Aparser__expression(long __this)
{

	Aparser__pop(__this);
	Aparser__push(__this, Aparser__Cexpression1);
	Aparser__push(__this, Aparser__Cterm);
	return 0;
}
long Aparser__expression1(long __this)
{

	if ((Aparser__op(__this))!=0) {
		Aparser__push(__this, Aparser__Cterm);
		return 0;
	} else {
		Aparser__pop(__this);
	}
	return 0;
}
long Aparser__op(long __this)
{

	if ((Aparser__match_op(__this, STR(__string_Aparser97)))!=0) {
		Aclass__expr_op(_Aparser__class,Aclass__Cadd,_Aparser_lookahead);
	} else if ((Aparser__match_op(__this, STR(__string_Aparser98)))!=0) {
		Aclass__expr_op(_Aparser__class,Aclass__Csub,_Aparser_lookahead);
	} else if ((Aparser__match_op(__this, STR(__string_Aparser99)))!=0) {
		Aclass__expr_op(_Aparser__class,Aclass__Cmult,_Aparser_lookahead);
	} else if ((Aparser__match_op(__this, STR(__string_Aparser100)))!=0) {
		Aclass__expr_op(_Aparser__class,Aclass__Cdiv,_Aparser_lookahead);
	} else if ((Aparser__match_op(__this, STR(__string_Aparser101)))!=0) {
		Aclass__expr_op(_Aparser__class,Aclass__Cmodulo,_Aparser_lookahead);
	} else if ((Aparser__match_op(__this, STR(__string_Aparser102)))!=0) {
		Aclass__expr_op(_Aparser__class,Aclass__Clogicaland,_Aparser_lookahead);
	} else if ((Aparser__match_op(__this, STR(__string_Aparser103)))!=0) {
		Aclass__expr_op(_Aparser__class,Aclass__Clogicalor,_Aparser_lookahead);
	} else if ((Aparser__match_op(__this, STR(__string_Aparser104)))!=0) {
		Aclass__expr_op(_Aparser__class,Aclass__Cequal,_Aparser_lookahead);
	} else if ((Aparser__match_op(__this, STR(__string_Aparser105)))!=0) {
		Aclass__expr_op(_Aparser__class,Aclass__Cnotequal,_Aparser_lookahead);
	} else if ((Aparser__match_op(__this, STR(__string_Aparser106)))!=0) {
		Aclass__expr_op(_Aparser__class,Aclass__Clargerequal,_Aparser_lookahead);
	} else if ((Aparser__match_op(__this, STR(__string_Aparser107)))!=0) {
		Aclass__expr_op(_Aparser__class,Aclass__Clesserequal,_Aparser_lookahead);
	} else if ((Aparser__match_op(__this, STR(__string_Aparser108)))!=0) {
		Aclass__expr_op(_Aparser__class,Aclass__Clarger,_Aparser_lookahead);
	} else if ((Aparser__match_op(__this, STR(__string_Aparser109)))!=0) {
		Aclass__expr_op(_Aparser__class,Aclass__Clesser,_Aparser_lookahead);
	} else {
		return 0;
	}
	Aparser__eat(__this);
	return 1;
}
long Aparser__term(long __this)
{
	long id;

	Aparser__pop(__this);
	if ((Aparser__match_id(__this, STR(__string_Aparser110)))!=0) {
		Aclass__expr_term(_Aparser__class,Aclass__Cthis,_Aparser_lookahead);
		Aparser__eat(__this);
	} else if ((Aparser__match_id(__this, STR(__string_Aparser111)))!=0) {
		Aclass__expr_term(_Aparser__class,Aclass__Cnull,_Aparser_lookahead);
		Aparser__eat(__this);
	} else if ((Atoken__get_type(_Aparser_lookahead))==(Alexer__Cidentifier)) {
		id=_Aparser_lookahead;
		Aparser__eat(__this);
		if ((Aparser__match_op(__this, STR(__string_Aparser112)))!=0) {
			Aclass__expr_open_index(_Aparser__class,Atoken__get_data(id),_Aparser_lookahead);
			Aparser__eat(__this);
			Aparser__push(__this, Aparser__Cterm2);
			Aparser__push(__this, Aparser__Cexpression);
		} else if ((Aparser__subrout_call(__this, id))!=0) {
		} else if ((Aparser__match_op(__this, STR(__string_Aparser113)))!=0) {
			Aparser__eat(__this);
			if ((Atoken__get_type(_Aparser_lookahead))!=(Alexer__Cidentifier)) {
				Aparser__error(__this, STR(__string_Aparser114));
				return 0;
			}
			Aclass__expr_constant(_Aparser__class,Atoken__get_data(id),Atoken__get_data(_Aparser_lookahead),_Aparser_lookahead);
			Aparser__eat(__this);
		} else {
			Aclass__expr_var(_Aparser__class,Atoken__get_data(id),_Aparser_lookahead);
		}
	} else if ((Atoken__get_type(_Aparser_lookahead))==(Alexer__Cquote)) {
		Aclass__expr_char_const(_Aparser__class,Atoken__get_data(_Aparser_lookahead),_Aparser_lookahead);
		Aparser__eat(__this);
	} else if ((Atoken__get_type(_Aparser_lookahead))==(Alexer__Cstring)) {
		Aclass__expr_str_const(_Aparser__class,Atoken__get_data(_Aparser_lookahead),_Aparser_lookahead);
		Aparser__eat(__this);
	} else if ((Atoken__get_type(_Aparser_lookahead))==(Alexer__Cnumber)) {
		Aclass__expr_int_const(_Aparser__class,Atoken__get_data(_Aparser_lookahead),_Aparser_lookahead);
		Aparser__eat(__this);
	} else if ((Aparser__match_op(__this, STR(__string_Aparser115)))!=0) {
		Aclass__expr_op(_Aparser__class,Aclass__Cunaryminus,_Aparser_lookahead);
		Aparser__eat(__this);
		Aparser__push(__this, Aparser__Cterm);
	} else if ((Aparser__match_op(__this, STR(__string_Aparser116)))!=0) {
		Aclass__expr_op(_Aparser__class,Aclass__Cunaryplus,_Aparser_lookahead);
		Aparser__eat(__this);
		Aparser__push(__this, Aparser__Cterm);
	} else if ((Aparser__match_op(__this, STR(__string_Aparser117)))!=0) {
		Aclass__expr_op(_Aparser__class,Aclass__Clogicalnot,_Aparser_lookahead);
		Aparser__eat(__this);
		Aparser__push(__this, Aparser__Cterm);
	} else if ((Aparser__match_op(__this, STR(__string_Aparser118)))!=0) {
		Aclass__expr_open_par(_Aparser__class);
		Aparser__eat(__this);
		Aparser__push(__this, Aparser__Cterm1);
		Aparser__push(__this, Aparser__Cexpression);
	} else {
		Aparser__error(__this, STR(__string_Aparser119));
		return 0;
	}
	return 0;
}
long Aparser__subrout_call(long __this, long id)
{
	long id2;

	if ((Aparser__match_op(__this, STR(__string_Aparser120)))!=0) {
		Aparser__sub_call(__this, 0,id);
		return 1;
	} else if ((Aparser__match_op(__this, STR(__string_Aparser121)))!=0) {
		id2=id;
		Aparser__eat(__this);
		id=_Aparser_lookahead;
		Aparser__eat(__this);
		Aparser__sub_call(__this, id2,id);
		return 1;
	}
	return 0;
}
long Aparser__term1(long __this)
{

	Aparser__pop(__this);
	if ((Aparser__match_op(__this, STR(__string_Aparser122)))!=0) {
		Aclass__expr_close_par(_Aparser__class);
		Aparser__eat(__this);
		return 0;
	}
	Aparser__error(__this, STR(__string_Aparser123));
	return 0;
}
long Aparser__term2(long __this)
{

	Aparser__pop(__this);
	if ((Aparser__match_op(__this, STR(__string_Aparser124)))!=0) {
		Aclass__expr_close_index(_Aparser__class);
		Aparser__eat(__this);
		return 0;
	}
	Aparser__error(__this, STR(__string_Aparser125));
	return 0;
}
long Aparser__sub_call(long __this, long class_, long id)
{

	if ((Aparser__match_op(__this, STR(__string_Aparser126)))==0) {
		Aparser__error(__this, STR(__string_Aparser127));
		return 0;
	}
	Aparser__eat(__this);
	if (class_!=0) {
		Aclass__expr_begin_sub_call(_Aparser__class,Atoken__get_data(class_),Atoken__get_data(id),_Aparser_lookahead);
	} else {
		Aclass__expr_begin_sub_call(_Aparser__class,0,Atoken__get_data(id),_Aparser_lookahead);
	}
	Aparser__push(__this, Aparser__Csub_call1);
	if ((Aparser__match_op(__this, STR(__string_Aparser128)))==0) {
		Aparser__push(__this, Aparser__Cexpr_list);
		Aparser__push(__this, Aparser__Cexpression);
		return 0;
	}
	Aclass__expr_finish_sub_call(_Aparser__class);
	return 0;
}
long Aparser__sub_call1(long __this)
{

	Aparser__pop(__this);
	if ((Aparser__match_op(__this, STR(__string_Aparser129)))!=0) {
		Aclass__expr_finish_sub_call(_Aparser__class);
		Aparser__eat(__this);
		return 0;
	}
	Aparser__error(__this, STR(__string_Aparser130));
	return 0;
}
long Aparser__expr_list(long __this)
{

	Aparser__pop(__this);
	if (_Aparser_status!=0) {
		_Aparser_status=0;
		return 0;
	}
	if ((Aparser__match_op(__this, STR(__string_Aparser131)))!=0) {
		Aparser__eat(__this);
		Aclass__expr_next_expr(_Aparser__class,_Aparser_lookahead);
		Aparser__push(__this, Aparser__Cexpr_list1);
		Aparser__push(__this, Aparser__Cexpression);
	}
	return 0;
}
long Aparser__expr_list1(long __this)
{

	Aparser__pop(__this);
	if (_Aparser_status!=0) {
		return 0;
	}
	if ((Aparser__match_op(__this, STR(__string_Aparser132)))!=0) {
		Aclass__expr_next_expr(_Aparser__class,_Aparser_lookahead);
		Aparser__eat(__this);
		Aparser__push(__this, Aparser__Cexpr_list1);
		Aparser__push(__this, Aparser__Cexpression);
	}
	return 0;
}
long Aparser__eat(long __this)
{

	Alexer__shift(_Aparser_lex);
	_Aparser_lookahead=Alexer__get_at(_Aparser_lex,0);
	if (_Aparser_lookahead==0) {
		_Aparser_lookstring=0;
		return 0;
	}
	while ((((Atoken__get_type(_Aparser_lookahead))==(Alexer__Cnewline)))||(((Atoken__get_type(_Aparser_lookahead))==(Alexer__Ccomment)))) {
		Alexer__shift(_Aparser_lex);
		_Aparser_lookahead=Alexer__get_at(_Aparser_lex,0);
	}
	_Aparser_lookstring=Atoken__get_data(_Aparser_lookahead);
	return 0;
}
long Aparser__match_id(long __this, long id)
{

	if ((Atoken__get_type(_Aparser_lookahead))!=(Alexer__Cidentifier)) {
		return 0;
	}
	if (id==0) {
		return 1;
	}
	if ((string__compare(_Aparser_lookstring,id))==0) {
		return 1;
	}
	return 0;
}
long Aparser__match_op(long __this, long id)
{

	if ((Atoken__get_type(_Aparser_lookahead))!=(Alexer__Coperator)) {
		return 0;
	}
	if ((string__compare(_Aparser_lookstring,id))==0) {
		return 1;
	}
	return 0;
}
long Aparser__match_newline(long __this)
{

	if ((Atoken__get_type(_Aparser_lookahead))==(Alexer__Cnewline)) {
		return 1;
	}
	return 0;
}
long Aparser__match_str(long __this, long id)
{
	long t;

	t=Atoken__get_type(_Aparser_lookahead);
	if (((t!=(Alexer__Cstring)))&&((t!=(Alexer__Cquote)))) {
		return 0;
	}
	if (((id==0))||(((string__compare(_Aparser_lookstring,id))==0))) {
		return 1;
	}
	return 0;
}
long Aparser__state_machine(long __this)
{
	long state;

	state=buffer__get_last(_Aparser__states);
	if (_Aparser_debug>0) {
		console__log(_Aparser_lookstring);
		console__log_int(state);
	}
	if (state==(Aparser__Croot)) {
		Aparser__root(__this);
	} else if (state==(Aparser__Cclass_dec)) {
		Aparser__class_dec(__this);
	} else if (state==(Aparser__Cstatement)) {
		Aparser__statement(__this);
	} else if (state==(Aparser__Cstatements)) {
		Aparser__statements(__this);
	} else if (state==(Aparser__Cexpression)) {
		Aparser__expression(__this);
	} else if (state==(Aparser__Cexpression1)) {
		Aparser__expression1(__this);
	} else if (state==(Aparser__Cterm)) {
		Aparser__term(__this);
	} else if (state==(Aparser__Cterm1)) {
		Aparser__term1(__this);
	} else if (state==(Aparser__Cterm2)) {
		Aparser__term2(__this);
	} else if (state==(Aparser__Creturn_statem1)) {
		Aparser__return_statem1(__this);
	} else if (state==(Aparser__Cexpr_list)) {
		Aparser__expr_list(__this);
	} else if (state==(Aparser__Cexpr_list1)) {
		Aparser__expr_list1(__this);
	} else if (state==(Aparser__Csub_call1)) {
		Aparser__sub_call1(__this);
	} else if (state==(Aparser__Clet_statem1)) {
		Aparser__let_statem1(__this);
	} else if (state==(Aparser__Clet_statem2)) {
		Aparser__let_statem2(__this);
	} else if (state==(Aparser__Cdo_statem1)) {
		Aparser__do_statem1(__this);
	} else if (state==(Aparser__Cwhile_statem1)) {
		Aparser__while_statem1(__this);
	} else if (state==(Aparser__Cwhile_statem2)) {
		Aparser__while_statem2(__this);
	} else if (state==(Aparser__Csubrout_body1)) {
		Aparser__subrout_body1(__this);
	} else if (state==(Aparser__Csubroutine_dec)) {
		Aparser__subroutine_dec(__this);
	} else if (state==(Aparser__Cclass_dec1)) {
		Aparser__class_dec1(__this);
	} else if (state==(Aparser__Cif_statem1)) {
		Aparser__if_statem1(__this);
	} else if (state==(Aparser__Celse_statem)) {
		Aparser__else_statem(__this);
	} else if (state==(Aparser__Celse_statem1)) {
		Aparser__else_statem1(__this);
	} else {
		Aparser__error(__this, STR(__string_Aparser133));
		Alexer__shift(_Aparser_lex);
		_Aparser_status=-(1);
	}
	return 1;
}
// class bytes
// class array
long array__new(long size)
{
	long a;

	a=std__alloc(size);
	((long*)a)[-(1)]=size;
	return a;
}
long array__dispose(long __this)
{

	std__free(__this);
	return 0;
}
long array__get_size(long __this)
{
	long a;

	a=__this;
	return ((long*)a)[-(1)];
}
// class Aclass
#define _Aclass_tok ((long*)__this)[0]
#define _Aclass_next ((long*)__this)[1]
#define _Aclass_prep_kind ((long*)__this)[2]
#define _Aclass_prep_type ((long*)__this)[3]
#define _Aclass_prep_type_id ((long*)__this)[4]
#define _Aclass_prep_name ((long*)__this)[5]
#define _Aclass_members ((long*)__this)[6]
#define _Aclass_member ((long*)__this)[7]
#define _Aclass_field_index ((long*)__this)[8]
#define _Aclass_statement ((long*)__this)[9]
#define _Aclass_stm_stack ((long*)__this)[10]
#define _Aclass_expression ((long*)__this)[11]
#define _Aclass_cur_expr ((long*)__this)[12]
#define _Aclass_expr_id ((long*)__this)[13]
long Aclass__new(long token)
{
	long __this;
	__this = std__alloc(D__Aclass___SIZE);
	((long*)__this)[-1] = D__Aclass___ID;

	_Aclass_tok=token;
	_Aclass_next=0;
	_Aclass_members=buffer__new(256);
	_Aclass_field_index=-(1);
	_Aclass_statement=0;
	_Aclass_stm_stack=buffer__new(2);
	_Aclass_expression=0;
	return __this;
}
long Aclass__dispose(long __this)
{

	buffer__dispose(_Aclass_members);
	std__free(__this);
	return 0;
}
long Aclass__error(long __this, long err)
{

	console__log(err);
	std__exit(-(1));
	return 0;
}
long Aclass__get_members(long __this)
{

	return _Aclass_members;
}
long Aclass__get_nb_fields(long __this)
{

	return _Aclass_field_index+1;
}
long Aclass__set_next(long __this, long n)
{

	_Aclass_next=n;
	return 0;
}
long Aclass__get_next(long __this)
{

	return _Aclass_next;
}
long Aclass__get_name(long __this)
{

	return _Aclass_tok;
}
long Aclass__pad(long __this, long p)
{

	while (p>0) {
		p=p-1;
		console__log_str(STR(__string_Aclass134));
	}
	return 0;
}
long Aclass__prepare_kind(long __this, long kind_)
{

	_Aclass_prep_kind=kind_;
	_Aclass_prep_type=0;
	_Aclass_prep_type_id=0;
	_Aclass_prep_name=0;
	return 0;
}
long Aclass__prepare_type(long __this, long type_)
{

	_Aclass_prep_type=type_;
	return 0;
}
long Aclass__prepare_type_identifier(long __this, long id_)
{

	_Aclass_prep_type=Aclass__Cidentifier;
	_Aclass_prep_type_id=id_;
	return 0;
}
long Aclass__prepare_set_name(long __this, long id_)
{

	_Aclass_prep_name=id_;
	return 0;
}
long Aclass__valid_member_name(long __this)
{

	_Aclass_member=Amember__new(_Aclass_prep_kind,_Aclass_prep_type,_Aclass_prep_type_id,_Aclass_prep_name);
	if (_Aclass_prep_kind==(Aclass__Cfield)) {
		_Aclass_field_index=_Aclass_field_index+1;
		Amember__set_index(_Aclass_member,_Aclass_field_index);
	} else if (_Aclass_prep_kind==(Aclass__Cstatic)) {
	} else if (_Aclass_prep_kind==(Aclass__Cconst)) {
	} else {
	}
	buffer__push(_Aclass_members,_Aclass_member);
	return 0;
}
long Aclass__valid_param(long __this)
{

	Amember__add_param(_Aclass_member,_Aclass_prep_kind,_Aclass_prep_type,_Aclass_prep_type_id,_Aclass_prep_name);
	return 0;
}
long Aclass__valid_var(long __this)
{

	Amember__add_var(_Aclass_member,_Aclass_prep_kind,_Aclass_prep_type,_Aclass_prep_type_id,_Aclass_prep_name);
	return 0;
}
long Aclass__begin_else(long __this, long type_)
{

	Astatement__add_else(_Aclass_statement,type_);
	return 0;
}
long Aclass__begin_stm(long __this, long type_, long orig)
{
	long st;

	buffer__push(_Aclass_stm_stack,_Aclass_statement);
	st=Astatement__new(type_,_Aclass_statement,buffer__length(_Aclass_stm_stack));
	if (_Aclass_statement==0) {
		Amember__add_statement(_Aclass_member,st);
	} else {
		Astatement__add_statement(_Aclass_statement,st);
	}
	if (type_==(Aclass__Cdo)) {
		Aclass__begin_expr(__this, orig);
	} else if (type_==(Aclass__Clet)) {
		Aclass__begin_expr(__this, orig);
	}
	_Aclass_statement=st;
	return 0;
}
long Aclass__finish_stm(long __this)
{

	_Aclass_statement=buffer__pop(_Aclass_stm_stack);
	return 0;
}
long Aclass__finish_const(long __this, long initialiser_)
{

	Aclass__valid_member_name(__this);
	Amember__set_initial_value(_Aclass_member,initialiser_);
	return 0;
}
long Aclass__finish_subroutine(long __this)
{

	while ((buffer__length(_Aclass_stm_stack))>0) {
		buffer__pop(_Aclass_stm_stack);
	}
	return 0;
}
long Aclass__begin_expr(long __this, long orig)
{

	_Aclass_expression=Aexpr__new(Aclass__Croot,0,0);
	Aexpr__set_origin(_Aclass_expression,orig);
	_Aclass_cur_expr=_Aclass_expression;
	return 0;
}
long Aclass__finish_expr(long __this)
{

	if (_Aclass_expression!=0) {
		Astatement__set_expression(_Aclass_statement,_Aclass_expression);
	}
	_Aclass_expression=0;
	_Aclass_cur_expr=0;
	return 0;
}
long Aclass__expr_op(long __this, long op_, long orig)
{
	long ex;

	ex=0;
	if (op_==(Aclass__Croot)) {
	} else if (op_==(Aclass__Cassign)) {
		ex=Aexpr__new(op_,30,Aclass__Crl);
	} else if (op_==(Aclass__Cequal)) {
		ex=Aexpr__new(op_,100,Aclass__Clr);
	} else if (op_==(Aclass__Cnotequal)) {
		ex=Aexpr__new(op_,100,Aclass__Crl);
	} else if (op_==(Aclass__Clargerequal)) {
		ex=Aexpr__new(op_,110,Aclass__Clr);
	} else if (op_==(Aclass__Clesserequal)) {
		ex=Aexpr__new(op_,110,Aclass__Clr);
	} else if (op_==(Aclass__Clarger)) {
		ex=Aexpr__new(op_,110,Aclass__Clr);
	} else if (op_==(Aclass__Clesser)) {
		ex=Aexpr__new(op_,110,Aclass__Clr);
	} else if (op_==(Aclass__Clogicaland)) {
		ex=Aexpr__new(op_,60,Aclass__Clr);
	} else if (op_==(Aclass__Clogicalor)) {
		ex=Aexpr__new(op_,50,Aclass__Clr);
	} else if (op_==(Aclass__Cadd)) {
		ex=Aexpr__new(op_,130,Aclass__Clr);
	} else if (op_==(Aclass__Csub)) {
		ex=Aexpr__new(op_,130,Aclass__Clr);
	} else if (op_==(Aclass__Cmult)) {
		ex=Aexpr__new(op_,140,Aclass__Clr);
	} else if (op_==(Aclass__Cdiv)) {
		ex=Aexpr__new(op_,140,Aclass__Clr);
	} else if (op_==(Aclass__Cmodulo)) {
		ex=Aexpr__new(op_,140,Aclass__Clr);
	} else if (op_==(Aclass__Clogicalnot)) {
		ex=Aexpr__new(op_,160,Aclass__Crl);
	} else if (op_==(Aclass__Cunaryplus)) {
		ex=Aexpr__new(op_,160,Aclass__Crl);
	} else if (op_==(Aclass__Cunaryminus)) {
		ex=Aexpr__new(op_,160,Aclass__Crl);
	} else if (op_==(Aclass__Cdot)) {
		ex=Aexpr__new(op_,170,Aclass__Clr);
	} else if (op_==(Aclass__Cconstant)) {
		ex=Aexpr__new(op_,170,Aclass__Clr);
	} else if (op_==(Aclass__Ccall)) {
		ex=Aexpr__new(op_,170,Aclass__Clr);
	} else if (op_==(Aclass__Cindex)) {
		ex=Aexpr__new(op_,170,Aclass__Clr);
	} else if (op_==(Aclass__Ccomma)) {
		ex=Aexpr__new(op_,10,Aclass__Clr);
	} else {
		console__log(STR(__string_Aclass135));
		std__exit(-(1));
	}
	if (ex!=0) {
		Aexpr__set_origin(ex,orig);
		_Aclass_cur_expr=Aexpr__add(_Aclass_cur_expr,ex);
	}
	return 0;
}
long Aclass__expr_open_par(long __this)
{
	long ex;

	ex=Aexpr__new(Aclass__Cparenthesis,1000,Aclass__Clr);
	_Aclass_cur_expr=Aexpr__add(_Aclass_cur_expr,ex);
	Aexpr__set_precedence(ex,1);
	return 0;
}
long Aclass__expr_in_par(long __this)
{
	long ex;

	ex=Aexpr__close(_Aclass_cur_expr,Aclass__Cparenthesis);
	if (ex==0) {
		return 0;
	}
	return 1;
}
long Aclass__expr_close_par(long __this)
{

	_Aclass_cur_expr=Aexpr__close(_Aclass_cur_expr,Aclass__Cparenthesis);
	if (_Aclass_cur_expr==0) {
		Aclass__error(__this, STR(__string_Aclass136));
	} else {
		Aexpr__set_precedence(_Aclass_cur_expr,1000);
	}
	return 0;
}
long Aclass__expr_open_index(long __this, long id_, long orig)
{
	long ex;

	Aclass__expr_var(__this, id_,orig);
	Aclass__expr_op(__this, Aclass__Cindex,orig);
	ex=Aexpr__new(Aclass__Cexpr,1000,Aclass__Clr);
	_Aclass_cur_expr=Aexpr__add(_Aclass_cur_expr,ex);
	Aexpr__set_precedence(ex,2);
	return 0;
}
long Aclass__expr_close_index(long __this)
{

	_Aclass_cur_expr=Aexpr__close(_Aclass_cur_expr,Aclass__Cindex);
	if (_Aclass_cur_expr==0) {
		Aclass__error(__this, STR(__string_Aclass137));
	} else {
		Aexpr__set_precedence(_Aclass_cur_expr,1000);
	}
	return 0;
}
long Aclass__expr_begin_sub_call(long __this, long class_, long name_, long orig)
{
	long ex;

	if (class_!=0) {
		Aclass__expr_var(__this, class_,orig);
		Aclass__expr_op(__this, Aclass__Cdot,orig);
		Aclass__expr_var(__this, name_,orig);
		Aclass__expr_op(__this, Aclass__Ccall,orig);
	} else {
		Aclass__expr_var(__this, name_,orig);
		Aclass__expr_op(__this, Aclass__Ccall,orig);
	}
	ex=Aexpr__new(Aclass__Cexpr,1000,Aclass__Clr);
	_Aclass_cur_expr=Aexpr__add(_Aclass_cur_expr,ex);
	Aexpr__set_precedence(ex,2);
	Aexpr__set_origin(ex,orig);
	return 0;
}
long Aclass__expr_next_expr(long __this, long orig)
{

	Aclass__expr_op(__this, Aclass__Ccomma,orig);
	return 0;
}
long Aclass__expr_finish_sub_call(long __this)
{

	_Aclass_cur_expr=Aexpr__close(_Aclass_cur_expr,Aclass__Ccall);
	if (_Aclass_cur_expr==0) {
		Aclass__error(__this, STR(__string_Aclass138));
	} else {
		Aexpr__set_precedence(_Aclass_cur_expr,1000);
	}
	return 0;
}
long Aclass__expr_term(long __this, long term_, long orig)
{
	long ex;

	ex=Aexpr__new(term_,1000,Aclass__Clr);
	_Aclass_cur_expr=Aexpr__add(_Aclass_cur_expr,ex);
	Aexpr__set_origin(ex,orig);
	return 0;
}
long Aclass__expr_var(long __this, long name_, long orig)
{
	long ex;

	ex=Aexpr__new(Aclass__Cvar,900,0);
	_Aclass_cur_expr=Aexpr__add(_Aclass_cur_expr,ex);
	Aexpr__set_value(ex,name_);
	Aexpr__set_origin(ex,orig);
	return 0;
}
long Aclass__expr_int_const(long __this, long value_, long orig)
{
	long ex;

	ex=Aexpr__new(Aclass__Cint_const,900,0);
	_Aclass_cur_expr=Aexpr__add(_Aclass_cur_expr,ex);
	Aexpr__set_value(ex,value_);
	Aexpr__set_origin(ex,orig);
	return 0;
}
long Aclass__expr_char_const(long __this, long value_, long orig)
{
	long ex;

	ex=Aexpr__new(Aclass__Cchar_const,900,0);
	_Aclass_cur_expr=Aexpr__add(_Aclass_cur_expr,ex);
	Aexpr__set_value(ex,value_);
	Aexpr__set_origin(ex,orig);
	return 0;
}
long Aclass__expr_str_const(long __this, long value_, long orig)
{
	long ex;

	ex=Aexpr__new(Aclass__Cstr_const,900,0);
	_Aclass_cur_expr=Aexpr__add(_Aclass_cur_expr,ex);
	Aexpr__set_value(ex,value_);
	Aexpr__set_origin(ex,orig);
	return 0;
}
long Aclass__expr_constant(long __this, long class_name_, long const_name_, long orig)
{
	long ex;

	Aclass__expr_var(__this, class_name_,orig);
	Aclass__expr_op(__this, Aclass__Cconstant,orig);
	ex=Aexpr__new(Aclass__Cconst,900,0);
	Aexpr__set_origin(ex,orig);
	_Aclass_cur_expr=Aexpr__add(_Aclass_cur_expr,ex);
	Aexpr__set_value(ex,const_name_);
	return 0;
}
// class file
#define _file__folder ((long*)__this)[0]
#define _file_fs_cb ((long*)__this)[1]
long file__new(long folder, long fscb)
{
	long __this;
	__this = std__alloc(D__file___SIZE);
	((long*)__this)[-1] = D__file___ID;

	_file__folder=string__to_string(folder);
	_file_fs_cb=fscb;
	return __this;
}
long file__dispose(long __this)
{

	response__clear(_file_fs_cb);
	string__dispose(_file__folder);
	std__free(__this);
	return 0;
}
long file__mkfolder(long __this)
{

	response__clear(_file_fs_cb);
	std__mkfolder(_file_fs_cb);
	return 0;
}
long file__mkdir(long __this, long name)
{

	response__clear(_file_fs_cb);
	std__mkdir(_file__folder,name,_file_fs_cb);
	return 0;
}
long file__read(long __this, long name, long seek, long size_)
{

	response__clear(_file_fs_cb);
	std__read(_file__folder,name,seek,size_,_file_fs_cb);
	return 0;
}
long file__write(long __this, long name, long data, long seek, long size)
{

	response__clear(_file_fs_cb);
	std__write(_file__folder,name,data,seek,size,_file_fs_cb);
	return 0;
}
long file__filesize(long __this, long name)
{

	response__clear(_file_fs_cb);
	std__filesize(_file__folder,name,_file_fs_cb);
	return 0;
}
long file__scandir(long __this, long name)
{

	response__clear(_file_fs_cb);
	std__scandir(_file__folder,name,_file_fs_cb);
	return 0;
}
long file__rmdir(long __this, long name)
{

	response__clear(_file_fs_cb);
	std__rmdir(_file__folder,name,_file_fs_cb);
	return 0;
}
long file__unlink(long __this, long name)
{

	response__clear(_file_fs_cb);
	std__unlink(_file__folder,name,_file_fs_cb);
	return 0;
}
// class hash
#define _hash__arr ((long*)__this)[0]
#define _hash_size ((long*)__this)[1]
long hash__new(long size_)
{
	long i;
	long __this;
	__this = std__alloc(D__hash___SIZE);
	((long*)__this)[-1] = D__hash___ID;

	_hash_size=size_;
	_hash__arr=array__new(_hash_size);
	i=0;
	while (i<size_) {
		((long*)_hash__arr)[i]=0;
		i=i+1;
	}
	return __this;
}
long hash__dispose(long __this)
{

	array__dispose(_hash__arr);
	std__free(__this);
	return 0;
}
long hash__add(long __this, long key, long value)
{
	long h;
	long hh;
	long cur;
	long old;
	long next;
	long prev;
	long ret;
	long cmp;

	h=string__get_hash(key);
	hh=h;
	h=h-((((h/_hash_size))*_hash_size));
	old=((long*)_hash__arr)[h];
	if (old==0) {
		cur=array__new(4);
		((long*)cur)[hash__Cnext]=0;
		((long*)_hash__arr)[h]=cur;
	}
	next=old;
	prev=0;
	ret=0;
	while (((cur==0))&&((next!=0))) {
		if ((((long*)next)[hash__Chash])==hh) {
			cmp=string__compare(key,((long*)next)[hash__Ckey]);
			if (cmp>0) {
				cur=array__new(4);
				((long*)cur)[hash__Cnext]=next;
				if (prev==0) {
					((long*)_hash__arr)[h]=cur;
				} else {
					((long*)prev)[hash__Cnext]=cur;
				}
			} else if (cmp==0) {
				cur=next;
				ret=((long*)next)[hash__Cvalue];
			}
		} else if ((((long*)next)[hash__Chash])>hh) {
			cur=array__new(4);
			((long*)cur)[hash__Cnext]=next;
			if (prev==0) {
				((long*)_hash__arr)[h]=cur;
			} else {
				((long*)prev)[hash__Cnext]=cur;
			}
		}
		prev=next;
		next=((long*)next)[hash__Cnext];
	}
	if (cur==0) {
		cur=array__new(4);
		((long*)cur)[hash__Cnext]=0;
		if (prev==0) {
			((long*)_hash__arr)[h]=cur;
		} else {
			((long*)prev)[hash__Cnext]=cur;
		}
	}
	((long*)cur)[hash__Chash]=hh;
	((long*)cur)[hash__Ckey]=key;
	((long*)cur)[hash__Cvalue]=value;
	return ret;
}
long hash__get(long __this, long key)
{
	long h;
	long hh;
	long next;
	long cmp;

	h=string__get_hash(key);
	hh=h;
	h=h-((((h/_hash_size))*_hash_size));
	next=((long*)_hash__arr)[h];
	while (next!=0) {
		if ((((long*)next)[hash__Chash])==hh) {
			cmp=string__compare(key,((long*)next)[hash__Ckey]);
			if (cmp>0) {
				return 0;
			} else if (cmp==0) {
				return ((long*)next)[hash__Cvalue];
			}
		} else if ((((long*)next)[hash__Chash])>hh) {
			return 0;
		}
		next=((long*)next)[hash__Cnext];
	}
	return 0;
}
// class Atoken
#define _Atoken_type ((long*)__this)[0]
#define _Atoken__data ((long*)__this)[1]
#define _Atoken_line ((long*)__this)[2]
#define _Atoken_file_ ((long*)__this)[3]
long Atoken__new(long type1, long _data1, long line1, long file1)
{
	long __this;
	__this = std__alloc(D__Atoken___SIZE);
	((long*)__this)[-1] = D__Atoken___ID;

	_Atoken_type=type1;
	_Atoken__data=_data1;
	_Atoken_line=line1;
	_Atoken_file_=file1;
	return __this;
}
long Atoken__dispose(long __this)
{

	string__dispose(_Atoken__data);
	std__free(__this);
	return 0;
}
long Atoken__get_data(long __this)
{

	return _Atoken__data;
}
long Atoken__get_type(long __this)
{

	return _Atoken_type;
}
long Atoken__get_line(long __this)
{

	return _Atoken_line;
}
long Atoken__get_file(long __this)
{

	return _Atoken_file_;
}
// class Alexer
#define _Alexer__src ((long*)__this)[0]
#define _Alexer__str ((long*)__this)[1]
#define _Alexer__pool ((long*)__this)[2]
#define _Alexer_pos ((long*)__this)[3]
#define _Alexer_line ((long*)__this)[4]
#define _Alexer__files ((long*)__this)[5]
#define _Alexer__token ((long*)__this)[6]
#define _Alexer_type ((long*)__this)[7]
#define _Alexer_c ((long*)__this)[8]
#define _Alexer_len ((long*)__this)[9]
#define _Alexer_enable_escape ((long*)__this)[10]
#define _Alexer_in_string ((long*)__this)[11]
#define _Alexer_in_quote ((long*)__this)[12]
#define _Alexer_in_comment ((long*)__this)[13]
#define _Alexer_in_com_multi ((long*)__this)[14]
#define _Alexer_in_escape ((long*)__this)[15]
#define _Alexer_in_asm ((long*)__this)[16]
#define _Alexer_in_asm_multi ((long*)__this)[17]
#define _Alexer_in_number ((long*)__this)[18]
#define _Alexer_in_identifier ((long*)__this)[19]
#define _Alexer_in_space ((long*)__this)[20]
#define _Alexer_need_char ((long*)__this)[21]
long Alexer__new()
{
	long __this;
	__this = std__alloc(D__Alexer___SIZE);
	((long*)__this)[-1] = D__Alexer___ID;

	_Alexer__str=string__new(1024);
	_Alexer__token=string__new(256);
	_Alexer__pool=buffer__new(32);
	_Alexer__files=buffer__new(32);
	_Alexer_pos=0;
	_Alexer_line=1;
	_Alexer_c=0;
	_Alexer_len=0;
	_Alexer_enable_escape=0;
	_Alexer_need_char=1;
	_Alexer_in_string=0;
	_Alexer_in_quote=0;
	_Alexer_in_comment=0;
	_Alexer_in_com_multi=0;
	_Alexer_in_escape=0;
	_Alexer_in_asm=0;
	_Alexer_in_asm_multi=0;
	_Alexer_in_number=0;
	_Alexer_in_identifier=0;
	_Alexer_in_space=1;
	return __this;
}
long Alexer__dispose(long __this)
{

	buffer__dispose(_Alexer__pool);
	string__dispose(_Alexer__token);
	string__dispose(_Alexer__str);
	buffer__dispose(_Alexer__files);
	std__free(__this);
	return 0;
}
long Alexer__begin(long __this, long file_)
{

	_Alexer_pos=0;
	_Alexer_line=1;
	_Alexer__src=string__new(12);
	string__add(_Alexer__src,file_);
	buffer__push(_Alexer__files,_Alexer__src);
	return 0;
}
long Alexer__get_at(long __this, long x)
{

	return buffer__get_at(_Alexer__pool,x);
}
long Alexer__shift(long __this)
{

	buffer__shift(_Alexer__pool);
	return 0;
}
long Alexer__empty(long __this)
{

	return buffer__empty(_Alexer__pool);
}
long Alexer__set_enable_escape(long __this, long v)
{

	_Alexer_enable_escape=v;
	return 0;
}
long Alexer__add(long __this, long str_)
{
	long ns;

	if (_Alexer_len<0) {
		return 0;
	}
	if ((string__length(str_))<1) {
		Alexer__finish(__this);
		return 0;
	}
	if (_Alexer_pos<(string__length(_Alexer__str))) {
		ns=string__new(32);
		string__substr(_Alexer__str,_Alexer_pos,0,ns);
		string__add(ns,str_);
		string__dispose(_Alexer__str);
		_Alexer__str=ns;
		string__set(_Alexer__str,str_);
	} else {
		string__set(_Alexer__str,str_);
	}
	_Alexer_pos=0;
	_Alexer_len=string__length(_Alexer__str);
	if (_Alexer_need_char!=0) {
		Alexer__next(__this);
	}
	Alexer__tokenize(__this);
	return 0;
}
long Alexer__tokenize(long __this)
{
	long s;

	s=Alexer__state(__this);
	while ((s!=0)) {
		if (_Alexer_need_char!=0) {
			return 0;
		}
		s=Alexer__state(__this);
	}
	return 0;
}
long Alexer__is_digit(long __this, long c)
{

	if (((c>='0'))&&((c<='9'))) {
		return 1;
	}
	return 0;
}
long Alexer__is_letter(long __this, long c)
{

	if (((((c>='a'))&&((c<='z')))||((((c>='A'))&&((c<='Z')))))) {
		return 1;
	}
	return 0;
}
long Alexer__is_space(long __this, long c)
{

	if (((((c==' '))||((c=='\t')))||((c=='\n')))||((c=='\r'))) {
		return 1;
	}
	return 0;
}
long Alexer__next(long __this)
{

	if (_Alexer_pos>=_Alexer_len) {
		_Alexer_need_char=1;
		_Alexer_c='\0';
		return 0;
	}
	_Alexer_need_char=0;
	_Alexer_c=string__get_at(_Alexer__str,_Alexer_pos);
	_Alexer_pos=_Alexer_pos+1;
	return 1;
}
long Alexer__validate(long __this, long type_)
{
	long t;

	if (type_==(Alexer__Cnewline)) {
		_Alexer_line=_Alexer_line+1;
	}
	t=Atoken__new(type_,_Alexer__token,_Alexer_line,_Alexer__src);
	buffer__push(_Alexer__pool,t);
	_Alexer__token=string__new(3);
	return 0;
}
long Alexer__error(long __this, long msg)
{

	console__log_str(STR(__string_Alexer139));
	console__log_str(_Alexer__src);
	console__log_str(STR(__string_Alexer140));
	console__log_int(_Alexer_line);
	console__log_str(STR(__string_Alexer141));
	console__log_str(_Alexer__token);
	console__log_str(STR(__string_Alexer142));
	console__log(msg);
	_Alexer_len=-(1);
	return 0;
}
long Alexer__state(long __this)
{
	long l;
	long a;
	long b;
	long d;

	if (_Alexer_in_escape!=0) {
		if (_Alexer_enable_escape==0) {
			if (_Alexer_c!='\n') {
				string__add_char(_Alexer__token,'\\');
				string__add_char(_Alexer__token,_Alexer_c);
				Alexer__next(__this);
				_Alexer_in_escape=0;
				return 1;
			}
			_Alexer_line=_Alexer_line+1;
		} else if (_Alexer_c!='\n') {
			a=_Alexer_c;
			if (_Alexer_c=='0') {
				a=0;
			} else if (_Alexer_c=='n') {
				a='\n';
			} else if (_Alexer_c=='t') {
				a='\t';
			} else if (_Alexer_c=='b') {
				a='\b';
			} else {
				string__add_char(_Alexer__token,'\\');
			}
			string__add_char(_Alexer__token,a);
		} else {
			_Alexer_line=_Alexer_line+1;
		}
		Alexer__next(__this);
		_Alexer_in_escape=0;
		return 1;
	} else if (_Alexer_in_string!=0) {
		if (_Alexer_c=='\"') {
			_Alexer_in_string=0;
			Alexer__validate(__this, Alexer__Cstring);
		} else if (_Alexer_c=='\\') {
			_Alexer_in_escape=1;
		} else if (_Alexer_c=='\n') {
			Alexer__error(__this, STR(__string_Alexer143));
			return 0;
		} else {
			string__add_char(_Alexer__token,_Alexer_c);
		}
		Alexer__next(__this);
		return 1;
	} else if (_Alexer_in_quote!=0) {
		if (_Alexer_c=='\'') {
			_Alexer_in_quote=0;
			Alexer__validate(__this, Alexer__Cquote);
		} else if (_Alexer_c=='\\') {
			_Alexer_in_escape=1;
		} else {
			string__add_char(_Alexer__token,_Alexer_c);
		}
		Alexer__next(__this);
		return 1;
	} else if (_Alexer_in_comment!=0) {
		if (_Alexer_in_comment==(-(1))) {
			if (_Alexer_c=='/') {
				_Alexer_in_comment=1;
				Alexer__next(__this);
				return 1;
			} else if (_Alexer_c=='*') {
				_Alexer_in_comment=0;
				_Alexer_in_com_multi=1;
				Alexer__next(__this);
				return 1;
			}
			_Alexer_in_comment=0;
			string__add_char(_Alexer__token,'/');
			return 1;
		} else if (_Alexer_in_comment==1) {
			if (_Alexer_c=='#') {
				_Alexer_in_asm=1;
				_Alexer_in_comment=0;
				Alexer__next(__this);
				return 1;
			}
			_Alexer_in_comment=2;
		}
		if (_Alexer_c=='\n') {
			_Alexer_in_comment=0;
			Alexer__validate(__this, Alexer__Ccomment);
			Alexer__validate(__this, Alexer__Cnewline);
		}
		if (_Alexer_c=='\0') {
			return 0;
		}
		Alexer__next(__this);
		return 1;
	} else if (_Alexer_in_com_multi!=0) {
		if (_Alexer_in_com_multi==1) {
			if (_Alexer_c=='#') {
				_Alexer_in_asm_multi=2;
				_Alexer_in_com_multi=0;
				Alexer__next(__this);
				return 1;
			}
			_Alexer_in_com_multi=2;
		} else if (_Alexer_in_com_multi==2) {
			if (_Alexer_c=='*') {
				_Alexer_in_com_multi=3;
				Alexer__next(__this);
				return 1;
			}
		} else if (_Alexer_in_com_multi==3) {
			if (_Alexer_c=='/') {
				_Alexer_in_com_multi=0;
				Alexer__validate(__this, Alexer__Ccomment);
				Alexer__next(__this);
				return 1;
			}
			_Alexer_in_com_multi=2;
		}
		Alexer__next(__this);
		return 1;
	} else if (_Alexer_in_asm!=0) {
		if (_Alexer_c=='\n') {
			Alexer__validate(__this, Alexer__Casm);
			Alexer__validate(__this, Alexer__Cnewline);
			_Alexer_in_asm=0;
			Alexer__next(__this);
			return 1;
		}
		if (_Alexer_c=='\0') {
			return 0;
		}
		string__add_char(_Alexer__token,_Alexer_c);
		Alexer__next(__this);
		return 1;
	} else if (_Alexer_in_asm_multi!=0) {
		if (_Alexer_in_asm_multi==2) {
			if (_Alexer_c=='*') {
				_Alexer_in_asm_multi=3;
				Alexer__next(__this);
				return 1;
			}
		} else if (_Alexer_in_asm_multi==3) {
			if (_Alexer_c=='/') {
				_Alexer_in_asm_multi=0;
				Alexer__validate(__this, Alexer__Casm);
				Alexer__next(__this);
				return 1;
			}
			_Alexer_in_asm_multi=2;
		}
		string__add_char(_Alexer__token,_Alexer_c);
		Alexer__next(__this);
		return 1;
	} else if (_Alexer_in_number!=0) {
		if ((Alexer__is_digit(__this, _Alexer_c))!=0) {
			string__add_char(_Alexer__token,_Alexer_c);
			Alexer__next(__this);
		} else {
			_Alexer_in_number=0;
			Alexer__validate(__this, Alexer__Cnumber);
		}
		return 1;
	} else if (_Alexer_in_identifier!=0) {
		while ((((_Alexer_c=='_'))||(((Alexer__is_letter(__this, _Alexer_c))!=0)))||(((Alexer__is_digit(__this, _Alexer_c))!=0))) {
			string__add_char(_Alexer__token,_Alexer_c);
			if ((Alexer__next(__this))==0) {
				return 1;
			}
		}
		Alexer__validate(__this, Alexer__Cidentifier);
		_Alexer_in_identifier=0;
		return 1;
	} else if (_Alexer_in_space!=0) {
		while ((Alexer__is_space(__this, _Alexer_c))!=0) {
			if (_Alexer_c=='\n') {
				Alexer__validate(__this, Alexer__Cnewline);
			}
			if ((Alexer__next(__this))==0) {
				return 1;
			}
		}
		_Alexer_in_space=0;
		return 1;
	} else {
		l=string__length(_Alexer__token);
		if ((Alexer__is_space(__this, _Alexer_c))!=0) {
			if (l!=0) {
				Alexer__validate(__this, Alexer__Coperator);
			}
			_Alexer_in_space=1;
			return 1;
		} else if (l==0) {
			if ((Alexer__is_digit(__this, _Alexer_c))!=0) {
				string__add_char(_Alexer__token,_Alexer_c);
				Alexer__next(__this);
				_Alexer_in_number=1;
				return 1;
			} else if (((_Alexer_c=='_'))||(((Alexer__is_letter(__this, _Alexer_c))!=0))) {
				string__add_char(_Alexer__token,_Alexer_c);
				Alexer__next(__this);
				_Alexer_in_identifier=1;
				return 1;
			} else if (_Alexer_c=='\'') {
				Alexer__next(__this);
				_Alexer_in_quote=1;
				return 1;
			} else if (_Alexer_c=='"') {
				Alexer__next(__this);
				_Alexer_in_string=1;
				return 1;
			} else if ((_Alexer_c=='/')) {
				Alexer__next(__this);
				_Alexer_in_comment=-(1);
				return 1;
			}
			string__add_char(_Alexer__token,_Alexer_c);
			Alexer__next(__this);
			return 1;
		} else if (l==1) {
			a=string__get_at(_Alexer__token,0);
			if (_Alexer_c=='=') {
				if (((((((((((((a=='+'))||((a=='-')))||((a==':')))||((a=='*')))||((a=='/')))||((a=='%')))||((a=='&')))||((a=='^')))||((a=='|')))||((a=='>')))||((a=='<')))||((a=='~'))) {
					string__add_char(_Alexer__token,_Alexer_c);
					Alexer__validate(__this, Alexer__Coperator);
					Alexer__next(__this);
					return 1;
				} else if (((a=='='))||((a=='!'))) {
					string__add_char(_Alexer__token,_Alexer_c);
					Alexer__next(__this);
					return 1;
				}
			} else if (((((a=='+'))&&((_Alexer_c=='+')))||(((((a=='-'))&&((_Alexer_c=='>')))||(((((a==':'))&&((_Alexer_c==':')))||(((((a=='|'))&&((_Alexer_c=='|')))||(((((a=='&'))&&((_Alexer_c=='&')))||(((((a=='.'))&&((_Alexer_c=='$')))||((((a=='-'))&&((_Alexer_c=='-')))))))))))))))) {
				string__add_char(_Alexer__token,_Alexer_c);
				Alexer__validate(__this, Alexer__Coperator);
				Alexer__next(__this);
				return 1;
			} else if (((((a=='>'))&&((_Alexer_c=='>')))||(((((a=='.'))&&((_Alexer_c=='.')))||((((a=='<'))&&((_Alexer_c=='<')))))))) {
				string__add_char(_Alexer__token,_Alexer_c);
				Alexer__next(__this);
				return 1;
			}
			Alexer__validate(__this, Alexer__Coperator);
			return 1;
		} else if (l==2) {
			a=string__get_at(_Alexer__token,0);
			b=string__get_at(_Alexer__token,1);
			if ((((((a=='!'))&&((b=='=')))&&((_Alexer_c=='=')))||((((((a=='='))&&((b=='=')))&&((_Alexer_c=='=')))||((((((a=='>'))&&((b=='>')))&&((_Alexer_c=='=')))||((((((a=='.'))&&((b=='.')))&&((_Alexer_c=='.')))||(((((a=='<'))&&((b=='<')))&&((_Alexer_c=='=')))))))))))) {
				string__add_char(_Alexer__token,_Alexer_c);
				Alexer__validate(__this, Alexer__Coperator);
				Alexer__next(__this);
				return 1;
			} else if (((((a=='>'))&&((b=='>')))&&((_Alexer_c=='>')))) {
				string__add_char(_Alexer__token,_Alexer_c);
				Alexer__next(__this);
				return 1;
			}
			Alexer__validate(__this, Alexer__Coperator);
			return 1;
		} else {
			a=string__get_at(_Alexer__token,0);
			b=string__get_at(_Alexer__token,1);
			d=string__get_at(_Alexer__token,2);
			if (((((a=='>'))&&((b=='>')))&&((d=='>')))&&((_Alexer_c=='='))) {
				string__add_char(_Alexer__token,_Alexer_c);
				Alexer__validate(__this, Alexer__Coperator);
				Alexer__next(__this);
				return 1;
			}
			Alexer__validate(__this, Alexer__Coperator);
			return 1;
		}
	}
	console__log(STR(__string_Alexer144));
	return 0;
}
long Alexer__finish(long __this)
{

	if ((string__length(_Alexer__token))>0) {
		Alexer__error(__this, STR(__string_Alexer145));
	}
	Alexer__validate(__this, Alexer__Cend);
	return 0;
}
// class string
#define _string__str ((long*)__this)[0]
#define _string_size ((long*)__this)[1]
long string__new(long alloc)
{
	long __this;
	__this = std__alloc(D__string___SIZE);
	((long*)__this)[-1] = D__string___ID;

	_string__str=0;
	std__stralloc(__this,alloc+1);
	_string_size=alloc;
	return __this;
}
long string___V_dispose(long __this)
{

	std__strfree(__this);
	std__free(__this);
	return 0;
}
long string__get_buf(long __this)
{

	return _string__str;
}
long string__set_buf(long __this, long b)
{

	_string__str=b;
	return 0;
}
long string__get_size(long __this)
{

	return _string_size;
}
long string__set_size(long __this, long ns)
{
	long ops;
	long b;

	if (_string_size>ns) {
		return 0;
	}
	ops=string__new(ns+1);
	std__strcat(ops,__this,ns);
	b=_string__str;
	_string__str=string__get_buf(ops);
	string__set_buf(ops,b);
	string__dispose(ops);
	_string_size=ns;
	return 0;
}
long string__length(long __this)
{

	return std__strlen(__this);
}
long string__set_int(long __this, long num)
{

	return std__str_set_int(__this,_string_size,num);
}
long string__set(long __this, long src)
{
	long sl;

	sl=std__strlen(src);
	if (_string_size<sl) {
		std__strfree(__this);
		std__stralloc(__this,sl+1);
		_string_size=sl;
	}
	std__str_set_at(__this,0,'\0');
	std__strcat(__this,src,sl);
	return 0;
}
long string__add_char(long __this, long num)
{
	long sl;
	long tl;
	long ns;
	long i;

	sl=6;
	tl=std__strlen(__this);
	ns=(sl+tl)+1;
	i=0;
	if (_string_size<=ns) {
		ns=ns+8;
		string__set_size(__this, ns);
	}
	i=tl;
	std__str_set_at(__this,i,num);
	i=i+1;
	std__str_set_at(__this,i,'\0');
	return 0;
}
long string__add(long __this, long src)
{
	long sl;
	long tl;
	long ns;

	sl=std__strlen(src);
	tl=std__strlen(__this);
	ns=(sl+tl)+1;
	string__set_size(__this, ns);
	std__strcat(__this,src,ns);
	_string_size=ns;
	return 0;
}
long string__indexof(long __this, long start_pos, long needle)
{

	return std__strindex(__this,start_pos,needle);
}
long string__substr(long __this, long start_pos, long length_, long result)
{
	long len;

	len=std__strlen(__this);
	if (start_pos<0) {
		start_pos=start_pos+len;
	}
	if (start_pos<0) {
		start_pos=0;
	}
	if (length_<0) {
		length_=(len+length_)-start_pos;
	} else if (length_==0) {
		length_=len;
	}
	if (((start_pos>=len))||((length_<1))) {
		string__set(result,STR(__string_string146));
		return 0;
	}
	string__set_size(result,length_+1);
	std__str_set_at(result,0,'\0');
	std__strsub(result,start_pos,__this,length_);
	return 0;
}
long string__to_string(long __this)
{
	long str;

	str=string__new((string__length(__this))+1);
	string__set(str,__this);
	return str;
}
long string__to_int(long __this)
{

	return std__str_toint(__this);
}
long string__compare(long __this, long other)
{

	return std__strcmp(__this,other);
}
long string__get_hash(long __this)
{

	return std__strhash(__this);
}
long string__get_at(long __this, long at)
{

	if (((at<_string_size))&&((_string_size>=0))) {
		return std__str_get_at(__this,at);
	}
	return '\0';
}
long string__set_at(long __this, long at, long v)
{

	if (((at<_string_size))&&((_string_size>=0))) {
		std__str_set_at(__this,at,v);
	}
	return 0;
}
// class Aemmiter
#define _Aemmiter__data ((long*)__this)[0]
#define _Aemmiter__head ((long*)__this)[1]
#define _Aemmiter__mid ((long*)__this)[2]
#define _Aemmiter_clas ((long*)__this)[3]
#define _Aemmiter_class_name ((long*)__this)[4]
#define _Aemmiter_cur_memb ((long*)__this)[5]
#define _Aemmiter__proc ((long*)__this)[6]
#define _Aemmiter__stk ((long*)__this)[7]
#define _Aemmiter__expr_stk ((long*)__this)[8]
#define _Aemmiter_token1 ((long*)__this)[9]
#define _Aemmiter_token2 ((long*)__this)[10]
#define _Aemmiter_pass ((long*)__this)[11]
#define _Aemmiter__virtuals ((long*)__this)[12]
#define _Aemmiter_class_id ((long*)__this)[13]
#define _Aemmiter_string_id ((long*)__this)[14]
long Aemmiter__new()
{
	long __this;
	__this = std__alloc(D__Aemmiter___SIZE);
	((long*)__this)[-1] = D__Aemmiter___ID;

	_Aemmiter__proc=buffer__new(100);
	_Aemmiter__stk=buffer__new(100);
	_Aemmiter__expr_stk=buffer__new(100);
	_Aemmiter__data=string__new(1);
	_Aemmiter__head=string__new(1);
	_Aemmiter__mid=string__new(1);
	_Aemmiter__virtuals=buffer__new(100);
	_Aemmiter_token1=0;
	_Aemmiter_token2=0;
	_Aemmiter_class_id=0;
	_Aemmiter_string_id=0;
	return __this;
}
long Aemmiter__dispose(long __this)
{

	buffer__dispose(_Aemmiter__proc);
	buffer__dispose(_Aemmiter__stk);
	string__dispose(_Aemmiter__data);
	buffer__dispose(_Aemmiter__expr_stk);
	std__free(__this);
	return 0;
}
long Aemmiter__emmit(long __this, long par)
{

	_Aemmiter_clas=Aparser__get_next(par);
	while (_Aemmiter_clas!=0) {
		Aemmiter__gen_class(__this);
		_Aemmiter_clas=Aclass__get_next(_Aemmiter_clas);
	}
	return 1;
}
long Aemmiter__get_head(long __this)
{

	return _Aemmiter__head;
}
long Aemmiter__get_data(long __this)
{

	return _Aemmiter__data;
}
long Aemmiter__get_mid(long __this)
{

	return _Aemmiter__mid;
}
long Aemmiter__gen_class(long __this)
{
	long to;
	long s;
	long mem;
	long i;
	long l;
	long m;

	to=Aclass__get_name(_Aemmiter_clas);
	_Aemmiter_class_name=Atoken__get_data(to);
	string__add(_Aemmiter__data,STR(__string_Aemmiter147));
	string__add(_Aemmiter__data,_Aemmiter_class_name);
	string__add(_Aemmiter__data,STR(__string_Aemmiter148));
	s=string__new(4);
	string__set_int(s,Aclass__get_nb_fields(_Aemmiter_clas));
	string__add(_Aemmiter__head,STR(__string_Aemmiter149));
	string__add(_Aemmiter__head,_Aemmiter_class_name);
	string__add(_Aemmiter__head,STR(__string_Aemmiter150));
	string__add(_Aemmiter__head,s);
	string__add(_Aemmiter__head,STR(__string_Aemmiter151));
	_Aemmiter_class_id=_Aemmiter_class_id+1;
	string__set_int(s,_Aemmiter_class_id);
	string__add(_Aemmiter__head,STR(__string_Aemmiter152));
	string__add(_Aemmiter__head,_Aemmiter_class_name);
	string__add(_Aemmiter__head,STR(__string_Aemmiter153));
	string__add(_Aemmiter__head,s);
	string__add(_Aemmiter__head,STR(__string_Aemmiter154));
	string__dispose(s);
	_Aemmiter_pass=0;
	while (_Aemmiter_pass<3) {
		mem=Aclass__get_members(_Aemmiter_clas);
		l=buffer__length(mem);
		i=0;
		while (i<l) {
			m=buffer__get_at(mem,i);
			Aemmiter__gen_member(__this, m);
			i=i+1;
		}
		_Aemmiter_pass=_Aemmiter_pass+1;
	}
	return 0;
}
long Aemmiter__gen_member(long __this, long mb)
{
	long k;
	long str;

	str=string__new(8);
	k=Amember__get_kind(mb);
	if (_Aemmiter_pass==0) {
		Aemmiter__pass_0(__this, str,mb,k);
		Aemmiter__pass_1(__this, str,mb,k);
		Aemmiter__pass_2(__this, str,mb,k);
	} else if (_Aemmiter_pass==1) {
		Aemmiter__pass_3(__this, str,mb,k);
	} else if (_Aemmiter_pass==2) {
		Aemmiter__pass_4(__this, str,mb,k);
	}
	string__dispose(str);
	return 0;
}
long Aemmiter__gen_conditional_call(long __this, long v, long mb)
{
	long param;
	long params;
	long i;
	long l;
	long tok;

	string__add(_Aemmiter__data,STR(__string_Aemmiter155));
	string__add(_Aemmiter__data,Avirtual__get_class_name(v));
	string__add(_Aemmiter__data,STR(__string_Aemmiter156));
	params=Amember__get_params(mb);
	string__add(_Aemmiter__data,Avirtual__get_class_name(v));
	string__add(_Aemmiter__data,STR(__string_Aemmiter157));
	string__add(_Aemmiter__data,Amember__get_name_string(mb));
	string__add(_Aemmiter__data,STR(__string_Aemmiter158));
	if (params!=0) {
		l=buffer__length(params);
		i=0;
		while (i<l) {
			param=buffer__get_at(params,i);
			string__add(_Aemmiter__data,STR(__string_Aemmiter159));
			tok=Amember__get_name(param);
			string__add(_Aemmiter__data,Atoken__get_data(tok));
			i=i+1;
		}
	}
	string__add(_Aemmiter__data,STR(__string_Aemmiter160));
	return 0;
}
long Aemmiter__gen_virtuals(long __this)
{
	long i;
	long v;
	long mb;

	i=buffer__length(_Aemmiter__virtuals);
	while (i>0) {
		i=i-1;
		v=buffer__get_at(_Aemmiter__virtuals,i);
		mb=Avirtual__get_member(v);
		Aemmiter__gen_method_decl(__this, _Aemmiter__head,STR(__string_Aemmiter161),Amember__get_name_string(mb),mb,Aclass__Cvirtual);
		string__add(_Aemmiter__head,STR(__string_Aemmiter162));
		Aemmiter__gen_method_decl(__this, _Aemmiter__data,STR(__string_Aemmiter163),Amember__get_name_string(mb),mb,Aclass__Cvirtual);
		string__add(_Aemmiter__data,STR(__string_Aemmiter164));
		string__add(_Aemmiter__data,STR(__string_Aemmiter165));
		string__add(_Aemmiter__data,STR(__string_Aemmiter166));
		while (v!=0) {
			Aemmiter__gen_conditional_call(__this, v,mb);
			v=Avirtual__get_next(v);
		}
		string__add(_Aemmiter__data,STR(__string_Aemmiter167));
		string__add(_Aemmiter__data,STR(__string_Aemmiter168));
	}
	return 0;
}
long Aemmiter__pass_0(long __this, long str, long mb, long k)
{
	long t;
	long ty;

	if (k==(Aclass__Cconst)) {
		string__add(_Aemmiter__head,STR(__string_Aemmiter169));
		string__add(_Aemmiter__head,_Aemmiter_class_name);
		string__add(_Aemmiter__head,STR(__string_Aemmiter170));
		string__add(_Aemmiter__head,Amember__get_name_string(mb));
		string__add(_Aemmiter__head,STR(__string_Aemmiter171));
		t=Amember__get_initial_value(mb);
		ty=Atoken__get_type(t);
		if (ty==(Alexer__Cstring)) {
			string__add(_Aemmiter__head,STR(__string_Aemmiter172));
			string__add(_Aemmiter__head,_Aemmiter_class_name);
			string__add(_Aemmiter__head,Amember__get_name_string(mb));
			string__add(_Aemmiter__head,STR(__string_Aemmiter173));
			Aemmiter__gen_string(__this, Amember__get_name_string(mb),Atoken__get_data(t));
		} else if (ty==(Alexer__Cquote)) {
			string__add_char(_Aemmiter__head,'\'');
			string__add(_Aemmiter__head,Atoken__get_data(t));
			string__add_char(_Aemmiter__head,'\'');
		} else {
			string__add(_Aemmiter__head,Atoken__get_data(t));
		}
		string__add(_Aemmiter__head,STR(__string_Aemmiter174));
	}
	if (k==(Aclass__Cfield)) {
		string__set_int(str,Amember__get_index(mb));
		string__add(_Aemmiter__data,STR(__string_Aemmiter175));
		string__add(_Aemmiter__data,_Aemmiter_class_name);
		string__add(_Aemmiter__data,STR(__string_Aemmiter176));
		string__add(_Aemmiter__data,Amember__get_name_string(mb));
		string__add(_Aemmiter__data,STR(__string_Aemmiter177));
		string__add(_Aemmiter__data,str);
		string__add(_Aemmiter__data,STR(__string_Aemmiter178));
	}
	return 0;
}
long Aemmiter__pass_1(long __this, long str, long mb, long k)
{

	if (k==(Aclass__Cstatic)) {
		string__add(_Aemmiter__data,STR(__string_Aemmiter179));
		string__add(_Aemmiter__data,_Aemmiter_class_name);
		string__add(_Aemmiter__data,STR(__string_Aemmiter180));
		string__add(_Aemmiter__data,Amember__get_name_string(mb));
		string__add(_Aemmiter__data,STR(__string_Aemmiter181));
	}
	return 0;
}
long Aemmiter__pass_2(long __this, long str, long mb, long k)
{

	return 0;
}
long Aemmiter__pad(long __this, long depth)
{

	while (depth>0) {
		string__add(_Aemmiter__data,STR(__string_Aemmiter182));
		depth=depth-1;
	}
	return 0;
}
long Aemmiter__find_param(long __this, long stri)
{
	long v;
	long i;
	long vars;
	long tok;
	long s;

	vars=Amember__get_params(_Aemmiter_cur_memb);
	i=0;
	if (vars!=0) {
		i=buffer__length(vars);
	}
	while (i>0) {
		i=i-1;
		v=buffer__get_at(vars,i);
		if (v!=0) {
			tok=Amember__get_name(v);
			s=Atoken__get_data(tok);
			if (s!=0) {
				if ((string__compare(stri,s))==0) {
					return v;
				}
			}
		}
	}
	return 0;
}
long Aemmiter__find_member(long __this, long stri)
{
	long v;
	long i;
	long vars;
	long tok;
	long s;

	i=0;
	vars=Aclass__get_members(_Aemmiter_clas);
	if (vars!=0) {
		i=buffer__length(vars);
	}
	while (i>0) {
		i=i-1;
		v=buffer__get_at(vars,i);
		if (v!=0) {
			tok=Amember__get_name(v);
			s=Atoken__get_data(tok);
			if ((s!=0)) {
				if ((string__compare(stri,s))==0) {
					return v;
				}
			}
		}
	}
	return 0;
}
long Aemmiter__find_field(long __this, long stri)
{
	long v;

	v=Aemmiter__find_member(__this, stri);
	if (((v!=0))&&(((Amember__get_kind(v))==(Aclass__Cfield)))) {
		return v;
	}
	return 0;
}
long Aemmiter__find_static(long __this, long stri)
{
	long v;

	v=Aemmiter__find_member(__this, stri);
	if (((v!=0))&&(((Amember__get_kind(v))==(Aclass__Cstatic)))) {
		return v;
	}
	return 0;
}
long Aemmiter__find_meth_virt(long __this, long stri)
{
	long v;

	v=Aemmiter__find_member(__this, stri);
	if (v!=0) {
		if ((((Amember__get_kind(v))==(Aclass__Cmethod)))||(((Amember__get_kind(v))==(Aclass__Cvirtual)))) {
			return v;
		}
	}
	return 0;
}
long Aemmiter__find_local(long __this, long stri)
{
	long v;
	long i;
	long vars;
	long tok;
	long s;

	vars=Amember__get_vars(_Aemmiter_cur_memb);
	i=0;
	if (vars!=0) {
		i=buffer__length(vars);
	}
	while (i>0) {
		i=i-1;
		v=buffer__get_at(vars,i);
		if (v!=0) {
			tok=Amember__get_name(v);
			s=Atoken__get_data(tok);
			if ((s!=0)) {
				if ((string__compare(stri,s))==0) {
					return v;
				}
			}
		}
	}
	return 0;
}
long Aemmiter__expr_gen_call(long __this, long expr)
{
	long ex1;
	long ex2;
	long s;
	long tok;
	long stri;
	long v;
	long p;
	long obj;
	long fld;

	s=string__new(8);
	ex2=buffer__pop(_Aemmiter__expr_stk);
	ex1=buffer__pop(_Aemmiter__expr_stk);
	stri=Aexpr__get_value(ex1);
	obj=Aexpr__get_value2(ex1);
	if (obj==0) {
		v=Aemmiter__find_meth_virt(__this, stri);
		if ((v!=0)) {
			s=string__new(8);
			string__add(s,_Aemmiter_class_name);
			string__add(s,STR(__string_Aemmiter183));
			string__add(s,stri);
			p=Aexpr__get_value(ex2);
			if ((string__length(p))>0) {
				string__add(s,STR(__string_Aemmiter184));
				string__add(s,p);
				string__add(s,STR(__string_Aemmiter185));
			} else {
				string__add(s,STR(__string_Aemmiter186));
			}
			Aexpr__set_value(expr,s);
			buffer__push(_Aemmiter__expr_stk,expr);
			return 0;
		}
		Aemmiter__error(__this, Aexpr__get_origin(expr),STR(__string_Aemmiter187));
		return 0;
	}
	fld=0;
	v=Aemmiter__find_local(__this, obj);
	if (v==0) {
		v=Aemmiter__find_param(__this, obj);
	}
	if (v==0) {
		v=Aemmiter__find_field(__this, obj);
		if (v!=0) {
			fld=1;
		}
	}
	if (v!=0) {
		tok=Amember__get_type_id(v);
		if (tok==0) {
			console__log(obj);
			console__log(Amember__get_name_string(v));
			Aemmiter__error(__this, Aexpr__get_origin(ex1),STR(__string_Aemmiter188));
			return 0;
		}
		s=string__new(8);
		string__add(s,Atoken__get_data(tok));
		string__add(s,STR(__string_Aemmiter189));
		string__add(s,Aexpr__get_value(ex1));
		p=Aexpr__get_value(ex2);
		string__add(s,STR(__string_Aemmiter190));
		if (fld!=0) {
			string__add(s,STR(__string_Aemmiter191));
			string__add(s,_Aemmiter_class_name);
			string__add(s,STR(__string_Aemmiter192));
		}
		string__add(s,Aexpr__get_value2(ex1));
		if ((string__length(p))>0) {
			string__add(s,STR(__string_Aemmiter193));
			string__add(s,Aexpr__get_value(ex2));
		}
		string__add(s,STR(__string_Aemmiter194));
		Aexpr__set_value(expr,s);
		buffer__push(_Aemmiter__expr_stk,expr);
		return 0;
	}
	string__add(s,obj);
	string__add(s,STR(__string_Aemmiter195));
	string__add(s,Aexpr__get_value(ex1));
	string__add(s,STR(__string_Aemmiter196));
	string__add(s,Aexpr__get_value(ex2));
	string__add(s,STR(__string_Aemmiter197));
	Aexpr__set_value(expr,s);
	buffer__push(_Aemmiter__expr_stk,expr);
	return 0;
}
long Aemmiter__expr_gen_sub_expr(long __this, long expr)
{
	long s;

	if ((Aexpr__get_right(expr))==0) {
		s=string__new(8);
		Aexpr__set_value(expr,s);
		buffer__push(_Aemmiter__expr_stk,expr);
	}
	return 0;
}
long Aemmiter__expr_gen_comma(long __this, long expr)
{
	long ex1;
	long ex2;
	long s;

	ex2=buffer__pop(_Aemmiter__expr_stk);
	ex1=buffer__pop(_Aemmiter__expr_stk);
	s=string__new(8);
	string__add(s,Aexpr__get_value(ex1));
	string__add(s,STR(__string_Aemmiter198));
	string__add(s,Aexpr__get_value(ex2));
	Aexpr__set_value(expr,s);
	buffer__push(_Aemmiter__expr_stk,expr);
	return 0;
}
long Aemmiter__expr_gen_index(long __this, long expr)
{
	long ex1;
	long ex2;
	long s;

	ex2=buffer__pop(_Aemmiter__expr_stk);
	ex1=buffer__pop(_Aemmiter__expr_stk);
	s=string__new(8);
	string__add(s,STR(__string_Aemmiter199));
	string__add(s,Aexpr__get_value(ex1));
	string__add(s,STR(__string_Aemmiter200));
	string__add(s,Aexpr__get_value(ex2));
	string__add(s,STR(__string_Aemmiter201));
	Aexpr__set_value(expr,s);
	buffer__push(_Aemmiter__expr_stk,expr);
	return 0;
}
long Aemmiter__expr_gen_par(long __this, long expr)
{
	long ex1;
	long s;

	ex1=buffer__pop(_Aemmiter__expr_stk);
	s=string__new(8);
	string__add(s,STR(__string_Aemmiter202));
	string__add(s,Aexpr__get_value(ex1));
	string__add(s,STR(__string_Aemmiter203));
	Aexpr__set_value(expr,s);
	buffer__push(_Aemmiter__expr_stk,expr);
	return 0;
}
long Aemmiter__expr_gen_constant(long __this, long expr)
{
	long ex1;
	long ex2;
	long s;

	ex2=buffer__pop(_Aemmiter__expr_stk);
	ex1=buffer__pop(_Aemmiter__expr_stk);
	s=string__new(8);
	string__add(s,Aexpr__get_value(ex1));
	string__add(s,STR(__string_Aemmiter204));
	string__add(s,Aexpr__get_value(ex2));
	Aexpr__set_value(expr,s);
	buffer__push(_Aemmiter__expr_stk,expr);
	return 0;
}
long Aemmiter__expr_gen_dot(long __this, long expr)
{
	long ex1;
	long ex2;

	ex2=buffer__pop(_Aemmiter__expr_stk);
	ex1=buffer__pop(_Aemmiter__expr_stk);
	Aexpr__set_value2(expr,Aexpr__get_value(ex1));
	Aexpr__set_value(expr,Aexpr__get_value(ex2));
	buffer__push(_Aemmiter__expr_stk,expr);
	return 0;
}
long Aemmiter__gen_string(long __this, long s2, long value)
{

	string__add(_Aemmiter__mid,STR(__string_Aemmiter205));
	string__add(_Aemmiter__mid,_Aemmiter_class_name);
	string__add(_Aemmiter__mid,s2);
	string__add(_Aemmiter__mid,STR(__string_Aemmiter206));
	string__add_char(_Aemmiter__mid,'"');
	string__add(_Aemmiter__mid,value);
	string__add_char(_Aemmiter__mid,'"');
	string__add(_Aemmiter__mid,STR(__string_Aemmiter207));
	string__add(_Aemmiter__mid,STR(__string_Aemmiter208));
	string__add(_Aemmiter__mid,_Aemmiter_class_name);
	string__add(_Aemmiter__mid,s2);
	string__add(_Aemmiter__mid,STR(__string_Aemmiter209));
	string__add(_Aemmiter__mid,STR(__string_Aemmiter210));
	string__add(_Aemmiter__mid,_Aemmiter_class_name);
	string__add(_Aemmiter__mid,s2);
	string__add(_Aemmiter__mid,STR(__string_Aemmiter211));
	return 0;
}
long Aemmiter__expr_gen_str_const(long __this, long expr)
{
	long s;
	long s2;

	s=string__new(8);
	s2=string__new(8);
	_Aemmiter_string_id=_Aemmiter_string_id+1;
	string__set_int(s2,_Aemmiter_string_id);
	Aemmiter__gen_string(__this, s2,Aexpr__get_value(expr));
	string__add(s,STR(__string_Aemmiter212));
	string__add(s,_Aemmiter_class_name);
	string__add(s,s2);
	string__add(s,STR(__string_Aemmiter213));
	Aexpr__set_value(expr,s);
	buffer__push(_Aemmiter__expr_stk,expr);
	string__dispose(s2);
	return 0;
}
long Aemmiter__expr_gen_char_const(long __this, long expr)
{
	long s;

	s=string__new(8);
	string__add(s,STR(__string_Aemmiter214));
	string__add(s,Aexpr__get_value(expr));
	string__add(s,STR(__string_Aemmiter215));
	Aexpr__set_value(expr,s);
	buffer__push(_Aemmiter__expr_stk,expr);
	return 0;
}
long Aemmiter__expr_gen0(long __this, long expr, long op)
{
	long s;

	s=string__new(8);
	string__add(s,op);
	Aexpr__set_value(expr,s);
	buffer__push(_Aemmiter__expr_stk,expr);
	return 0;
}
long Aemmiter__expr_gen1(long __this, long expr, long op)
{
	long ex1;
	long s;

	ex1=buffer__pop(_Aemmiter__expr_stk);
	s=string__new(8);
	string__add(s,op);
	string__add(s,STR(__string_Aemmiter216));
	string__add(s,Aexpr__get_value(ex1));
	string__add(s,STR(__string_Aemmiter217));
	Aexpr__set_value(expr,s);
	buffer__push(_Aemmiter__expr_stk,expr);
	return 0;
}
long Aemmiter__expr_gen_assign(long __this, long expr, long op)
{
	long ex1;
	long ex2;
	long s;

	ex2=buffer__pop(_Aemmiter__expr_stk);
	ex1=buffer__pop(_Aemmiter__expr_stk);
	s=string__new(8);
	string__add(s,Aexpr__get_value(ex1));
	string__add(s,op);
	string__add(s,Aexpr__get_value(ex2));
	Aexpr__set_value(expr,s);
	buffer__push(_Aemmiter__expr_stk,expr);
	return 0;
}
long Aemmiter__expr_gen2(long __this, long expr, long op)
{
	long ex1;
	long ex2;
	long s;
	long oper;

	ex2=buffer__pop(_Aemmiter__expr_stk);
	ex1=buffer__pop(_Aemmiter__expr_stk);
	s=string__new(8);
	oper=Aexpr__get_op(ex1);
	if (oper>(Aclass__Croot)) {
		string__add(s,STR(__string_Aemmiter218));
	}
	string__add(s,Aexpr__get_value(ex1));
	if (oper>(Aclass__Croot)) {
		string__add(s,STR(__string_Aemmiter219));
	}
	string__add(s,op);
	oper=Aexpr__get_op(ex2);
	if (oper>(Aclass__Croot)) {
		string__add(s,STR(__string_Aemmiter220));
	}
	string__add(s,Aexpr__get_value(ex2));
	if (oper>(Aclass__Croot)) {
		string__add(s,STR(__string_Aemmiter221));
	}
	Aexpr__set_value(expr,s);
	buffer__push(_Aemmiter__expr_stk,expr);
	return 0;
}
long Aemmiter__expr_gen_var(long __this, long expr)
{
	long stri;
	long v;
	long s;
	long ex;

	stri=Aexpr__get_value(expr);
	if (stri==0) {
		buffer__push(_Aemmiter__expr_stk,expr);
		return 0;
	}
	v=Aemmiter__find_local(__this, stri);
	if (v!=0) {
		buffer__push(_Aemmiter__expr_stk,expr);
		return 0;
	}
	v=Aemmiter__find_param(__this, stri);
	if (v!=0) {
		buffer__push(_Aemmiter__expr_stk,expr);
		return 0;
	}
	ex=Aexpr__get_parent(expr);
	v=0;
	if ((Aexpr__get_op(ex))!=(Aclass__Cdot)) {
		v=Aemmiter__find_member(__this, stri);
	}
	if (((v!=0))&&(((Amember__get_kind(v))==(Aclass__Cfield)))) {
		s=string__new(8);
		string__add(s,STR(__string_Aemmiter222));
		string__add(s,_Aemmiter_class_name);
		string__add(s,STR(__string_Aemmiter223));
		string__add(s,stri);
		Aexpr__set_value(expr,s);
		buffer__push(_Aemmiter__expr_stk,expr);
		return 0;
	}
	v=Aemmiter__find_static(__this, stri);
	if (v!=0) {
		s=string__new(8);
		string__add(s,_Aemmiter_class_name);
		string__add(s,STR(__string_Aemmiter224));
		string__add(s,stri);
		Aexpr__set_value(expr,s);
		buffer__push(_Aemmiter__expr_stk,expr);
		return 0;
	}
	buffer__push(_Aemmiter__expr_stk,expr);
	return 0;
}
long Aemmiter__expr_process(long __this, long expr)
{
	long op;
	long ex;

	op=Aexpr__get_op(expr);
	if (op<(Aclass__Croot)) {
		if (op==(Aclass__Cnull)) {
			Aemmiter__expr_gen0(__this, expr,STR(__string_Aemmiter225));
		} else if (op==(Aclass__Cchar_const)) {
			Aemmiter__expr_gen_char_const(__this, expr);
		} else if (op==(Aclass__Cint_const)) {
			buffer__push(_Aemmiter__expr_stk,expr);
		} else if (op==(Aclass__Cstr_const)) {
			Aemmiter__expr_gen_str_const(__this, expr);
		} else if (op==(Aclass__Cthis)) {
			Aemmiter__expr_gen0(__this, expr,STR(__string_Aemmiter226));
		} else {
			Aemmiter__expr_gen_var(__this, expr);
		}
		return 0;
	}
	if (op==(Aclass__Croot)) {
		if ((buffer__length(_Aemmiter__expr_stk))!=1) {
			Aemmiter__error(__this, Aexpr__get_origin(expr),STR(__string_Aemmiter227));
			return 0;
		}
		ex=buffer__pop(_Aemmiter__expr_stk);
		string__add(_Aemmiter__data,Aexpr__get_value(ex));
	} else if (op==(Aclass__Cassign)) {
		Aemmiter__expr_gen_assign(__this, expr,STR(__string_Aemmiter228));
	} else if (op==(Aclass__Cequal)) {
		Aemmiter__expr_gen2(__this, expr,STR(__string_Aemmiter229));
	} else if (op==(Aclass__Cnotequal)) {
		Aemmiter__expr_gen2(__this, expr,STR(__string_Aemmiter230));
	} else if (op==(Aclass__Clargerequal)) {
		Aemmiter__expr_gen2(__this, expr,STR(__string_Aemmiter231));
	} else if (op==(Aclass__Clesserequal)) {
		Aemmiter__expr_gen2(__this, expr,STR(__string_Aemmiter232));
	} else if (op==(Aclass__Clarger)) {
		Aemmiter__expr_gen2(__this, expr,STR(__string_Aemmiter233));
	} else if (op==(Aclass__Clesser)) {
		Aemmiter__expr_gen2(__this, expr,STR(__string_Aemmiter234));
	} else if (op==(Aclass__Clogicaland)) {
		Aemmiter__expr_gen2(__this, expr,STR(__string_Aemmiter235));
	} else if (op==(Aclass__Clogicalor)) {
		Aemmiter__expr_gen2(__this, expr,STR(__string_Aemmiter236));
	} else if (op==(Aclass__Cadd)) {
		Aemmiter__expr_gen2(__this, expr,STR(__string_Aemmiter237));
	} else if (op==(Aclass__Csub)) {
		Aemmiter__expr_gen2(__this, expr,STR(__string_Aemmiter238));
	} else if (op==(Aclass__Cmult)) {
		Aemmiter__expr_gen2(__this, expr,STR(__string_Aemmiter239));
	} else if (op==(Aclass__Cdiv)) {
		Aemmiter__expr_gen2(__this, expr,STR(__string_Aemmiter240));
	} else if (op==(Aclass__Cmodulo)) {
		Aemmiter__expr_gen2(__this, expr,STR(__string_Aemmiter241));
	} else if (op==(Aclass__Clogicalnot)) {
		Aemmiter__expr_gen1(__this, expr,STR(__string_Aemmiter242));
	} else if (op==(Aclass__Cparenthesis)) {
		Aemmiter__expr_gen_par(__this, expr);
	} else if (op==(Aclass__Cunaryplus)) {
		Aemmiter__expr_gen1(__this, expr,STR(__string_Aemmiter243));
	} else if (op==(Aclass__Cunaryminus)) {
		Aemmiter__expr_gen1(__this, expr,STR(__string_Aemmiter244));
	} else if (op==(Aclass__Cdot)) {
		Aemmiter__expr_gen_dot(__this, expr);
	} else if (op==(Aclass__Cconstant)) {
		Aemmiter__expr_gen_constant(__this, expr);
	} else if (op==(Aclass__Ccall)) {
		Aemmiter__expr_gen_call(__this, expr);
	} else if (op==(Aclass__Cindex)) {
		Aemmiter__expr_gen_index(__this, expr);
	} else if (op==(Aclass__Ccomma)) {
		Aemmiter__expr_gen_comma(__this, expr);
	} else if (op==(Aclass__Cexpr)) {
		Aemmiter__expr_gen_sub_expr(__this, expr);
	} else {
		Aemmiter__error(__this, Aexpr__get_origin(expr),STR(__string_Aemmiter245));
		return 0;
	}
	return 0;
}
long Aemmiter__expr_gen(long __this, long expr)
{
	long ex;
	long ex1;
	long stack;

	stack=buffer__new(4);
	ex=Aexpr__get_right(expr);
	ex=expr;
	Aexpr__set_flags(ex,0);
	buffer__push(stack,ex);
	while ((buffer__length(stack))>0) {
		ex=buffer__get_last(stack);
		if ((Aexpr__get_flags(ex))!=0) {
			ex=buffer__pop(stack);
			Aemmiter__expr_process(__this, ex);
		} else {
			ex1=ex;
			Aexpr__set_flags(ex,1);
			ex=Aexpr__get_right(ex);
			if (ex!=0) {
				Aexpr__set_flags(ex,0);
				buffer__push(stack,ex);
			}
			ex=Aexpr__get_left(ex1);
			if (ex!=0) {
				Aexpr__set_flags(ex,0);
				buffer__push(stack,ex);
			}
		}
	}
	buffer__dispose(stack);
	return 0;
}
long Aemmiter__body_gen(long __this, long mb, long k, long vars_, long body_)
{
	long l;
	long i;
	long tok;
	long va;
	long stm;
	long ty;
	long stack;
	long padde;
	long ex;
	long buf;

	_Aemmiter_cur_memb=mb;
	string__add(_Aemmiter__data,STR(__string_Aemmiter246));
	stack=buffer__new(4);
	if (vars_!=0) {
		l=buffer__length(vars_);
	} else {
		l=0;
	}
	i=0;
	while (i<l) {
		va=buffer__get_at(vars_,i);
		string__add(_Aemmiter__data,STR(__string_Aemmiter247));
		tok=Amember__get_name(va);
		string__add(_Aemmiter__data,Atoken__get_data(tok));
		string__add(_Aemmiter__data,STR(__string_Aemmiter248));
		i=i+1;
	}
	if (k==(Aclass__Cconstructor)) {
		string__add(_Aemmiter__data,STR(__string_Aemmiter249));
		string__add(_Aemmiter__data,STR(__string_Aemmiter250));
		string__add(_Aemmiter__data,_Aemmiter_class_name);
		string__add(_Aemmiter__data,STR(__string_Aemmiter251));
		string__add(_Aemmiter__data,STR(__string_Aemmiter252));
		string__add(_Aemmiter__data,_Aemmiter_class_name);
		string__add(_Aemmiter__data,STR(__string_Aemmiter253));
	}
	l=buffer__length(body_);
	i=0;
	padde=1;
	while (i<l) {
		stm=buffer__get_at(body_,i);
		ty=Astatement__get_type(stm);
		if (((ty!=(Aclass__Celseif)))&&((ty!=(Aclass__Celse)))) {
			string__add(_Aemmiter__data,STR(__string_Aemmiter254));
			Aemmiter__pad(__this, padde);
		}
		if (((ty==(Aclass__Cif)))||((ty==(Aclass__Celseif)))) {
			if (ty==(Aclass__Celseif)) {
				string__add(_Aemmiter__data,STR(__string_Aemmiter255));
			} else {
				string__add(_Aemmiter__data,STR(__string_Aemmiter256));
			}
			ex=Astatement__get_expression(stm);
			if (ex!=0) {
				Aemmiter__expr_gen(__this, ex);
			}
			string__add(_Aemmiter__data,STR(__string_Aemmiter257));
			buffer__push(stack,l);
			buffer__push(stack,i+1);
			buffer__push(stack,body_);
			buf=Astatement__get_else(stm);
			if (buf!=0) {
				buffer__push(stack,buffer__length(buf));
				buffer__push(stack,0);
				buffer__push(stack,buf);
			}
			padde=padde+1;
			i=-(1);
			l=0;
			if (body_!=0) {
				body_=Astatement__get_statements(stm);
				if (body_!=0) {
					l=buffer__length(body_);
				}
			}
		} else if (ty==(Aclass__Celse)) {
			string__add(_Aemmiter__data,STR(__string_Aemmiter258));
			padde=padde+1;
		} else if (ty==(Aclass__Cbreak)) {
			string__add(_Aemmiter__data,STR(__string_Aemmiter259));
		} else if (ty==(Aclass__Creturn)) {
			ex=Astatement__get_expression(stm);
			if (ex!=0) {
				string__add(_Aemmiter__data,STR(__string_Aemmiter260));
				Aemmiter__expr_gen(__this, ex);
				string__add(_Aemmiter__data,STR(__string_Aemmiter261));
			} else {
				string__add(_Aemmiter__data,STR(__string_Aemmiter262));
			}
		} else if (ty==(Aclass__Cdo)) {
			ex=Astatement__get_expression(stm);
			if (ex!=0) {
				Aemmiter__expr_gen(__this, ex);
			}
			string__add(_Aemmiter__data,STR(__string_Aemmiter263));
		} else if (ty==(Aclass__Clet)) {
			ex=Astatement__get_expression(stm);
			if (ex!=0) {
				Aemmiter__expr_gen(__this, ex);
			}
			string__add(_Aemmiter__data,STR(__string_Aemmiter264));
		} else if (ty==(Aclass__Cwhile)) {
			string__add(_Aemmiter__data,STR(__string_Aemmiter265));
			ex=Astatement__get_expression(stm);
			if (ex!=0) {
				Aemmiter__expr_gen(__this, ex);
			}
			string__add(_Aemmiter__data,STR(__string_Aemmiter266));
			buffer__push(stack,l);
			buffer__push(stack,i+1);
			buffer__push(stack,body_);
			i=-(1);
			l=0;
			body_=Astatement__get_statements(stm);
			if (body_!=0) {
				l=buffer__length(body_);
			}
			padde=padde+1;
		} else {
			string__add(_Aemmiter__data,STR(__string_Aemmiter267));
		}
		i=i+1;
		if (i>=l) {
			padde=padde-1;
			string__add(_Aemmiter__data,STR(__string_Aemmiter268));
			Aemmiter__pad(__this, padde);
			string__add(_Aemmiter__data,STR(__string_Aemmiter269));
		}
		while (((i>=l))&&(((buffer__length(stack))>0))) {
			body_=buffer__pop(stack);
			i=buffer__pop(stack);
			l=buffer__pop(stack);
			if (i>=l) {
				padde=padde-1;
				string__add(_Aemmiter__data,STR(__string_Aemmiter270));
				Aemmiter__pad(__this, padde);
				string__add(_Aemmiter__data,STR(__string_Aemmiter271));
			}
		}
	}
	string__add(_Aemmiter__data,STR(__string_Aemmiter272));
	buffer__dispose(stack);
	return 0;
}
long Aemmiter__gen_type(long __this, long mb)
{
	long ty;
	long tok;

	tok=Amember__get_type_id(mb);
	if (tok!=0) {
		string__add(_Aemmiter__data,Atoken__get_data(tok));
	} else {
		ty=Amember__get_type(mb);
		if (ty==(Aclass__Cint)) {
			string__add(_Aemmiter__data,STR(__string_Aemmiter273));
		} else if (ty==(Aclass__Cvoid)) {
			string__add(_Aemmiter__data,STR(__string_Aemmiter274));
		} else {
			Aemmiter__error(__this, Amember__get_name(mb),STR(__string_Aemmiter275));
		}
	}
	return 0;
}
long Aemmiter__add_virtual(long __this, long mb)
{
	long n;
	long v;
	long nv;
	long i;

	n=Amember__get_name_string(mb);
	nv=Avirtual__new(mb,_Aemmiter_class_name);
	i=buffer__length(_Aemmiter__virtuals);
	while (i>0) {
		i=i-1;
		v=buffer__get_at(_Aemmiter__virtuals,i);
		if (v!=0) {
			if (string__compare(n,(Avirtual__get_member_name(v))==0)) {
				Avirtual__set_next(nv,Avirtual__get_next(v));
				Avirtual__set_next(v,nv);
				return 0;
			}
		}
	}
	buffer__push(_Aemmiter__virtuals,nv);
	return 0;
}
long Aemmiter__gen_virtual_caller(long __this, long mb)
{
	long param;
	long params;
	long i;
	long l;
	long tok;

	params=Amember__get_params(mb);
	string__add(_Aemmiter__head,STR(__string_Aemmiter276));
	string__add(_Aemmiter__head,_Aemmiter_class_name);
	string__add(_Aemmiter__head,STR(__string_Aemmiter277));
	string__add(_Aemmiter__head,Amember__get_name_string(mb));
	string__add(_Aemmiter__head,STR(__string_Aemmiter278));
	if (params!=0) {
		l=buffer__length(params);
		i=0;
		while (i<l) {
			param=buffer__get_at(params,i);
			string__add(_Aemmiter__head,STR(__string_Aemmiter279));
			tok=Amember__get_name(param);
			string__add(_Aemmiter__head,Atoken__get_data(tok));
			i=i+1;
		}
	}
	string__add(_Aemmiter__head,STR(__string_Aemmiter280));
	string__add(_Aemmiter__head,Amember__get_name_string(mb));
	string__add(_Aemmiter__head,STR(__string_Aemmiter281));
	if (params!=0) {
		l=buffer__length(params);
		i=0;
		while (i<l) {
			param=buffer__get_at(params,i);
			string__add(_Aemmiter__head,STR(__string_Aemmiter282));
			tok=Amember__get_name(param);
			string__add(_Aemmiter__head,Atoken__get_data(tok));
			i=i+1;
		}
	}
	string__add(_Aemmiter__head,STR(__string_Aemmiter283));
	return 0;
}
long Aemmiter__gen_method_decl(long __this, long dest, long c_name, long name, long mb, long k)
{
	long param;
	long params;
	long i;
	long l;
	long sub;
	long tok;

	string__add(dest,STR(__string_Aemmiter284));
	string__add(dest,c_name);
	string__add(dest,STR(__string_Aemmiter285));
	string__add(dest,name);
	params=Amember__get_params(mb);
	string__add(dest,STR(__string_Aemmiter286));
	sub=1;
	if (((k==(Aclass__Cmethod)))||((k==(Aclass__Cvirtual)))) {
		string__add(dest,STR(__string_Aemmiter287));
		sub=2;
	}
	if (params!=0) {
		l=buffer__length(params);
		i=0;
		while (i<l) {
			param=buffer__get_at(params,i);
			if (((i>0))||((sub==2))) {
				string__add(dest,STR(__string_Aemmiter288));
			}
			string__add(dest,STR(__string_Aemmiter289));
			tok=Amember__get_name(param);
			string__add(dest,Atoken__get_data(tok));
			i=i+1;
		}
	}
	string__add(dest,STR(__string_Aemmiter290));
	return 0;
}
long Aemmiter__pass_3(long __this, long str, long mb, long k)
{
	long vars;
	long body;
	long sub;

	sub=0;
	if (k==(Aclass__Cconstructor)) {
		sub=1;
	} else if (k==(Aclass__Cfunction)) {
		sub=1;
	} else if (k==(Aclass__Cmethod)) {
		sub=2;
	} else if (k==(Aclass__Cvirtual)) {
		sub=2;
	}
	if (sub!=0) {
		Aemmiter__gen_method_decl(__this, _Aemmiter__head,_Aemmiter_class_name,Amember__get_name_string(mb),mb,k);
		string__add(_Aemmiter__head,STR(__string_Aemmiter291));
		if (k==(Aclass__Cvirtual)) {
			Aemmiter__add_virtual(__this, mb);
			Aemmiter__gen_virtual_caller(__this, mb);
			string__set(str,STR(__string_Aemmiter292));
			string__add(str,Amember__get_name_string(mb));
			Aemmiter__gen_method_decl(__this, _Aemmiter__head,_Aemmiter_class_name,str,mb,k);
			string__add(_Aemmiter__head,STR(__string_Aemmiter293));
			Aemmiter__gen_method_decl(__this, _Aemmiter__data,_Aemmiter_class_name,str,mb,k);
			string__add(_Aemmiter__data,STR(__string_Aemmiter294));
		} else {
			Aemmiter__gen_method_decl(__this, _Aemmiter__data,_Aemmiter_class_name,Amember__get_name_string(mb),mb,k);
			string__add(_Aemmiter__data,STR(__string_Aemmiter295));
		}
		vars=Amember__get_vars(mb);
		body=Amember__get_body(mb);
		if (body!=0) {
			Aemmiter__body_gen(__this, mb,k,vars,body);
		}
	}
	return 0;
}
long Aemmiter__pass_4(long __this, long str, long mb, long k)
{

	return 0;
}
long Aemmiter__error(long __this, long t, long e)
{

	if (t!=0) {
		console__log_str(Atoken__get_file(t));
		console__log_str(STR(__string_Aemmiter296));
		console__log_int(Atoken__get_line(t));
		console__log_str(STR(__string_Aemmiter297));
		console__log_str(Atoken__get_data(t));
		console__log_str(STR(__string_Aemmiter298));
	}
	console__log(e);
	Aemmiter__dump(__this);
	std__exit(-(1));
	return 0;
}
long Aemmiter__dump(long __this)
{

	return 0;
}
// class main
long main__copyto(long f, long output)
{
	long fd;
	long res;
	long data;
	long n;
	long i;
	long off;

	console__log_str(STR(__string_main299));
	console__log(f);
	res=response__new(0,0);
	fd=file__new(STR(__string_main300),res);
	file__read(fd,f,0,main__Cblock);
	off=0;
	while ((response__get_status(res))==200) {
		data=response__get_bytes(res);
		n=bytes__get_size(data);
		i=0;
		while (i<n) {
			string__add_char(output,bytes__get_at(data,i));
			i=i+1;
		}
		off=off+(main__Cblock);
		file__read(fd,f,off,main__Cblock);
	}
	file__dispose(fd);
	response__dispose(res);
	return 0;
}
long main__process_file(long f, long lex)
{
	long tmp;
	long fd;
	long res;
	long data;
	long n;
	long i;
	long off;

	console__log_str(STR(__string_main301));
	console__log(f);
	Alexer__begin(lex,f);
	res=response__new(0,0);
	fd=file__new(STR(__string_main302),res);
	file__read(fd,f,0,main__Cblock);
	off=0;
	tmp=string__new(10000);
	while ((response__get_status(res))==200) {
		data=response__get_bytes(res);
		n=bytes__get_size(data);
		i=0;
		while (i<n) {
			string__add_char(tmp,bytes__get_at(data,i));
			i=i+1;
		}
		Alexer__add(lex,tmp);
		string__set(tmp,STR(__string_main303));
		off=off+(main__Cblock);
		file__read(fd,f,off,main__Cblock);
	}
	file__dispose(fd);
	response__dispose(res);
	Alexer__finish(lex);
	return 0;
}
long main__main()
{
	long str;
	long tmp;
	long args;
	long fd;
	long res;
	long data;
	long n;
	long i;
	long end;
	long start;
	long len;
	long lex;
	long par;
	long emi;
	long head;
	long body;
	long to;
	long l;

	console__log(main__Chello);
	args=std__get_args();
	n=array__get_size(args);
	if (n!=2) {
		console__log(STR(__string_main304));
		std__exit(-(1));
	}
	head=string__new(2048000);
	body=string__new(2048000);
	str=((long*)args)[1];
	to=string__new(20);
	string__add(to,str);
	string__add(to,STR(__string_main305));
	res=response__new(0,0);
	fd=file__new(STR(__string_main306),res);
	file__scandir(fd,str);
	tmp=string__new(100);
	lex=Alexer__new();
	par=Aparser__new();
	emi=Aemmiter__new();
	if ((response__get_status(res))==200) {
		data=response__get_string(res);
		len=string__length(data);
		i=0;
		start=0;
		i=string__indexof(data,start,STR(__string_main307));
		while (((i>=0))&&((start<len))) {
			string__substr(data,start,i-start,tmp);
			end=i-start;
			if ((string__indexof(tmp,0,STR(__string_main308)))==((end-5))) {
				main__process_file(tmp,lex);
				Aparser__parse(par,lex);
				Aemmiter__emmit(emi,par);
				Aparser__release(par);
			} else if ((string__indexof(tmp,0,STR(__string_main309)))==((end-2))) {
				main__copyto(tmp,head);
			} else if ((string__indexof(tmp,0,STR(__string_main310)))==((end-2))) {
				main__copyto(tmp,body);
			}
			start=i+1;
			i=string__indexof(data,start,STR(__string_main311));
			string__set(tmp,STR(__string_main312));
		}
	}
	Aemmiter__gen_virtuals(emi);
	file__unlink(fd,to);
	i=0;
	str=head;
	l=string__length(str);
	if (l>0) {
		file__write(fd,to,string__get_buf(str),i,l);
		if ((response__get_status(res))!=200) {
			std__exit(-(1));
		}
	}
	i=i+l;
	str=Aemmiter__get_head(emi);
	l=string__length(str);
	if (l>0) {
		file__write(fd,to,string__get_buf(str),i,l);
	}
	i=i+l;
	str=Aemmiter__get_mid(emi);
	l=string__length(str);
	if (l>0) {
		file__write(fd,to,string__get_buf(str),i,l);
	}
	i=i+l;
	str=body;
	l=string__length(str);
	if (l>0) {
		file__write(fd,to,string__get_buf(str),i,l);
	}
	i=i+l;
	str=Aemmiter__get_data(emi);
	l=string__length(str);
	if (l>0) {
		file__write(fd,to,string__get_buf(str),i,l);
	}
	console__log_str(STR(__string_main313));
	console__log(to);
	string__dispose(to);
	file__dispose(fd);
	response__dispose(res);
	return 0;
}
long virtual__dispose(long __this)
{
	long cid;
	cid = ((long*)__this)[-1];
	switch (cid) {
	case D__string___ID:
		return string___V_dispose(__this);
	default:
		std__panic();
	}
	return 0;
}
