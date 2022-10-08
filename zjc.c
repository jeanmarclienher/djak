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
#define D__bignum___SIZE 1
#define D__bignum___ID 3
long bignum__new();
long bignum__get_string(long __this);
long bignum__add(long __this, long a, long b);
long bignum__sub(long __this, long a, long b);
long bignum__mul(long __this, long a, long b);
long bignum__div(long __this, long a, long b);
long bignum__rem(long __this, long a, long b);
#define D__crypt___SIZE 0
#define D__crypt___ID 4
#define D__gui___SIZE 0
#define D__gui___ID 5
#define D__object___SIZE 0
#define D__object___ID 6
#define object__CAclass 1
#define object__CAemmiter 2
#define D__http___SIZE 0
#define D__http___ID 7
#define D__gif___SIZE 0
#define D__gif___ID 8
#define D__md___SIZE 0
#define D__md___ID 9
#define D__pdf___SIZE 0
#define D__pdf___ID 10
#define D__html___SIZE 0
#define D__html___ID 11
#define D__wav___SIZE 0
#define D__wav___ID 12
#define D__sql___SIZE 0
#define D__sql___ID 13
#define D__zip___SIZE 0
#define D__zip___ID 14
#define D__Astatement___SIZE 6
#define D__Astatement___ID 15
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
char __string__1[]="DONT KNOW WAHT";
long __string_1[]={0,0, (long) __string__1,-1};
#define D__response___SIZE 5
#define D__response___ID 16
long response__new(long type_, long instance_);
long response__dispose(long __this);
long response__clear(long __this);
long response__set_string(long __this, long status_, long data_);
long response__set_bytes(long __this, long status_, long data_);
long response__get_status(long __this);
long response__get_string(long __this);
long response__get_bytes(long __this);
#define D__Amember___SIZE 9
#define D__Amember___ID 17
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
#define D__Avirtual___ID 18
long Avirtual__new(long memb_, long class_);
long Avirtual__dispose(long __this);
long Avirtual__set_next(long __this, long n);
long Avirtual__get_next(long __this);
long Avirtual__get_class_name(long __this);
long Avirtual__get_member(long __this);
long Avirtual__get_member_name(long __this);
#define D__buffer___SIZE 3
#define D__buffer___ID 19
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
#define D__Aexpr___ID 20
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
char __string__2[]=" ";
long __string_2[]={0,0, (long) __string__2,-1};
char __string__3[]="";
long __string_3[]={0,0, (long) __string__3,-1};
#define D__Aparser___SIZE 7
#define D__Aparser___ID 21
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
char __string__4[]=": found '";
long __string_4[]={0,0, (long) __string__4,-1};
char __string__5[]="' at line(";
long __string_5[]={0,0, (long) __string__5,-1};
char __string__6[]="): ";
long __string_6[]={0,0, (long) __string__6,-1};
long Aparser__push(long __this, long step_);
long Aparser__pop(long __this);
long Aparser__root(long __this);
long Aparser__class_dec(long __this);
char __string__7[]="class";
long __string_7[]={0,0, (long) __string__7,-1};
char __string__8[]="expecting 'class' keyword";
long __string_8[]={0,0, (long) __string__8,-1};
char __string__9[]="expecting identifier";
long __string_9[]={0,0, (long) __string__9,-1};
char __string__10[]="{";
long __string_10[]={0,0, (long) __string__10,-1};
char __string__11[]="expecting '{'";
long __string_11[]={0,0, (long) __string__11,-1};
long Aparser__class_dec1(long __this);
char __string__12[]="}";
long __string_12[]={0,0, (long) __string__12,-1};
char __string__13[]="expecting '}'";
long __string_13[]={0,0, (long) __string__13,-1};
long Aparser__class_var_dec(long __this);
char __string__14[]="field";
long __string_14[]={0,0, (long) __string__14,-1};
char __string__15[]="static";
long __string_15[]={0,0, (long) __string__15,-1};
char __string__16[]=",";
long __string_16[]={0,0, (long) __string__16,-1};
char __string__17[]=";";
long __string_17[]={0,0, (long) __string__17,-1};
char __string__18[]="';' expected.";
long __string_18[]={0,0, (long) __string__18,-1};
long Aparser__var_name(long __this);
char __string__19[]="Name of variable expected.";
long __string_19[]={0,0, (long) __string__19,-1};
long Aparser__type(long __this);
char __string__20[]="int";
long __string_20[]={0,0, (long) __string__20,-1};
char __string__21[]="void";
long __string_21[]={0,0, (long) __string__21,-1};
char __string__22[]="Type expected.";
long __string_22[]={0,0, (long) __string__22,-1};
long Aparser__clas_const_dec(long __this);
char __string__23[]="const";
long __string_23[]={0,0, (long) __string__23,-1};
char __string__24[]=":=";
long __string_24[]={0,0, (long) __string__24,-1};
char __string__25[]="':=' expected.";
long __string_25[]={0,0, (long) __string__25,-1};
char __string__26[]=";";
long __string_26[]={0,0, (long) __string__26,-1};
char __string__27[]="Expected constant initialiser.";
long __string_27[]={0,0, (long) __string__27,-1};
char __string__28[]=";";
long __string_28[]={0,0, (long) __string__28,-1};
char __string__29[]="';' expected.";
long __string_29[]={0,0, (long) __string__29,-1};
long Aparser__subroutine_dec(long __this);
char __string__30[]="constructor";
long __string_30[]={0,0, (long) __string__30,-1};
char __string__31[]="function";
long __string_31[]={0,0, (long) __string__31,-1};
char __string__32[]="method";
long __string_32[]={0,0, (long) __string__32,-1};
char __string__33[]="virtual";
long __string_33[]={0,0, (long) __string__33,-1};
char __string__34[]="void";
long __string_34[]={0,0, (long) __string__34,-1};
char __string__35[]="(";
long __string_35[]={0,0, (long) __string__35,-1};
char __string__36[]="'(' expected.";
long __string_36[]={0,0, (long) __string__36,-1};
char __string__37[]=")";
long __string_37[]={0,0, (long) __string__37,-1};
char __string__38[]="')' expected.";
long __string_38[]={0,0, (long) __string__38,-1};
long Aparser__param_list(long __this);
char __string__39[]=")";
long __string_39[]={0,0, (long) __string__39,-1};
char __string__40[]=",";
long __string_40[]={0,0, (long) __string__40,-1};
long Aparser__direction(long __this);
char __string__41[]="in";
long __string_41[]={0,0, (long) __string__41,-1};
char __string__42[]="out";
long __string_42[]={0,0, (long) __string__42,-1};
char __string__43[]="io";
long __string_43[]={0,0, (long) __string__43,-1};
char __string__44[]="Expected 'in/out/io'.";
long __string_44[]={0,0, (long) __string__44,-1};
long Aparser__subrout_body(long __this);
char __string__45[]="{";
long __string_45[]={0,0, (long) __string__45,-1};
char __string__46[]="'{' expected.";
long __string_46[]={0,0, (long) __string__46,-1};
long Aparser__subrout_body1(long __this);
char __string__47[]="}";
long __string_47[]={0,0, (long) __string__47,-1};
char __string__48[]="'}' expected at end of subroutine body.";
long __string_48[]={0,0, (long) __string__48,-1};
long Aparser__var_dec(long __this);
char __string__49[]="var";
long __string_49[]={0,0, (long) __string__49,-1};
char __string__50[]=",";
long __string_50[]={0,0, (long) __string__50,-1};
char __string__51[]=";";
long __string_51[]={0,0, (long) __string__51,-1};
char __string__52[]="';' expected at end of variable declaration";
long __string_52[]={0,0, (long) __string__52,-1};
long Aparser__statements(long __this);
long Aparser__statement(long __this);
char __string__53[]="break";
long __string_53[]={0,0, (long) __string__53,-1};
char __string__54[]=";";
long __string_54[]={0,0, (long) __string__54,-1};
char __string__55[]="';' expected after break";
long __string_55[]={0,0, (long) __string__55,-1};
long Aparser__if_statem(long __this, long type_);
char __string__56[]="if";
long __string_56[]={0,0, (long) __string__56,-1};
char __string__57[]="(";
long __string_57[]={0,0, (long) __string__57,-1};
char __string__58[]="'(' expected after if.";
long __string_58[]={0,0, (long) __string__58,-1};
long Aparser__if_statem1(long __this);
char __string__59[]=")";
long __string_59[]={0,0, (long) __string__59,-1};
char __string__60[]="')' expected after if condition.";
long __string_60[]={0,0, (long) __string__60,-1};
char __string__61[]="{";
long __string_61[]={0,0, (long) __string__61,-1};
char __string__62[]="'{' expected after if ().";
long __string_62[]={0,0, (long) __string__62,-1};
long Aparser__else_statem(long __this);
char __string__63[]="}";
long __string_63[]={0,0, (long) __string__63,-1};
char __string__64[]="'}' expected after if body.";
long __string_64[]={0,0, (long) __string__64,-1};
char __string__65[]="else";
long __string_65[]={0,0, (long) __string__65,-1};
char __string__66[]="if";
long __string_66[]={0,0, (long) __string__66,-1};
char __string__67[]="{";
long __string_67[]={0,0, (long) __string__67,-1};
char __string__68[]="'{' expected after else.";
long __string_68[]={0,0, (long) __string__68,-1};
long Aparser__else_statem1(long __this);
char __string__69[]="}";
long __string_69[]={0,0, (long) __string__69,-1};
char __string__70[]="'}' expected after else body.";
long __string_70[]={0,0, (long) __string__70,-1};
long Aparser__while_statem(long __this);
char __string__71[]="while";
long __string_71[]={0,0, (long) __string__71,-1};
char __string__72[]="(";
long __string_72[]={0,0, (long) __string__72,-1};
char __string__73[]="'(' expected after while.";
long __string_73[]={0,0, (long) __string__73,-1};
long Aparser__while_statem1(long __this);
char __string__74[]=")";
long __string_74[]={0,0, (long) __string__74,-1};
char __string__75[]="')' expected after while condition.";
long __string_75[]={0,0, (long) __string__75,-1};
char __string__76[]="{";
long __string_76[]={0,0, (long) __string__76,-1};
char __string__77[]="'{' expected after while ().";
long __string_77[]={0,0, (long) __string__77,-1};
long Aparser__while_statem2(long __this);
char __string__78[]="}";
long __string_78[]={0,0, (long) __string__78,-1};
char __string__79[]="'}' expected after while body.";
long __string_79[]={0,0, (long) __string__79,-1};
long Aparser__return_statem(long __this);
char __string__80[]="return";
long __string_80[]={0,0, (long) __string__80,-1};
char __string__81[]=";";
long __string_81[]={0,0, (long) __string__81,-1};
long Aparser__return_statem1(long __this);
char __string__82[]=";";
long __string_82[]={0,0, (long) __string__82,-1};
char __string__83[]="';' expected";
long __string_83[]={0,0, (long) __string__83,-1};
long Aparser__dolet_statem(long __this);
char __string__84[]=":=";
long __string_84[]={0,0, (long) __string__84,-1};
char __string__85[]="[";
long __string_85[]={0,0, (long) __string__85,-1};
char __string__86[]="}";
long __string_86[]={0,0, (long) __string__86,-1};
long Aparser__let_statem(long __this, long id);
char __string__87[]=":=";
long __string_87[]={0,0, (long) __string__87,-1};
char __string__88[]="[";
long __string_88[]={0,0, (long) __string__88,-1};
long Aparser__let_statem1(long __this);
char __string__89[]=";";
long __string_89[]={0,0, (long) __string__89,-1};
char __string__90[]="';' expected at end of let statement";
long __string_90[]={0,0, (long) __string__90,-1};
long Aparser__let_statem2(long __this);
char __string__91[]="]";
long __string_91[]={0,0, (long) __string__91,-1};
char __string__92[]="']' expected in left side of let statement";
long __string_92[]={0,0, (long) __string__92,-1};
char __string__93[]=":=";
long __string_93[]={0,0, (long) __string__93,-1};
char __string__94[]="':=' expected in let statement";
long __string_94[]={0,0, (long) __string__94,-1};
long Aparser__do_statem(long __this, long id);
long Aparser__do_statem1(long __this);
char __string__95[]=";";
long __string_95[]={0,0, (long) __string__95,-1};
char __string__96[]="';' expected at end of do statement";
long __string_96[]={0,0, (long) __string__96,-1};
long Aparser__expression(long __this);
long Aparser__expression1(long __this);
long Aparser__op(long __this);
char __string__97[]="+";
long __string_97[]={0,0, (long) __string__97,-1};
char __string__98[]="-";
long __string_98[]={0,0, (long) __string__98,-1};
char __string__99[]="*";
long __string_99[]={0,0, (long) __string__99,-1};
char __string__100[]="/";
long __string_100[]={0,0, (long) __string__100,-1};
char __string__101[]="%";
long __string_101[]={0,0, (long) __string__101,-1};
char __string__102[]="&&";
long __string_102[]={0,0, (long) __string__102,-1};
char __string__103[]="||";
long __string_103[]={0,0, (long) __string__103,-1};
char __string__104[]="==";
long __string_104[]={0,0, (long) __string__104,-1};
char __string__105[]="!=";
long __string_105[]={0,0, (long) __string__105,-1};
char __string__106[]=">=";
long __string_106[]={0,0, (long) __string__106,-1};
char __string__107[]="<=";
long __string_107[]={0,0, (long) __string__107,-1};
char __string__108[]=">";
long __string_108[]={0,0, (long) __string__108,-1};
char __string__109[]="<";
long __string_109[]={0,0, (long) __string__109,-1};
long Aparser__term(long __this);
char __string__110[]="this";
long __string_110[]={0,0, (long) __string__110,-1};
char __string__111[]="null";
long __string_111[]={0,0, (long) __string__111,-1};
char __string__112[]="[";
long __string_112[]={0,0, (long) __string__112,-1};
char __string__113[]=".$";
long __string_113[]={0,0, (long) __string__113,-1};
char __string__114[]="constant name expected.";
long __string_114[]={0,0, (long) __string__114,-1};
char __string__115[]="-";
long __string_115[]={0,0, (long) __string__115,-1};
char __string__116[]="+";
long __string_116[]={0,0, (long) __string__116,-1};
char __string__117[]="!";
long __string_117[]={0,0, (long) __string__117,-1};
char __string__118[]="(";
long __string_118[]={0,0, (long) __string__118,-1};
char __string__119[]="unexpected term";
long __string_119[]={0,0, (long) __string__119,-1};
long Aparser__subrout_call(long __this, long id);
char __string__120[]="(";
long __string_120[]={0,0, (long) __string__120,-1};
char __string__121[]=".";
long __string_121[]={0,0, (long) __string__121,-1};
long Aparser__term1(long __this);
char __string__122[]=")";
long __string_122[]={0,0, (long) __string__122,-1};
char __string__123[]="')' expected after term";
long __string_123[]={0,0, (long) __string__123,-1};
long Aparser__term2(long __this);
char __string__124[]="]";
long __string_124[]={0,0, (long) __string__124,-1};
char __string__125[]="']' expected after term";
long __string_125[]={0,0, (long) __string__125,-1};
long Aparser__sub_call(long __this, long class_, long id);
char __string__126[]="(";
long __string_126[]={0,0, (long) __string__126,-1};
char __string__127[]="'(' expected in subroutine call.";
long __string_127[]={0,0, (long) __string__127,-1};
char __string__128[]=")";
long __string_128[]={0,0, (long) __string__128,-1};
long Aparser__sub_call1(long __this);
char __string__129[]=")";
long __string_129[]={0,0, (long) __string__129,-1};
char __string__130[]="')' expected at end of subroutrine call";
long __string_130[]={0,0, (long) __string__130,-1};
long Aparser__expr_list(long __this);
char __string__131[]=",";
long __string_131[]={0,0, (long) __string__131,-1};
long Aparser__expr_list1(long __this);
char __string__132[]=",";
long __string_132[]={0,0, (long) __string__132,-1};
long Aparser__eat(long __this);
long Aparser__match_id(long __this, long id);
long Aparser__match_op(long __this, long id);
long Aparser__match_newline(long __this);
long Aparser__match_str(long __this, long id);
long Aparser__state_machine(long __this);
char __string__133[]="unexpected state";
long __string_133[]={0,0, (long) __string__133,-1};
#define D__bytes___SIZE 0
#define D__bytes___ID 22
#define D__array___SIZE 0
#define D__array___ID 23
long array__new(long size);
long array__dispose(long __this);
long array__get_size(long __this);
#define D__Aclass___SIZE 14
#define D__Aclass___ID 24
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
char __string__134[]="\t";
long __string_134[]={0,0, (long) __string__134,-1};
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
char __string__135[]="Unknown operator.";
long __string_135[]={0,0, (long) __string__135,-1};
long Aclass__expr_open_par(long __this);
long Aclass__expr_in_par(long __this);
long Aclass__expr_close_par(long __this);
char __string__136[]="What a mess in parenthesis..";
long __string_136[]={0,0, (long) __string__136,-1};
long Aclass__expr_open_index(long __this, long id_, long orig);
long Aclass__expr_close_index(long __this);
char __string__137[]="What a mess in index..";
long __string_137[]={0,0, (long) __string__137,-1};
long Aclass__expr_begin_sub_call(long __this, long class_, long name_, long orig);
long Aclass__expr_next_expr(long __this, long orig);
long Aclass__expr_finish_sub_call(long __this);
char __string__138[]="What a mess..";
long __string_138[]={0,0, (long) __string__138,-1};
long Aclass__expr_term(long __this, long term_, long orig);
long Aclass__expr_var(long __this, long name_, long orig);
long Aclass__expr_int_const(long __this, long value_, long orig);
long Aclass__expr_char_const(long __this, long value_, long orig);
long Aclass__expr_str_const(long __this, long value_, long orig);
long Aclass__expr_constant(long __this, long class_name_, long const_name_, long orig);
#define D__Alexer___SIZE 22
#define D__Alexer___ID 25
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
char __string__139[]="Lexer: ";
long __string_139[]={0,0, (long) __string__139,-1};
char __string__140[]=" @ (";
long __string_140[]={0,0, (long) __string__140,-1};
char __string__141[]=") : '";
long __string_141[]={0,0, (long) __string__141,-1};
char __string__142[]="' ";
long __string_142[]={0,0, (long) __string__142,-1};
long Alexer__state(long __this);
char __string__143[]="newline in string.";
long __string_143[]={0,0, (long) __string__143,-1};
char __string__144[]="TOKEN";
long __string_144[]={0,0, (long) __string__144,-1};
long Alexer__finish(long __this);
char __string__145[]="unterminated token.";
long __string_145[]={0,0, (long) __string__145,-1};
#define D__file___SIZE 2
#define D__file___ID 26
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
#define D__hash___ID 27
#define hash__Cnext 0
#define hash__Chash 1
#define hash__Ckey 2
#define hash__Cvalue 3
long hash__new(long size_);
long hash__dispose(long __this);
long hash__add(long __this, long key, long value);
long hash__get(long __this, long key);
#define D__Atoken___SIZE 4
#define D__Atoken___ID 28
long Atoken__new(long type1, long _data1, long line1, long file1);
long Atoken__dispose(long __this);
long Atoken__get_data(long __this);
long Atoken__get_type(long __this);
long Atoken__get_line(long __this);
long Atoken__get_file(long __this);
#define D__string___SIZE 2
#define D__string___ID 29
long string__new(long alloc);
long string__dispose(long __this);
long string__get_buf(long __this);
long string__get_size(long __this);
long string__set_size(long __this, long ns);
long string__length(long __this);
long string__set_int(long __this, long num);
long string__set(long __this, long src);
long string__add_char(long __this, long num);
long string__add(long __this, long src);
long string__indexof(long __this, long start_pos, long needle);
long string__substr(long __this, long start_pos, long length_, long result);
char __string__146[]="";
long __string_146[]={0,0, (long) __string__146,-1};
long string__to_string(long __this);
long string__to_int(long __this);
long string__compare(long __this, long other);
long string__get_hash(long __this);
long string__get_at(long __this, long at);
long string__set_at(long __this, long at, long v);
#define D__Aemmiter___SIZE 14
#define D__Aemmiter___ID 30
long Aemmiter__new();
long Aemmiter__dispose(long __this);
long Aemmiter__emmit(long __this, long par);
long Aemmiter__get_head(long __this);
long Aemmiter__get_data(long __this);
long Aemmiter__gen_class(long __this);
char __string__147[]="// class ";
long __string_147[]={0,0, (long) __string__147,-1};
char __string__148[]="\n";
long __string_148[]={0,0, (long) __string__148,-1};
char __string__149[]="#define D__";
long __string_149[]={0,0, (long) __string__149,-1};
char __string__150[]="___SIZE ";
long __string_150[]={0,0, (long) __string__150,-1};
char __string__151[]="\n";
long __string_151[]={0,0, (long) __string__151,-1};
char __string__152[]="#define D__";
long __string_152[]={0,0, (long) __string__152,-1};
char __string__153[]="___ID ";
long __string_153[]={0,0, (long) __string__153,-1};
char __string__154[]="\n";
long __string_154[]={0,0, (long) __string__154,-1};
long Aemmiter__gen_member(long __this, long mb);
long Aemmiter__gen_conditional_call(long __this, long v, long mb);
char __string__155[]="\tcase D__";
long __string_155[]={0,0, (long) __string__155,-1};
char __string__156[]="___ID:\n\t\treturn D__";
long __string_156[]={0,0, (long) __string__156,-1};
char __string__157[]="___V_";
long __string_157[]={0,0, (long) __string__157,-1};
char __string__158[]="(__this";
long __string_158[]={0,0, (long) __string__158,-1};
char __string__159[]=", ";
long __string_159[]={0,0, (long) __string__159,-1};
char __string__160[]=");\n";
long __string_160[]={0,0, (long) __string__160,-1};
long Aemmiter__gen_virtuals(long __this);
char __string__161[]="virtual";
long __string_161[]={0,0, (long) __string__161,-1};
char __string__162[]=";\n";
long __string_162[]={0,0, (long) __string__162,-1};
char __string__163[]="virtual";
long __string_163[]={0,0, (long) __string__163,-1};
char __string__164[]="\n{\n\tlong cid;\n";
long __string_164[]={0,0, (long) __string__164,-1};
char __string__165[]="\tcid := ((long*)__this)[-1];\n";
long __string_165[]={0,0, (long) __string__165,-1};
char __string__166[]="\tswitch (cid) {\n";
long __string_166[]={0,0, (long) __string__166,-1};
char __string__167[]="\tdefault:\n\t\tstd__panic();\n\t}\n";
long __string_167[]={0,0, (long) __string__167,-1};
char __string__168[]="\treturn 0;\n}\n";
long __string_168[]={0,0, (long) __string__168,-1};
long Aemmiter__pass_0(long __this, long str, long mb, long k);
char __string__169[]="#define ";
long __string_169[]={0,0, (long) __string__169,-1};
char __string__170[]="__";
long __string_170[]={0,0, (long) __string__170,-1};
char __string__171[]=" ";
long __string_171[]={0,0, (long) __string__171,-1};
char __string__172[]="std__string(";
long __string_172[]={0,0, (long) __string__172,-1};
char __string__173[]=")";
long __string_173[]={0,0, (long) __string__173,-1};
char __string__174[]="\n";
long __string_174[]={0,0, (long) __string__174,-1};
char __string__175[]="#define D__";
long __string_175[]={0,0, (long) __string__175,-1};
char __string__176[]=" ((long*)__this)[";
long __string_176[]={0,0, (long) __string__176,-1};
char __string__177[]="]\n";
long __string_177[]={0,0, (long) __string__177,-1};
long Aemmiter__pass_1(long __this, long str, long mb, long k);
char __string__178[]="static long ";
long __string_178[]={0,0, (long) __string__178,-1};
char __string__179[]="__";
long __string_179[]={0,0, (long) __string__179,-1};
char __string__180[]=" = 0;\n";
long __string_180[]={0,0, (long) __string__180,-1};
long Aemmiter__pass_2(long __this, long str, long mb, long k);
long Aemmiter__pad(long __this, long depth);
char __string__181[]="\t";
long __string_181[]={0,0, (long) __string__181,-1};
long Aemmiter__find_param(long __this, long stri);
long Aemmiter__find_member(long __this, long stri);
long Aemmiter__find_field(long __this, long stri);
long Aemmiter__find_static(long __this, long stri);
long Aemmiter__find_meth_virt(long __this, long stri);
long Aemmiter__find_local(long __this, long stri);
long Aemmiter__expr_gen_call(long __this, long expr);
char __string__182[]="__";
long __string_182[]={0,0, (long) __string__182,-1};
char __string__183[]="(__this, ";
long __string_183[]={0,0, (long) __string__183,-1};
char __string__184[]=")";
long __string_184[]={0,0, (long) __string__184,-1};
char __string__185[]="(__this)";
long __string_185[]={0,0, (long) __string__185,-1};
char __string__186[]="cannot find method.";
long __string_186[]={0,0, (long) __string__186,-1};
char __string__187[]="";
long __string_187[]={0,0, (long) __string__187,-1};
char __string__188[]="D__";
long __string_188[]={0,0, (long) __string__188,-1};
char __string__189[]="wrong type of method.";
long __string_189[]={0,0, (long) __string__189,-1};
char __string__190[]="__";
long __string_190[]={0,0, (long) __string__190,-1};
char __string__191[]="(";
long __string_191[]={0,0, (long) __string__191,-1};
char __string__192[]=",";
long __string_192[]={0,0, (long) __string__192,-1};
char __string__193[]=")";
long __string_193[]={0,0, (long) __string__193,-1};
char __string__194[]="__";
long __string_194[]={0,0, (long) __string__194,-1};
char __string__195[]="(";
long __string_195[]={0,0, (long) __string__195,-1};
char __string__196[]=")";
long __string_196[]={0,0, (long) __string__196,-1};
long Aemmiter__expr_gen_sub_expr(long __this, long expr);
long Aemmiter__expr_gen_comma(long __this, long expr);
char __string__197[]=",";
long __string_197[]={0,0, (long) __string__197,-1};
long Aemmiter__expr_gen_index(long __this, long expr);
char __string__198[]="((long*)";
long __string_198[]={0,0, (long) __string__198,-1};
char __string__199[]=")[";
long __string_199[]={0,0, (long) __string__199,-1};
char __string__200[]="]";
long __string_200[]={0,0, (long) __string__200,-1};
long Aemmiter__expr_gen_par(long __this, long expr);
char __string__201[]="(";
long __string_201[]={0,0, (long) __string__201,-1};
char __string__202[]=")";
long __string_202[]={0,0, (long) __string__202,-1};
long Aemmiter__expr_gen_constant(long __this, long expr);
char __string__203[]="__";
long __string_203[]={0,0, (long) __string__203,-1};
long Aemmiter__expr_gen_dot(long __this, long expr);
long Aemmiter__expr_gen_str_const(long __this, long expr);
char __string__204[]="char __string__";
long __string_204[]={0,0, (long) __string__204,-1};
char __string__205[]="[]=";
long __string_205[]={0,0, (long) __string__205,-1};
char __string__206[]=";\n";
long __string_206[]={0,0, (long) __string__206,-1};
char __string__207[]="long __string_";
long __string_207[]={0,0, (long) __string__207,-1};
char __string__208[]="[]={0,0, ";
long __string_208[]={0,0, (long) __string__208,-1};
char __string__209[]="(long) __string__";
long __string_209[]={0,0, (long) __string__209,-1};
char __string__210[]=",-1};\n";
long __string_210[]={0,0, (long) __string__210,-1};
char __string__211[]="(long)(__string_";
long __string_211[]={0,0, (long) __string__211,-1};
char __string__212[]=" + 2)";
long __string_212[]={0,0, (long) __string__212,-1};
long Aemmiter__expr_gen_char_const(long __this, long expr);
char __string__213[]="'";
long __string_213[]={0,0, (long) __string__213,-1};
char __string__214[]="'";
long __string_214[]={0,0, (long) __string__214,-1};
long Aemmiter__expr_gen0(long __this, long expr, long op);
long Aemmiter__expr_gen1(long __this, long expr, long op);
char __string__215[]="(";
long __string_215[]={0,0, (long) __string__215,-1};
char __string__216[]=")";
long __string_216[]={0,0, (long) __string__216,-1};
long Aemmiter__expr_gen_assign(long __this, long expr, long op);
long Aemmiter__expr_gen2(long __this, long expr, long op);
char __string__217[]="(";
long __string_217[]={0,0, (long) __string__217,-1};
char __string__218[]=")";
long __string_218[]={0,0, (long) __string__218,-1};
char __string__219[]="(";
long __string_219[]={0,0, (long) __string__219,-1};
char __string__220[]=")";
long __string_220[]={0,0, (long) __string__220,-1};
long Aemmiter__expr_gen_var(long __this, long expr);
char __string__221[]="D__";
long __string_221[]={0,0, (long) __string__221,-1};
char __string__222[]="__";
long __string_222[]={0,0, (long) __string__222,-1};
long Aemmiter__expr_process(long __this, long expr);
char __string__223[]="0";
long __string_223[]={0,0, (long) __string__223,-1};
char __string__224[]="__this";
long __string_224[]={0,0, (long) __string__224,-1};
char __string__225[]="wrong expression...";
long __string_225[]={0,0, (long) __string__225,-1};
char __string__226[]="=";
long __string_226[]={0,0, (long) __string__226,-1};
char __string__227[]="==";
long __string_227[]={0,0, (long) __string__227,-1};
char __string__228[]="!=";
long __string_228[]={0,0, (long) __string__228,-1};
char __string__229[]=">=";
long __string_229[]={0,0, (long) __string__229,-1};
char __string__230[]="<=";
long __string_230[]={0,0, (long) __string__230,-1};
char __string__231[]=">";
long __string_231[]={0,0, (long) __string__231,-1};
char __string__232[]="<";
long __string_232[]={0,0, (long) __string__232,-1};
char __string__233[]="&&";
long __string_233[]={0,0, (long) __string__233,-1};
char __string__234[]="||";
long __string_234[]={0,0, (long) __string__234,-1};
char __string__235[]="+";
long __string_235[]={0,0, (long) __string__235,-1};
char __string__236[]="-";
long __string_236[]={0,0, (long) __string__236,-1};
char __string__237[]="*";
long __string_237[]={0,0, (long) __string__237,-1};
char __string__238[]="/";
long __string_238[]={0,0, (long) __string__238,-1};
char __string__239[]="%";
long __string_239[]={0,0, (long) __string__239,-1};
char __string__240[]="!";
long __string_240[]={0,0, (long) __string__240,-1};
char __string__241[]="+";
long __string_241[]={0,0, (long) __string__241,-1};
char __string__242[]="-";
long __string_242[]={0,0, (long) __string__242,-1};
char __string__243[]="UNKNOW OP\n";
long __string_243[]={0,0, (long) __string__243,-1};
long Aemmiter__expr_gen(long __this, long expr);
long Aemmiter__body_gen(long __this, long mb, long k, long vars_, long body_);
char __string__244[]="{\n";
long __string_244[]={0,0, (long) __string__244,-1};
char __string__245[]="\tlong ";
long __string_245[]={0,0, (long) __string__245,-1};
char __string__246[]=";\n";
long __string_246[]={0,0, (long) __string__246,-1};
char __string__247[]="\tlong __this;\n";
long __string_247[]={0,0, (long) __string__247,-1};
char __string__248[]="\t__this = std__alloc(D__";
long __string_248[]={0,0, (long) __string__248,-1};
char __string__249[]="___SIZE);\n";
long __string_249[]={0,0, (long) __string__249,-1};
char __string__250[]="\t((long*)__this)[-1] = D__";
long __string_250[]={0,0, (long) __string__250,-1};
char __string__251[]="___ID;\n";
long __string_251[]={0,0, (long) __string__251,-1};
char __string__252[]="\n";
long __string_252[]={0,0, (long) __string__252,-1};
char __string__253[]=" else if (";
long __string_253[]={0,0, (long) __string__253,-1};
char __string__254[]="if (";
long __string_254[]={0,0, (long) __string__254,-1};
char __string__255[]=") {";
long __string_255[]={0,0, (long) __string__255,-1};
char __string__256[]=" else {";
long __string_256[]={0,0, (long) __string__256,-1};
char __string__257[]="break;";
long __string_257[]={0,0, (long) __string__257,-1};
char __string__258[]="return ";
long __string_258[]={0,0, (long) __string__258,-1};
char __string__259[]=";";
long __string_259[]={0,0, (long) __string__259,-1};
char __string__260[]="return 0;";
long __string_260[]={0,0, (long) __string__260,-1};
char __string__261[]=";";
long __string_261[]={0,0, (long) __string__261,-1};
char __string__262[]=";";
long __string_262[]={0,0, (long) __string__262,-1};
char __string__263[]="while (";
long __string_263[]={0,0, (long) __string__263,-1};
char __string__264[]=") {";
long __string_264[]={0,0, (long) __string__264,-1};
char __string__265[]="ERROR !!";
long __string_265[]={0,0, (long) __string__265,-1};
char __string__266[]="\n";
long __string_266[]={0,0, (long) __string__266,-1};
char __string__267[]="}";
long __string_267[]={0,0, (long) __string__267,-1};
char __string__268[]="\n";
long __string_268[]={0,0, (long) __string__268,-1};
char __string__269[]="}";
long __string_269[]={0,0, (long) __string__269,-1};
char __string__270[]="\n";
long __string_270[]={0,0, (long) __string__270,-1};
long Aemmiter__gen_type(long __this, long mb);
char __string__271[]="long";
long __string_271[]={0,0, (long) __string__271,-1};
char __string__272[]="void";
long __string_272[]={0,0, (long) __string__272,-1};
char __string__273[]="unknown type";
long __string_273[]={0,0, (long) __string__273,-1};
long Aemmiter__add_virtual(long __this, long mb);
long Aemmiter__gen_virtual_caller(long __this, long mb);
char __string__274[]="#define ";
long __string_274[]={0,0, (long) __string__274,-1};
char __string__275[]="__";
long __string_275[]={0,0, (long) __string__275,-1};
char __string__276[]="(___this";
long __string_276[]={0,0, (long) __string__276,-1};
char __string__277[]=", ";
long __string_277[]={0,0, (long) __string__277,-1};
char __string__278[]=") virtual__";
long __string_278[]={0,0, (long) __string__278,-1};
char __string__279[]="(___this";
long __string_279[]={0,0, (long) __string__279,-1};
char __string__280[]=", ";
long __string_280[]={0,0, (long) __string__280,-1};
char __string__281[]=")\n";
long __string_281[]={0,0, (long) __string__281,-1};
long Aemmiter__gen_method_decl(long __this, long dest, long c_name, long name, long mb, long k);
char __string__282[]="long ";
long __string_282[]={0,0, (long) __string__282,-1};
char __string__283[]="__";
long __string_283[]={0,0, (long) __string__283,-1};
char __string__284[]="(";
long __string_284[]={0,0, (long) __string__284,-1};
char __string__285[]="long __this";
long __string_285[]={0,0, (long) __string__285,-1};
char __string__286[]=", ";
long __string_286[]={0,0, (long) __string__286,-1};
char __string__287[]="long ";
long __string_287[]={0,0, (long) __string__287,-1};
char __string__288[]=")";
long __string_288[]={0,0, (long) __string__288,-1};
long Aemmiter__pass_3(long __this, long str, long mb, long k);
char __string__289[]=";\n";
long __string_289[]={0,0, (long) __string__289,-1};
char __string__290[]="_V_";
long __string_290[]={0,0, (long) __string__290,-1};
char __string__291[]=";\n";
long __string_291[]={0,0, (long) __string__291,-1};
char __string__292[]="\n";
long __string_292[]={0,0, (long) __string__292,-1};
char __string__293[]="\n";
long __string_293[]={0,0, (long) __string__293,-1};
long Aemmiter__pass_4(long __this, long str, long mb, long k);
char __string__294[]="#undef ";
long __string_294[]={0,0, (long) __string__294,-1};
char __string__295[]="D__";
long __string_295[]={0,0, (long) __string__295,-1};
char __string__296[]="\n";
long __string_296[]={0,0, (long) __string__296,-1};
long Aemmiter__error(long __this, long t, long e);
char __string__297[]=": at line (";
long __string_297[]={0,0, (long) __string__297,-1};
char __string__298[]=") '";
long __string_298[]={0,0, (long) __string__298,-1};
char __string__299[]="' ";
long __string_299[]={0,0, (long) __string__299,-1};
long Aemmiter__dump(long __this);
#define D__main___SIZE 0
#define D__main___ID 31
#define main__Cblock 10
long main__copyto(long f, long output);
char __string__300[]="Including : ";
long __string_300[]={0,0, (long) __string__300,-1};
char __string__301[]="";
long __string_301[]={0,0, (long) __string__301,-1};
long main__process_file(long f, long lex);
char __string__302[]="Compiling : ";
long __string_302[]={0,0, (long) __string__302,-1};
char __string__303[]="";
long __string_303[]={0,0, (long) __string__303,-1};
char __string__304[]="";
long __string_304[]={0,0, (long) __string__304,-1};
long main__main();
char __string__305[]="--- The Jack 3.0.3 ---";
long __string_305[]={0,0, (long) __string__305,-1};
char __string__306[]="wrong number of command line arguments";
long __string_306[]={0,0, (long) __string__306,-1};
char __string__307[]=".jack.c";
long __string_307[]={0,0, (long) __string__307,-1};
char __string__308[]="";
long __string_308[]={0,0, (long) __string__308,-1};
char __string__309[]="\n";
long __string_309[]={0,0, (long) __string__309,-1};
char __string__310[]=".jack";
long __string_310[]={0,0, (long) __string__310,-1};
char __string__311[]=".h";
long __string_311[]={0,0, (long) __string__311,-1};
char __string__312[]=".c";
long __string_312[]={0,0, (long) __string__312,-1};
char __string__313[]="\n";
long __string_313[]={0,0, (long) __string__313,-1};
char __string__314[]="";
long __string_314[]={0,0, (long) __string__314,-1};
char __string__315[]="Output to : ";
long __string_315[]={0,0, (long) __string__315,-1};

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


var std__stralloc(var len)
{
	char *b;
	b = malloc(len); // UTF-8
	b[0] = 0;
	return (var)b;
}

var std__strfree(var b)
{
	free((void*)b);
	return 0;
}

var std__strlen(var str)
{
	return (var)strlen((char*)str);
}

var std__strcat(var dest, var src, var maxlen)
{
	strncat((char*)dest, (char*)src, maxlen);
	return 0;
}

var std__strsub(var dest, var start,  var src, var maxlen)
{
	strncat((char*)dest, ((char*)src)+start, maxlen);
	return 0;
}

var std__str_set_int(var dest, var maxlen, var n)
{
	snprintf((char*)dest, maxlen, "%ld", n);
	return 0;
}

var std__str_set_at(var dest, var pos, var val)
{
	((char*)dest)[pos] = (char)val;
	return 0;
}

var std__str_get_at(var dest, var pos)
{
	return ((char*)dest)[pos];
}

var std__strindex(var haystack, var offest, var needle)
{
	char *r;
	r = strstr(((char*)haystack) + offest, (char*)needle);
	if (r == NULL) {
		return -1;
	}
	return (long)(r - ((char*)haystack));
}

var std__strcmp(var s1, var s2)
{
	return strcmp((char*)s1, (char*)s2);
}

var std__strhash(var s)
{
	char *p = (char*)s;
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
// class bignum
#define D___str ((long*)__this)[0]
long bignum__new()
{
	long __this;
	__this = std__alloc(D__bignum___SIZE);
	((long*)__this)[-1] = D__bignum___ID;

	D___str=string__new(8);
	return __this;
}
long bignum__get_string(long __this)
{

	return D___str;
}
long bignum__add(long __this, long a, long b)
{

	return 0;
}
long bignum__sub(long __this, long a, long b)
{

	return 0;
}
long bignum__mul(long __this, long a, long b)
{

	return 0;
}
long bignum__div(long __this, long a, long b)
{

	return 0;
}
long bignum__rem(long __this, long a, long b)
{

	return 0;
}
#undef D___str
// class crypt
// class gui
// class object
// class http
// class gif
// class md
// class pdf
// class html
// class wav
// class sql
// class zip
// class Astatement
#define D__type ((long*)__this)[0]
#define D__expr ((long*)__this)[1]
#define D__statements ((long*)__this)[2]
#define D__else_stms ((long*)__this)[3]
#define D__parent ((long*)__this)[4]
#define D__depth ((long*)__this)[5]
long Astatement__new(long type_, long parent_, long depth_)
{
	long __this;
	__this = std__alloc(D__Astatement___SIZE);
	((long*)__this)[-1] = D__Astatement___ID;

	D__type=type_;
	D__parent=parent_;
	D__depth=depth_;
	D__expr=0;
	D__statements=0;
	D__else_stms=0;
	return __this;
}
long Astatement__dispose(long __this)
{

	return 0;
}
long Astatement__get_type(long __this)
{

	return D__type;
}
long Astatement__get_depth(long __this)
{

	return D__depth;
}
long Astatement__get_parent(long __this)
{

	return D__parent;
}
long Astatement__get_statements(long __this)
{

	return D__statements;
}
long Astatement__get_else(long __this)
{

	return D__else_stms;
}
long Astatement__get_expression(long __this)
{

	return D__expr;
}
long Astatement__add_else(long __this, long type_)
{
	long st;

	D__else_stms=buffer__new(2);
	st=Astatement__new(type_,D__parent,D__depth);
	Astatement__add_statement(__this, st);
	return 0;
}
long Astatement__add_statement(long __this, long statement_)
{

	if (D__statements==0) {
		D__statements=buffer__new(2);
	}
	if (D__else_stms!=0) {
		buffer__push(D__else_stms,statement_);
	} else {
		buffer__push(D__statements,statement_);
	}
	return 0;
}
long Astatement__set_expression(long __this, long expr_)
{

	if (D__type==(Aclass__Cif)) {
		D__expr=expr_;
	} else if (D__type==(Aclass__Celseif)) {
		D__expr=expr_;
	} else if (D__type==(Aclass__Clet)) {
		D__expr=expr_;
	} else if (D__type==(Aclass__Cdo)) {
		D__expr=expr_;
	} else if (D__type==(Aclass__Cwhile)) {
		D__expr=expr_;
	} else if (D__type==(Aclass__Creturn)) {
		D__expr=expr_;
	} else {
		console__log((long)(__string_1 + 2));
		std__exit(-(1));
	}
	return 0;
}
#undef D__type
#undef D__expr
#undef D__statements
#undef D__else_stms
#undef D__parent
#undef D__depth
// class response
#define D__status ((long*)__this)[0]
#define D__str ((long*)__this)[1]
#define D__byt ((long*)__this)[2]
#define D__typ ((long*)__this)[3]
#define D__instan ((long*)__this)[4]
long response__new(long type_, long instance_)
{
	long __this;
	__this = std__alloc(D__response___SIZE);
	((long*)__this)[-1] = D__response___ID;

	D__status=0;
	D__typ=type_;
	D__instan=instance_;
	D__byt=0;
	D__str=0;
	return __this;
}
long response__dispose(long __this)
{

	std__free(__this);
	return 0;
}
long response__clear(long __this)
{

	D__status=0;
	if (D__byt!=0) {
		bytes__dispose(D__byt);
		D__byt=0;
	}
	if (D__str!=0) {
		string__dispose(D__str);
		D__str=0;
	}
	return 0;
}
long response__set_string(long __this, long status_, long data_)
{

	D__status=status_;
	D__str=data_;
	return 0;
}
long response__set_bytes(long __this, long status_, long data_)
{

	D__status=status_;
	D__byt=data_;
	return 0;
}
long response__get_status(long __this)
{

	return D__status;
}
long response__get_string(long __this)
{

	return D__str;
}
long response__get_bytes(long __this)
{

	return D__byt;
}
#undef D__status
#undef D__str
#undef D__byt
#undef D__typ
#undef D__instan
// class Amember
#define D__kind ((long*)__this)[0]
#define D__type ((long*)__this)[1]
#define D__type_id ((long*)__this)[2]
#define D__name ((long*)__this)[3]
#define D__initial_value ((long*)__this)[4]
#define D__index ((long*)__this)[5]
#define D__params ((long*)__this)[6]
#define D__vars ((long*)__this)[7]
#define D__body ((long*)__this)[8]
long Amember__new(long kind_, long type_, long type_id_, long name_)
{
	long __this;
	__this = std__alloc(D__Amember___SIZE);
	((long*)__this)[-1] = D__Amember___ID;

	D__kind=kind_;
	D__type=type_;
	D__type_id=type_id_;
	D__name=name_;
	D__initial_value=0;
	D__index=-(1);
	D__params=0;
	D__vars=0;
	D__body=0;
	return __this;
}
long Amember__dispose(long __this)
{

	return 0;
}
long Amember__get_kind(long __this)
{

	return D__kind;
}
long Amember__get_type(long __this)
{

	return D__type;
}
long Amember__get_type_id(long __this)
{

	return D__type_id;
}
long Amember__get_name(long __this)
{

	return D__name;
}
long Amember__get_name_string(long __this)
{

	return Atoken__get_data(D__name);
}
long Amember__get_initial_value(long __this)
{

	return D__initial_value;
}
long Amember__set_initial_value(long __this, long initial_value_)
{

	D__initial_value=initial_value_;
	return 0;
}
long Amember__set_index(long __this, long index_)
{

	D__index=index_;
	return 0;
}
long Amember__get_index(long __this)
{

	return D__index;
}
long Amember__get_body(long __this)
{

	return D__body;
}
long Amember__get_vars(long __this)
{

	return D__vars;
}
long Amember__get_params(long __this)
{

	return D__params;
}
long Amember__add_param(long __this, long kind_, long type_, long type_id_, long name_)
{
	long p;

	if (D__params==0) {
		D__params=buffer__new(4);
	}
	p=Amember__new(kind_,type_,type_id_,name_);
	buffer__push(D__params,p);
	return 0;
}
long Amember__add_var(long __this, long kind_, long type_, long type_id_, long name_)
{
	long p;

	if (D__vars==0) {
		D__vars=buffer__new(4);
	}
	p=Amember__new(kind_,type_,type_id_,name_);
	buffer__push(D__vars,p);
	return 0;
}
long Amember__add_statement(long __this, long statement_)
{

	if (D__body==0) {
		D__body=buffer__new(4);
	}
	buffer__push(D__body,statement_);
	return Astatement__get_parent(statement_);
}
#undef D__kind
#undef D__type
#undef D__type_id
#undef D__name
#undef D__initial_value
#undef D__index
#undef D__params
#undef D__vars
#undef D__body
// class Avirtual
#define D___class ((long*)__this)[0]
#define D___memb ((long*)__this)[1]
#define D__next ((long*)__this)[2]
long Avirtual__new(long memb_, long class_)
{
	long __this;
	__this = std__alloc(D__Avirtual___SIZE);
	((long*)__this)[-1] = D__Avirtual___ID;

	D___class=class_;
	D___memb=memb_;
	D__next=0;
	return __this;
}
long Avirtual__dispose(long __this)
{

	return 0;
}
long Avirtual__set_next(long __this, long n)
{

	D__next=n;
	return 0;
}
long Avirtual__get_next(long __this)
{

	return D__next;
}
long Avirtual__get_class_name(long __this)
{

	return D___class;
}
long Avirtual__get_member(long __this)
{

	return D___memb;
}
long Avirtual__get_member_name(long __this)
{

	return Amember__get_name_string(D___memb);
}
#undef D___class
#undef D___memb
#undef D__next
// class buffer
#define D___arr ((long*)__this)[0]
#define D__size ((long*)__this)[1]
#define D__pos ((long*)__this)[2]
long buffer__new(long initial_size)
{
	long i;
	long __this;
	__this = std__alloc(D__buffer___SIZE);
	((long*)__this)[-1] = D__buffer___ID;

	D___arr=array__new(initial_size);
	D__size=initial_size;
	D__pos=0;
	i=0;
	while (i<initial_size) {
		((long*)D___arr)[i]=0;
		i=i+1;
	}
	return __this;
}
long buffer__dispose(long __this)
{

	array__dispose(D___arr);
	std__free(__this);
	return 0;
}
long buffer__length(long __this)
{

	return D__pos;
}
long buffer__empty(long __this)
{

	if (D__pos>0) {
		return 0;
	}
	return 1;
}
long buffer__set_at(long __this, long idx, long elem)
{
	long a;
	long i;

	if (idx>=D__size) {
		a=array__new(idx+8);
		i=0;
		while (i<D__size) {
			((long*)a)[i]=((long*)D___arr)[i];
			i=i+1;
		}
		D__size=idx+8;
		while (i<D__size) {
			((long*)a)[i]=0;
			i=i+1;
		}
		array__dispose(D___arr);
		D___arr=a;
	}
	((long*)D___arr)[idx]=elem;
	if (((idx+1))>D__pos) {
		D__pos=idx+1;
	}
	return 0;
}
long buffer__get_at(long __this, long idx)
{

	return ((long*)D___arr)[idx];
}
long buffer__push(long __this, long elem)
{
	long p;

	p=D__pos+1;
	buffer__set_at(__this, D__pos,elem);
	D__pos=p;
	return 0;
}
long buffer__set_last(long __this, long elem)
{

	if (D__pos<1) {
		return 0;
	}
	((long*)D___arr)[D__pos-1]=elem;
	return 0;
}
long buffer__get_last(long __this)
{

	if (D__pos<1) {
		return 0;
	}
	return ((long*)D___arr)[D__pos-1];
}
long buffer__pop(long __this)
{
	long elem;

	elem=0;
	if (D__pos>0) {
		D__pos=D__pos-1;
		elem=buffer__get_at(__this, D__pos);
	}
	return elem;
}
long buffer__unshift(long __this, long elem)
{
	long i;
	long p;

	p=D__pos+1;
	buffer__set_at(__this, D__pos,0);
	i=D__pos;
	while (i>1) {
		i=i-1;
		((long*)D___arr)[i]=((long*)D___arr)[i-1];
	}
	((long*)D___arr)[0]=elem;
	D__pos=p;
	return 0;
}
long buffer__shift(long __this)
{
	long elem;
	long i;
	long p;

	if (D__pos<1) {
		return 0;
	}
	p=D__pos-1;
	elem=buffer__get_at(__this, 0);
	i=0;
	while (i<D__pos) {
		((long*)D___arr)[i]=((long*)D___arr)[i+1];
		i=i+1;
	}
	D__pos=p;
	return elem;
}
#undef D___arr
#undef D__size
#undef D__pos
// class Aexpr
#define D__op ((long*)__this)[0]
#define D__prec ((long*)__this)[1]
#define D__asso ((long*)__this)[2]
#define D__left ((long*)__this)[3]
#define D__right ((long*)__this)[4]
#define D__parent ((long*)__this)[5]
#define D__value ((long*)__this)[6]
#define D__value2 ((long*)__this)[7]
#define D__flags ((long*)__this)[8]
#define D__origin ((long*)__this)[9]
long Aexpr__new(long op_, long precedence_, long associativity_)
{
	long __this;
	__this = std__alloc(D__Aexpr___SIZE);
	((long*)__this)[-1] = D__Aexpr___ID;

	D__op=op_;
	D__prec=precedence_;
	D__asso=associativity_;
	D__parent=0;
	D__left=0;
	D__right=0;
	D__value=0;
	D__value2=0;
	D__flags=0;
	D__origin=0;
	return __this;
}
long Aexpr__dispose(long __this)
{

	return 0;
}
long Aexpr__get_origin(long __this)
{

	return D__origin;
}
long Aexpr__set_origin(long __this, long orig)
{

	D__origin=orig;
	return 0;
}
long Aexpr__get_right(long __this)
{

	return D__right;
}
long Aexpr__set_right(long __this, long r)
{

	D__right=r;
	return 0;
}
long Aexpr__get_left(long __this)
{

	return D__left;
}
long Aexpr__set_left(long __this, long l)
{

	D__left=l;
	return 0;
}
long Aexpr__get_parent(long __this)
{

	return D__parent;
}
long Aexpr__set_parent(long __this, long p)
{

	D__parent=p;
	return 0;
}
long Aexpr__get_value2(long __this)
{

	return D__value2;
}
long Aexpr__set_value2(long __this, long v)
{

	D__value2=v;
	return 0;
}
long Aexpr__get_value(long __this)
{

	return D__value;
}
long Aexpr__set_value(long __this, long v)
{

	D__value=v;
	return 0;
}
long Aexpr__get_op(long __this)
{

	return D__op;
}
long Aexpr__get_flags(long __this)
{

	return D__flags;
}
long Aexpr__set_flags(long __this, long flags_)
{

	D__flags=flags_;
	return 0;
}
long Aexpr__set_precedence(long __this, long p)
{

	D__prec=p;
	return 0;
}
long Aexpr__get_precedence(long __this)
{

	return D__prec;
}
long Aexpr__get_associativity(long __this)
{

	return D__asso;
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

	if (D__left!=0) {
		Aexpr__dump(D__left,depth+1);
	}
	i=depth;
	while (i>0) {
		i=i-1;
		console__log_str((long)(__string_2 + 2));
	}
	if (D__value!=0) {
		console__log_str(D__value);
	}
	console__log_int(D__op);
	console__log((long)(__string_3 + 2));
	if (D__right!=0) {
		Aexpr__dump(D__right,depth+1);
	}
	return 0;
}
#undef D__op
#undef D__prec
#undef D__asso
#undef D__left
#undef D__right
#undef D__parent
#undef D__value
#undef D__value2
#undef D__flags
#undef D__origin
// class Aparser
#define D___states ((long*)__this)[0]
#define D__lex ((long*)__this)[1]
#define D__lookahead ((long*)__this)[2]
#define D__lookstring ((long*)__this)[3]
#define D__status ((long*)__this)[4]
#define D__debug ((long*)__this)[5]
#define D___class ((long*)__this)[6]
long Aparser__new()
{
	long __this;
	__this = std__alloc(D__Aparser___SIZE);
	((long*)__this)[-1] = D__Aparser___ID;

	D__debug=0;
	D__status=0;
	D__lex=0;
	D___states=buffer__new(8);
	D___class=0;
	Aparser__push(__this, Aparser__Croot);
	return __this;
}
long Aparser__dispose(long __this)
{

	buffer__dispose(D___states);
	std__free(__this);
	return 0;
}
long Aparser__get_data(long __this)
{

	return D__lookstring;
}
long Aparser__get_next(long __this)
{

	return D___class;
}
long Aparser__release(long __this)
{
	long c;

	c=D___class;
	while (c!=0) {
		D___class=Aclass__get_next(c);
		Aclass__dispose(c);
		c=D___class;
	}
	D___class=0;
	return 0;
}
long Aparser__parse(long __this, long lexer_)
{

	D__lex=lexer_;
	while ((Alexer__empty(D__lex))==0) {
		D__lookahead=Alexer__get_at(D__lex,0);
		D__lookstring=Atoken__get_data(D__lookahead);
		if ((((Atoken__get_type(D__lookahead))==(Alexer__Cnewline)))||(((Atoken__get_type(D__lookahead))==(Alexer__Ccomment)))) {
			Aparser__eat(__this);
		} else {
			Aparser__state_machine(__this);
		}
		if ((Atoken__get_type(D__lookahead))==(Alexer__Cend)) {
			Aparser__eat(__this);
			return 0;
		}
	}
	return 0;
}
long Aparser__error(long __this, long e)
{

	console__log_str(Atoken__get_file(D__lookahead));
	console__log_str((long)(__string_4 + 2));
	console__log_str(Atoken__get_data(D__lookahead));
	console__log_str((long)(__string_5 + 2));
	console__log_int(Atoken__get_line(D__lookahead));
	console__log_str((long)(__string_6 + 2));
	console__log(e);
	std__exit(-(1));
	D__status=-(1);
	return 0;
}
long Aparser__push(long __this, long step_)
{

	buffer__push(D___states,step_);
	return 0;
}
long Aparser__pop(long __this)
{

	buffer__pop(D___states);
	return 0;
}
long Aparser__root(long __this)
{

	if (D__status!=0) {
		return -(1);
	}
	Aparser__push(__this, Aparser__Cclass_dec);
	return 0;
}
long Aparser__class_dec(long __this)
{
	long c;

	if ((Aparser__match_id(__this, (long)(__string_7 + 2)))==0) {
		Aparser__error(__this, (long)(__string_8 + 2));
		return 0;
	}
	Aparser__eat(__this);
	if ((Aparser__match_id(__this, 0))==0) {
		Aparser__error(__this, (long)(__string_9 + 2));
		return 0;
	}
	c=D___class;
	D___class=Aclass__new(D__lookahead);
	Aclass__set_next(D___class,c);
	Aparser__eat(__this);
	if ((Aparser__match_op(__this, (long)(__string_10 + 2)))==0) {
		Aparser__error(__this, (long)(__string_11 + 2));
		return 0;
	}
	Aparser__eat(__this);
	while (D__status>=0) {
		Aparser__class_var_dec(__this);
	}
	D__status=0;
	while (D__status>=0) {
		Aparser__clas_const_dec(__this);
	}
	D__status=0;
	Aparser__push(__this, Aparser__Cclass_dec1);
	Aparser__push(__this, Aparser__Csubroutine_dec);
	return 0;
}
long Aparser__class_dec1(long __this)
{

	D__status=0;
	if ((Aparser__match_op(__this, (long)(__string_12 + 2)))==0) {
		Aparser__error(__this, (long)(__string_13 + 2));
		return 0;
	}
	Aparser__eat(__this);
	Aparser__pop(__this);
	return 0;
}
long Aparser__class_var_dec(long __this)
{

	if ((Aparser__match_id(__this, (long)(__string_14 + 2)))!=0) {
		Aclass__prepare_kind(D___class,Aclass__Cfield);
	} else if ((Aparser__match_id(__this, (long)(__string_15 + 2)))!=0) {
		Aclass__prepare_kind(D___class,Aclass__Cstatic);
	} else {
		D__status=-(1);
		return 0;
	}
	Aparser__eat(__this);
	Aparser__type(__this);
	Aparser__var_name(__this);
	while ((Aparser__match_op(__this, (long)(__string_16 + 2)))!=0) {
		Aclass__valid_member_name(D___class);
		Aparser__var_name(__this);
	}
	if ((Aparser__match_op(__this, (long)(__string_17 + 2)))==0) {
		Aparser__error(__this, (long)(__string_18 + 2));
		return 0;
	}
	Aclass__valid_member_name(D___class);
	Aparser__eat(__this);
	return 0;
}
long Aparser__var_name(long __this)
{

	if ((Aparser__match_id(__this, 0))!=0) {
		Aclass__prepare_set_name(D___class,D__lookahead);
		Aparser__eat(__this);
		return 0;
	}
	Aparser__error(__this, (long)(__string_19 + 2));
	return 0;
}
long Aparser__type(long __this)
{

	if ((Aparser__match_id(__this, (long)(__string_20 + 2)))!=0) {
		Aclass__prepare_type(D___class,Aclass__Cint);
	} else if ((Aparser__match_id(__this, (long)(__string_21 + 2)))!=0) {
		Aclass__prepare_type(D___class,Aclass__Cvoid);
	} else if ((Aparser__match_id(__this, 0))!=0) {
		Aclass__prepare_type_identifier(D___class,D__lookahead);
	} else {
		Aparser__error(__this, (long)(__string_22 + 2));
		return 0;
	}
	Aparser__eat(__this);
	return 0;
}
long Aparser__clas_const_dec(long __this)
{

	if ((Aparser__match_id(__this, (long)(__string_23 + 2)))!=0) {
		Aclass__prepare_kind(D___class,Aclass__Cconst);
	} else {
		D__status=-(1);
		return 0;
	}
	Aparser__eat(__this);
	Aparser__type(__this);
	Aparser__var_name(__this);
	if ((Aparser__match_op(__this, (long)(__string_24 + 2)))==0) {
		Aparser__error(__this, (long)(__string_25 + 2));
		return 0;
	}
	Aparser__eat(__this);
	if ((Aparser__match_op(__this, (long)(__string_26 + 2)))==0) {
		Aclass__finish_const(D___class,D__lookahead);
	} else {
		Aparser__error(__this, (long)(__string_27 + 2));
		return 0;
	}
	Aparser__eat(__this);
	if ((Aparser__match_op(__this, (long)(__string_28 + 2)))==0) {
		Aparser__error(__this, (long)(__string_29 + 2));
		return 0;
	}
	Aparser__eat(__this);
	return 0;
}
long Aparser__subroutine_dec(long __this)
{

	if (D__status!=0) {
		Aparser__pop(__this);
		return 0;
	}
	if ((Aparser__match_id(__this, (long)(__string_30 + 2)))!=0) {
		Aclass__prepare_kind(D___class,Aclass__Cconstructor);
	} else if ((Aparser__match_id(__this, (long)(__string_31 + 2)))!=0) {
		Aclass__prepare_kind(D___class,Aclass__Cfunction);
	} else if ((Aparser__match_id(__this, (long)(__string_32 + 2)))!=0) {
		Aclass__prepare_kind(D___class,Aclass__Cmethod);
	} else if ((Aparser__match_id(__this, (long)(__string_33 + 2)))!=0) {
		Aclass__prepare_kind(D___class,Aclass__Cvirtual);
	} else {
		Aparser__pop(__this);
		D__status=-(1);
		return 0;
	}
	Aparser__eat(__this);
	if ((Aparser__match_id(__this, (long)(__string_34 + 2)))!=0) {
		Aclass__prepare_type(D___class,Aclass__Cvoid);
		Aparser__eat(__this);
	} else {
		Aparser__type(__this);
	}
	Aparser__var_name(__this);
	Aclass__valid_member_name(D___class);
	if ((Aparser__match_op(__this, (long)(__string_35 + 2)))==0) {
		Aparser__error(__this, (long)(__string_36 + 2));
		return 0;
	}
	Aparser__eat(__this);
	Aparser__param_list(__this);
	if ((Aparser__match_op(__this, (long)(__string_37 + 2)))==0) {
		Aparser__error(__this, (long)(__string_38 + 2));
		return 0;
	}
	Aparser__eat(__this);
	Aparser__subrout_body(__this);
	return 0;
}
long Aparser__param_list(long __this)
{

	if ((Aparser__match_op(__this, (long)(__string_39 + 2)))!=0) {
		return 0;
	}
	Aparser__direction(__this);
	Aparser__type(__this);
	Aparser__var_name(__this);
	while ((Aparser__match_op(__this, (long)(__string_40 + 2)))!=0) {
		Aclass__valid_param(D___class);
		Aparser__eat(__this);
		Aparser__direction(__this);
		Aparser__type(__this);
		Aparser__var_name(__this);
	}
	Aclass__valid_param(D___class);
	return 0;
}
long Aparser__direction(long __this)
{

	if ((Aparser__match_id(__this, (long)(__string_41 + 2)))!=0) {
		Aclass__prepare_kind(D___class,Aclass__Cin);
		Aparser__eat(__this);
		return 0;
	} else if ((Aparser__match_id(__this, (long)(__string_42 + 2)))!=0) {
		Aclass__prepare_kind(D___class,Aclass__Cout);
		Aparser__eat(__this);
		return 0;
	} else if ((Aparser__match_id(__this, (long)(__string_43 + 2)))!=0) {
		Aclass__prepare_kind(D___class,Aclass__Cio);
		Aparser__eat(__this);
		return 0;
	}
	Aparser__error(__this, (long)(__string_44 + 2));
	return 0;
}
long Aparser__subrout_body(long __this)
{

	if ((Aparser__match_op(__this, (long)(__string_45 + 2)))==0) {
		Aparser__error(__this, (long)(__string_46 + 2));
		return 0;
	}
	Aparser__eat(__this);
	while (D__status==0) {
		Aparser__var_dec(__this);
	}
	D__status=0;
	Aparser__push(__this, Aparser__Csubrout_body1);
	Aparser__push(__this, Aparser__Cstatements);
	return 0;
}
long Aparser__subrout_body1(long __this)
{

	Aparser__pop(__this);
	if ((Aparser__match_op(__this, (long)(__string_47 + 2)))==0) {
		Aparser__error(__this, (long)(__string_48 + 2));
		return 0;
	}
	Aparser__eat(__this);
	Aclass__finish_subroutine(D___class);
	return 0;
}
long Aparser__var_dec(long __this)
{

	if ((Aparser__match_id(__this, (long)(__string_49 + 2)))==0) {
		D__status=1;
		return 0;
	}
	Aparser__eat(__this);
	Aclass__prepare_kind(D___class,Aclass__Cvar);
	Aparser__type(__this);
	Aparser__var_name(__this);
	while ((Aparser__match_op(__this, (long)(__string_50 + 2)))!=0) {
		Aclass__valid_var(D___class);
		Aparser__eat(__this);
		Aparser__var_name(__this);
	}
	Aclass__valid_var(D___class);
	if ((Aparser__match_op(__this, (long)(__string_51 + 2)))==0) {
		Aparser__error(__this, (long)(__string_52 + 2));
		return 0;
	}
	Aparser__eat(__this);
	return 0;
}
long Aparser__statements(long __this)
{

	if (D__status==0) {
		Aparser__push(__this, Aparser__Cstatement);
		return 0;
	}
	if (D__status>0) {
		D__status=0;
	}
	Aparser__pop(__this);
	return 0;
}
long Aparser__statement(long __this)
{
	long r;

	Aparser__pop(__this);
	r=0;
	if ((Aparser__match_id(__this, (long)(__string_53 + 2)))!=0) {
		r=1;
		Aclass__begin_stm(D___class,Aclass__Cbreak,D__lookahead);
		Aparser__eat(__this);
		if ((Aparser__match_op(__this, (long)(__string_54 + 2)))==0) {
			Aparser__error(__this, (long)(__string_55 + 2));
			return 0;
		}
		Aclass__finish_stm(D___class);
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
		D__status=1;
	}
	return 0;
}
long Aparser__if_statem(long __this, long type_)
{

	if ((Aparser__match_id(__this, (long)(__string_56 + 2)))==0) {
		return 0;
	}
	Aclass__begin_stm(D___class,type_,D__lookahead);
	Aparser__eat(__this);
	if ((Aparser__match_op(__this, (long)(__string_57 + 2)))==0) {
		Aparser__error(__this, (long)(__string_58 + 2));
		return 1;
	}
	Aparser__eat(__this);
	Aparser__push(__this, Aparser__Cif_statem1);
	Aparser__push(__this, Aparser__Cexpression);
	Aclass__begin_expr(D___class,D__lookahead);
	return 1;
}
long Aparser__if_statem1(long __this)
{

	Aparser__pop(__this);
	if ((Aparser__match_op(__this, (long)(__string_59 + 2)))==0) {
		Aparser__error(__this, (long)(__string_60 + 2));
		return 0;
	}
	Aclass__finish_expr(D___class);
	Aparser__eat(__this);
	if ((Aparser__match_op(__this, (long)(__string_61 + 2)))==0) {
		Aparser__error(__this, (long)(__string_62 + 2));
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
	if ((Aparser__match_op(__this, (long)(__string_63 + 2)))==0) {
		Aparser__error(__this, (long)(__string_64 + 2));
		return 0;
	}
	Aparser__eat(__this);
	if ((Aparser__match_id(__this, (long)(__string_65 + 2)))==0) {
		Aclass__finish_stm(D___class);
		return 0;
	}
	Aparser__eat(__this);
	if ((Aparser__match_id(__this, (long)(__string_66 + 2)))!=0) {
		Aclass__finish_stm(D___class);
		Aparser__if_statem(__this, Aclass__Celseif);
		return 0;
	}
	Aclass__begin_else(D___class,Aclass__Celse);
	if ((Aparser__match_op(__this, (long)(__string_67 + 2)))==0) {
		Aparser__error(__this, (long)(__string_68 + 2));
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
	if ((Aparser__match_op(__this, (long)(__string_69 + 2)))==0) {
		Aparser__error(__this, (long)(__string_70 + 2));
		return 0;
	}
	Aclass__finish_stm(D___class);
	Aparser__eat(__this);
	return 0;
}
long Aparser__while_statem(long __this)
{

	if ((Aparser__match_id(__this, (long)(__string_71 + 2)))==0) {
		return 0;
	}
	Aclass__begin_stm(D___class,Aclass__Cwhile,D__lookahead);
	Aparser__eat(__this);
	if ((Aparser__match_op(__this, (long)(__string_72 + 2)))==0) {
		Aparser__error(__this, (long)(__string_73 + 2));
		return 1;
	}
	Aparser__eat(__this);
	Aclass__begin_expr(D___class,D__lookahead);
	Aparser__push(__this, Aparser__Cwhile_statem1);
	Aparser__push(__this, Aparser__Cexpression);
	return 1;
}
long Aparser__while_statem1(long __this)
{

	Aparser__pop(__this);
	if ((Aparser__match_op(__this, (long)(__string_74 + 2)))==0) {
		Aparser__error(__this, (long)(__string_75 + 2));
		return 0;
	}
	Aclass__finish_expr(D___class);
	Aparser__eat(__this);
	if ((Aparser__match_op(__this, (long)(__string_76 + 2)))==0) {
		Aparser__error(__this, (long)(__string_77 + 2));
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
	if ((Aparser__match_op(__this, (long)(__string_78 + 2)))==0) {
		Aparser__error(__this, (long)(__string_79 + 2));
		return 0;
	}
	Aclass__finish_stm(D___class);
	Aparser__eat(__this);
	return 0;
}
long Aparser__return_statem(long __this)
{

	if ((Aparser__match_id(__this, (long)(__string_80 + 2)))==0) {
		return 0;
	}
	Aclass__begin_stm(D___class,Aclass__Creturn,D__lookahead);
	Aparser__eat(__this);
	if ((Aparser__match_op(__this, (long)(__string_81 + 2)))!=0) {
		Aclass__finish_stm(D___class);
		Aparser__eat(__this);
	} else {
		Aclass__begin_expr(D___class,D__lookahead);
		Aparser__push(__this, Aparser__Creturn_statem1);
		Aparser__push(__this, Aparser__Cexpression);
	}
	return 1;
}
long Aparser__return_statem1(long __this)
{

	if ((Aparser__match_op(__this, (long)(__string_82 + 2)))!=0) {
		Aclass__finish_expr(D___class);
		Aclass__finish_stm(D___class);
		Aparser__eat(__this);
		Aparser__pop(__this);
		return 0;
	}
	Aparser__error(__this, (long)(__string_83 + 2));
	return 0;
}
long Aparser__dolet_statem(long __this)
{
	long id;

	if ((Aparser__match_id(__this, 0))==0) {
		return 0;
	}
	id=D__lookahead;
	Aparser__eat(__this);
	if ((((Aparser__match_op(__this, (long)(__string_84 + 2)))!=0))||(((Aparser__match_op(__this, (long)(__string_85 + 2)))!=0))) {
		Aclass__begin_stm(D___class,Aclass__Clet,D__lookahead);
		return Aparser__let_statem(__this, id);
	} else if ((Aparser__match_op(__this, (long)(__string_86 + 2)))==0) {
		Aclass__begin_stm(D___class,Aclass__Cdo,D__lookahead);
		return Aparser__do_statem(__this, id);
	}
	return 0;
}
long Aparser__let_statem(long __this, long id)
{

	if ((Aparser__match_op(__this, (long)(__string_87 + 2)))!=0) {
		Aclass__expr_var(D___class,Atoken__get_data(id),D__lookahead);
		Aclass__expr_op(D___class,Aclass__Cassign,D__lookahead);
		Aparser__eat(__this);
		Aparser__push(__this, Aparser__Clet_statem1);
		Aparser__push(__this, Aparser__Cexpression);
		return 1;
	} else if ((Aparser__match_op(__this, (long)(__string_88 + 2)))!=0) {
		Aclass__expr_open_index(D___class,Atoken__get_data(id),D__lookahead);
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
	if ((Aparser__match_op(__this, (long)(__string_89 + 2)))==0) {
		Aparser__error(__this, (long)(__string_90 + 2));
		return 0;
	}
	Aclass__finish_expr(D___class);
	Aclass__finish_stm(D___class);
	Aparser__eat(__this);
	return 0;
}
long Aparser__let_statem2(long __this)
{

	Aparser__pop(__this);
	if ((Aparser__match_op(__this, (long)(__string_91 + 2)))==0) {
		Aparser__error(__this, (long)(__string_92 + 2));
		return 0;
	}
	Aclass__expr_close_index(D___class);
	Aparser__eat(__this);
	if ((Aparser__match_op(__this, (long)(__string_93 + 2)))!=0) {
		Aclass__expr_op(D___class,Aclass__Cassign,D__lookahead);
		Aparser__eat(__this);
		Aparser__push(__this, Aparser__Clet_statem1);
		Aparser__push(__this, Aparser__Cexpression);
		return 0;
	}
	Aparser__error(__this, (long)(__string_94 + 2));
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
	if ((Aparser__match_op(__this, (long)(__string_95 + 2)))==0) {
		Aparser__error(__this, (long)(__string_96 + 2));
		return 0;
	}
	Aclass__finish_expr(D___class);
	Aclass__finish_stm(D___class);
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

	if ((Aparser__match_op(__this, (long)(__string_97 + 2)))!=0) {
		Aclass__expr_op(D___class,Aclass__Cadd,D__lookahead);
	} else if ((Aparser__match_op(__this, (long)(__string_98 + 2)))!=0) {
		Aclass__expr_op(D___class,Aclass__Csub,D__lookahead);
	} else if ((Aparser__match_op(__this, (long)(__string_99 + 2)))!=0) {
		Aclass__expr_op(D___class,Aclass__Cmult,D__lookahead);
	} else if ((Aparser__match_op(__this, (long)(__string_100 + 2)))!=0) {
		Aclass__expr_op(D___class,Aclass__Cdiv,D__lookahead);
	} else if ((Aparser__match_op(__this, (long)(__string_101 + 2)))!=0) {
		Aclass__expr_op(D___class,Aclass__Cmodulo,D__lookahead);
	} else if ((Aparser__match_op(__this, (long)(__string_102 + 2)))!=0) {
		Aclass__expr_op(D___class,Aclass__Clogicaland,D__lookahead);
	} else if ((Aparser__match_op(__this, (long)(__string_103 + 2)))!=0) {
		Aclass__expr_op(D___class,Aclass__Clogicalor,D__lookahead);
	} else if ((Aparser__match_op(__this, (long)(__string_104 + 2)))!=0) {
		Aclass__expr_op(D___class,Aclass__Cequal,D__lookahead);
	} else if ((Aparser__match_op(__this, (long)(__string_105 + 2)))!=0) {
		Aclass__expr_op(D___class,Aclass__Cnotequal,D__lookahead);
	} else if ((Aparser__match_op(__this, (long)(__string_106 + 2)))!=0) {
		Aclass__expr_op(D___class,Aclass__Clargerequal,D__lookahead);
	} else if ((Aparser__match_op(__this, (long)(__string_107 + 2)))!=0) {
		Aclass__expr_op(D___class,Aclass__Clesserequal,D__lookahead);
	} else if ((Aparser__match_op(__this, (long)(__string_108 + 2)))!=0) {
		Aclass__expr_op(D___class,Aclass__Clarger,D__lookahead);
	} else if ((Aparser__match_op(__this, (long)(__string_109 + 2)))!=0) {
		Aclass__expr_op(D___class,Aclass__Clesser,D__lookahead);
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
	if ((Aparser__match_id(__this, (long)(__string_110 + 2)))!=0) {
		Aclass__expr_term(D___class,Aclass__Cthis,D__lookahead);
		Aparser__eat(__this);
	} else if ((Aparser__match_id(__this, (long)(__string_111 + 2)))!=0) {
		Aclass__expr_term(D___class,Aclass__Cnull,D__lookahead);
		Aparser__eat(__this);
	} else if ((Atoken__get_type(D__lookahead))==(Alexer__Cidentifier)) {
		id=D__lookahead;
		Aparser__eat(__this);
		if ((Aparser__match_op(__this, (long)(__string_112 + 2)))!=0) {
			Aclass__expr_open_index(D___class,Atoken__get_data(id),D__lookahead);
			Aparser__eat(__this);
			Aparser__push(__this, Aparser__Cterm2);
			Aparser__push(__this, Aparser__Cexpression);
		} else if ((Aparser__subrout_call(__this, id))!=0) {
		} else if ((Aparser__match_op(__this, (long)(__string_113 + 2)))!=0) {
			Aparser__eat(__this);
			if ((Atoken__get_type(D__lookahead))!=(Alexer__Cidentifier)) {
				Aparser__error(__this, (long)(__string_114 + 2));
				return 0;
			}
			Aclass__expr_constant(D___class,Atoken__get_data(id),Atoken__get_data(D__lookahead),D__lookahead);
			Aparser__eat(__this);
		} else {
			Aclass__expr_var(D___class,Atoken__get_data(id),D__lookahead);
		}
	} else if ((Atoken__get_type(D__lookahead))==(Alexer__Cquote)) {
		Aclass__expr_char_const(D___class,Atoken__get_data(D__lookahead),D__lookahead);
		Aparser__eat(__this);
	} else if ((Atoken__get_type(D__lookahead))==(Alexer__Cstring)) {
		Aclass__expr_str_const(D___class,Atoken__get_data(D__lookahead),D__lookahead);
		Aparser__eat(__this);
	} else if ((Atoken__get_type(D__lookahead))==(Alexer__Cnumber)) {
		Aclass__expr_int_const(D___class,Atoken__get_data(D__lookahead),D__lookahead);
		Aparser__eat(__this);
	} else if ((Aparser__match_op(__this, (long)(__string_115 + 2)))!=0) {
		Aclass__expr_op(D___class,Aclass__Cunaryminus,D__lookahead);
		Aparser__eat(__this);
		Aparser__push(__this, Aparser__Cterm);
	} else if ((Aparser__match_op(__this, (long)(__string_116 + 2)))!=0) {
		Aclass__expr_op(D___class,Aclass__Cunaryplus,D__lookahead);
		Aparser__eat(__this);
		Aparser__push(__this, Aparser__Cterm);
	} else if ((Aparser__match_op(__this, (long)(__string_117 + 2)))!=0) {
		Aclass__expr_op(D___class,Aclass__Clogicalnot,D__lookahead);
		Aparser__eat(__this);
		Aparser__push(__this, Aparser__Cterm);
	} else if ((Aparser__match_op(__this, (long)(__string_118 + 2)))!=0) {
		Aclass__expr_open_par(D___class);
		Aparser__eat(__this);
		Aparser__push(__this, Aparser__Cterm1);
		Aparser__push(__this, Aparser__Cexpression);
	} else {
		Aparser__error(__this, (long)(__string_119 + 2));
		return 0;
	}
	return 0;
}
long Aparser__subrout_call(long __this, long id)
{
	long id2;

	if ((Aparser__match_op(__this, (long)(__string_120 + 2)))!=0) {
		Aparser__sub_call(__this, 0,id);
		return 1;
	} else if ((Aparser__match_op(__this, (long)(__string_121 + 2)))!=0) {
		id2=id;
		Aparser__eat(__this);
		id=D__lookahead;
		Aparser__eat(__this);
		Aparser__sub_call(__this, id2,id);
		return 1;
	}
	return 0;
}
long Aparser__term1(long __this)
{

	Aparser__pop(__this);
	if ((Aparser__match_op(__this, (long)(__string_122 + 2)))!=0) {
		Aclass__expr_close_par(D___class);
		Aparser__eat(__this);
		return 0;
	}
	Aparser__error(__this, (long)(__string_123 + 2));
	return 0;
}
long Aparser__term2(long __this)
{

	Aparser__pop(__this);
	if ((Aparser__match_op(__this, (long)(__string_124 + 2)))!=0) {
		Aclass__expr_close_index(D___class);
		Aparser__eat(__this);
		return 0;
	}
	Aparser__error(__this, (long)(__string_125 + 2));
	return 0;
}
long Aparser__sub_call(long __this, long class_, long id)
{

	if ((Aparser__match_op(__this, (long)(__string_126 + 2)))==0) {
		Aparser__error(__this, (long)(__string_127 + 2));
		return 0;
	}
	Aparser__eat(__this);
	if (class_!=0) {
		Aclass__expr_begin_sub_call(D___class,Atoken__get_data(class_),Atoken__get_data(id),D__lookahead);
	} else {
		Aclass__expr_begin_sub_call(D___class,0,Atoken__get_data(id),D__lookahead);
	}
	Aparser__push(__this, Aparser__Csub_call1);
	if ((Aparser__match_op(__this, (long)(__string_128 + 2)))==0) {
		Aparser__push(__this, Aparser__Cexpr_list);
		Aparser__push(__this, Aparser__Cexpression);
		return 0;
	}
	Aclass__expr_finish_sub_call(D___class);
	return 0;
}
long Aparser__sub_call1(long __this)
{

	Aparser__pop(__this);
	if ((Aparser__match_op(__this, (long)(__string_129 + 2)))!=0) {
		Aclass__expr_finish_sub_call(D___class);
		Aparser__eat(__this);
		return 0;
	}
	Aparser__error(__this, (long)(__string_130 + 2));
	return 0;
}
long Aparser__expr_list(long __this)
{

	Aparser__pop(__this);
	if (D__status!=0) {
		D__status=0;
		return 0;
	}
	if ((Aparser__match_op(__this, (long)(__string_131 + 2)))!=0) {
		Aparser__eat(__this);
		Aclass__expr_next_expr(D___class,D__lookahead);
		Aparser__push(__this, Aparser__Cexpr_list1);
		Aparser__push(__this, Aparser__Cexpression);
	}
	return 0;
}
long Aparser__expr_list1(long __this)
{

	Aparser__pop(__this);
	if (D__status!=0) {
		return 0;
	}
	if ((Aparser__match_op(__this, (long)(__string_132 + 2)))!=0) {
		Aclass__expr_next_expr(D___class,D__lookahead);
		Aparser__eat(__this);
		Aparser__push(__this, Aparser__Cexpr_list1);
		Aparser__push(__this, Aparser__Cexpression);
	}
	return 0;
}
long Aparser__eat(long __this)
{

	Alexer__shift(D__lex);
	D__lookahead=Alexer__get_at(D__lex,0);
	if (D__lookahead==0) {
		D__lookstring=0;
		return 0;
	}
	while ((((Atoken__get_type(D__lookahead))==(Alexer__Cnewline)))||(((Atoken__get_type(D__lookahead))==(Alexer__Ccomment)))) {
		Alexer__shift(D__lex);
		D__lookahead=Alexer__get_at(D__lex,0);
	}
	D__lookstring=Atoken__get_data(D__lookahead);
	return 0;
}
long Aparser__match_id(long __this, long id)
{

	if ((Atoken__get_type(D__lookahead))!=(Alexer__Cidentifier)) {
		return 0;
	}
	if (id==0) {
		return 1;
	}
	if ((string__compare(D__lookstring,id))==0) {
		return 1;
	}
	return 0;
}
long Aparser__match_op(long __this, long id)
{

	if ((Atoken__get_type(D__lookahead))!=(Alexer__Coperator)) {
		return 0;
	}
	if ((string__compare(D__lookstring,id))==0) {
		return 1;
	}
	return 0;
}
long Aparser__match_newline(long __this)
{

	if ((Atoken__get_type(D__lookahead))==(Alexer__Cnewline)) {
		return 1;
	}
	return 0;
}
long Aparser__match_str(long __this, long id)
{
	long t;

	t=Atoken__get_type(D__lookahead);
	if (((t!=(Alexer__Cstring)))&&((t!=(Alexer__Cquote)))) {
		return 0;
	}
	if (((id==0))||(((string__compare(D__lookstring,id))==0))) {
		return 1;
	}
	return 0;
}
long Aparser__state_machine(long __this)
{
	long state;

	state=buffer__get_last(D___states);
	if (D__debug>0) {
		console__log(D__lookstring);
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
		Aparser__error(__this, (long)(__string_133 + 2));
		Alexer__shift(D__lex);
		D__status=-(1);
	}
	return 1;
}
#undef D___states
#undef D__lex
#undef D__lookahead
#undef D__lookstring
#undef D__status
#undef D__debug
#undef D___class
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
#define D__tok ((long*)__this)[0]
#define D__next ((long*)__this)[1]
#define D__prep_kind ((long*)__this)[2]
#define D__prep_type ((long*)__this)[3]
#define D__prep_type_id ((long*)__this)[4]
#define D__prep_name ((long*)__this)[5]
#define D__members ((long*)__this)[6]
#define D__member ((long*)__this)[7]
#define D__field_index ((long*)__this)[8]
#define D__statement ((long*)__this)[9]
#define D__stm_stack ((long*)__this)[10]
#define D__expression ((long*)__this)[11]
#define D__cur_expr ((long*)__this)[12]
#define D__expr_id ((long*)__this)[13]
long Aclass__new(long token)
{
	long __this;
	__this = std__alloc(D__Aclass___SIZE);
	((long*)__this)[-1] = D__Aclass___ID;

	D__tok=token;
	D__next=0;
	D__members=buffer__new(256);
	D__field_index=-(1);
	D__statement=0;
	D__stm_stack=buffer__new(2);
	D__expression=0;
	return __this;
}
long Aclass__dispose(long __this)
{

	buffer__dispose(D__members);
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

	return D__members;
}
long Aclass__get_nb_fields(long __this)
{

	return D__field_index+1;
}
long Aclass__set_next(long __this, long n)
{

	D__next=n;
	return 0;
}
long Aclass__get_next(long __this)
{

	return D__next;
}
long Aclass__get_name(long __this)
{

	return D__tok;
}
long Aclass__pad(long __this, long p)
{

	while (p>0) {
		p=p-1;
		console__log_str((long)(__string_134 + 2));
	}
	return 0;
}
long Aclass__prepare_kind(long __this, long kind_)
{

	D__prep_kind=kind_;
	D__prep_type=0;
	D__prep_type_id=0;
	D__prep_name=0;
	return 0;
}
long Aclass__prepare_type(long __this, long type_)
{

	D__prep_type=type_;
	return 0;
}
long Aclass__prepare_type_identifier(long __this, long id_)
{

	D__prep_type=Aclass__Cidentifier;
	D__prep_type_id=id_;
	return 0;
}
long Aclass__prepare_set_name(long __this, long id_)
{

	D__prep_name=id_;
	return 0;
}
long Aclass__valid_member_name(long __this)
{

	D__member=Amember__new(D__prep_kind,D__prep_type,D__prep_type_id,D__prep_name);
	if (D__prep_kind==(Aclass__Cfield)) {
		D__field_index=D__field_index+1;
		Amember__set_index(D__member,D__field_index);
	} else if (D__prep_kind==(Aclass__Cstatic)) {
	} else if (D__prep_kind==(Aclass__Cconst)) {
	} else {
	}
	buffer__push(D__members,D__member);
	return 0;
}
long Aclass__valid_param(long __this)
{

	Amember__add_param(D__member,D__prep_kind,D__prep_type,D__prep_type_id,D__prep_name);
	return 0;
}
long Aclass__valid_var(long __this)
{

	Amember__add_var(D__member,D__prep_kind,D__prep_type,D__prep_type_id,D__prep_name);
	return 0;
}
long Aclass__begin_else(long __this, long type_)
{

	Astatement__add_else(D__statement,type_);
	return 0;
}
long Aclass__begin_stm(long __this, long type_, long orig)
{
	long st;

	buffer__push(D__stm_stack,D__statement);
	st=Astatement__new(type_,D__statement,buffer__length(D__stm_stack));
	if (D__statement==0) {
		Amember__add_statement(D__member,st);
	} else {
		Astatement__add_statement(D__statement,st);
	}
	if (type_==(Aclass__Cdo)) {
		Aclass__begin_expr(__this, orig);
	} else if (type_==(Aclass__Clet)) {
		Aclass__begin_expr(__this, orig);
	}
	D__statement=st;
	return 0;
}
long Aclass__finish_stm(long __this)
{

	D__statement=buffer__pop(D__stm_stack);
	return 0;
}
long Aclass__finish_const(long __this, long initialiser_)
{

	Aclass__valid_member_name(__this);
	Amember__set_initial_value(D__member,initialiser_);
	return 0;
}
long Aclass__finish_subroutine(long __this)
{

	while ((buffer__length(D__stm_stack))>0) {
		buffer__pop(D__stm_stack);
	}
	return 0;
}
long Aclass__begin_expr(long __this, long orig)
{

	D__expression=Aexpr__new(Aclass__Croot,0,0);
	Aexpr__set_origin(D__expression,orig);
	D__cur_expr=D__expression;
	return 0;
}
long Aclass__finish_expr(long __this)
{

	if (D__expression!=0) {
		Astatement__set_expression(D__statement,D__expression);
	}
	D__expression=0;
	D__cur_expr=0;
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
		console__log((long)(__string_135 + 2));
		std__exit(-(1));
	}
	if (ex!=0) {
		Aexpr__set_origin(ex,orig);
		D__cur_expr=Aexpr__add(D__cur_expr,ex);
	}
	return 0;
}
long Aclass__expr_open_par(long __this)
{
	long ex;

	ex=Aexpr__new(Aclass__Cparenthesis,1000,Aclass__Clr);
	D__cur_expr=Aexpr__add(D__cur_expr,ex);
	Aexpr__set_precedence(ex,1);
	return 0;
}
long Aclass__expr_in_par(long __this)
{
	long ex;

	ex=Aexpr__close(D__cur_expr,Aclass__Cparenthesis);
	if (ex==0) {
		return 0;
	}
	return 1;
}
long Aclass__expr_close_par(long __this)
{

	D__cur_expr=Aexpr__close(D__cur_expr,Aclass__Cparenthesis);
	if (D__cur_expr==0) {
		Aclass__error(__this, (long)(__string_136 + 2));
	} else {
		Aexpr__set_precedence(D__cur_expr,1000);
	}
	return 0;
}
long Aclass__expr_open_index(long __this, long id_, long orig)
{
	long ex;

	Aclass__expr_var(__this, id_,orig);
	Aclass__expr_op(__this, Aclass__Cindex,orig);
	ex=Aexpr__new(Aclass__Cexpr,1000,Aclass__Clr);
	D__cur_expr=Aexpr__add(D__cur_expr,ex);
	Aexpr__set_precedence(ex,2);
	return 0;
}
long Aclass__expr_close_index(long __this)
{

	D__cur_expr=Aexpr__close(D__cur_expr,Aclass__Cindex);
	if (D__cur_expr==0) {
		Aclass__error(__this, (long)(__string_137 + 2));
	} else {
		Aexpr__set_precedence(D__cur_expr,1000);
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
	D__cur_expr=Aexpr__add(D__cur_expr,ex);
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

	D__cur_expr=Aexpr__close(D__cur_expr,Aclass__Ccall);
	if (D__cur_expr==0) {
		Aclass__error(__this, (long)(__string_138 + 2));
	} else {
		Aexpr__set_precedence(D__cur_expr,1000);
	}
	return 0;
}
long Aclass__expr_term(long __this, long term_, long orig)
{
	long ex;

	ex=Aexpr__new(term_,1000,Aclass__Clr);
	D__cur_expr=Aexpr__add(D__cur_expr,ex);
	Aexpr__set_origin(ex,orig);
	return 0;
}
long Aclass__expr_var(long __this, long name_, long orig)
{
	long ex;

	ex=Aexpr__new(Aclass__Cvar,900,0);
	D__cur_expr=Aexpr__add(D__cur_expr,ex);
	Aexpr__set_value(ex,name_);
	Aexpr__set_origin(ex,orig);
	return 0;
}
long Aclass__expr_int_const(long __this, long value_, long orig)
{
	long ex;

	ex=Aexpr__new(Aclass__Cint_const,900,0);
	D__cur_expr=Aexpr__add(D__cur_expr,ex);
	Aexpr__set_value(ex,value_);
	Aexpr__set_origin(ex,orig);
	return 0;
}
long Aclass__expr_char_const(long __this, long value_, long orig)
{
	long ex;

	ex=Aexpr__new(Aclass__Cchar_const,900,0);
	D__cur_expr=Aexpr__add(D__cur_expr,ex);
	Aexpr__set_value(ex,value_);
	Aexpr__set_origin(ex,orig);
	return 0;
}
long Aclass__expr_str_const(long __this, long value_, long orig)
{
	long ex;

	ex=Aexpr__new(Aclass__Cstr_const,900,0);
	D__cur_expr=Aexpr__add(D__cur_expr,ex);
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
	D__cur_expr=Aexpr__add(D__cur_expr,ex);
	Aexpr__set_value(ex,const_name_);
	return 0;
}
#undef D__tok
#undef D__next
#undef D__prep_kind
#undef D__prep_type
#undef D__prep_type_id
#undef D__prep_name
#undef D__members
#undef D__member
#undef D__field_index
#undef D__statement
#undef D__stm_stack
#undef D__expression
#undef D__cur_expr
#undef D__expr_id
// class Alexer
#define D___src ((long*)__this)[0]
#define D___str ((long*)__this)[1]
#define D___pool ((long*)__this)[2]
#define D__pos ((long*)__this)[3]
#define D__line ((long*)__this)[4]
#define D___files ((long*)__this)[5]
#define D___token ((long*)__this)[6]
#define D__type ((long*)__this)[7]
#define D__c ((long*)__this)[8]
#define D__len ((long*)__this)[9]
#define D__enable_escape ((long*)__this)[10]
#define D__in_string ((long*)__this)[11]
#define D__in_quote ((long*)__this)[12]
#define D__in_comment ((long*)__this)[13]
#define D__in_com_multi ((long*)__this)[14]
#define D__in_escape ((long*)__this)[15]
#define D__in_asm ((long*)__this)[16]
#define D__in_asm_multi ((long*)__this)[17]
#define D__in_number ((long*)__this)[18]
#define D__in_identifier ((long*)__this)[19]
#define D__in_space ((long*)__this)[20]
#define D__need_char ((long*)__this)[21]
long Alexer__new()
{
	long __this;
	__this = std__alloc(D__Alexer___SIZE);
	((long*)__this)[-1] = D__Alexer___ID;

	D___str=string__new(1024);
	D___token=string__new(256);
	D___pool=buffer__new(32);
	D___files=buffer__new(32);
	D__pos=0;
	D__line=1;
	D__c=0;
	D__len=0;
	D__enable_escape=0;
	D__need_char=1;
	D__in_string=0;
	D__in_quote=0;
	D__in_comment=0;
	D__in_com_multi=0;
	D__in_escape=0;
	D__in_asm=0;
	D__in_asm_multi=0;
	D__in_number=0;
	D__in_identifier=0;
	D__in_space=1;
	return __this;
}
long Alexer__dispose(long __this)
{

	buffer__dispose(D___pool);
	string__dispose(D___token);
	string__dispose(D___str);
	buffer__dispose(D___files);
	std__free(__this);
	return 0;
}
long Alexer__begin(long __this, long file_)
{

	D__pos=0;
	D__line=1;
	D___src=string__new(12);
	string__add(D___src,file_);
	buffer__push(D___files,D___src);
	return 0;
}
long Alexer__get_at(long __this, long x)
{

	return buffer__get_at(D___pool,x);
}
long Alexer__shift(long __this)
{

	buffer__shift(D___pool);
	return 0;
}
long Alexer__empty(long __this)
{

	return buffer__empty(D___pool);
}
long Alexer__set_enable_escape(long __this, long v)
{

	D__enable_escape=v;
	return 0;
}
long Alexer__add(long __this, long str_)
{
	long ns;

	if (D__len<0) {
		return 0;
	}
	if ((string__length(str_))<1) {
		Alexer__finish(__this);
		return 0;
	}
	if (D__pos<(string__length(D___str))) {
		ns=string__new(32);
		string__substr(D___str,D__pos,0,ns);
		string__add(ns,str_);
		string__dispose(D___str);
		D___str=ns;
		string__set(D___str,str_);
	} else {
		string__set(D___str,str_);
	}
	D__pos=0;
	D__len=string__length(D___str);
	if (D__need_char!=0) {
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
		if (D__need_char!=0) {
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

	if (D__pos>=D__len) {
		D__need_char=1;
		D__c='\0';
		return 0;
	}
	D__need_char=0;
	D__c=string__get_at(D___str,D__pos);
	D__pos=D__pos+1;
	return 1;
}
long Alexer__validate(long __this, long type_)
{
	long t;

	if (type_==(Alexer__Cnewline)) {
		D__line=D__line+1;
	}
	t=Atoken__new(type_,D___token,D__line,D___src);
	buffer__push(D___pool,t);
	D___token=string__new(3);
	return 0;
}
long Alexer__error(long __this, long msg)
{

	console__log_str((long)(__string_139 + 2));
	console__log_str(D___src);
	console__log_str((long)(__string_140 + 2));
	console__log_int(D__line);
	console__log_str((long)(__string_141 + 2));
	console__log_str(D___token);
	console__log_str((long)(__string_142 + 2));
	console__log(msg);
	D__len=-(1);
	return 0;
}
long Alexer__state(long __this)
{
	long l;
	long a;
	long b;
	long d;

	if (D__in_escape!=0) {
		if (D__enable_escape==0) {
			if (D__c!='\n') {
				string__add_char(D___token,92);
				D__in_escape=0;
				return 1;
			}
			D__line=D__line+1;
		} else if (D__c!='\n') {
			a=D__c;
			if (D__c=='0') {
				a=0;
			} else if (D__c=='n') {
				a='\n';
			} else if (D__c=='t') {
				a='\t';
			} else if (D__c=='b') {
				a='\b';
			} else {
				string__add_char(D___token,92);
			}
			string__add_char(D___token,a);
		} else {
			D__line=D__line+1;
		}
		Alexer__next(__this);
		D__in_escape=0;
		return 1;
	} else if (D__in_string!=0) {
		if (D__c==34) {
			D__in_string=0;
			Alexer__validate(__this, Alexer__Cstring);
		} else if (D__c==92) {
			D__in_escape=1;
		} else if (D__c=='\n') {
			Alexer__error(__this, (long)(__string_143 + 2));
			return 0;
		} else {
			string__add_char(D___token,D__c);
		}
		Alexer__next(__this);
		return 1;
	} else if (D__in_quote!=0) {
		if (D__c==39) {
			D__in_quote=0;
			Alexer__validate(__this, Alexer__Cquote);
		} else if (D__c==92) {
			D__in_escape=1;
		} else {
			string__add_char(D___token,D__c);
		}
		Alexer__next(__this);
		return 1;
	} else if (D__in_comment!=0) {
		if (D__in_comment==(-(1))) {
			if (D__c=='/') {
				D__in_comment=1;
				Alexer__next(__this);
				return 1;
			} else if (D__c=='*') {
				D__in_comment=0;
				D__in_com_multi=1;
				Alexer__next(__this);
				return 1;
			}
			D__in_comment=0;
			string__add_char(D___token,'/');
			return 1;
		} else if (D__in_comment==1) {
			if (D__c=='#') {
				D__in_asm=1;
				D__in_comment=0;
				Alexer__next(__this);
				return 1;
			}
			D__in_comment=2;
		}
		if (D__c=='\n') {
			D__in_comment=0;
			Alexer__validate(__this, Alexer__Ccomment);
			Alexer__validate(__this, Alexer__Cnewline);
		}
		if (D__c=='\0') {
			return 0;
		}
		Alexer__next(__this);
		return 1;
	} else if (D__in_com_multi!=0) {
		if (D__in_com_multi==1) {
			if (D__c=='#') {
				D__in_asm_multi=2;
				D__in_com_multi=0;
				Alexer__next(__this);
				return 1;
			}
			D__in_com_multi=2;
		} else if (D__in_com_multi==2) {
			if (D__c=='*') {
				D__in_com_multi=3;
				Alexer__next(__this);
				return 1;
			}
		} else if (D__in_com_multi==3) {
			if (D__c=='/') {
				D__in_com_multi=0;
				Alexer__validate(__this, Alexer__Ccomment);
				Alexer__next(__this);
				return 1;
			}
			D__in_com_multi=2;
		}
		Alexer__next(__this);
		return 1;
	} else if (D__in_asm!=0) {
		if (D__c=='\n') {
			Alexer__validate(__this, Alexer__Casm);
			Alexer__validate(__this, Alexer__Cnewline);
			D__in_asm=0;
			Alexer__next(__this);
			return 1;
		}
		if (D__c=='\0') {
			return 0;
		}
		string__add_char(D___token,D__c);
		Alexer__next(__this);
		return 1;
	} else if (D__in_asm_multi!=0) {
		if (D__in_asm_multi==2) {
			if (D__c=='*') {
				D__in_asm_multi=3;
				Alexer__next(__this);
				return 1;
			}
		} else if (D__in_asm_multi==3) {
			if (D__c=='/') {
				D__in_asm_multi=0;
				Alexer__validate(__this, Alexer__Casm);
				Alexer__next(__this);
				return 1;
			}
			D__in_asm_multi=2;
		}
		string__add_char(D___token,D__c);
		Alexer__next(__this);
		return 1;
	} else if (D__in_number!=0) {
		if ((Alexer__is_digit(__this, D__c))!=0) {
			string__add_char(D___token,D__c);
			Alexer__next(__this);
		} else {
			D__in_number=0;
			Alexer__validate(__this, Alexer__Cnumber);
		}
		return 1;
	} else if (D__in_identifier!=0) {
		while ((((D__c=='_'))||(((Alexer__is_letter(__this, D__c))!=0)))||(((Alexer__is_digit(__this, D__c))!=0))) {
			string__add_char(D___token,D__c);
			if ((Alexer__next(__this))==0) {
				return 1;
			}
		}
		Alexer__validate(__this, Alexer__Cidentifier);
		D__in_identifier=0;
		return 1;
	} else if (D__in_space!=0) {
		while ((Alexer__is_space(__this, D__c))!=0) {
			if (D__c=='\n') {
				Alexer__validate(__this, Alexer__Cnewline);
			}
			if ((Alexer__next(__this))==0) {
				return 1;
			}
		}
		D__in_space=0;
		return 1;
	} else {
		l=string__length(D___token);
		if ((Alexer__is_space(__this, D__c))!=0) {
			if (l!=0) {
				Alexer__validate(__this, Alexer__Coperator);
			}
			D__in_space=1;
			return 1;
		} else if (l==0) {
			if ((Alexer__is_digit(__this, D__c))!=0) {
				string__add_char(D___token,D__c);
				Alexer__next(__this);
				D__in_number=1;
				return 1;
			} else if (((D__c=='_'))||(((Alexer__is_letter(__this, D__c))!=0))) {
				string__add_char(D___token,D__c);
				Alexer__next(__this);
				D__in_identifier=1;
				return 1;
			} else if (D__c==39) {
				Alexer__next(__this);
				D__in_quote=1;
				return 1;
			} else if (D__c=='"') {
				Alexer__next(__this);
				D__in_string=1;
				return 1;
			} else if ((D__c=='/')) {
				Alexer__next(__this);
				D__in_comment=-(1);
				return 1;
			}
			string__add_char(D___token,D__c);
			Alexer__next(__this);
			return 1;
		} else if (l==1) {
			a=string__get_at(D___token,0);
			if (D__c=='=') {
				if (((((((((((((a=='+'))||((a=='-')))||((a==':')))||((a=='*')))||((a=='/')))||((a=='%')))||((a=='&')))||((a=='^')))||((a=='|')))||((a=='>')))||((a=='<')))||((a=='~'))) {
					string__add_char(D___token,D__c);
					Alexer__validate(__this, Alexer__Coperator);
					Alexer__next(__this);
					return 1;
				} else if (((a=='='))||((a=='!'))) {
					string__add_char(D___token,D__c);
					Alexer__next(__this);
					return 1;
				}
			} else if (((((a=='+'))&&((D__c=='+')))||(((((a=='-'))&&((D__c=='>')))||(((((a==':'))&&((D__c==':')))||(((((a=='|'))&&((D__c=='|')))||(((((a=='&'))&&((D__c=='&')))||(((((a=='.'))&&((D__c=='$')))||((((a=='-'))&&((D__c=='-')))))))))))))))) {
				string__add_char(D___token,D__c);
				Alexer__validate(__this, Alexer__Coperator);
				Alexer__next(__this);
				return 1;
			} else if (((((a=='>'))&&((D__c=='>')))||(((((a=='.'))&&((D__c=='.')))||((((a=='<'))&&((D__c=='<')))))))) {
				string__add_char(D___token,D__c);
				Alexer__next(__this);
				return 1;
			}
			Alexer__validate(__this, Alexer__Coperator);
			return 1;
		} else if (l==2) {
			a=string__get_at(D___token,0);
			b=string__get_at(D___token,1);
			if ((((((a=='!'))&&((b=='=')))&&((D__c=='=')))||((((((a=='='))&&((b=='=')))&&((D__c=='=')))||((((((a=='>'))&&((b=='>')))&&((D__c=='=')))||((((((a=='.'))&&((b=='.')))&&((D__c=='.')))||(((((a=='<'))&&((b=='<')))&&((D__c=='=')))))))))))) {
				string__add_char(D___token,D__c);
				Alexer__validate(__this, Alexer__Coperator);
				Alexer__next(__this);
				return 1;
			} else if (((((a=='>'))&&((b=='>')))&&((D__c=='>')))) {
				string__add_char(D___token,D__c);
				Alexer__next(__this);
				return 1;
			}
			Alexer__validate(__this, Alexer__Coperator);
			return 1;
		} else {
			a=string__get_at(D___token,0);
			b=string__get_at(D___token,1);
			d=string__get_at(D___token,2);
			if (((((a=='>'))&&((b=='>')))&&((d=='>')))&&((D__c=='='))) {
				string__add_char(D___token,D__c);
				Alexer__validate(__this, Alexer__Coperator);
				Alexer__next(__this);
				return 1;
			}
			Alexer__validate(__this, Alexer__Coperator);
			return 1;
		}
	}
	console__log((long)(__string_144 + 2));
	return 0;
}
long Alexer__finish(long __this)
{

	if ((string__length(D___token))>0) {
		Alexer__error(__this, (long)(__string_145 + 2));
	}
	Alexer__validate(__this, Alexer__Cend);
	return 0;
}
#undef D___src
#undef D___str
#undef D___pool
#undef D__pos
#undef D__line
#undef D___files
#undef D___token
#undef D__type
#undef D__c
#undef D__len
#undef D__enable_escape
#undef D__in_string
#undef D__in_quote
#undef D__in_comment
#undef D__in_com_multi
#undef D__in_escape
#undef D__in_asm
#undef D__in_asm_multi
#undef D__in_number
#undef D__in_identifier
#undef D__in_space
#undef D__need_char
// class file
#define D___folder ((long*)__this)[0]
#define D__fs_cb ((long*)__this)[1]
long file__new(long folder, long fscb)
{
	long __this;
	__this = std__alloc(D__file___SIZE);
	((long*)__this)[-1] = D__file___ID;

	D___folder=string__to_string(folder);
	D__fs_cb=fscb;
	return __this;
}
long file__dispose(long __this)
{

	response__clear(D__fs_cb);
	string__dispose(D___folder);
	std__free(__this);
	return 0;
}
long file__mkfolder(long __this)
{

	response__clear(D__fs_cb);
	std__mkfolder(D__fs_cb);
	return 0;
}
long file__mkdir(long __this, long name)
{

	response__clear(D__fs_cb);
	std__mkdir(D___folder,name,D__fs_cb);
	return 0;
}
long file__read(long __this, long name, long seek, long size_)
{

	response__clear(D__fs_cb);
	std__read(D___folder,name,seek,size_,D__fs_cb);
	return 0;
}
long file__write(long __this, long name, long data, long seek, long size)
{

	response__clear(D__fs_cb);
	std__write(D___folder,name,data,seek,size,D__fs_cb);
	return 0;
}
long file__filesize(long __this, long name)
{

	response__clear(D__fs_cb);
	std__filesize(D___folder,name,D__fs_cb);
	return 0;
}
long file__scandir(long __this, long name)
{

	response__clear(D__fs_cb);
	std__scandir(D___folder,name,D__fs_cb);
	return 0;
}
long file__rmdir(long __this, long name)
{

	response__clear(D__fs_cb);
	std__rmdir(D___folder,name,D__fs_cb);
	return 0;
}
long file__unlink(long __this, long name)
{

	response__clear(D__fs_cb);
	std__unlink(D___folder,name,D__fs_cb);
	return 0;
}
#undef D___folder
#undef D__fs_cb
// class hash
#define D___arr ((long*)__this)[0]
#define D__size ((long*)__this)[1]
long hash__new(long size_)
{
	long i;
	long __this;
	__this = std__alloc(D__hash___SIZE);
	((long*)__this)[-1] = D__hash___ID;

	D__size=size_;
	D___arr=array__new(D__size);
	i=0;
	while (i<size_) {
		((long*)D___arr)[i]=0;
		i=i+1;
	}
	return __this;
}
long hash__dispose(long __this)
{

	array__dispose(D___arr);
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
	h=h-((((h/D__size))*D__size));
	old=((long*)D___arr)[h];
	if (old==0) {
		cur=array__new(4);
		((long*)cur)[hash__Cnext]=0;
		((long*)D___arr)[h]=cur;
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
					((long*)D___arr)[h]=cur;
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
				((long*)D___arr)[h]=cur;
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
			((long*)D___arr)[h]=cur;
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
	h=h-((((h/D__size))*D__size));
	next=((long*)D___arr)[h];
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
#undef D___arr
#undef D__size
// class Atoken
#define D__type ((long*)__this)[0]
#define D___data ((long*)__this)[1]
#define D__line ((long*)__this)[2]
#define D__file_ ((long*)__this)[3]
long Atoken__new(long type1, long _data1, long line1, long file1)
{
	long __this;
	__this = std__alloc(D__Atoken___SIZE);
	((long*)__this)[-1] = D__Atoken___ID;

	D__type=type1;
	D___data=_data1;
	D__line=line1;
	D__file_=file1;
	return __this;
}
long Atoken__dispose(long __this)
{

	string__dispose(D___data);
	std__free(__this);
	return 0;
}
long Atoken__get_data(long __this)
{

	return D___data;
}
long Atoken__get_type(long __this)
{

	return D__type;
}
long Atoken__get_line(long __this)
{

	return D__line;
}
long Atoken__get_file(long __this)
{

	return D__file_;
}
#undef D__type
#undef D___data
#undef D__line
#undef D__file_
// class string
#define D___str ((long*)__this)[0]
#define D__size ((long*)__this)[1]
long string__new(long alloc)
{
	long __this;
	__this = std__alloc(D__string___SIZE);
	((long*)__this)[-1] = D__string___ID;

	D___str=std__stralloc(alloc+1);
	D__size=alloc;
	return __this;
}
long string__dispose(long __this)
{

	std__strfree(D___str);
	std__free(__this);
	return 0;
}
long string__get_buf(long __this)
{

	return D___str;
}
long string__get_size(long __this)
{

	return D__size;
}
long string__set_size(long __this, long ns)
{
	long ops;

	if (D__size>ns) {
		return 0;
	}
	ops=std__stralloc(ns+1);
	std__strcat(ops,D___str,ns);
	std__strfree(D___str);
	D___str=ops;
	D__size=ns;
	return 0;
}
long string__length(long __this)
{

	return std__strlen(D___str);
}
long string__set_int(long __this, long num)
{

	return std__str_set_int(D___str,D__size,num);
}
long string__set(long __this, long src)
{
	long sl;

	sl=std__strlen(string__get_buf(src));
	if (D__size<sl) {
		std__strfree(D___str);
		D___str=std__stralloc(sl+1);
		D__size=sl;
	}
	std__str_set_at(D___str,0,'\0');
	std__strcat(D___str,string__get_buf(src),sl);
	return 0;
}
long string__add_char(long __this, long num)
{
	long ops;
	long sl;
	long tl;
	long ns;
	long i;

	sl=6;
	tl=std__strlen(D___str);
	ns=(sl+tl)+1;
	i=0;
	if (D__size<=ns) {
		ns=ns+8;
		ops=std__stralloc(ns);
		std__strcat(ops,D___str,ns);
		std__strfree(D___str);
		D___str=ops;
		D__size=ns;
	}
	i=tl;
	std__str_set_at(D___str,i,num);
	i=i+1;
	std__str_set_at(D___str,i,'\0');
	return 0;
}
long string__add(long __this, long src)
{
	long ops;
	long sl;
	long tl;
	long ns;

	sl=std__strlen(string__get_buf(src));
	tl=std__strlen(D___str);
	ns=(sl+tl)+1;
	ops=std__stralloc(ns);
	std__strcat(ops,D___str,ns);
	std__strcat(ops,string__get_buf(src),ns);
	std__strfree(D___str);
	D___str=ops;
	D__size=ns;
	return 0;
}
long string__indexof(long __this, long start_pos, long needle)
{

	return std__strindex(D___str,start_pos,string__get_buf(needle));
}
long string__substr(long __this, long start_pos, long length_, long result)
{
	long ops;
	long len;

	len=std__strlen(D___str);
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
		string__set(result,(long)(__string_146 + 2));
		return 0;
	}
	string__set_size(result,length_+1);
	ops=string__get_buf(result);
	std__str_set_at(ops,0,'\0');
	std__strsub(ops,start_pos,D___str,length_);
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
	long l;
	long sign;
	long v;
	long c;

	l=0;
	sign=1;
	if (D__size==0) {
		return 0;
	}
	v=0;
	if ((std__str_get_at(D___str,0))=='-') {
		sign=-(1);
		l=1;
	} else if ((std__str_get_at(D___str,0))=='+') {
		l=1;
	}
	while (l<D__size) {
		c=std__str_get_at(D___str,l);
		if (c=='\0') {
			l=D__size;
		} else if (((c>='0'))&&((c<='9'))) {
			v=v*10;
			v=v+((c-'0'));
		} else {
			l=D__size;
		}
		l=l+1;
	}
	return v*sign;
}
long string__compare(long __this, long other)
{

	return std__strcmp(D___str,string__get_buf(other));
}
long string__get_hash(long __this)
{

	return std__strhash(D___str);
}
long string__get_at(long __this, long at)
{

	if (((at<D__size))&&((D__size>=0))) {
		return std__str_get_at(D___str,at);
	}
	return '\0';
}
long string__set_at(long __this, long at, long v)
{

	if (((at<D__size))&&((D__size>=0))) {
		std__str_set_at(D___str,at,v);
	}
	return 0;
}
#undef D___str
#undef D__size
// class Aemmiter
#define D___data ((long*)__this)[0]
#define D___head ((long*)__this)[1]
#define D__clas ((long*)__this)[2]
#define D__class_name ((long*)__this)[3]
#define D__cur_memb ((long*)__this)[4]
#define D___proc ((long*)__this)[5]
#define D___stk ((long*)__this)[6]
#define D___expr_stk ((long*)__this)[7]
#define D__token1 ((long*)__this)[8]
#define D__token2 ((long*)__this)[9]
#define D__pass ((long*)__this)[10]
#define D___virtuals ((long*)__this)[11]
#define D__class_id ((long*)__this)[12]
#define D__string_id ((long*)__this)[13]
long Aemmiter__new()
{
	long __this;
	__this = std__alloc(D__Aemmiter___SIZE);
	((long*)__this)[-1] = D__Aemmiter___ID;

	D___proc=buffer__new(100);
	D___stk=buffer__new(100);
	D___expr_stk=buffer__new(100);
	D___data=string__new(1);
	D___head=string__new(1);
	D___virtuals=buffer__new(100);
	D__token1=0;
	D__token2=0;
	D__class_id=0;
	D__string_id=0;
	return __this;
}
long Aemmiter__dispose(long __this)
{

	buffer__dispose(D___proc);
	buffer__dispose(D___stk);
	string__dispose(D___data);
	buffer__dispose(D___expr_stk);
	std__free(__this);
	return 0;
}
long Aemmiter__emmit(long __this, long par)
{

	D__clas=Aparser__get_next(par);
	while (D__clas!=0) {
		Aemmiter__gen_class(__this);
		D__clas=Aclass__get_next(D__clas);
	}
	return 1;
}
long Aemmiter__get_head(long __this)
{

	return D___head;
}
long Aemmiter__get_data(long __this)
{

	return D___data;
}
long Aemmiter__gen_class(long __this)
{
	long to;
	long s;
	long mem;
	long i;
	long l;
	long m;

	to=Aclass__get_name(D__clas);
	D__class_name=Atoken__get_data(to);
	string__add(D___data,(long)(__string_147 + 2));
	string__add(D___data,D__class_name);
	string__add(D___data,(long)(__string_148 + 2));
	s=string__new(4);
	string__set_int(s,Aclass__get_nb_fields(D__clas));
	string__add(D___head,(long)(__string_149 + 2));
	string__add(D___head,D__class_name);
	string__add(D___head,(long)(__string_150 + 2));
	string__add(D___head,s);
	string__add(D___head,(long)(__string_151 + 2));
	D__class_id=D__class_id+1;
	string__set_int(s,D__class_id);
	string__add(D___head,(long)(__string_152 + 2));
	string__add(D___head,D__class_name);
	string__add(D___head,(long)(__string_153 + 2));
	string__add(D___head,s);
	string__add(D___head,(long)(__string_154 + 2));
	string__dispose(s);
	D__pass=0;
	while (D__pass<3) {
		mem=Aclass__get_members(D__clas);
		l=buffer__length(mem);
		i=0;
		while (i<l) {
			m=buffer__get_at(mem,i);
			Aemmiter__gen_member(__this, m);
			i=i+1;
		}
		D__pass=D__pass+1;
	}
	return 0;
}
long Aemmiter__gen_member(long __this, long mb)
{
	long k;
	long str;

	str=string__new(8);
	k=Amember__get_kind(mb);
	if (D__pass==0) {
		Aemmiter__pass_0(__this, str,mb,k);
		Aemmiter__pass_1(__this, str,mb,k);
		Aemmiter__pass_2(__this, str,mb,k);
	} else if (D__pass==1) {
		Aemmiter__pass_3(__this, str,mb,k);
	} else if (D__pass==2) {
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

	string__add(D___data,(long)(__string_155 + 2));
	string__add(D___data,Avirtual__get_class_name(v));
	string__add(D___data,(long)(__string_156 + 2));
	params=Amember__get_params(mb);
	string__add(D___data,Avirtual__get_class_name(v));
	string__add(D___data,(long)(__string_157 + 2));
	string__add(D___data,Amember__get_name_string(mb));
	string__add(D___data,(long)(__string_158 + 2));
	if (params!=0) {
		l=buffer__length(params);
		i=0;
		while (i<l) {
			param=buffer__get_at(params,i);
			string__add(D___data,(long)(__string_159 + 2));
			tok=Amember__get_name(param);
			string__add(D___data,Atoken__get_data(tok));
			i=i+1;
		}
	}
	string__add(D___data,(long)(__string_160 + 2));
	return 0;
}
long Aemmiter__gen_virtuals(long __this)
{
	long i;
	long v;
	long mb;

	i=buffer__length(D___virtuals);
	while (i>0) {
		i=i-1;
		v=buffer__get_at(D___virtuals,i);
		mb=Avirtual__get_member(v);
		Aemmiter__gen_method_decl(__this, D___head,(long)(__string_161 + 2),Amember__get_name_string(mb),mb,Aclass__Cvirtual);
		string__add(D___head,(long)(__string_162 + 2));
		Aemmiter__gen_method_decl(__this, D___data,(long)(__string_163 + 2),Amember__get_name_string(mb),mb,Aclass__Cvirtual);
		string__add(D___data,(long)(__string_164 + 2));
		string__add(D___data,(long)(__string_165 + 2));
		string__add(D___data,(long)(__string_166 + 2));
		while (v!=0) {
			Aemmiter__gen_conditional_call(__this, v,mb);
			v=Avirtual__get_next(v);
		}
		string__add(D___data,(long)(__string_167 + 2));
		string__add(D___data,(long)(__string_168 + 2));
	}
	return 0;
}
long Aemmiter__pass_0(long __this, long str, long mb, long k)
{
	long t;
	long ty;

	if (k==(Aclass__Cconst)) {
		string__add(D___head,(long)(__string_169 + 2));
		string__add(D___head,D__class_name);
		string__add(D___head,(long)(__string_170 + 2));
		string__add(D___head,Amember__get_name_string(mb));
		string__add(D___head,(long)(__string_171 + 2));
		t=Amember__get_initial_value(mb);
		ty=Atoken__get_type(t);
		if (ty==(Alexer__Cstring)) {
			string__add(D___head,(long)(__string_172 + 2));
			string__add_char(D___head,34);
			string__add(D___head,Atoken__get_data(t));
			string__add_char(D___head,34);
			string__add(D___head,(long)(__string_173 + 2));
		} else if (ty==(Alexer__Cquote)) {
			string__add_char(D___head,39);
			string__add(D___head,Atoken__get_data(t));
			string__add_char(D___head,39);
		} else {
			string__add(D___head,Atoken__get_data(t));
		}
		string__add(D___head,(long)(__string_174 + 2));
	}
	if (k==(Aclass__Cfield)) {
		string__set_int(str,Amember__get_index(mb));
		string__add(D___data,(long)(__string_175 + 2));
		string__add(D___data,Amember__get_name_string(mb));
		string__add(D___data,(long)(__string_176 + 2));
		string__add(D___data,str);
		string__add(D___data,(long)(__string_177 + 2));
	}
	return 0;
}
long Aemmiter__pass_1(long __this, long str, long mb, long k)
{

	if (k==(Aclass__Cstatic)) {
		string__add(D___data,(long)(__string_178 + 2));
		string__add(D___data,D__class_name);
		string__add(D___data,(long)(__string_179 + 2));
		string__add(D___data,Amember__get_name_string(mb));
		string__add(D___data,(long)(__string_180 + 2));
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
		string__add(D___data,(long)(__string_181 + 2));
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

	vars=Amember__get_params(D__cur_memb);
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
	vars=Aclass__get_members(D__clas);
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

	vars=Amember__get_vars(D__cur_memb);
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
	long pref;

	s=string__new(8);
	ex2=buffer__pop(D___expr_stk);
	ex1=buffer__pop(D___expr_stk);
	stri=Aexpr__get_value(ex1);
	obj=Aexpr__get_value2(ex1);
	if (obj==0) {
		v=Aemmiter__find_meth_virt(__this, stri);
		if ((v!=0)) {
			s=string__new(8);
			string__add(s,D__class_name);
			string__add(s,(long)(__string_182 + 2));
			string__add(s,stri);
			p=Aexpr__get_value(ex2);
			if ((string__length(p))>0) {
				string__add(s,(long)(__string_183 + 2));
				string__add(s,p);
				string__add(s,(long)(__string_184 + 2));
			} else {
				string__add(s,(long)(__string_185 + 2));
			}
			Aexpr__set_value(expr,s);
			buffer__push(D___expr_stk,expr);
			return 0;
		}
		Aemmiter__error(__this, Aexpr__get_origin(expr),(long)(__string_186 + 2));
		return 0;
	}
	pref=(long)(__string_187 + 2);
	v=Aemmiter__find_local(__this, obj);
	if (v==0) {
		v=Aemmiter__find_param(__this, obj);
	}
	if (v==0) {
		v=Aemmiter__find_field(__this, obj);
		if (v!=0) {
			pref=(long)(__string_188 + 2);
		}
	}
	if (v!=0) {
		tok=Amember__get_type_id(v);
		if (tok==0) {
			console__log(obj);
			console__log(Amember__get_name_string(v));
			Aemmiter__error(__this, Aexpr__get_origin(ex1),(long)(__string_189 + 2));
			return 0;
		}
		s=string__new(8);
		string__add(s,Atoken__get_data(tok));
		string__add(s,(long)(__string_190 + 2));
		string__add(s,Aexpr__get_value(ex1));
		p=Aexpr__get_value(ex2);
		string__add(s,(long)(__string_191 + 2));
		string__add(s,pref);
		string__add(s,Aexpr__get_value2(ex1));
		if ((string__length(p))>0) {
			string__add(s,(long)(__string_192 + 2));
			string__add(s,Aexpr__get_value(ex2));
		}
		string__add(s,(long)(__string_193 + 2));
		Aexpr__set_value(expr,s);
		buffer__push(D___expr_stk,expr);
		return 0;
	}
	string__add(s,obj);
	string__add(s,(long)(__string_194 + 2));
	string__add(s,Aexpr__get_value(ex1));
	string__add(s,(long)(__string_195 + 2));
	string__add(s,Aexpr__get_value(ex2));
	string__add(s,(long)(__string_196 + 2));
	Aexpr__set_value(expr,s);
	buffer__push(D___expr_stk,expr);
	return 0;
}
long Aemmiter__expr_gen_sub_expr(long __this, long expr)
{
	long s;

	if ((Aexpr__get_right(expr))==0) {
		s=string__new(8);
		Aexpr__set_value(expr,s);
		buffer__push(D___expr_stk,expr);
	}
	return 0;
}
long Aemmiter__expr_gen_comma(long __this, long expr)
{
	long ex1;
	long ex2;
	long s;

	ex2=buffer__pop(D___expr_stk);
	ex1=buffer__pop(D___expr_stk);
	s=string__new(8);
	string__add(s,Aexpr__get_value(ex1));
	string__add(s,(long)(__string_197 + 2));
	string__add(s,Aexpr__get_value(ex2));
	Aexpr__set_value(expr,s);
	buffer__push(D___expr_stk,expr);
	return 0;
}
long Aemmiter__expr_gen_index(long __this, long expr)
{
	long ex1;
	long ex2;
	long s;

	ex2=buffer__pop(D___expr_stk);
	ex1=buffer__pop(D___expr_stk);
	s=string__new(8);
	string__add(s,(long)(__string_198 + 2));
	string__add(s,Aexpr__get_value(ex1));
	string__add(s,(long)(__string_199 + 2));
	string__add(s,Aexpr__get_value(ex2));
	string__add(s,(long)(__string_200 + 2));
	Aexpr__set_value(expr,s);
	buffer__push(D___expr_stk,expr);
	return 0;
}
long Aemmiter__expr_gen_par(long __this, long expr)
{
	long ex1;
	long s;

	ex1=buffer__pop(D___expr_stk);
	s=string__new(8);
	string__add(s,(long)(__string_201 + 2));
	string__add(s,Aexpr__get_value(ex1));
	string__add(s,(long)(__string_202 + 2));
	Aexpr__set_value(expr,s);
	buffer__push(D___expr_stk,expr);
	return 0;
}
long Aemmiter__expr_gen_constant(long __this, long expr)
{
	long ex1;
	long ex2;
	long s;

	ex2=buffer__pop(D___expr_stk);
	ex1=buffer__pop(D___expr_stk);
	s=string__new(8);
	string__add(s,Aexpr__get_value(ex1));
	string__add(s,(long)(__string_203 + 2));
	string__add(s,Aexpr__get_value(ex2));
	Aexpr__set_value(expr,s);
	buffer__push(D___expr_stk,expr);
	return 0;
}
long Aemmiter__expr_gen_dot(long __this, long expr)
{
	long ex1;
	long ex2;

	ex2=buffer__pop(D___expr_stk);
	ex1=buffer__pop(D___expr_stk);
	Aexpr__set_value2(expr,Aexpr__get_value(ex1));
	Aexpr__set_value(expr,Aexpr__get_value(ex2));
	buffer__push(D___expr_stk,expr);
	return 0;
}
long Aemmiter__expr_gen_str_const(long __this, long expr)
{
	long s;
	long s2;

	s=string__new(8);
	s2=string__new(8);
	D__string_id=D__string_id+1;
	string__set_int(s2,D__string_id);
	string__add(D___head,(long)(__string_204 + 2));
	string__add(D___head,s2);
	string__add(D___head,(long)(__string_205 + 2));
	string__add_char(D___head,34);
	string__add(D___head,Aexpr__get_value(expr));
	string__add_char(D___head,34);
	string__add(D___head,(long)(__string_206 + 2));
	string__add(D___head,(long)(__string_207 + 2));
	string__add(D___head,s2);
	string__add(D___head,(long)(__string_208 + 2));
	string__add(D___head,(long)(__string_209 + 2));
	string__add(D___head,s2);
	string__add(D___head,(long)(__string_210 + 2));
	string__add(s,(long)(__string_211 + 2));
	string__add(s,s2);
	string__add(s,(long)(__string_212 + 2));
	Aexpr__set_value(expr,s);
	buffer__push(D___expr_stk,expr);
	string__dispose(s2);
	return 0;
}
long Aemmiter__expr_gen_char_const(long __this, long expr)
{
	long s;

	s=string__new(8);
	string__add(s,(long)(__string_213 + 2));
	string__add(s,Aexpr__get_value(expr));
	string__add(s,(long)(__string_214 + 2));
	Aexpr__set_value(expr,s);
	buffer__push(D___expr_stk,expr);
	return 0;
}
long Aemmiter__expr_gen0(long __this, long expr, long op)
{
	long s;

	s=string__new(8);
	string__add(s,op);
	Aexpr__set_value(expr,s);
	buffer__push(D___expr_stk,expr);
	return 0;
}
long Aemmiter__expr_gen1(long __this, long expr, long op)
{
	long ex1;
	long s;

	ex1=buffer__pop(D___expr_stk);
	s=string__new(8);
	string__add(s,op);
	string__add(s,(long)(__string_215 + 2));
	string__add(s,Aexpr__get_value(ex1));
	string__add(s,(long)(__string_216 + 2));
	Aexpr__set_value(expr,s);
	buffer__push(D___expr_stk,expr);
	return 0;
}
long Aemmiter__expr_gen_assign(long __this, long expr, long op)
{
	long ex1;
	long ex2;
	long s;

	ex2=buffer__pop(D___expr_stk);
	ex1=buffer__pop(D___expr_stk);
	s=string__new(8);
	string__add(s,Aexpr__get_value(ex1));
	string__add(s,op);
	string__add(s,Aexpr__get_value(ex2));
	Aexpr__set_value(expr,s);
	buffer__push(D___expr_stk,expr);
	return 0;
}
long Aemmiter__expr_gen2(long __this, long expr, long op)
{
	long ex1;
	long ex2;
	long s;
	long oper;

	ex2=buffer__pop(D___expr_stk);
	ex1=buffer__pop(D___expr_stk);
	s=string__new(8);
	oper=Aexpr__get_op(ex1);
	if (oper>(Aclass__Croot)) {
		string__add(s,(long)(__string_217 + 2));
	}
	string__add(s,Aexpr__get_value(ex1));
	if (oper>(Aclass__Croot)) {
		string__add(s,(long)(__string_218 + 2));
	}
	string__add(s,op);
	oper=Aexpr__get_op(ex2);
	if (oper>(Aclass__Croot)) {
		string__add(s,(long)(__string_219 + 2));
	}
	string__add(s,Aexpr__get_value(ex2));
	if (oper>(Aclass__Croot)) {
		string__add(s,(long)(__string_220 + 2));
	}
	Aexpr__set_value(expr,s);
	buffer__push(D___expr_stk,expr);
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
		buffer__push(D___expr_stk,expr);
		return 0;
	}
	v=Aemmiter__find_local(__this, stri);
	if (v!=0) {
		buffer__push(D___expr_stk,expr);
		return 0;
	}
	v=Aemmiter__find_param(__this, stri);
	if (v!=0) {
		buffer__push(D___expr_stk,expr);
		return 0;
	}
	ex=Aexpr__get_parent(expr);
	v=0;
	if ((Aexpr__get_op(ex))!=(Aclass__Cdot)) {
		v=Aemmiter__find_member(__this, stri);
	}
	if (((v!=0))&&(((Amember__get_kind(v))==(Aclass__Cfield)))) {
		s=string__new(8);
		string__add(s,(long)(__string_221 + 2));
		string__add(s,stri);
		Aexpr__set_value(expr,s);
		buffer__push(D___expr_stk,expr);
		return 0;
	}
	v=Aemmiter__find_static(__this, stri);
	if (v!=0) {
		s=string__new(8);
		string__add(s,D__class_name);
		string__add(s,(long)(__string_222 + 2));
		string__add(s,stri);
		Aexpr__set_value(expr,s);
		buffer__push(D___expr_stk,expr);
		return 0;
	}
	buffer__push(D___expr_stk,expr);
	return 0;
}
long Aemmiter__expr_process(long __this, long expr)
{
	long op;
	long ex;

	op=Aexpr__get_op(expr);
	if (op<(Aclass__Croot)) {
		if (op==(Aclass__Cnull)) {
			Aemmiter__expr_gen0(__this, expr,(long)(__string_223 + 2));
		} else if (op==(Aclass__Cchar_const)) {
			Aemmiter__expr_gen_char_const(__this, expr);
		} else if (op==(Aclass__Cint_const)) {
			buffer__push(D___expr_stk,expr);
		} else if (op==(Aclass__Cstr_const)) {
			Aemmiter__expr_gen_str_const(__this, expr);
		} else if (op==(Aclass__Cthis)) {
			Aemmiter__expr_gen0(__this, expr,(long)(__string_224 + 2));
		} else {
			Aemmiter__expr_gen_var(__this, expr);
		}
		return 0;
	}
	if (op==(Aclass__Croot)) {
		if ((buffer__length(D___expr_stk))!=1) {
			Aemmiter__error(__this, Aexpr__get_origin(expr),(long)(__string_225 + 2));
			return 0;
		}
		ex=buffer__pop(D___expr_stk);
		string__add(D___data,Aexpr__get_value(ex));
	} else if (op==(Aclass__Cassign)) {
		Aemmiter__expr_gen_assign(__this, expr,(long)(__string_226 + 2));
	} else if (op==(Aclass__Cequal)) {
		Aemmiter__expr_gen2(__this, expr,(long)(__string_227 + 2));
	} else if (op==(Aclass__Cnotequal)) {
		Aemmiter__expr_gen2(__this, expr,(long)(__string_228 + 2));
	} else if (op==(Aclass__Clargerequal)) {
		Aemmiter__expr_gen2(__this, expr,(long)(__string_229 + 2));
	} else if (op==(Aclass__Clesserequal)) {
		Aemmiter__expr_gen2(__this, expr,(long)(__string_230 + 2));
	} else if (op==(Aclass__Clarger)) {
		Aemmiter__expr_gen2(__this, expr,(long)(__string_231 + 2));
	} else if (op==(Aclass__Clesser)) {
		Aemmiter__expr_gen2(__this, expr,(long)(__string_232 + 2));
	} else if (op==(Aclass__Clogicaland)) {
		Aemmiter__expr_gen2(__this, expr,(long)(__string_233 + 2));
	} else if (op==(Aclass__Clogicalor)) {
		Aemmiter__expr_gen2(__this, expr,(long)(__string_234 + 2));
	} else if (op==(Aclass__Cadd)) {
		Aemmiter__expr_gen2(__this, expr,(long)(__string_235 + 2));
	} else if (op==(Aclass__Csub)) {
		Aemmiter__expr_gen2(__this, expr,(long)(__string_236 + 2));
	} else if (op==(Aclass__Cmult)) {
		Aemmiter__expr_gen2(__this, expr,(long)(__string_237 + 2));
	} else if (op==(Aclass__Cdiv)) {
		Aemmiter__expr_gen2(__this, expr,(long)(__string_238 + 2));
	} else if (op==(Aclass__Cmodulo)) {
		Aemmiter__expr_gen2(__this, expr,(long)(__string_239 + 2));
	} else if (op==(Aclass__Clogicalnot)) {
		Aemmiter__expr_gen1(__this, expr,(long)(__string_240 + 2));
	} else if (op==(Aclass__Cparenthesis)) {
		Aemmiter__expr_gen_par(__this, expr);
	} else if (op==(Aclass__Cunaryplus)) {
		Aemmiter__expr_gen1(__this, expr,(long)(__string_241 + 2));
	} else if (op==(Aclass__Cunaryminus)) {
		Aemmiter__expr_gen1(__this, expr,(long)(__string_242 + 2));
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
		Aemmiter__error(__this, Aexpr__get_origin(expr),(long)(__string_243 + 2));
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

	D__cur_memb=mb;
	string__add(D___data,(long)(__string_244 + 2));
	stack=buffer__new(4);
	if (vars_!=0) {
		l=buffer__length(vars_);
	} else {
		l=0;
	}
	i=0;
	while (i<l) {
		va=buffer__get_at(vars_,i);
		string__add(D___data,(long)(__string_245 + 2));
		tok=Amember__get_name(va);
		string__add(D___data,Atoken__get_data(tok));
		string__add(D___data,(long)(__string_246 + 2));
		i=i+1;
	}
	if (k==(Aclass__Cconstructor)) {
		string__add(D___data,(long)(__string_247 + 2));
		string__add(D___data,(long)(__string_248 + 2));
		string__add(D___data,D__class_name);
		string__add(D___data,(long)(__string_249 + 2));
		string__add(D___data,(long)(__string_250 + 2));
		string__add(D___data,D__class_name);
		string__add(D___data,(long)(__string_251 + 2));
	}
	l=buffer__length(body_);
	i=0;
	padde=1;
	while (i<l) {
		stm=buffer__get_at(body_,i);
		ty=Astatement__get_type(stm);
		if (((ty!=(Aclass__Celseif)))&&((ty!=(Aclass__Celse)))) {
			string__add(D___data,(long)(__string_252 + 2));
			Aemmiter__pad(__this, padde);
		}
		if (((ty==(Aclass__Cif)))||((ty==(Aclass__Celseif)))) {
			if (ty==(Aclass__Celseif)) {
				string__add(D___data,(long)(__string_253 + 2));
			} else {
				string__add(D___data,(long)(__string_254 + 2));
			}
			ex=Astatement__get_expression(stm);
			if (ex!=0) {
				Aemmiter__expr_gen(__this, ex);
			}
			string__add(D___data,(long)(__string_255 + 2));
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
			string__add(D___data,(long)(__string_256 + 2));
			padde=padde+1;
		} else if (ty==(Aclass__Cbreak)) {
			string__add(D___data,(long)(__string_257 + 2));
		} else if (ty==(Aclass__Creturn)) {
			ex=Astatement__get_expression(stm);
			if (ex!=0) {
				string__add(D___data,(long)(__string_258 + 2));
				Aemmiter__expr_gen(__this, ex);
				string__add(D___data,(long)(__string_259 + 2));
			} else {
				string__add(D___data,(long)(__string_260 + 2));
			}
		} else if (ty==(Aclass__Cdo)) {
			ex=Astatement__get_expression(stm);
			if (ex!=0) {
				Aemmiter__expr_gen(__this, ex);
			}
			string__add(D___data,(long)(__string_261 + 2));
		} else if (ty==(Aclass__Clet)) {
			ex=Astatement__get_expression(stm);
			if (ex!=0) {
				Aemmiter__expr_gen(__this, ex);
			}
			string__add(D___data,(long)(__string_262 + 2));
		} else if (ty==(Aclass__Cwhile)) {
			string__add(D___data,(long)(__string_263 + 2));
			ex=Astatement__get_expression(stm);
			if (ex!=0) {
				Aemmiter__expr_gen(__this, ex);
			}
			string__add(D___data,(long)(__string_264 + 2));
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
			string__add(D___data,(long)(__string_265 + 2));
		}
		i=i+1;
		if (i>=l) {
			padde=padde-1;
			string__add(D___data,(long)(__string_266 + 2));
			Aemmiter__pad(__this, padde);
			string__add(D___data,(long)(__string_267 + 2));
		}
		while (((i>=l))&&(((buffer__length(stack))>0))) {
			body_=buffer__pop(stack);
			i=buffer__pop(stack);
			l=buffer__pop(stack);
			if (i>=l) {
				padde=padde-1;
				string__add(D___data,(long)(__string_268 + 2));
				Aemmiter__pad(__this, padde);
				string__add(D___data,(long)(__string_269 + 2));
			}
		}
	}
	string__add(D___data,(long)(__string_270 + 2));
	buffer__dispose(stack);
	return 0;
}
long Aemmiter__gen_type(long __this, long mb)
{
	long ty;
	long tok;

	tok=Amember__get_type_id(mb);
	if (tok!=0) {
		string__add(D___data,Atoken__get_data(tok));
	} else {
		ty=Amember__get_type(mb);
		if (ty==(Aclass__Cint)) {
			string__add(D___data,(long)(__string_271 + 2));
		} else if (ty==(Aclass__Cvoid)) {
			string__add(D___data,(long)(__string_272 + 2));
		} else {
			Aemmiter__error(__this, Amember__get_name(mb),(long)(__string_273 + 2));
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
	nv=Avirtual__new(mb,D__class_name);
	i=buffer__length(D___virtuals);
	while (i>0) {
		i=i-1;
		v=buffer__get_at(D___virtuals,i);
		if (v!=0) {
			if (string__compare(n,(Avirtual__get_member_name(v))==0)) {
				Avirtual__set_next(nv,Avirtual__get_next(v));
				Avirtual__set_next(v,nv);
				return 0;
			}
		}
	}
	buffer__push(D___virtuals,nv);
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
	string__add(D___head,(long)(__string_274 + 2));
	string__add(D___head,D__class_name);
	string__add(D___head,(long)(__string_275 + 2));
	string__add(D___head,Amember__get_name_string(mb));
	string__add(D___head,(long)(__string_276 + 2));
	if (params!=0) {
		l=buffer__length(params);
		i=0;
		while (i<l) {
			param=buffer__get_at(params,i);
			string__add(D___head,(long)(__string_277 + 2));
			tok=Amember__get_name(param);
			string__add(D___head,Atoken__get_data(tok));
			i=i+1;
		}
	}
	string__add(D___head,(long)(__string_278 + 2));
	string__add(D___head,Amember__get_name_string(mb));
	string__add(D___head,(long)(__string_279 + 2));
	if (params!=0) {
		l=buffer__length(params);
		i=0;
		while (i<l) {
			param=buffer__get_at(params,i);
			string__add(D___head,(long)(__string_280 + 2));
			tok=Amember__get_name(param);
			string__add(D___head,Atoken__get_data(tok));
			i=i+1;
		}
	}
	string__add(D___head,(long)(__string_281 + 2));
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

	string__add(dest,(long)(__string_282 + 2));
	string__add(dest,c_name);
	string__add(dest,(long)(__string_283 + 2));
	string__add(dest,name);
	params=Amember__get_params(mb);
	string__add(dest,(long)(__string_284 + 2));
	sub=1;
	if (((k==(Aclass__Cmethod)))||((k==(Aclass__Cvirtual)))) {
		string__add(dest,(long)(__string_285 + 2));
		sub=2;
	}
	if (params!=0) {
		l=buffer__length(params);
		i=0;
		while (i<l) {
			param=buffer__get_at(params,i);
			if (((i>0))||((sub==2))) {
				string__add(dest,(long)(__string_286 + 2));
			}
			string__add(dest,(long)(__string_287 + 2));
			tok=Amember__get_name(param);
			string__add(dest,Atoken__get_data(tok));
			i=i+1;
		}
	}
	string__add(dest,(long)(__string_288 + 2));
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
		Aemmiter__gen_method_decl(__this, D___head,D__class_name,Amember__get_name_string(mb),mb,k);
		string__add(D___head,(long)(__string_289 + 2));
		if (k==(Aclass__Cvirtual)) {
			Aemmiter__add_virtual(__this, mb);
			Aemmiter__gen_virtual_caller(__this, mb);
			string__set(str,(long)(__string_290 + 2));
			string__add(str,Amember__get_name_string(mb));
			Aemmiter__gen_method_decl(__this, D___head,D__class_name,str,mb,k);
			string__add(D___head,(long)(__string_291 + 2));
			Aemmiter__gen_method_decl(__this, D___data,D__class_name,str,mb,k);
			string__add(D___data,(long)(__string_292 + 2));
		} else {
			Aemmiter__gen_method_decl(__this, D___data,D__class_name,Amember__get_name_string(mb),mb,k);
			string__add(D___data,(long)(__string_293 + 2));
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

	if (k==(Aclass__Cfield)) {
		string__add(D___data,(long)(__string_294 + 2));
		string__add(D___data,(long)(__string_295 + 2));
		string__add(D___data,Amember__get_name_string(mb));
		string__add(D___data,(long)(__string_296 + 2));
	}
	return 0;
}
long Aemmiter__error(long __this, long t, long e)
{

	if (t!=0) {
		console__log_str(Atoken__get_file(t));
		console__log_str((long)(__string_297 + 2));
		console__log_int(Atoken__get_line(t));
		console__log_str((long)(__string_298 + 2));
		console__log_str(Atoken__get_data(t));
		console__log_str((long)(__string_299 + 2));
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
#undef D___data
#undef D___head
#undef D__clas
#undef D__class_name
#undef D__cur_memb
#undef D___proc
#undef D___stk
#undef D___expr_stk
#undef D__token1
#undef D__token2
#undef D__pass
#undef D___virtuals
#undef D__class_id
#undef D__string_id
// class main
long main__copyto(long f, long output)
{
	long fd;
	long res;
	long data;
	long n;
	long i;
	long off;

	console__log_str((long)(__string_300 + 2));
	console__log(f);
	res=response__new(0,0);
	fd=file__new((long)(__string_301 + 2),res);
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

	console__log_str((long)(__string_302 + 2));
	console__log(f);
	Alexer__begin(lex,f);
	res=response__new(0,0);
	fd=file__new((long)(__string_303 + 2),res);
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
		string__set(tmp,(long)(__string_304 + 2));
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

	console__log((long)(__string_305 + 2));
	args=std__get_args();
	n=array__get_size(args);
	if (n!=2) {
		console__log((long)(__string_306 + 2));
		std__exit(-(1));
	}
	head=string__new(2048000);
	body=string__new(2048000);
	str=((long*)args)[1];
	to=string__new(20);
	string__add(to,str);
	string__add(to,(long)(__string_307 + 2));
	res=response__new(0,0);
	fd=file__new((long)(__string_308 + 2),res);
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
		i=string__indexof(data,start,(long)(__string_309 + 2));
		while (((i>=0))&&((start<len))) {
			string__substr(data,start,i-start,tmp);
			end=i-start;
			if ((string__indexof(tmp,0,(long)(__string_310 + 2)))==((end-5))) {
				main__process_file(tmp,lex);
				Aparser__parse(par,lex);
				Aemmiter__emmit(emi,par);
				Aparser__release(par);
			} else if ((string__indexof(tmp,0,(long)(__string_311 + 2)))==((end-2))) {
				main__copyto(tmp,head);
			} else if ((string__indexof(tmp,0,(long)(__string_312 + 2)))==((end-2))) {
				main__copyto(tmp,body);
			}
			start=i+1;
			i=string__indexof(data,start,(long)(__string_313 + 2));
			string__set(tmp,(long)(__string_314 + 2));
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
	console__log_str((long)(__string_315 + 2));
	console__log(to);
	string__dispose(to);
	file__dispose(fd);
	response__dispose(res);
	return 0;
}
