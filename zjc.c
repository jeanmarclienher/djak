
#ifndef var
#ifdef _WIN64
#include <windows.h>
#define var __int64
#else
#define var long
#endif
#define __poke(a, v) __peek((a)) = v
//#define __peek(a) (((var*)(a))[0])
#define __peek(a) (((var*)((a)*sizeof(var)))[0])
#endif

#if 0

#endif

#ifndef JACK_JackAst_H
#define JACK_JackAst_H
var JackAst__new(var tag_, var data_, var parent_);
var JackAst__dispose(var __this);
var JackAst__setLine(var __this, var line_, var file_);
var JackAst__ident(var __this, var f, var level);
var JackAst__process(var __this, var f, var level, var par);
var JackAst__add(var __this, var tag_, var data_);
var JackAst__addop(var __this, var data_, var left_);
var JackAst__set(var __this, var tag_, var data_);
var JackAst__append(var __this, var a);
var JackAst__removeChild(var __this, var old);
var JackAst__replaceChild(var __this, var old, var new_);
var JackAst__setId(var __this, var n);
var JackAst__getId(var __this);
var JackAst__setTag(var __this, var n);
var JackAst__setParent(var __this, var n);
var JackAst__setLeft(var __this, var n);
var JackAst__setChild(var __this, var n);
var JackAst__setNext(var __this, var n);
var JackAst__getTag(var __this);
var JackAst__getFile(var __this);
var JackAst__getLine(var __this);
var JackAst__getData(var __this);
var JackAst__getChild(var __this);
var JackAst__getLeft(var __this);
var JackAst__getParent(var __this);
var JackAst__getNext(var __this);
#endif


#if 0

#endif

#ifndef JACK_JackAstUtils_H
#define JACK_JackAstUtils_H
var JackAstUtils__isType(var t);
var JackAstUtils__isParentExprBool(var c);
var JackAstUtils__isInt(var p, var c);
var JackAstUtils__isSubroutine(var t);
var JackAstUtils__isVarnameSet(var c, var s);
var JackAstUtils__functionGetClassOf(var c, var s);
var JackAstUtils__classGetClassOf(var clas, var c, var s);
var JackAstUtils__classGetTypeOf(var p, var c, var s);
var JackAstUtils__functionGetTypeOf(var p, var c, var s);
var JackAstUtils__getTypeOf(var p, var c);
var JackAstUtils__isStatic(var c);
var JackAstUtils__isField(var c);
var JackAstUtils__getTypeOfVarname(var p, var c, var s);
var JackAstUtils__getClassOf(var clas, var c);
#endif


#if 0

#endif

#ifndef JACK_Main_H
#define JACK_Main_H
var Main__getJackFiles(var lst, var dir);
var Main__main();
#endif


#if 0

#endif

#ifndef JACK_C_H
#define JACK_C_H
var C__NULL_CHARACTER();
var C__START_OF_HEADING();
var C__START_OF_TEXT();
var C__END_OF_TEXT_CHARACTER();
var C__END_OF_TRANSMISSION_CHARACTER();
var C__ENQUIRY_CHARACTER();
var C__ACKNOWLEDGE_CHARACTER();
var C__BELL_CHARACTER();
var C__BACKSPACE();
var C__HORIZONTAL_TAB();
var C__LINE_FEED();
var C__VERTICAL_TAB();
var C__FORM_FEED();
var C__CARRIAGE_RETURN();
var C__SHIFT_OUT();
var C__SHIFT_IN();
var C__DATA_LINK_ESCAPE();
var C__DEVICE_CONTROL_1();
var C__DEVICE_CONTROL_2();
var C__DEVICE_CONTROL_3();
var C__DEVICE_CONTROL_4();
var C__NEGATIVE_ACKNOWLEDGE_CHARACTER();
var C__SYNCHRONOUS_IDLE();
var C__END_OF_TRANSMISSION_BLOCK();
var C__CANCEL_CHARACTER();
var C__END_OF_MEDIUM();
var C__SUBSTITUTE_CHARACTER();
var C__ESCAPE_CHARACTER();
var C__FILE_SEPARATOR();
var C__GROUP_SEPARATOR();
var C__RECORD_SEPARATOR();
var C__UNIT_SEPARATOR();
var C__SPACE();
var C__EXCLAMATION_MARK();
var C__QUOTATION_MARK();
var C__HASHTAG();
var C__DOLLAR_SIGN();
var C__PERCENT_SIGN();
var C__AMPERSAND();
var C__APOSTROPHE();
var C__LEFT_PARENTHESIS();
var C__RIGHT_PARENTHESIS();
var C__ASTERISK();
var C__PLUS_SIGN();
var C__COMMA();
var C__HYPHEN_MINUS();
var C__FULL_STOP();
var C__SLASH();
var C__DIGIT_ZERO();
var C__DIGIT_ONE();
var C__DIGIT_TWO();
var C__DIGIT_THREE();
var C__DIGIT_FOUR();
var C__DIGIT_FIVE();
var C__DIGIT_SIX();
var C__DIGIT_SEVEN();
var C__DIGIT_EIGHT();
var C__DIGIT_NINE();
var C__COLON();
var C__SEMICOLON();
var C__LESS_THAN_SIGN();
var C__EQUAL_SIGN();
var C__GREATER_THAN_SIGN();
var C__QUESTION_MARK();
var C__AT_SIGN();
var C__LATIN_CAPITAL_LETTER_A();
var C__LATIN_CAPITAL_LETTER_B();
var C__LATIN_CAPITAL_LETTER_C();
var C__LATIN_CAPITAL_LETTER_D();
var C__LATIN_CAPITAL_LETTER_E();
var C__LATIN_CAPITAL_LETTER_F();
var C__LATIN_CAPITAL_LETTER_G();
var C__LATIN_CAPITAL_LETTER_H();
var C__LATIN_CAPITAL_LETTER_I();
var C__LATIN_CAPITAL_LETTER_J();
var C__LATIN_CAPITAL_LETTER_K();
var C__LATIN_CAPITAL_LETTER_L();
var C__LATIN_CAPITAL_LETTER_M();
var C__LATIN_CAPITAL_LETTER_N();
var C__LATIN_CAPITAL_LETTER_O();
var C__LATIN_CAPITAL_LETTER_P();
var C__LATIN_CAPITAL_LETTER_Q();
var C__LATIN_CAPITAL_LETTER_R();
var C__LATIN_CAPITAL_LETTER_S();
var C__LATIN_CAPITAL_LETTER_T();
var C__LATIN_CAPITAL_LETTER_U();
var C__LATIN_CAPITAL_LETTER_V();
var C__LATIN_CAPITAL_LETTER_W();
var C__LATIN_CAPITAL_LETTER_X();
var C__LATIN_CAPITAL_LETTER_Y();
var C__LATIN_CAPITAL_LETTER_Z();
var C__LEFT_SQUARE_BRACKET();
var C__BACKSLASH();
var C__RIGHT_SQUARE_BRACKET();
var C__CIRCUMFLEX_ACCENT();
var C__LOW_LINE();
var C__GRAVE_ACCENT();
var C__LATIN_SMALL_LETTER_A();
var C__LATIN_SMALL_LETTER_B();
var C__LATIN_SMALL_LETTER_C();
var C__LATIN_SMALL_LETTER_D();
var C__LATIN_SMALL_LETTER_E();
var C__LATIN_SMALL_LETTER_F();
var C__LATIN_SMALL_LETTER_G();
var C__LATIN_SMALL_LETTER_H();
var C__LATIN_SMALL_LETTER_I();
var C__LATIN_SMALL_LETTER_J();
var C__LATIN_SMALL_LETTER_K();
var C__LATIN_SMALL_LETTER_L();
var C__LATIN_SMALL_LETTER_M();
var C__LATIN_SMALL_LETTER_N();
var C__LATIN_SMALL_LETTER_O();
var C__LATIN_SMALL_LETTER_P();
var C__LATIN_SMALL_LETTER_Q();
var C__LATIN_SMALL_LETTER_R();
var C__LATIN_SMALL_LETTER_S();
var C__LATIN_SMALL_LETTER_T();
var C__LATIN_SMALL_LETTER_U();
var C__LATIN_SMALL_LETTER_V();
var C__LATIN_SMALL_LETTER_W();
var C__LATIN_SMALL_LETTER_X();
var C__LATIN_SMALL_LETTER_Y();
var C__LATIN_SMALL_LETTER_Z();
var C__LEFT_CURLY_BRACKET();
var C__VERTICAL_BAR();
var C__RIGHT_CURLY_BRACKET();
var C__TILDE();
var C__DELETE();
var C__INVALID();
var C__NULL();
var C__NONE();
var C__KEYWORD();
var C__SYMBOL();
var C__IDENTIFIER();
var C__INT_CONST();
var C__STRING_CONST();
var C__CLASS();
var C__METHOD();
var C__FUNCTION();
var C__CONSTRUCTOR();
var C__CALLBACK();
var C__INT();
var C__BOOLEAN();
var C__CHAR();
var C__VOID();
var C__VAR();
var C__STATIC();
var C__FIELD();
var C__LET();
var C__DO();
var C__IF();
var C__ELSE();
var C__WHILE();
var C__RETURN();
var C__TRUE();
var C__FALSE();
var C__BOOL();
var C__THIS();
var C__ASM();
var C__PLUS();
var C__MINUS();
var C__MULTIPLY();
var C__DIV();
var C__AND();
var C__OR();
var C__GREATER();
var C__LESS();
var C__EQUAL();
var C__ROOT();
var C__EXPR();
var C__CALL();
var C__CLASSNAME();
var C__ARGS();
var C__VARNAME();
var C__ARRAY();
var C__ASSIGN();
var C__STATEMENTS();
var C__PARAMS();
var C__VARS();
var C__TYPE();
var C__STRING();
var C__ARRAYVAR();
var C__PARAN();
var C__UNARYOP();
var C__TERM();
var C__OP();
var C__DOT();
var C__BODY();
var C__SUBROUTINENAME();
var C__UNARYMINUS();
var C__UNARYPLUS();
var C__UNARYTILDE();
var C__SUBROUTINECALL();
var C__CLASSORVARNAME();
var C__GREATEROREQUAL();
var C__LESSOREQUAL();
var C__NOTEQUAL();
var C__XOR();
var C__CONST();
var C__LOGICALOR();
var C__LOGICALAND();
var C__NOT();
var C__CONSTACCESS();
var C__IN();
var C__OUT();
var C__IO();
var C__NEXT_FREE_CONSTANT();
#endif


#if 0

#endif

#ifndef JACK_Const_H
#define JACK_Const_H
var Const__getList();
#endif


#if 0

#endif

#ifndef JACK_JackParser_H
#define JACK_JackParser_H
var JackParser__new(var source);
var JackParser__dispose(var __this);
var JackParser__init(var __this, var source);
var JackParser__getConst(var __this, var index);
var JackParser__getAst(var __this);
var JackParser__advance(var __this);
var JackParser__matched(var __this, var tok, var k);
var JackParser__matchKeyword(var __this, var k, var eat);
var JackParser__matchSymbol(var __this, var k, var eat);
var JackParser__matchIntegerConstant(var __this, var eat);
var JackParser__matchStringConstant(var __this, var eat);
var JackParser__matchIdentifier(var __this, var eat);
var JackParser__error(var __this, var w);
var JackParser__getData(var __this);
var JackParser__astSetCurrent(var __this, var c);
var JackParser__astAddName(var __this, var c, var name, var line_);
var JackParser__astAdd(var __this, var c);
var JackParser__astAddType(var __this);
var JackParser__astAddLike(var __this, var prim, var type);
var JackParser__compileClass(var __this, var tk, var dst_);
var JackParser__compileClassVarDec(var __this);
var JackParser__compileSubroutineBody(var __this);
var JackParser__compileSubroutine(var __this);
var JackParser__compileParameter(var __this);
var JackParser__compileParameterList(var __this);
var JackParser__compileVarDecVarList(var __this, var primary);
var JackParser__compileVarDec(var __this);
var JackParser__compileStatements(var __this);
var JackParser__compileLetOrDo(var __this);
var JackParser__compileLet(var __this, var s, var l);
var JackParser__compileDo(var __this, var s, var l);
var JackParser__callbackCall(var __this);
var JackParser__subroutineCall(var __this, var subroutineName, var tokenLine);
var JackParser__compileWhile(var __this);
var JackParser__compileReturn(var __this);
var JackParser__compileIf(var __this);
var JackParser__astAddAssign(var __this);
var JackParser__astAddOp(var __this);
var JackParser__compileExpression(var __this);
var JackParser__compileTerm(var __this, var expr);
var JackParser__compileExpressionList(var __this);
#endif


#if 0

#endif

#ifndef JACK_JackCompiler_H
#define JACK_JackCompiler_H
var JackCompiler__new(var hack_mode);
var JackCompiler__dispose(var __this);
var JackCompiler__compile(var __this, var src_);
var JackCompiler__copyHead(var __this, var dst, var source);
var JackCompiler__copy(var __this, var dst, var source);
var JackCompiler__copyBody(var __this, var dst, var source);
var JackCompiler__link(var __this, var dir, var files);
#endif


#if 0

#endif

#ifndef JACK_JackAstToC_H
#define JACK_JackAstToC_H
var JackAstToC__new(var parse, var hack_mode);
var JackAstToC__dispose(var __this);
var JackAstToC__compile(var __this, var dst_);
var JackAstToC__coClass(var __this, var c);
var JackAstToC__genStrings(var __this, var a, var write);
var JackAstToC__spc(var __this);
var JackAstToC__getTypeOf(var __this, var y);
var JackAstToC__getClassOf(var __this, var y);
var JackAstToC__isInt(var __this, var y);
var JackAstToC__isStatic(var __this, var y);
var JackAstToC__isField(var __this, var y);
var JackAstToC__isType(var __this, var y);
var JackAstToC__str(var __this, var c);
var JackAstToC__nl(var __this);
var JackAstToC__coAsm(var __this, var c);
var JackAstToC__coConstPre(var __this, var c);
var JackAstToC__coStatic(var __this, var c);
var JackAstToC__coFieldUndef(var __this, var c);
var JackAstToC__coField(var __this, var c);
var JackAstToC__coMethodPre(var __this, var c);
var JackAstToC__coConstructorPre(var __this, var c);
var JackAstToC__coMethod(var __this, var c);
var JackAstToC__coConstructor(var __this, var c);
var JackAstToC__coFunctionPre(var __this, var c);
var JackAstToC__coFunction(var __this, var c);
var JackAstToC__error(var __this, var txt, var c);
var JackAstToC__coStatement(var __this, var c);
var JackAstToC__coWhile(var __this, var c);
var JackAstToC__coIf(var __this, var c);
var JackAstToC__coReturn(var __this, var c);
var JackAstToC__coAssign(var __this, var c);
var JackAstToC__coVarNameOrIndexed(var __this, var c, var isassign);
var JackAstToC__coExpr(var __this, var c, var isterm);
var JackAstToC__coSubroutineCall(var __this, var c);
var JackAstToC__coStatements(var __this, var c);
var JackAstToC__coFunctionHead(var __this, var c, var add_this);
var JackAstToC__coParams(var __this, var d, var add_this);
var JackAstToC__coVarDec(var __this, var c);
var JackAstToC__coType(var __this, var c);
var JackAstToC__coVarName(var __this, var c, var isassign);
#endif


#if 0

#endif

#ifndef JACK_JackTokenizer_H
#define JACK_JackTokenizer_H
var JackTokenizer__new(var ishack);
var JackTokenizer__dispose(var __this);
var JackTokenizer__init(var __this, var source, var generate_xml);
var JackTokenizer__getSymbolHash(var __this);
var JackTokenizer__hasMoreTokens(var __this);
var JackTokenizer__next(var __this);
var JackTokenizer__addLine(var __this);
var JackTokenizer__getFileName(var __this);
var JackTokenizer__getTokenConst(var __this, var s);
var JackTokenizer__advance(var __this);
var JackTokenizer__error(var __this, var line_, var w);
var JackTokenizer__getLine(var __this);
var JackTokenizer__tokenType(var __this);
var JackTokenizer__keyWord(var __this);
var JackTokenizer__symbol(var __this);
var JackTokenizer__identifier(var __this);
var JackTokenizer__intVal(var __this);
var JackTokenizer__stringVal(var __this);
#endif


#if 0

#endif

#ifndef JACK_Buffer_H
#define JACK_Buffer_H
var Buffer__new(var initial, var disposeCb);
var Buffer__newString(var initial);
var Buffer__dispose(var __this);
var Buffer__getAt(var __this, var p);
var Buffer__setAt(var __this, var p, var data);
var Buffer__append(var __this, var data);
var Buffer__insertSortedStr(var __this, var q);
var Buffer__remove(var __this, var q);
var Buffer__indexOfStr(var __this, var q);
var Buffer__checkSize(var __this, var idx);
var Buffer__getArray(var __this);
var Buffer__getSize(var __this);
#endif


#if 0

#endif

#ifndef JACK_Bytes_H
#define JACK_Bytes_H
var Bytes__new(var size_in_byte);
var Bytes__dispose(var __this);
var Bytes__alloc(var __this, var s);
var Bytes__getBuffer(var __this);
var Bytes__length(var __this);
var Bytes__getByte(var __this, var address);
var Bytes__setByte(var __this, var address, var b);
var Bytes__appendByte(var __this, var b);
var Bytes__append16bit(var __this, var b);
var Bytes__append32bit(var __this, var b);
var Bytes__append64bit(var __this, var b);
var Bytes__append16bitBig(var __this, var b);
var Bytes__append32bitBig(var __this, var b);
var Bytes__append64bitBig(var __this, var b);
var Bytes__appendInt(var __this, var b);
var Bytes__appendUtf8(var __this, var codepoint);
var Bytes__appendUtf16(var __this, var codepoint);
var Bytes__appendNativeChar(var __this, var codepoint);
var Bytes__getStringNativePointer(var __this);
var Bytes__setStringToNative(var __this, var name);
#endif


#if 0

#endif

#ifndef JACK_Callback_H
#define JACK_Callback_H
var Callback__new();
var Callback__dispose(var __this);
var Callback__callback(var __this, var a, var b);
var Callback__invoke(var __this, var a, var b);
#endif


#if 0

#endif

#ifndef JACK_CallbackStringDispose_H
#define JACK_CallbackStringDispose_H
var CallbackStringDispose__callback(var __this, var a, var b);
var CallbackStringDispose__new();
#endif


#if 0

#endif

#ifndef JACK_File_H
#define JACK_File_H
var File__new(var path, var writing);
var File__dispose(var __this);
var File__getName(var __this);
var File__isdir(var __this);
var File__open(var __this);
var File__readByte(var __this);
var File__seek(var __this, var position);
var File__writeByte(var __this, var data);
var File__writeString(var __this, var s);
var File__readLine(var __this, var buff);
var File__readUtf8(var __this);
var File__writeUtf8(var __this, var data);
var File__writeInt16(var __this, var d);
var File__writeInt32(var __this, var d);
var File__writeInt64(var __this, var d);
var File__readInt16(var __this);
var File__readInt32(var __this);
var File__readInt64(var __this);
var File__remove(var __this);
var File__mkdir(var __this);
var File__list(var __this);
#endif


#if 0

#endif

#ifndef JACK_Hash_H
#define JACK_Hash_H
var Hash__new(var size, var disposeCb);
var Hash__dispose(var __this);
var Hash__stats(var __this);
var Hash__hash(var __this, var k);
var Hash__add(var __this, var k, var val);
var Hash__get(var __this, var k);
#endif


#if 0

#endif

#ifndef JACK_Array_H
#define JACK_Array_H
var Array__new(var size);
var Array__dispose(var __this);
#endif


#if 0

#endif

#ifndef JACK_Font_H
#define JACK_Font_H
var Font__new();
var Font__get(var __this, var c);
#endif


#if 0

#endif

#ifndef JACK_Keyboard_H
#define JACK_Keyboard_H
var Keyboard__exit();
var Keyboard__exits(var a, var b);
var Keyboard__init();
var Keyboard__deInit();
var Keyboard__keyPressed();
var Keyboard__getKey();
var Keyboard__getChar();
var Keyboard__readChar();
var Keyboard__readLine(var message);
var Keyboard__readInt(var message);
var Keyboard__NEWLINE();
var Keyboard__BACKSPACE();
var Keyboard__LEFT_ARROW();
var Keyboard__UP_ARROW();
var Keyboard__RIGHT_ARROW();
var Keyboard__DOWN_ARROW();
var Keyboard__HOME();
var Keyboard__END();
var Keyboard__PAGE_UP();
var Keyboard__PAGE_DOWN();
var Keyboard__INSERT();
var Keyboard__DELETE();
var Keyboard__ESC();
var Keyboard__F1();
var Keyboard__F2();
var Keyboard__F3();
var Keyboard__F4();
var Keyboard__F5();
var Keyboard__F6();
var Keyboard__F7();
var Keyboard__F8();
var Keyboard__F9();
var Keyboard__F10();
var Keyboard__F11();
var Keyboard__F12();
#endif


#if 0

#endif

#ifndef JACK_Math_H
#define JACK_Math_H
var Math__init();
var Math__deInit();
var Math__abs(var a);
var Math__multiply(var x, var y);
var Math__divide(var x, var y);
var Math__min(var x, var y);
var Math__max(var x, var y);
var Math__sqrt(var x);
var Math__shiftLeft(var value, var shift);
var Math__shiftRight(var value, var shift);
var Math__rem(var a, var b);
var Math__xor(var a, var b);
var Math__log2(var n);
var Math__sizeOfInt();
var Math__isBigEndian();
var Math__isWindows();
#endif


#if 0

#endif

#ifndef JACK_Output_H
#define JACK_Output_H
var Output__init();
var Output__deInit();
var Output__moveCursor(var row, var col);
var Output__printString(var s);
var Output__println();
var Output__printChar(var c);
var Output__printInt(var c);
var Output__backSpace();
#endif


#if 0

#endif

#ifndef JACK_Screen_H
#define JACK_Screen_H
var Screen__init();
var Screen__deInit();
var Screen__clearScreen();
var Screen__setColor(var b);
var Screen__drawPixel(var x, var y);
var Screen__drawLine(var x, var y, var x2, var y2);
var Screen__drawRectangle(var x, var y, var x2, var y2);
var Screen__drawCircle(var x, var y, var r);
#endif


#if 0

#endif

#ifndef JACK_String_H
#define JACK_String_H
var String__new(var maxLength);
var String__dispose(var __this);
var String__length(var __this);
var String__charAt(var __this, var a);
var String__setCharAt(var __this, var j, var c);
var String__getArray(var __this);
var String__appendChar(var __this, var c);
var String__eraseLastChar(var __this);
var String__intValue(var __this);
var String__setInt(var __this, var j);
var String__appendFromNative(var __this, var native);
var String__ord(var s);
var String__backSpace();
var String__doubleQuote();
var String__newLine();
var String__copy(var __this);
var String__appendString(var __this, var p);
var String__compare(var __this, var s);
#endif


#if 0

#endif

#ifndef JACK_Sys_H
#define JACK_Sys_H
var Sys__init();
var Sys__deInit();
var Sys__halt();
var Sys__error(var errorCode);
var Sys__wait(var duration);
var Sys__args();
#endif


#if 0

#endif

#ifndef JACK_Memory_H
#define JACK_Memory_H
var Memory__init();
var Memory__deInit();
var Memory__peek(var addr);
var Memory__poke(var addr, var value);
var Memory__defrag();
var Memory__checkEmpty();
var Memory__alloc(var size);
var Memory__log(var msg, var p, var q);
var Memory__deAlloc(var p);
#endif

#define JACK_IMPLEMENTATION
/*
 *                     jack public domain compiler
 *
 *                      15 may MMXXI PUBLIC DOMAIN
 *           The author disclaims copyright to this source code.
 *
 *
 */


#ifndef JACK_MAIN_C_FILE
#define JACK_MAIN_C_FILE
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#ifndef _WIN32
#include <fcntl.h>
#include <unistd.h>
#include <dirent.h>
#include <termios.h>
#include <sys/ioctl.h>
#include <signal.h>
struct stat File__status;
struct termios Keyboard__term;
struct dirent *File__dp;
DIR *File__dir;
char **Sys__argv__;
#else
#include <windows.h>
#include <conio.h>
#include <io.h>
#include <direct.h>
struct __stat64 File__status;
HANDLE File__hFind;
WIN32_FIND_DATAW File__FindFileData;
LPWSTR *Sys__argv__;
int _nCmdShow = 0;
#endif
int Keyboard__flags;
int Sys__argc__;
var Memory__getString(var*);
unsigned char image32[512 * 256 * 4];
#ifdef JACK_HACK
var Memory__memory[65536];
#else
var Memory__memory[65536];
//var Memory__memory[1];
#endif

#ifdef JACK_IMPLEMENTATION
#ifndef _WIN32
int main(int argc, char *argv[]) {
	Sys__argc__ = argc;
	Sys__argv__ = argv;
#else
#ifdef _CONSOLE
int main(int argc, char *argv[]) {
#else
int WINAPI wWinMain(HINSTANCE hi,HINSTANCE prev,LPWSTR cmd,int nCmdShow) {
	_nCmdShow = nCmdShow;
	Sys__argv__ = CommandLineToArgvW(GetCommandLineW(), &Sys__argc__);
#endif
#endif
	Sys__init();
	return 0;
}

void screen2rgba(int width, int height) 
{
	int x, y, xx;
	var p;
	var m;
	int l;	
	m = 16384;
	for (y = 0; y < height; y++) {
		for (x = 0; x < (width >> 4); x++) {
			p = Memory__peek(m + (y * (width>>4)) + x);
			//l =  (height - y) * width + (x << 4);
			l =  y * width + (x << 4);
			for (xx = 0; xx < 16; xx++) {
				if ((p >> xx) & 0x01) {
					 image32[(l+xx)*4] = 0x0;
					 image32[(l+xx)*4+1] = 0x0;
					 image32[(l+xx)*4+2] = 0x0;
					 image32[(l+xx)*4+3] = 0xFF;
				} else {
					 image32[(l+xx)*4] = 0xFF;
					 image32[(l+xx)*4+1] = 0xFF;
					 image32[(l+xx)*4+2] = 0xFF;
					 image32[(l+xx)*4+3] = 0xFF;
				}
			}		
		}
	}
	return;
}


var Memory__getString(var* str) {
#ifndef JACK_HACK
#else
#endif
	static var in = 0;
	var m, i;
	if (in) {
		return 0;
	}
	in = -1;

	i = 0;
	while (str[i]) {
		i++;
	}
	m = String__new(i + 1);
	i = 0;
	while (str[i]) {
		String__appendChar(m, str[i]);
		i++;
	}	
	in = 0;
	return (var)m;
}

#endif
#endif
/*
 *                     jack public domain compiler
 *
 *                      15 may MMXXI PUBLIC DOMAIN
 *           The author disclaims copyright to this source code.
 *
 *
 */


#ifndef JACK_X11_C_H
#define JACK_X11_C_H
#ifndef _WIN32
#ifndef __APPLE__

#include <X11/X.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <X11/keysym.h>
#include <X11/keysymdef.h>
#define GL_GLEXT_PROTOTYPES
#include <GL/gl.h>
#include <GL/glx.h>
#include <GL/glext.h>
#include <GL/glu.h>

#ifdef JACK_IMPLEMENTATION
var Screen__need_refresh = -1;
Display *__display = NULL;
XImage *ximage;
int width = 512;
int height = 256;
Visual *visual;
Window window;
Window root;
GC gc;
XVisualInfo *vi;
Colormap cmap;
XSetWindowAttributes swa;
XWindowAttributes gwa;
GLXFBConfig *fbc;
GLuint base;
GLuint tex = 1;
Atom wm_del;
var isfirst = -1;
var is_wait = 0;
var need_update = -1;
GLint att[] = {GLX_RENDER_TYPE, GLX_RGBA_BIT, 
		GLX_DRAWABLE_TYPE, GLX_WINDOW_BIT,
	       	GLX_DOUBLEBUFFER, True,
		GLX_RED_SIZE, 1,
		GLX_GREEN_SIZE, 1,
		GLX_BLUE_SIZE, 1,
		None};
GLXContext glc;
void init();

var Screen__clear()
{
	var i, j;
	unsigned char *p;
	unsigned char *q;
	init();
	for (i = 0; i < height; i++) {
		p = image32 + (i * width * 4);	
		for (j = 0; j < width; j++) {
			q = p + (j << 2);
			q[0] = 0xFF; //blue
			q[1] = 0xFF; //green
			q[2] = 0xFF; //red
			q[3] = 0xFF; //alpha
		}
	}
	Screen__need_refresh = -1;
	return 0;
}

/*XImage *CreateImage()
{
	image32 = (unsigned char*)malloc(width * height * sizeof(unsigned int));
	//return XCreateImage(display, visual, 
	//		DefaultDepth(display, DefaultScreen(display)),
	//
	return NULL;
}*/


void init() 
{
	int fbcount;
	if (__display != NULL) {
		return;
	}
	__display = XOpenDisplay(NULL);
	root = DefaultRootWindow(__display);
	fbc = glXChooseFBConfig(__display, DefaultScreen(__display), att, &fbcount);
	if (fbc == NULL) {
		printf("\n Failed to get config.\n");
		return;
	}
	//vi = glXChooseVisual(display, 0, att);
	vi = glXGetVisualFromFBConfig(__display, fbc[0]);
	if (vi == NULL) {
		printf("\n No GL visual found.\n");
		return;
	}
	//visual = XDefaultVisual(display, 0);
	cmap = XCreateColormap(__display, root, vi->visual, AllocNone);
	swa.colormap = cmap;
	swa.event_mask = ButtonPressMask|ExposureMask|KeyPressMask
		|KeyReleaseMask;
	window = XCreateWindow(__display, root, 
			0, 0, width, height, 0, vi->depth, InputOutput,
			vi->visual, CWColormap|CWEventMask, &swa);  

	XMapWindow(__display, window);
	XStoreName(__display, window, "JACK Application");

	glc = glXCreateContext(__display, vi, NULL, GL_TRUE);
	glXMakeCurrent(__display, window, glc);
	//glEnable(GL_DEPTH_TEST);

	wm_del = XInternAtom(__display, "WM_DELETE_WINDOW", False);
	XSetWMProtocols(__display, window, &wm_del, 1);
	XMapWindow(__display, window);	
	
	glWindowPos2i(0, 0);
	glViewport(0, 0, width, height);
	glClearColor(1,1,1,1);
	glClearDepth(1);
	glGenTextures(1, &tex);
	glBindTexture(GL_TEXTURE_2D, tex);
	glTexImage2D(
		GL_TEXTURE_2D,
		0,
		3,
		width,
		height,
		0,
		GL_RGBA,
		GL_UNSIGNED_BYTE,
		image32);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP);
	glEnable(GL_TEXTURE_2D);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glBindTexture(GL_TEXTURE_2D, 0);
}

var dump_font(var c);

void deInit()
{
	if (__display != NULL) {
		glXMakeCurrent(__display, None, NULL);
		glXDestroyContext(__display, glc);
		XDestroyWindow(__display, window);
		XCloseDisplay(__display);
		__display = NULL;
	}
}

void display()
{
	//glClearColor(1,0,0,1);
	//glClear(GL_COLOR_BUFFER_BIT);
	//glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, tex);
	glTexImage2D(
		GL_TEXTURE_2D,
		0,
		3,
		width,
		height,
		0,
		GL_RGBA,
		GL_UNSIGNED_BYTE,
		image32);
	glLoadIdentity();
	glBegin(GL_QUADS);
	glColor4f(1, 1, 1, 1);
	glTexCoord2f(0,0); glVertex3f(-1,1, -1);
	glTexCoord2f(1,0); glVertex3f( 1,1, -1);
	glTexCoord2f(1,1); glVertex3f( 1, -1, -1);
	glTexCoord2f(0,1); glVertex3f(-1, -1, -1);
	glTexCoord2f(0,0); glVertex3f(-1,1, -1);
	glColor4f(0, 0, 0, 1);
	glEnd();
	glBindTexture(GL_TEXTURE_2D, 0);
//	dump_font('A');
}


var dump_font(var c)
{
	FILE *f;
	int x, y, xx, i, l;
	char text[255];
	if (!c) {
		return 0;
	}
	Screen__clear();
	display();
	text[0] = c;
	glDisable(GL_TEXTURE_2D);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, width, height, 0, -1, 1);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glRasterPos2i(0, 11);
//	glBegin(GL_QUADS);
//	glColor4f(0, 0, 0, 1);
//	glEnd();
	glListBase(base);
	glCallLists(1, GL_UNSIGNED_BYTE, text);
	glReadPixels(0, 0, width, height, GL_RGBA, 
			GL_UNSIGNED_BYTE, image32);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	i = (c - 32) * 6;
	f = fopen("Font.jack", "a+w");
	fprintf(f, "\t\t// %c (%d)\n", (int)c, (int)c);
	for (y = 0; y < 11; y++) {
		x = 0;
		l =  (height - y - 1) * width + (x << 4);
		c = 0;
		for (xx = 0; xx < 8; xx++) {
			if (!image32[(l+xx)*4+1]) {
				 c = c | (1 << xx);
			}
		}
		y++;
		l =  (height - y - 1) * width + (x << 4);
		if (y < 11) {
			for (xx = 0; xx < 8; xx++) {
				if (!image32[(l+xx)*4+1]) {
					 c = c | (256 << xx);
				}
			}
		}
		if (c > 32767) {
			if (c == 32768) {
				fprintf(f, "\t\tlet v[%d] = 32767 + 1;\n", i);
			} else {
				fprintf(f, "\t\tlet v[%d] = -%d;\n", i,
					((~(int)c) + 1) & 0x7FFF);
			}
		} else {
			fprintf(f, "\t\tlet v[%d] = %d;\n", i, (int)c);
		}
		i++;
	}
	fclose(f);
	return 0;
}


void make_font()
{
	var c;
	FILE *f;
	XFontStruct *fontInfo;
	Font id;
	unsigned int first,last;
	fontInfo = XLoadQueryFont(__display, "*-24-*");
	id = fontInfo->fid;
	first = fontInfo->min_char_or_byte2;
	last = fontInfo->max_char_or_byte2;
	base = glGenLists(last + 1);
	glXUseXFont(id, first, last-first+1, base+first);
	f = fopen("Font.jack", "a+w");
	fprintf(f, "class Font {\n");
	fprintf(f, "\tfield Array v;\n");
	fprintf(f, "\tconstructor Font new() {\n");
	fprintf(f, "\t\tlet v = Array.new(570);\n");
	fclose(f);
	for (c = 32; c < 127; c++) {
		dump_font(c);
	}
	Screen__clear();
	display();
}

var processEvent()
{
	XEvent ev;
	KeySym key;
	char text[255];
	int r;
	var c;

	XWindowAttributes a;

	XNextEvent(__display, &ev);
	gc = DefaultGC(__display, 0);
	switch (ev.type) {
	case KeyRelease:
		if (!is_wait) {
			Memory__poke(24576, 0);
		}
		return 0;
	case KeyPress:
		c = 0;
		r = XLookupString(&ev.xkey, text, 255, &key, 0);
		if (r == 1 && text[0]) {
			c = text[0];
		}
		switch (key) {
		case XK_Left:
			c = Keyboard__LEFT_ARROW();
			break;
		case XK_Right:
			c = Keyboard__RIGHT_ARROW();
			break;
		case XK_Up:
			c = Keyboard__UP_ARROW();
			break;
		case XK_Down:
			c = Keyboard__DOWN_ARROW();
			break;
		case XK_Return:
			c = Keyboard__NEWLINE();
			break;
		case XK_BackSpace:
			c = Keyboard__BACKSPACE();
			break;
		case XK_Home:
			c = Keyboard__HOME();
			break;
		case XK_Page_Up:
			c = Keyboard__PAGE_UP();
			break;
		case XK_Page_Down:
			c = Keyboard__PAGE_DOWN();
			break;
		case XK_Insert:
			c = Keyboard__INSERT();
			break;
		case XK_Delete:
			c = Keyboard__DELETE();
			break;
		case XK_Escape:
			c = Keyboard__ESC();
			break;
		case XK_F12:
			c = Keyboard__F12();
			break;
		}
		if (key >= XK_F1 && key <= XK_F11) {
			c = (key - XK_F1) + Keyboard__F1();
		}
		if (c) {	
			return c;
		}
		break;
	case Expose:
		XGetWindowAttributes(__display, window, &a);	
		glViewport(0, 0, a.width, a.height);
		glXMakeCurrent(__display, window, glc);
		display();
		//if (!done) {	
		//	make_font();
		//}
		glXSwapBuffers(__display, window);	
		isfirst = 0;	
		break;
	case ButtonPress:
		//printf("Click\n");	
		break;
	case ClientMessage:
		if (ev.xclient.data.l[0] == wm_del) {
			deInit();
			exit(0);
		}
		break;
	}
	return 0;
}

var refresh() 
{
	XEvent ev;
	init();
	screen2rgba(width, height);
	memset(&ev, 0, sizeof(ev));
	ev.type = Expose;
	ev.xexpose.window = window;
	XSendEvent(__display, window, True,ExposureMask, &ev);
	return 0;
}

var Screen__refresh()
{
	Screen__need_refresh = -1;
	return 0;
}

var Screen__processEvents(var iswait)
{
	static var nextk = 0;
	var e, r;

	r = nextk;
	nextk = 0;
	is_wait = iswait;
	init();
	if (Screen__need_refresh) {
		while (XPending(__display)) {
			e = processEvent();
			if (e) {
				if (r || iswait) {
					nextk = e;
				} else {
					r = e;
				}
			}
		}
		refresh();
		while (!XPending(__display)) {
			usleep(1000);
		}
	}
	while (XPending(__display)) {
		e = processEvent();
		if (e) {
			if (r || iswait) {
				nextk = e;
			} else {
				r = e;
			}
		}
	}
	if (!r) {
		if (!iswait && Screen__need_refresh) {
			usleep(1000);
		}
	} else {
		Memory__poke(24576, r);
	}
	Screen__need_refresh = 0;
	return r;
}


#endif // JACK_IMPLEMENTATION

#endif // __APPLE
#endif // _WIN32
#endif // H

/*
 *                     jack public domain compiler
 *
 *                      15 may MMXXI PUBLIC DOMAIN
 *           The author disclaims copyright to this source code.
 *
 *
 */


#ifndef JACK_WIN32_H
#define JACK_WIN32_H
#ifdef _WIN32
#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <stdio.h>

#ifdef _WIN64
#else
#endif

#ifdef JACK_IMPLEMENTATION
HDC hDC;
HGLRC hRC;
HWND hWnd = NULL;
MSG msg;
HINSTANCE hInstance = 0;
PAINTSTRUCT ps;
var key = 0;
int width = 512;
int height = 256;
GLuint tex = 1;
var refresh = 0;
COORD coord;
HANDLE output;
var is_wait = 0;

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0,0,0,1);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glBindTexture(GL_TEXTURE_2D, tex);
	glTexImage2D(
		GL_TEXTURE_2D,
		0,
		3,
		width,
		height,
		0,
		GL_RGBA,
		GL_UNSIGNED_BYTE,
		image32);
	glLoadIdentity();
	glBegin(GL_QUADS);
	glTexCoord2f(0,0); glVertex3f(-1,1, -1);
	glTexCoord2f(1,0); glVertex3f( 1,1, -1);
	glTexCoord2f(1,1); glVertex3f( 1, -1, -1);
	glTexCoord2f(0,1); glVertex3f(-1, -1, -1);
	glEnd();
	glBindTexture(GL_TEXTURE_2D, 0);
	SwapBuffers(hDC);
}

void deInit()
{
	wglMakeCurrent(NULL, NULL);
	ReleaseDC(hWnd, hDC);
	wglDeleteContext(hRC);
	DestroyWindow(hWnd);
	exit(0);
}

LONG WINAPI WindowProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	static var waskey = 0;
	RECT r;

	switch(uMsg) {
	case WM_PAINT:
		GetClientRect(hWnd, &r);
		BeginPaint(hWnd, &ps);
		EndPaint(hWnd, &ps);
		glViewport(0, 0, r.right, r.bottom);
		wglMakeCurrent(hDC, hRC);
		screen2rgba(width, height);
		display();
		return 0;
	case WM_SIZE:
		PostMessage(hWnd, WM_PAINT, 0, 0);
		return 0;
	case WM_KEYUP:
		key = 0;
		if (!is_wait) {
			Memory__poke(24576, 0);
		}
		break;
	case WM_KEYDOWN:
		switch (wParam) {
		case VK_LEFT:
			key = Keyboard__LEFT_ARROW();
			break;
		case VK_RIGHT:
			key = Keyboard__RIGHT_ARROW();
			break;
		case VK_UP:
			key = Keyboard__UP_ARROW();
			break;
		case VK_DOWN:
			key = Keyboard__DOWN_ARROW();
			break;
		case VK_RETURN:
			key = Keyboard__NEWLINE();
			break;
		case VK_BACK:
			key = Keyboard__BACKSPACE();
			break;
		case VK_HOME:
			key = Keyboard__HOME();
			break;
		case VK_PRIOR:
			key = Keyboard__PAGE_UP();
			break;
		case VK_NEXT:
			key = Keyboard__PAGE_DOWN();
			break;
		case VK_INSERT:
			key = Keyboard__INSERT();
			break;
		case VK_DELETE:
			key = Keyboard__DELETE();
			break;
		case VK_ESCAPE:
			key = Keyboard__ESC();
			break;
		}
		if (wParam >= VK_F1 && wParam <= VK_F12) {
			key = (wParam - VK_F1) + Keyboard__F1();
		}
		if (key) {
			waskey = -1;
			return 0;
		}
		waskey = 0;
		break;
	case WM_CHAR:
		key = wParam;
		if (waskey) {
			key = 0;
			waskey = 0;
		}
		return 0;
	case WM_QUIT:
		deInit();
		return 0;
		break;
	case WM_CLOSE:
		deInit();
		return 0;
	}
	return DefWindowProc(hWnd, uMsg, wParam, lParam);
}


void init()
{	
	int pf;
	WNDCLASSW wc;
	PIXELFORMATDESCRIPTOR pfd;
	RECT r;
	DWORD s;
	if (hWnd) {
		return;
	}
	FreeConsole();
	if (!hInstance) {
		hInstance = GetModuleHandle(NULL);
		wc.style = CS_OWNDC;
		wc.lpfnWndProc = (WNDPROC)WindowProc;
		wc.cbClsExtra = 0;
		wc.cbWndExtra = 0;
		wc.hInstance = hInstance;
		wc.hIcon = LoadIcon(NULL, IDI_WINLOGO);
		wc.hCursor = LoadCursor(NULL, IDC_ARROW);
		wc.hbrBackground = NULL;
		wc.lpszMenuName = NULL;
		wc.lpszClassName = L"Jack App";
		if (!RegisterClass(&wc)) {
			printf("Cannot register class!!\n");
			return;
		}
	}
	r.top = 0;
	r.left = 0;
	r.bottom = height;
	r.right = width;
	s = WS_OVERLAPPEDWINDOW | WS_CLIPSIBLINGS | WS_CLIPCHILDREN;
	AdjustWindowRect(&r, s, FALSE);
	hWnd = CreateWindowW(L"Jack App", L"Jack application", s,
			CW_USEDEFAULT, CW_USEDEFAULT, 
			r.right - r.left , r.bottom - r.top,
			NULL, NULL, hInstance, NULL);
	if (hWnd == NULL) {
		printf("Cannot Create Window!!\n");
		return;
	}
	GetClientRect(hWnd, &r);
	
	hDC = GetDC(hWnd);
	memset(&pfd, 0, sizeof(pfd));
	pfd.nSize = sizeof(pfd);
	pfd.nVersion = 1;
	pfd.dwFlags = PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL;
	pfd.iPixelType = PFD_TYPE_RGBA;
	pfd.cColorBits = 32;

	pf = ChoosePixelFormat(hDC, &pfd);
	if (pf == 0) {
		printf("Cannot choose pixel format!\n");
		return;
	}

	if (SetPixelFormat(hDC, pf, &pfd) == FALSE) {
		printf("Cannot set pixel format!\n");
		return;
	}

	DescribePixelFormat(hDC, pf, sizeof(PIXELFORMATDESCRIPTOR), &pfd);

	ReleaseDC(hWnd, hDC);
	hDC = GetDC(hWnd);
	hRC = wglCreateContext(hDC);
	wglMakeCurrent(hDC, hRC);

	ShowWindow(hWnd, _nCmdShow);

	glClearColor(1,1,1,1);
	glClearDepth(1);
	glGenTextures(1, &tex);
	glBindTexture(GL_TEXTURE_2D, tex);
	glTexImage2D(
		GL_TEXTURE_2D,
		0,
		3,
		width,
		height,
		0,
		GL_RGBA,
		GL_UNSIGNED_BYTE,
		image32);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP);
	//glBindTexture(GL_TEXTURE_2D, 0);
	glEnable(GL_TEXTURE_2D);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	//glViewport(0, 0, width, height);
}

var Screen__refresh() 
{
	if (refresh) return 0;
	refresh = -1;
	init();
	PostMessage(hWnd, WM_PAINT, 0, 0);
	return 0;
}

var Screen__processEvents(var iswait)
{
	static var nextk = 0;
	var k = nextk;
	nextk = 0;
	is_wait = iswait;
	init();
	key = 0;
	if (refresh) {
		while (PeekMessage(&msg, hWnd, 0, 0, PM_REMOVE)) {
			TranslateMessage(&msg);
			DispatchMessage(&msg);
			if (key) { 
				if (k || iswait) {
					nextk = key;
				} else {
					k = key;
				}
				key = 0;
			}
		}
		PostMessage(hWnd, WM_PAINT, 0, 0);
		while (!PeekMessage(&msg, hWnd, 0, 0, PM_NOREMOVE)) {
			Sleep(2);
		}
	}
	while (PeekMessage(&msg, hWnd, 0, 0, PM_REMOVE)) {
		TranslateMessage(&msg);
		DispatchMessage(&msg);
		if (key) {
			if (k || iswait) {
				nextk = key;
			} else {
				k = key;
			}
			key = 0;
		}
	}
	if (!k) {
		if (!iswait && refresh) {
			Sleep(2);
		}
	} else {
		Memory__poke(24576, k);
	}
	refresh = 0;
	return k;
}

#endif // JACK:IMPLEMENTATION

#endif // _WIN32
#endif // H

/*
 *                          Apple MacOS support
 *
 *                      7 may MMXXI PUBLIC DOMAIN
 *           The author disclaims copyright to this source code.
 *
 *  This source code is vastly inspired by that work :
 *  https://github.com:/jimon/osx_app_in_plain_c
 */

#ifndef JACK_MAC_H
#define JACK_MAC_H
#ifdef __APPLE__
#include <TargetConditionals.h>
#if TARGET_IPHONE_SIMULATOR
         // iOS Simulator
#elif TARGET_OS_IPHONE
        // iOS device
#elif TARGET_OS_MAC
        // Other kinds of Mac OS
#else
#   error "Unknown Apple platform"
#endif

#ifdef __LP64__
#define EncodeNSInteger "q"
#define EncodeNSUInteger "L"
#else
#define EncodeNSInteger "i"
#define EncodeNSUInteger "I"
#endif
#include <stdio.h>
#include <objc/objc.h>
#include <objc/runtime.h>
#include <objc/message.h>
#include <objc/NSObjCRuntime.h>
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <CoreGraphics/CGBase.h>
#include <CoreGraphics/CGGeometry.h>
#include <Carbon/Carbon.h>

#define kVK_Insert 0x72

enum  {   
    	NSEventTypeLeftMouseDown             = 1,
    	NSEventTypeLeftMouseUp               = 2,
    	NSEventTypeRightMouseDown            = 3,
    	NSEventTypeRightMouseUp              = 4,
    	NSEventTypeMouseMoved                = 5,
    	NSEventTypeLeftMouseDragged          = 6,
    	NSEventTypeRightMouseDragged         = 7,
    	NSEventTypeMouseEntered              = 8,
    	NSEventTypeMouseExited               = 9,
    	NSEventTypeKeyDown                   = 10,
    	NSEventTypeKeyUp                     = 11,
    	NSEventTypeFlagsChanged              = 12,
    	NSEventTypeAppKitDefined             = 13,
    	NSEventTypeSystemDefined             = 14,
    	NSEventTypeApplicationDefined        = 15,
    	NSEventTypePeriodic                  = 16,
    	NSEventTypeCursorUpdate              = 17,
    	NSEventTypeScrollWheel               = 22,
    	NSEventTypeTabletPoint               = 23,
    	NSEventTypeTabletProximity           = 24,
    	NSEventTypeOtherMouseDown            = 25,
    	NSEventTypeOtherMouseUp              = 26,
    	NSEventTypeOtherMouseDragged         = 27,
    	NSEventTypeGesture  		     = 29,
    	NSEventTypeMagnify 		     = 30,
    	NSEventTypeSwipe   		     = 31,
    	NSEventTypeRotate  		     = 18,
    	NSEventTypeBeginGesture   	     = 19,
    	NSEventTypeEndGesture 		     = 20,
    	NSEventTypeSmartMagnify		     = 32,
    	NSEventTypeQuickLook 		     = 33,
    	NSEventTypePressure 		     = 34,
    	NSEventTypeDirectTouch 		     = 37,
	NSEventTypeChangeMode 		     = 38
};

enum {
    	NSOpenGLPFAAllRenderers           =   1,
    	NSOpenGLPFATripleBuffer           =   3,
    	NSOpenGLPFADoubleBuffer           =   5,	
    	NSOpenGLPFAAuxBuffers             =   7,	
    	NSOpenGLPFAColorSize              =   8,	
    	NSOpenGLPFAAlphaSize              =  11,	
    	NSOpenGLPFADepthSize              =  12,	
    	NSOpenGLPFAStencilSize            =  13,	
    	NSOpenGLPFAAccumSize              =  14,
    	NSOpenGLPFAMinimumPolicy          =  51,	
    	NSOpenGLPFAMaximumPolicy          =  52,	
    	NSOpenGLPFASampleBuffers          =  55,	
    	NSOpenGLPFASamples                =  56,	
    	NSOpenGLPFAAuxDepthStencil        =  57,	
    	NSOpenGLPFAColorFloat             =  58,	
    	NSOpenGLPFAMultisample            =  59,    
    	NSOpenGLPFASupersample            =  60,    
    	NSOpenGLPFASampleAlpha            =  61,    
    	NSOpenGLPFARendererID             =  70,	
    	NSOpenGLPFANoRecovery             =  72,	
    	NSOpenGLPFAAccelerated            =  73,	
    	NSOpenGLPFAClosestPolicy          =  74,	
    	NSOpenGLPFABackingStore           =  76,	
    	NSOpenGLPFAScreenMask             =  84,	
    	NSOpenGLPFAAllowOfflineRenderers  =  96,  
    	NSOpenGLPFAAcceleratedCompute     =  97,	
    	NSOpenGLPFAOpenGLProfile          =  99,  
    	NSOpenGLPFAVirtualScreenCount     = 128,	
    	NSOpenGLPFAStereo                 =   6,
    	NSOpenGLPFAOffScreen              =  53,
    	NSOpenGLPFAFullScreen             =  54,
    	NSOpenGLPFASingleRenderer         =  71,
    	NSOpenGLPFARobust                 =  75,
    	NSOpenGLPFAMPSafe                 =  78,
    	NSOpenGLPFAWindow                 =  80,
    	NSOpenGLPFAMultiScreen            =  81,
    	NSOpenGLPFACompliant              =  83,
    	NSOpenGLPFAPixelBuffer            =  90,
    	NSOpenGLPFARemotePixelBuffer      =  91,
};


typedef CGPoint NSPoint;
typedef CGRect NSRect;
extern id NSApp;
extern id const NSDefaultRunLoopMode;

#ifdef __arm64__
#define objc_msgSend_stret objc_msgSend
#define objc_msgSend_fpret objc_msgSend
#endif
#define objc_msgSend ((id(*)(id,SEL,...))objc_msgSend)

#ifdef JACK_IMPLEMENTATION

int windowCount = 0;
int width = 512;
int height = 256;
var refresh_ = 0;
var key = 0;
var is_wait = 0;
SEL allocSel = 0;
SEL initSel;
GLuint tex = 1;
id pool;
Class NSAutoreleasePoolClass;
id poolAlloc;
Class NSApplicationClass;
SEL sharedApplicationSel;
SEL setActivationPolicySel;
Class NSObjectClass;
Class AppDelegateClass;
Protocol* NSApplicationDelegateProtocol;
bool resultAddProtoc;
SEL applicationShouldTerminateSel;
bool resultAddMethod;
id dgAlloc;
id dg;
SEL autoreleaseSel;
SEL setDelegateSel;
SEL finishLaunchingSel;
Class NSMenuClass;
id menubarAlloc;
id menubar;
Class NSMenuItemClass;
id appMenuItemAlloc;
id appMenuItem;
SEL addItemSel;
SEL setMainMenuSel;
id appMenuAlloc;
id appMenu;
Class NSProcessInfoClass;
SEL processInfoSel;
id processInfo;
SEL processNameSel;
id appName;
Class NSStringClass;
SEL stringWithUTF8StringSel;
id quitTitlePrefixString;
SEL stringByAppendingStringSel;
id quitTitle;
id quitMenuItemKey;
id quitMenuItemAlloc;
SEL initWithTitleSel;
SEL terminateSel;
id quitMenuItem;
SEL setSubmenuSel;
NSRect rect = {{0, 0}, {512, 256}};
Class NSWindowClass;
id windowAlloc;
SEL initWithContentRectSel;
id window;
SEL setReleasedWhenClosedSel;
Class WindowDelegateClass;
Protocol* NSWindowDelegateProtocol;
SEL windowWillCloseSel;
id wdgAlloc;
id wdg;
SEL contentViewSel;
id contentView;
SEL setWantsBestResolutionOpenGLSurfaceSel;
NSPoint point = {20, 20};
SEL cascadeTopLeftFromPointSel;
id titleString;
SEL setTitleSel;
uint32_t glAttributes[] = { 
	NSOpenGLPFADoubleBuffer,
	NSOpenGLPFAColorSize, 24,
	NSOpenGLPFAAlphaSize, 8,
	0};
Class NSOpenGLPixelFormatClass;
id pixelFormatAlloc;
SEL initWithAttributesSel;
id pixelFormat;
Class NSOpenGLContextClass;
id openGLContextAlloc;
SEL initWithFormatSel;
id openGLContext;
SEL setViewSel;
SEL makeKeyAndOrderFrontSel;
SEL setAcceptsMouseMovedEventsSel;
Class NSColorClass;
id blackColor;
SEL setBackgroundColorSel;
SEL activateIgnoringOtherAppsSel;
Class NSDateClass;
SEL distantPastSel;
SEL nextEventMatchingMaskSel;
SEL frameSel;
SEL typeSel;
SEL buttonNumberSel;
SEL keyCodeSel;
SEL keyWindowSel;
SEL mouseLocationOutsideOfEventStreamSel;
SEL convertRectToBackingSel;
SEL scrollingDeltaXSel;
SEL scrollingDeltaYSel;
SEL hasPreciseScrollingDeltasSel;
SEL modifierFlagsSel;
SEL charactersSel;
SEL UTF8StringSel;
SEL sendEventSel;
SEL updateWindowsSel;
SEL updateSel;
SEL makeCurrentContextSel;
SEL flushBufferSel;
id distantPast;
id event;
NSUInteger eventType;
id currentWindow;
id currentWindowContentView;
NSRect adjustFrame;
NSPoint p;
NSRect r = {0, 0, 0, 0};
NSInteger number;
CGFloat deltaX;
CGFloat deltaY;
BOOL precisionScrolling;
NSUInteger modifiers;
id inputText;
const char * inputTextUTF8;
uint16_t keyCode;
int terminate = 0;

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0,0,0,1);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glBindTexture(GL_TEXTURE_2D, tex);
	glTexImage2D(
		GL_TEXTURE_2D,
		0,
		3,
		width,
		height,
		0,
		GL_RGBA,
		GL_UNSIGNED_BYTE,
		image32);
	glLoadIdentity();
	glBegin(GL_QUADS);
	glTexCoord2f(0,0); glVertex3f(-1,1, -1);
	glTexCoord2f(1,0); glVertex3f( 1,1, -1);
	glTexCoord2f(1,1); glVertex3f( 1, -1, -1);
	glTexCoord2f(0,1); glVertex3f(-1, -1, -1);
	glEnd();
	glBindTexture(GL_TEXTURE_2D, 0);
}

void deInit()
{
	objc_msgSend(pool, sel_registerName("drain"));
}

NSUInteger applicationShouldTerminate(id self, SEL _sel, id sender)
{
	deInit();
	return 1;
}

void windowWillClose(id self, SEL _sel, id notification)
{
	deInit();
	terminate = -1;
}

void init()
{
	if (allocSel) return;

	allocSel = sel_registerName("alloc");
	initSel = sel_registerName("init");

	NSAutoreleasePoolClass = objc_getClass("NSAutoreleasePool");
	poolAlloc = objc_msgSend((id)NSAutoreleasePoolClass, allocSel);
	pool = objc_msgSend(poolAlloc, initSel);

	NSApplicationClass = objc_getClass("NSApplication");
	sharedApplicationSel = sel_registerName("sharedApplication");
	objc_msgSend((id)NSApplicationClass, sharedApplicationSel);

	setActivationPolicySel = sel_registerName("setActivationPolicy:");
	objc_msgSend(NSApp, setActivationPolicySel, 0);

	NSObjectClass = objc_getClass("NSObject");
	AppDelegateClass = objc_allocateClassPair(
			NSObjectClass, "AppDelegate", 0);
	NSApplicationDelegateProtocol = objc_getProtocol(
			"NSApplicationDelegate");
	resultAddProtoc = class_addProtocol(
			AppDelegateClass, NSApplicationDelegateProtocol);
	applicationShouldTerminateSel = sel_registerName(
			"applicationShouldTerminate:");
	resultAddMethod = class_addMethod(
			AppDelegateClass, applicationShouldTerminateSel, 
			(IMP)applicationShouldTerminate, 
			EncodeNSUInteger "@:@");
	dgAlloc = objc_msgSend((id)AppDelegateClass, allocSel);
	dg = objc_msgSend(dgAlloc, initSel);

	autoreleaseSel = sel_registerName("autorelease");
	objc_msgSend(dg, autoreleaseSel);

	setDelegateSel = sel_registerName("setDelegate:");
	objc_msgSend(NSApp, setDelegateSel, dg);

	finishLaunchingSel = sel_registerName("finishLaunching");
	objc_msgSend(NSApp, finishLaunchingSel);

	NSMenuClass = objc_getClass("NSMenu");
	menubarAlloc = objc_msgSend((id)NSMenuClass, allocSel);
	menubar = objc_msgSend(menubarAlloc, initSel);
	objc_msgSend(menubar, autoreleaseSel);

	NSMenuItemClass = objc_getClass("NSMenuItem");
	appMenuItemAlloc = objc_msgSend((id)NSMenuItemClass, allocSel);
	appMenuItem = objc_msgSend(appMenuItemAlloc, initSel);
	objc_msgSend(appMenuItem, autoreleaseSel);

	addItemSel = sel_registerName("addItem:");
	objc_msgSend(menubar, addItemSel, appMenuItem);

	setMainMenuSel = sel_registerName("setMainMenu:");
	objc_msgSend(NSApp, setMainMenuSel, menubar);

	appMenuAlloc = objc_msgSend((id)NSMenuClass, allocSel);
	appMenu = objc_msgSend(appMenuAlloc, initSel);
	objc_msgSend(appMenu, autoreleaseSel);

	NSProcessInfoClass = objc_getClass("NSProcessInfo");
	processInfoSel = sel_registerName("processInfo");
	processInfo = objc_msgSend((id)NSProcessInfoClass, processInfoSel);
	processNameSel = sel_registerName("processName");
	appName = objc_msgSend(processInfo, processNameSel);

	NSStringClass = objc_getClass("NSString");
	stringWithUTF8StringSel = sel_registerName("stringWithUTF8String:");
	quitTitlePrefixString = objc_msgSend(
			(id)NSStringClass, stringWithUTF8StringSel, "Quit ");
	stringByAppendingStringSel = sel_registerName(
			"stringByAppendingString:");
	quitTitle = objc_msgSend(quitTitlePrefixString, 
			stringByAppendingStringSel, appName);

	quitMenuItemKey = objc_msgSend((id)NSStringClass, 
			stringWithUTF8StringSel, "q");
	quitMenuItemAlloc = objc_msgSend((id)NSMenuItemClass, allocSel);
	initWithTitleSel = sel_registerName(
			"initWithTitle:action:keyEquivalent:");
	terminateSel = sel_registerName("terminate:");
	quitMenuItem = objc_msgSend(quitMenuItemAlloc, 
			initWithTitleSel, quitTitle, 
			terminateSel, quitMenuItemKey);
	objc_msgSend(quitMenuItem, autoreleaseSel);

	objc_msgSend(appMenu, addItemSel, quitMenuItem);

	setSubmenuSel = sel_registerName("setSubmenu:");
	objc_msgSend(appMenuItem, setSubmenuSel, appMenu);

	NSWindowClass = objc_getClass("NSWindow");
	windowAlloc = objc_msgSend((id)NSWindowClass, allocSel);
	initWithContentRectSel = sel_registerName(
			"initWithContentRect:styleMask:backing:defer:");
	window = objc_msgSend(windowAlloc, initWithContentRectSel, 
			rect, 15, 2, NO);
	objc_msgSend(window, autoreleaseSel);

	setReleasedWhenClosedSel = sel_registerName("setReleasedWhenClosed:");
	objc_msgSend(window, setReleasedWhenClosedSel, NO);

	windowCount = 1;

	WindowDelegateClass = objc_allocateClassPair(
			NSObjectClass, "WindowDelegate", 0);
	NSWindowDelegateProtocol = objc_getProtocol("NSWindowDelegate");
	resultAddProtoc = class_addProtocol(
			WindowDelegateClass, NSWindowDelegateProtocol);
	windowWillCloseSel = sel_registerName("windowWillClose:");
	resultAddMethod = class_addMethod(
			WindowDelegateClass, windowWillCloseSel, 
			(IMP)windowWillClose,  "v@:@");
	wdgAlloc = objc_msgSend((id)WindowDelegateClass, allocSel);
	wdg = objc_msgSend(wdgAlloc, initSel);
	objc_msgSend(wdg, autoreleaseSel);

	objc_msgSend(window, setDelegateSel, wdg);

	contentViewSel = sel_registerName("contentView");
	contentView = objc_msgSend(window, contentViewSel);

	setWantsBestResolutionOpenGLSurfaceSel = sel_registerName(
			"setWantsBestResolutionOpenGLSurface:");
	objc_msgSend(contentView, 
			setWantsBestResolutionOpenGLSurfaceSel, YES);
	cascadeTopLeftFromPointSel = sel_registerName(
			"cascadeTopLeftFromPoint:");
	objc_msgSend(window, cascadeTopLeftFromPointSel, point);

	titleString = objc_msgSend((id)NSStringClass, 
			stringWithUTF8StringSel, "JACK Application");
	setTitleSel = sel_registerName("setTitle:");
	objc_msgSend(window, setTitleSel, titleString);

	NSOpenGLPixelFormatClass = objc_getClass("NSOpenGLPixelFormat");
	pixelFormatAlloc = objc_msgSend(
			(id)NSOpenGLPixelFormatClass, allocSel);
	initWithAttributesSel = sel_registerName("initWithAttributes:");
	pixelFormat = objc_msgSend(pixelFormatAlloc, 
			initWithAttributesSel, glAttributes);
	objc_msgSend(pixelFormat, autoreleaseSel);

	NSOpenGLContextClass = objc_getClass("NSOpenGLContext");
	openGLContextAlloc = objc_msgSend((id)NSOpenGLContextClass, allocSel);
	initWithFormatSel = sel_registerName("initWithFormat:shareContext:");
	openGLContext = objc_msgSend(openGLContextAlloc, 
			initWithFormatSel, pixelFormat, nil);
	objc_msgSend(openGLContext, autoreleaseSel);

	setViewSel = sel_registerName("setView:");
	objc_msgSend(openGLContext, setViewSel, contentView);

	makeKeyAndOrderFrontSel = sel_registerName("makeKeyAndOrderFront:");
	objc_msgSend(window, makeKeyAndOrderFrontSel, window);

	setAcceptsMouseMovedEventsSel = sel_registerName(
			"setAcceptsMouseMovedEvents:");
	objc_msgSend(window, setAcceptsMouseMovedEventsSel, YES);

	NSColorClass = objc_getClass("NSColor");
	blackColor = ((id (*)(Class, SEL))objc_msgSend)(
			NSColorClass, sel_registerName("blackColor"));
	setBackgroundColorSel = sel_registerName("setBackgroundColor:");
	objc_msgSend(window, setBackgroundColorSel, blackColor);

	activateIgnoringOtherAppsSel = sel_registerName(
			"activateIgnoringOtherApps:");
	objc_msgSend(NSApp, activateIgnoringOtherAppsSel, YES);


	NSDateClass = objc_getClass("NSDate");
	distantPastSel = sel_registerName("distantPast");
	nextEventMatchingMaskSel = sel_registerName(
			"nextEventMatchingMask:untilDate:inMode:dequeue:");
	frameSel = sel_registerName("frame");
	typeSel = sel_registerName("type");
	buttonNumberSel = sel_registerName("buttonNumber");
	keyCodeSel = sel_registerName("keyCode");
	keyWindowSel = sel_registerName("keyWindow");
	mouseLocationOutsideOfEventStreamSel = sel_registerName(
			"mouseLocationOutsideOfEventStream");
	convertRectToBackingSel = sel_registerName("convertRectToBacking:");
	scrollingDeltaXSel = sel_registerName("scrollingDeltaX");
	scrollingDeltaYSel = sel_registerName("scrollingDeltaY");
	hasPreciseScrollingDeltasSel = sel_registerName(
			"hasPreciseScrollingDeltas");
	modifierFlagsSel = sel_registerName("modifierFlags");
	charactersSel = sel_registerName("characters");
	UTF8StringSel = sel_registerName("UTF8String");
	sendEventSel = sel_registerName("sendEvent:");
	updateWindowsSel = sel_registerName("updateWindows");
	updateSel = sel_registerName("update");
	makeCurrentContextSel = sel_registerName("makeCurrentContext");
	flushBufferSel = sel_registerName("flushBuffer");
	return;
}

void initgl()
{

	objc_msgSend(NSApp, updateWindowsSel);

	objc_msgSend(openGLContext, updateSel);

	objc_msgSend(openGLContext, makeCurrentContextSel);

	rect = ((NSRect(*)(id,SEL))objc_msgSend_stret)(contentView, frameSel);

	rect = ((NSRect(*)(id,SEL,NSRect))objc_msgSend_stret)(
			contentView, convertRectToBackingSel, rect);

	glViewport(0, 0, rect.size.width, rect.size.height);
	glClearColor(1,1,1,1);
	glClearDepth(1);
	glGenTextures(1, &tex);
	glBindTexture(GL_TEXTURE_2D, tex);
	glTexImage2D(
		GL_TEXTURE_2D,
		0,
		3,
		width,
		height,
		0,
		GL_RGBA,
		GL_UNSIGNED_BYTE,
		image32);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP);
	glEnable(GL_TEXTURE_2D);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

var getKey(var k)
{
	var key = 0;
	switch (k) {
	case kVK_LeftArrow:
		key = Keyboard__LEFT_ARROW();
		break;
	case kVK_RightArrow:
		key = Keyboard__RIGHT_ARROW();
		break;
	case kVK_UpArrow:
		key = Keyboard__UP_ARROW();
		break;
	case kVK_DownArrow:
		key = Keyboard__DOWN_ARROW();
		break;
	case kVK_Return:
		key = Keyboard__NEWLINE();
		break;
	case kVK_Delete:
		key = Keyboard__BACKSPACE();
		break;
	case kVK_Home:
		key = Keyboard__HOME();
		break;
	case kVK_PageUp:
		key = Keyboard__PAGE_UP();
		break;
	case kVK_PageDown:
		key = Keyboard__PAGE_DOWN();
		break;
	case kVK_Insert:
		key = Keyboard__INSERT();
		break;
	case kVK_ForwardDelete:
		key = Keyboard__DELETE();
		break;
	case kVK_Escape:
		key = Keyboard__ESC();
		break;
	case kVK_F1:
		key = Keyboard__F1();
		break;
	case kVK_F2:
		key = Keyboard__F2();
		break;
	case kVK_F3:
		key = Keyboard__F3();
		break;
	case kVK_F4:
		key = Keyboard__F4();
		break;
	case kVK_F5:
		key = Keyboard__F5();
		break;
	case kVK_F6:
		key = Keyboard__F6();
		break;
	case kVK_F7:
		key = Keyboard__F7();
		break;
	case kVK_F8:
		key = Keyboard__F8();
		break;
	case kVK_F9:
		key = Keyboard__F9();
		break;
	case kVK_F10:
		key = Keyboard__F10();
		break;
	case kVK_F11:
		key = Keyboard__F11();
		break;
	case kVK_F12:
		key = Keyboard__F12();
		break;
	}

	return key;	
}

int check_event()
{

	distantPast = objc_msgSend((id)NSDateClass, distantPastSel);
	event = objc_msgSend(NSApp, nextEventMatchingMaskSel, 
				NSUIntegerMax, distantPast, 
				NSDefaultRunLoopMode, YES);
	if (!event) return 0;
	eventType = (NSUInteger)objc_msgSend(event, typeSel);

	switch (eventType) {
	case NSEventTypeMouseMoved:
	case NSEventTypeLeftMouseDragged:
	case NSEventTypeRightMouseDragged:
	case NSEventTypeOtherMouseDragged:
		currentWindow = objc_msgSend(NSApp, keyWindowSel);
		currentWindowContentView = objc_msgSend(
				currentWindow, contentViewSel);
		adjustFrame = ((NSRect(*)(id,SEL))objc_msgSend_stret)(
				currentWindowContentView, frameSel);
		p = ((NSPoint(*)(id,SEL))objc_msgSend)(
				currentWindow, 
				mouseLocationOutsideOfEventStreamSel);
		if (p.x < 0) {
			p.x = 0;
		} else if (p.x > adjustFrame.size.width) {
			p.x = adjustFrame.size.width;
		}
		if (p.y < 0) {
			p.y = 0;
		} else if (p.y > adjustFrame.size.height) {
		       	p.y = adjustFrame.size.height;
		}
		r.origin.x = p.x;
		r.origin.y = p.y;
		r.size.width = 0;
		r.size.height = 0;
		r = ((NSRect(*)(id,SEL,NSRect))objc_msgSend_stret)(
				currentWindowContentView, 
				convertRectToBackingSel, r);
		p = r.origin;

		break;
	case NSEventTypeLeftMouseDown:
		break;
	case NSEventTypeLeftMouseUp:
		break;
	case NSEventTypeRightMouseDown:
		break;
	case NSEventTypeRightMouseUp:
		break;
	case NSEventTypeOtherMouseDown:
		number = (NSInteger)objc_msgSend(event, buttonNumberSel);
		break;
	case NSEventTypeOtherMouseUp:
		number = (NSInteger)objc_msgSend(event, buttonNumberSel);
		break;
	case NSEventTypeScrollWheel:
		deltaX = ((CGFloat(*)(id,SEL))objc_msgSend_fpret)(
				event, scrollingDeltaXSel);
		deltaY = ((CGFloat(*)(id,SEL))objc_msgSend_fpret)(
				event, scrollingDeltaYSel);
		precisionScrolling = (BOOL)objc_msgSend(
				event, hasPreciseScrollingDeltasSel);

		if (precisionScrolling) {
			deltaX *= 0.1f; 
			deltaY *= 0.1f;
		}
		break;
	case NSEventTypeFlagsChanged:
		modifiers = (NSUInteger)objc_msgSend(event, modifierFlagsSel);
		break;
	case NSEventTypeKeyDown:
		inputText = objc_msgSend(event, charactersSel);
		inputTextUTF8 = (const char*)objc_msgSend(
				inputText, UTF8StringSel);
		keyCode = (unsigned short)objc_msgSend(event, keyCodeSel);
		key = getKey(keyCode);

		if (!key && inputTextUTF8) {
			key = inputTextUTF8[0]; // FIXME
		}
		break;
	case NSEventTypeKeyUp:
		keyCode = (unsigned short)objc_msgSend(event, keyCodeSel);
		key = 0;
		if (!is_wait) {
			Memory__poke(24576, 0);
		}
		break;
	default:
		break;
	}

	objc_msgSend(NSApp, sendEventSel, event);
	initgl();
	return 1;
}

void update()
{

	objc_msgSend(NSApp, updateWindowsSel);

	objc_msgSend(openGLContext, updateSel);

	objc_msgSend(openGLContext, makeCurrentContextSel);

	rect = ((NSRect(*)(id,SEL))objc_msgSend_stret)(contentView, frameSel);

	rect = ((NSRect(*)(id,SEL,NSRect))objc_msgSend_stret)(
			contentView, convertRectToBackingSel, rect);

	glViewport(0, 0, rect.size.width, rect.size.height);
	screen2rgba(width, height);
	display();
	objc_msgSend(openGLContext, flushBufferSel);
}


var Screen__refresh() 
{
	if (refresh_) return 0;
	refresh_ = -1;
	init();
	return 0;
}

var Screen__processEvents(var iswait)
{
	static var nextk = 0;
	var k = nextk;
	is_wait = iswait;
	nextk = 0;
	init();
	key = 0;
	while (check_event()) {
		if (key) {
			if (k || iswait) {
				nextk = key;
			} else {
				k = key;
			}
			key = 0;
		}
	}
	if (terminate) {
		objc_msgSend(NSApp, terminateSel);
	}
	update();
	if (!k) {
		if (!iswait && refresh_) {
			usleep(1000);
		}
	} else {
		Memory__poke(24576, k);
	}
	refresh_ = 0;
	return k;
}


#endif // JACK_IMPLEMENTATION

#endif // __APPLE__
#endif // H

/*
 *                     jack public domain compiler
 *
 *                      15 may MMXXI PUBLIC DOMAIN
 *           The author disclaims copyright to this source code.
 *
 *
 */


/*
 *                     jack public domain compiler
 *
 *                      15 may MMXXI PUBLIC DOMAIN
 *           The author disclaims copyright to this source code.
 *
 *
 */


#ifdef JACK_IMPLEMENTATION
var JackAst___str0[] = {0};
var JackAst___str1[] = {32,32,0};
var JackAst___str2[] = {116,97,103,61,0};
var JackAst___str3[] = {32,100,97,116,97,61,0};
var JackAst___str4[] = {108,101,102,116,58,0};
#define tag__ (__this+0)
#define data__ (__this+1)
#define left__ (__this+2)
#define child__ (__this+3)
#define next__ (__this+4)
#define parent__ (__this+5)
#define line__ (__this+6)
#define file__ (__this+7)
#define id__ (__this+8)
var JackAst__new(var tag_, var data_, var parent_) {
	var __this;
	__this = Memory__alloc(9);
	__poke(tag__, tag_);
	__poke(data__, String__copy(data_));
	__poke(parent__, parent_);
	__poke(child__, 0);
	__poke(next__, 0);
	__poke(left__, 0);
	__poke(line__, 0);
	__poke(file__, Memory__getString(JackAst___str0));
	__poke(id__, 0);
	return __this;
}
var JackAst__dispose(var __this) {
	var c;
	var d;
	String__dispose(__peek(data__));
	c = __peek(child__);
	while (!(((c)==(0)))) {
		d = JackAst__getNext(c);
		JackAst__dispose(c);
		c = d;
	}
	if (__peek(left__)) {
		JackAst__dispose(__peek(left__));
	}

	Memory__deAlloc(__this);
	return 0;
}
var JackAst__setLine(var __this, var line_, var file_) {
	__poke(line__, line_);
	__poke(file__, file_);
	return 0;
}
var JackAst__ident(var __this, var f, var level) {
	while (((level)>(0))) {
		level = level-1;
		File__writeString(f, Memory__getString(JackAst___str1));
	}
	return 0;
}
var JackAst__process(var __this, var f, var level, var par) {
	var c;
	var d;
	JackAst__ident(__this, f, level);
	File__writeString(f, Memory__getString(JackAst___str2));
	File__writeString(f, JackParser__getConst(par, __peek(tag__)));
	File__writeString(f, Memory__getString(JackAst___str3));
	File__writeString(f, __peek(data__));
	File__writeByte(f, 10);
	level = level+1;
	if (__peek(left__)) {
		JackAst__ident(__this, f, level);
		File__writeString(f, Memory__getString(JackAst___str4));
		File__writeByte(f, 10);
		JackAst__process(__peek(left__), f, level+1, par);
	}

	c = __peek(child__);
	while (!(((c)==(0)))) {
		JackAst__process(c, f, level, par);
		d = JackAst__getNext(c);
		c = d;
	}
	return 0;
}
var JackAst__add(var __this, var tag_, var data_) {
	var a;
	a = JackAst__new(tag_, data_, __this);
	JackAst__append(__this, a);
	return a;
}
var JackAst__addop(var __this, var data_, var left_) {
	var a;
	a = JackAst__new(C__OP(), data_, __this);
	JackAst__setLeft(a, left_);
	return a;
}
var JackAst__set(var __this, var tag_, var data_) {
	var c;
	c = __peek(child__);
	while (!(((c)==(0)))) {
		if ((((JackAst__getTag(c))==(tag_)))&&(((0)==(String__compare(data_, JackAst__getData(c)))))) {
			return c;
		}

		c = JackAst__getNext(c);
	}
	return JackAst__add(__this, tag_, data_);
}
var JackAst__append(var __this, var a) {
	var c;
	c = __peek(child__);
	if (((c)==(0))) {
		__poke(child__, a);
	} else {
		while (!(((JackAst__getNext(c))==(0)))) {
			c = JackAst__getNext(c);
		}
		JackAst__setNext(c, a);
	}
	return a;
}
var JackAst__removeChild(var __this, var old) {
	var c;
	var d;
	c = __peek(child__);
	if (((c)==(0))) {
		return 0;
	}

	if (((old)==(__peek(child__)))) {
		__poke(child__, JackAst__getNext(__peek(child__)));
		JackAst__setNext(old, 0);
		JackAst__setParent(old, 0);
		return old;
	}

	d = JackAst__getNext(c);
	while (!(((d)==(0)))) {
		if (((d)==(old))) {
			JackAst__setNext(c, JackAst__getNext(d));
			JackAst__setNext(old, 0);
			JackAst__setParent(old, 0);
			return old;
		}

		c = d;
		c = JackAst__getNext(c);
	}
	return 0;
}
var JackAst__replaceChild(var __this, var old, var new_) {
	var c;
	var n;
	if (((__peek(child__))==(0))) {
		return 0;
	}

	c = __peek(child__);
	if (((c)==(old))) {
		JackAst__setNext(new_, JackAst__getNext(c));
		JackAst__setNext(c, 0);
		__poke(child__, new_);
		JackAst__setParent(new_, __this);
		return 0;
	}

	n = JackAst__getNext(c);
	while (!(((n)==(0)))) {
		if (((n)==(old))) {
			JackAst__setNext(new_, JackAst__getNext(n));
			JackAst__setNext(n, 0);
			JackAst__setNext(c, new_);
			JackAst__setParent(new_, __this);
			return new_;
		}

		c = n;
		n = JackAst__getNext(c);
	}
	return 0;
}
var JackAst__setId(var __this, var n) {
	__poke(id__, n);
	return 0;
}
var JackAst__getId(var __this) {
	return __peek(id__);
}
var JackAst__setTag(var __this, var n) {
	__poke(tag__, n);
	return 0;
}
var JackAst__setParent(var __this, var n) {
	__poke(parent__, n);
	return 0;
}
var JackAst__setLeft(var __this, var n) {
	__poke(left__, n);
	return 0;
}
var JackAst__setChild(var __this, var n) {
	__poke(child__, n);
	return 0;
}
var JackAst__setNext(var __this, var n) {
	__poke(next__, n);
	return 0;
}
var JackAst__getTag(var __this) {
	return __peek(tag__);
}
var JackAst__getFile(var __this) {
	return __peek(file__);
}
var JackAst__getLine(var __this) {
	return __peek(line__);
}
var JackAst__getData(var __this) {
	return __peek(data__);
}
var JackAst__getChild(var __this) {
	return __peek(child__);
}
var JackAst__getLeft(var __this) {
	return __peek(left__);
}
var JackAst__getParent(var __this) {
	return __peek(parent__);
}
var JackAst__getNext(var __this) {
	return __peek(next__);
}
#undef tag__
#undef data__
#undef left__
#undef child__
#undef next__
#undef parent__
#undef line__
#undef file__
#undef id__
#endif

#ifdef JACK_IMPLEMENTATION
var JackAstUtils___str0[] = {105,110,116,0};
var JackAstUtils___str1[] = {0};
var JackAstUtils___str2[] = {0};
var JackAstUtils__isType(var t) {
	if ((((t)==(C__CLASSNAME())))||(((t)==(C__VOID())))||(((t)==(C__INT())))||(((t)==(C__BOOLEAN())))||(((t)==(C__CHAR())))) {
		return -1;
	}

	return 0;
}
var JackAstUtils__isParentExprBool(var c) {
	var t;
	var d;
	d = JackAst__getParent(c);
	t = JackAst__getTag(d);
	if ((((t)==(C__LEFT_PARENTHESIS())))) {
		return JackAstUtils__isParentExprBool(d);
	}

	if ((((t)==(C__EXPR())))) {
		return JackAstUtils__isParentExprBool(d);
	}

	if ((((t)==(C__UNARYTILDE())))) {
		return JackAstUtils__isParentExprBool(d);
	}

	if ((((t)==(C__OR())))) {
		return JackAstUtils__isParentExprBool(d);
	}

	if ((((t)==(C__AND())))) {
		return JackAstUtils__isParentExprBool(d);
	}

	if (((t)==(C__MULTIPLY()))) {
		return 0;
	}

	if (((t)==(C__PLUS()))) {
		return 0;
	}

	if (((t)==(C__DIV()))) {
		return 0;
	}

	if (((t)==(C__MINUS()))) {
		return 0;
	}

	if (((t)==(C__ASSIGN()))) {
		return 0;
	}

	return -1;
}
var JackAstUtils__isInt(var p, var c) {
	var d;
	var s;
	var t;
	d = c;
	if (d) {
		t = JackAst__getTag(d);
		if ((((t)==(C__LEFT_PARENTHESIS())))) {
			return JackAstUtils__isInt(p, JackAst__getChild(d));
		}

		if (((t)==(C__EXPR()))) {
			return JackAstUtils__isInt(p, JackAst__getChild(d));
		}

		if (((t)==(C__UNARYTILDE()))) {
			return JackAstUtils__isInt(p, JackAst__getChild(d));
		}

		if (((t)==(C__AND()))) {
			if (JackAstUtils__isInt(p, JackAst__getLeft(d))) {
				return -1;
			}

			return JackAstUtils__isInt(p, JackAst__getChild(d));
		}

		if (((t)==(C__OR()))) {
			if (JackAstUtils__isInt(p, JackAst__getLeft(d))) {
				return -1;
			}

			return JackAstUtils__isInt(p, JackAst__getChild(d));
		}

		if (((t)==(C__MULTIPLY()))) {
			return -1;
		}

		if (((t)==(C__PLUS()))) {
			return -1;
		}

		if (((t)==(C__DIV()))) {
			return -1;
		}

		if (((t)==(C__MINUS()))) {
			return -1;
		}

		if (((t)==(C__INT_CONST()))) {
			return -1;
		}

		if (((t)==(C__VARNAME()))) {
			s = JackAstUtils__getTypeOf(p, d);
			if (((0)==(String__compare(s, Memory__getString(JackAstUtils___str0))))) {
				return -1;
			} else {
				return 0;
			}
		}

		if (((t)==(C__LESS()))) {
			return 0;
		}

		if (((t)==(C__GREATER()))) {
			return 0;
		}

		if (((t)==(C__EQUAL()))) {
			return 0;
		}

	}

	return 0;
}
var JackAstUtils__isSubroutine(var t) {
	if (((t)==(C__FUNCTION()))) {
		return -1;
	}

	if (((t)==(C__METHOD()))) {
		return -1;
	}

	if (((t)==(C__CONSTRUCTOR()))) {
		return -1;
	}

	return 0;
}
var JackAstUtils__isVarnameSet(var c, var s) {
	var d;
	d = JackAst__getChild(c);
	if (d) {
		d = JackAst__getChild(d);
	}

	if (d) {
		if (((String__compare(s, JackAst__getData(d)))==(0))) {
			return -1;
		}

	}

	return 0;
}
var JackAstUtils__functionGetClassOf(var c, var s) {
	var d;
	var n;
	var t;
	var r;
	d = JackAst__getChild(c);
	t = JackAst__getTag(d);
	if (JackAstUtils__isType(t)) {
		n = JackAst__getChild(d);
		t = JackAst__getTag(n);
		if ((((t)==(C__SUBROUTINENAME())))||(((t)==(C__CALLBACK())))) {
			n = JackAst__getChild(n);
			t = JackAst__getTag(n);
			if (((t)==(C__PARAMS()))) {
				n = JackAst__getChild(n);
				while (!(((n)==(0)))) {
					r = JackAstUtils__isVarnameSet(n, s);
					if (r) {
						return Memory__getString(JackAstUtils___str1);
					}

					n = JackAst__getNext(n);
				}
			}

		}

	}

	while (!(((d)==(0)))) {
		t = JackAst__getTag(d);
		if (((t)==(C__VAR()))) {
			n = JackAst__getChild(d);
			if (n) {
				r = JackAstUtils__isVarnameSet(n, s);
				if (r) {
					return Memory__getString(JackAstUtils___str2);
				}

			}

		}

		d = JackAst__getNext(d);
	}
	return 0;
}
var JackAstUtils__classGetClassOf(var clas, var c, var s) {
	var d;
	var t;
	var r;
	d = JackAst__getChild(c);
	while (!(((d)==(0)))) {
		t = JackAst__getTag(d);
		if ((((t)==(C__FIELD())))||(((t)==(C__STATIC())))) {
			r = JackAstUtils__isVarnameSet(d, s);
			if (r) {
				return clas;
			}

		}

		d = JackAst__getNext(d);
	}
	return 0;
}
var JackAstUtils__classGetTypeOf(var p, var c, var s) {
	var d;
	var t;
	var r;
	d = JackAst__getChild(c);
	while (!(((d)==(0)))) {
		t = JackAst__getTag(d);
		if ((((t)==(C__FIELD())))||(((t)==(C__STATIC())))) {
			r = JackAstUtils__getTypeOfVarname(p, JackAst__getChild(d), s);
			if (r) {
				return r;
			}

		}

		d = JackAst__getNext(d);
	}
	return 0;
}
var JackAstUtils__functionGetTypeOf(var p, var c, var s) {
	var d;
	var n;
	var t;
	var r;
	d = JackAst__getChild(c);
	while (!(((d)==(0)))) {
		t = JackAst__getTag(d);
		if (JackAstUtils__isType(t)) {
			n = JackAst__getChild(d);
			t = JackAst__getTag(n);
			if ((((t)==(C__SUBROUTINENAME())))||(((t)==(C__CALLBACK())))) {
				n = JackAst__getChild(n);
				t = JackAst__getTag(n);
				if (((t)==(C__PARAMS()))) {
					n = JackAst__getChild(n);
					while (!(((n)==(0)))) {
						r = JackAstUtils__getTypeOfVarname(p, n, s);
						if (r) {
							return r;
						}

						n = JackAst__getNext(n);
					}
				}

			}

		}

		if (((t)==(C__VAR()))) {
			n = JackAst__getChild(d);
			if (n) {
				r = JackAstUtils__getTypeOfVarname(p, n, s);
				if (r) {
					return r;
				}

			}

		}

		d = JackAst__getNext(d);
	}
	return 0;
}
var JackAstUtils__getTypeOf(var p, var c) {
	var d;
	var t;
	var s;
	var r;
	s = JackAst__getData(c);
	d = JackAst__getParent(c);
	t = JackAst__getTag(d);
	while (((((((d)==(0))))==(0)))&&(((JackAstUtils__isSubroutine(t))==(0)))) {
		d = JackAst__getParent(d);
		if (d) {
			t = JackAst__getTag(d);
		}

	}
	if (((d)==(0))) {
		return 0;
	}

	r = JackAstUtils__functionGetTypeOf(p, d, s);
	if (r) {
		return r;
	}

	while (((((((d)==(0))))==(0)))&&((((((t)==(C__CLASS()))))==(0)))) {
		d = JackAst__getParent(d);
		if (d) {
			t = JackAst__getTag(d);
		}

	}
	if (((d)==(0))) {
		return 0;
	}

	r = JackAstUtils__classGetTypeOf(p, d, s);
	if (r) {
		return r;
	}

	return 0;
}
var JackAstUtils__isStatic(var c) {
	var d;
	var n;
	var t;
	var s;
	s = JackAst__getData(c);
	d = JackAst__getParent(c);
	t = JackAst__getTag(d);
	while (((((((d)==(0))))==(0)))&&((((((t)==(C__CLASS()))))==(0)))) {
		d = JackAst__getParent(d);
		if (d) {
			t = JackAst__getTag(d);
		}

	}
	if (((d)==(0))) {
		return 0;
	}

	d = JackAst__getChild(d);
	while (!(((d)==(0)))) {
		if (((JackAst__getTag(d))==(C__STATIC()))) {
			n = JackAst__getChild(d);
			if (n) {
				n = JackAst__getChild(n);
				if (((String__compare(s, JackAst__getData(n)))==(0))) {
					return -1;
				}

			}

		}

		d = JackAst__getNext(d);
	}
	return 0;
}
var JackAstUtils__isField(var c) {
	var d;
	var n;
	var t;
	var s;
	s = JackAst__getData(c);
	d = JackAst__getParent(c);
	t = JackAst__getTag(d);
	while (((((((d)==(0))))==(0)))&&((((((t)==(C__CLASS()))))==(0)))) {
		d = JackAst__getParent(d);
		if (d) {
			t = JackAst__getTag(d);
		}

	}
	if (((d)==(0))) {
		return 0;
	}

	d = JackAst__getChild(d);
	while (!(((d)==(0)))) {
		if (((JackAst__getTag(d))==(C__FIELD()))) {
			n = JackAst__getChild(d);
			if (n) {
				n = JackAst__getChild(n);
				if (((String__compare(s, JackAst__getData(n)))==(0))) {
					return -1;
				}

			}

		}

		d = JackAst__getNext(d);
	}
	return 0;
}
var JackAstUtils__getTypeOfVarname(var p, var c, var s) {
	var d;
	var t;
	d = JackAst__getChild(c);
	if (((d)==(0))) {
		return 0;
	}

	if (((JackAst__getData(d))==(0))) {
		return 0;
	}

	if (((String__compare(s, JackAst__getData(d)))==(0))) {
		t = JackAst__getTag(c);
		if ((((t)==(C__VOID())))||(((t)==(C__INT())))||(((t)==(C__BOOLEAN())))||(((t)==(C__CHAR())))) {
			return JackParser__getConst(p, t);
		}

		return JackAst__getData(c);
	}

	return 0;
}
var JackAstUtils__getClassOf(var clas, var c) {
	var d;
	var t;
	var s;
	var r;
	s = JackAst__getData(c);
	d = JackAst__getParent(c);
	t = JackAst__getTag(d);
	while (((((((d)==(0))))==(0)))&&(((JackAstUtils__isSubroutine(t))==(0)))) {
		d = JackAst__getParent(d);
		if (d) {
			t = JackAst__getTag(d);
		}

	}
	if (((d)==(0))) {
		return 0;
	}

	r = JackAstUtils__functionGetClassOf(d, s);
	if (r) {
		return r;
	}

	while (((((((d)==(0))))==(0)))&&((((((t)==(C__CLASS()))))==(0)))) {
		d = JackAst__getParent(d);
		if (d) {
			t = JackAst__getTag(d);
		}

	}
	if (((d)==(0))) {
		return 0;
	}

	r = JackAstUtils__classGetClassOf(clas, d, s);
	if (r) {
		return r;
	}

	return 0;
}
#endif

#ifdef JACK_IMPLEMENTATION
var Main___str0[] = {46,106,97,99,107,0};
var Main___str1[] = {77,105,115,115,105,110,103,32,99,111,109,109,97,110,100,32,108,105,110,101,32,97,114,103,117,109,101,110,116,46,0};
var Main___str2[] = {45,104,97,99,107,0};
var Main___str3[] = {69,114,114,111,114,32,97,114,103,117,109,101,110,116,46,0};
var Main___str4[] = {67,111,109,112,105,108,105,110,103,32,0};
var Main___str5[] = {46,46,46,0};
var Main___str6[] = {76,105,110,107,105,110,103,32,0};
var Main___str7[] = {46,46,46,0};
var Main___str8[] = {68,111,110,101,46,0};
var Main__getJackFiles(var lst, var dir) {
	var f;
	var p;
	var i;
	var l;
	var j;
	var c;
	var d;
	var doit;
	i = 0;
	f = File__new(dir, 0);
	if (f) {
		d = File__list(f);
		if (((d)==(0))) {
			File__dispose(f);
			return 0;
		}

	}

	while (((i)<(Buffer__getSize(d)))) {
		p = Buffer__getAt(d, i);
		l = String__length(p);
		doit = 0;
		if (((l)>(0))) {
			if (((String__charAt(p, l-1))==(47))) {
				doit = -1;
			}

		}

		if (doit) {
			if ((((((String__charAt(p, 0))==(46))))==(0))) {
				Main__getJackFiles(lst, p);
			}

			String__dispose(p);
		} else {
			if (((l)>(5))) {
				c = Memory__getString(Main___str0);
				j = 5;
				while (((j)>(0))) {
					j = j-1;
					l = l-1;
					if ((((((String__charAt(p, l))==(String__charAt(c, j)))))==(0))) {
						j = -1;
					}

				}
				if (((j)==(0))) {
					Buffer__append(lst, p);
				} else {
					String__dispose(p);
				}
			} else {
				String__dispose(p);
			}
		}
		i = i+1;
	}
	Buffer__dispose(d);
	File__dispose(f);
	return 0;
}
var Main__main() {
	var cpl;
	var dir;
	var args;
	var files;
	var s;
	var i;
	var l;
	var hack;
	hack = 0;
	args = Sys__args();
	if (((Buffer__getSize(args))<(2))) {
		Output__printString(Memory__getString(Main___str1));
		Sys__error(-1);
	}

	if (((Buffer__getSize(args))==(3))) {
		s = Buffer__getAt(args, 1);
		if (((String__compare(s, Memory__getString(Main___str2)))==(0))) {
			hack = -1;
		}

		dir = Buffer__getAt(args, 2);
	} else {
		dir = Buffer__getAt(args, 1);
	}
	files = Buffer__newString(1);
	if (dir) {
		dir = String__copy(dir);
		l = String__length(dir);
		if ((((((String__charAt(dir, l-1))==(47))))==(0))) {
			dir = String__appendChar(dir, 47);
		}

		Main__getJackFiles(files, dir);
	} else {
		Output__printString(Memory__getString(Main___str3));
		Sys__error(-2);
	}
	i = 0;
	cpl = JackCompiler__new(hack);
	while (((i)<(Buffer__getSize(files)))) {
		s = Buffer__getAt(files, i);
		Output__printString(Memory__getString(Main___str4));
		Output__printString(s);
		Output__printString(Memory__getString(Main___str5));
		Output__println();
		JackCompiler__compile(cpl, s);
		i = i+1;
	}
	if (hack) {
		dir = Buffer__getAt(args, 2);
	} else {
		if (hack) {
			dir = Buffer__getAt(args, 1);
		}

	}
	Output__printString(Memory__getString(Main___str6));
	Output__printString(dir);
	Output__printString(Memory__getString(Main___str7));
	Output__println();
	JackCompiler__link(cpl, dir, files);
	JackCompiler__dispose(cpl);
	Buffer__dispose(files);
	Output__printString(Memory__getString(Main___str8));
	Output__println();
	return 0;
}
#endif

#ifdef JACK_IMPLEMENTATION
var C__NULL_CHARACTER() {
	return 0;
}
var C__START_OF_HEADING() {
	return 1;
}
var C__START_OF_TEXT() {
	return 2;
}
var C__END_OF_TEXT_CHARACTER() {
	return 3;
}
var C__END_OF_TRANSMISSION_CHARACTER() {
	return 4;
}
var C__ENQUIRY_CHARACTER() {
	return 5;
}
var C__ACKNOWLEDGE_CHARACTER() {
	return 6;
}
var C__BELL_CHARACTER() {
	return 7;
}
var C__BACKSPACE() {
	return 8;
}
var C__HORIZONTAL_TAB() {
	return 9;
}
var C__LINE_FEED() {
	return 10;
}
var C__VERTICAL_TAB() {
	return 11;
}
var C__FORM_FEED() {
	return 12;
}
var C__CARRIAGE_RETURN() {
	return 13;
}
var C__SHIFT_OUT() {
	return 14;
}
var C__SHIFT_IN() {
	return 15;
}
var C__DATA_LINK_ESCAPE() {
	return 16;
}
var C__DEVICE_CONTROL_1() {
	return 17;
}
var C__DEVICE_CONTROL_2() {
	return 18;
}
var C__DEVICE_CONTROL_3() {
	return 19;
}
var C__DEVICE_CONTROL_4() {
	return 20;
}
var C__NEGATIVE_ACKNOWLEDGE_CHARACTER() {
	return 21;
}
var C__SYNCHRONOUS_IDLE() {
	return 22;
}
var C__END_OF_TRANSMISSION_BLOCK() {
	return 23;
}
var C__CANCEL_CHARACTER() {
	return 24;
}
var C__END_OF_MEDIUM() {
	return 25;
}
var C__SUBSTITUTE_CHARACTER() {
	return 26;
}
var C__ESCAPE_CHARACTER() {
	return 27;
}
var C__FILE_SEPARATOR() {
	return 28;
}
var C__GROUP_SEPARATOR() {
	return 29;
}
var C__RECORD_SEPARATOR() {
	return 30;
}
var C__UNIT_SEPARATOR() {
	return 31;
}
var C__SPACE() {
	return 32;
}
var C__EXCLAMATION_MARK() {
	return 33;
}
var C__QUOTATION_MARK() {
	return 34;
}
var C__HASHTAG() {
	return 35;
}
var C__DOLLAR_SIGN() {
	return 36;
}
var C__PERCENT_SIGN() {
	return 37;
}
var C__AMPERSAND() {
	return 38;
}
var C__APOSTROPHE() {
	return 39;
}
var C__LEFT_PARENTHESIS() {
	return 40;
}
var C__RIGHT_PARENTHESIS() {
	return 41;
}
var C__ASTERISK() {
	return 42;
}
var C__PLUS_SIGN() {
	return 43;
}
var C__COMMA() {
	return 44;
}
var C__HYPHEN_MINUS() {
	return 45;
}
var C__FULL_STOP() {
	return 46;
}
var C__SLASH() {
	return 47;
}
var C__DIGIT_ZERO() {
	return 48;
}
var C__DIGIT_ONE() {
	return 49;
}
var C__DIGIT_TWO() {
	return 50;
}
var C__DIGIT_THREE() {
	return 51;
}
var C__DIGIT_FOUR() {
	return 52;
}
var C__DIGIT_FIVE() {
	return 53;
}
var C__DIGIT_SIX() {
	return 54;
}
var C__DIGIT_SEVEN() {
	return 55;
}
var C__DIGIT_EIGHT() {
	return 56;
}
var C__DIGIT_NINE() {
	return 57;
}
var C__COLON() {
	return 58;
}
var C__SEMICOLON() {
	return 59;
}
var C__LESS_THAN_SIGN() {
	return 60;
}
var C__EQUAL_SIGN() {
	return 61;
}
var C__GREATER_THAN_SIGN() {
	return 62;
}
var C__QUESTION_MARK() {
	return 63;
}
var C__AT_SIGN() {
	return 64;
}
var C__LATIN_CAPITAL_LETTER_A() {
	return 65;
}
var C__LATIN_CAPITAL_LETTER_B() {
	return 66;
}
var C__LATIN_CAPITAL_LETTER_C() {
	return 67;
}
var C__LATIN_CAPITAL_LETTER_D() {
	return 68;
}
var C__LATIN_CAPITAL_LETTER_E() {
	return 69;
}
var C__LATIN_CAPITAL_LETTER_F() {
	return 70;
}
var C__LATIN_CAPITAL_LETTER_G() {
	return 71;
}
var C__LATIN_CAPITAL_LETTER_H() {
	return 72;
}
var C__LATIN_CAPITAL_LETTER_I() {
	return 73;
}
var C__LATIN_CAPITAL_LETTER_J() {
	return 74;
}
var C__LATIN_CAPITAL_LETTER_K() {
	return 75;
}
var C__LATIN_CAPITAL_LETTER_L() {
	return 76;
}
var C__LATIN_CAPITAL_LETTER_M() {
	return 77;
}
var C__LATIN_CAPITAL_LETTER_N() {
	return 78;
}
var C__LATIN_CAPITAL_LETTER_O() {
	return 79;
}
var C__LATIN_CAPITAL_LETTER_P() {
	return 80;
}
var C__LATIN_CAPITAL_LETTER_Q() {
	return 81;
}
var C__LATIN_CAPITAL_LETTER_R() {
	return 82;
}
var C__LATIN_CAPITAL_LETTER_S() {
	return 83;
}
var C__LATIN_CAPITAL_LETTER_T() {
	return 84;
}
var C__LATIN_CAPITAL_LETTER_U() {
	return 85;
}
var C__LATIN_CAPITAL_LETTER_V() {
	return 86;
}
var C__LATIN_CAPITAL_LETTER_W() {
	return 87;
}
var C__LATIN_CAPITAL_LETTER_X() {
	return 88;
}
var C__LATIN_CAPITAL_LETTER_Y() {
	return 89;
}
var C__LATIN_CAPITAL_LETTER_Z() {
	return 90;
}
var C__LEFT_SQUARE_BRACKET() {
	return 91;
}
var C__BACKSLASH() {
	return 92;
}
var C__RIGHT_SQUARE_BRACKET() {
	return 93;
}
var C__CIRCUMFLEX_ACCENT() {
	return 94;
}
var C__LOW_LINE() {
	return 95;
}
var C__GRAVE_ACCENT() {
	return 96;
}
var C__LATIN_SMALL_LETTER_A() {
	return 97;
}
var C__LATIN_SMALL_LETTER_B() {
	return 98;
}
var C__LATIN_SMALL_LETTER_C() {
	return 99;
}
var C__LATIN_SMALL_LETTER_D() {
	return 100;
}
var C__LATIN_SMALL_LETTER_E() {
	return 101;
}
var C__LATIN_SMALL_LETTER_F() {
	return 102;
}
var C__LATIN_SMALL_LETTER_G() {
	return 103;
}
var C__LATIN_SMALL_LETTER_H() {
	return 104;
}
var C__LATIN_SMALL_LETTER_I() {
	return 105;
}
var C__LATIN_SMALL_LETTER_J() {
	return 106;
}
var C__LATIN_SMALL_LETTER_K() {
	return 107;
}
var C__LATIN_SMALL_LETTER_L() {
	return 108;
}
var C__LATIN_SMALL_LETTER_M() {
	return 109;
}
var C__LATIN_SMALL_LETTER_N() {
	return 110;
}
var C__LATIN_SMALL_LETTER_O() {
	return 111;
}
var C__LATIN_SMALL_LETTER_P() {
	return 112;
}
var C__LATIN_SMALL_LETTER_Q() {
	return 113;
}
var C__LATIN_SMALL_LETTER_R() {
	return 114;
}
var C__LATIN_SMALL_LETTER_S() {
	return 115;
}
var C__LATIN_SMALL_LETTER_T() {
	return 116;
}
var C__LATIN_SMALL_LETTER_U() {
	return 117;
}
var C__LATIN_SMALL_LETTER_V() {
	return 118;
}
var C__LATIN_SMALL_LETTER_W() {
	return 119;
}
var C__LATIN_SMALL_LETTER_X() {
	return 120;
}
var C__LATIN_SMALL_LETTER_Y() {
	return 121;
}
var C__LATIN_SMALL_LETTER_Z() {
	return 122;
}
var C__LEFT_CURLY_BRACKET() {
	return 123;
}
var C__VERTICAL_BAR() {
	return 124;
}
var C__RIGHT_CURLY_BRACKET() {
	return 125;
}
var C__TILDE() {
	return 126;
}
var C__DELETE() {
	return 127;
}
var C__INVALID() {
	return 128;
}
var C__NULL() {
	return 129;
}
var C__NONE() {
	return 130;
}
var C__KEYWORD() {
	return 131;
}
var C__SYMBOL() {
	return 132;
}
var C__IDENTIFIER() {
	return 133;
}
var C__INT_CONST() {
	return 134;
}
var C__STRING_CONST() {
	return 135;
}
var C__CLASS() {
	return 136;
}
var C__METHOD() {
	return 137;
}
var C__FUNCTION() {
	return 138;
}
var C__CONSTRUCTOR() {
	return 139;
}
var C__CALLBACK() {
	return 140;
}
var C__INT() {
	return 141;
}
var C__BOOLEAN() {
	return 142;
}
var C__CHAR() {
	return 143;
}
var C__VOID() {
	return 144;
}
var C__VAR() {
	return 145;
}
var C__STATIC() {
	return 146;
}
var C__FIELD() {
	return 147;
}
var C__LET() {
	return 148;
}
var C__DO() {
	return 149;
}
var C__IF() {
	return 150;
}
var C__ELSE() {
	return 151;
}
var C__WHILE() {
	return 152;
}
var C__RETURN() {
	return 153;
}
var C__TRUE() {
	return 154;
}
var C__FALSE() {
	return 155;
}
var C__BOOL() {
	return 156;
}
var C__THIS() {
	return 157;
}
var C__ASM() {
	return 158;
}
var C__PLUS() {
	return 159;
}
var C__MINUS() {
	return 160;
}
var C__MULTIPLY() {
	return 161;
}
var C__DIV() {
	return 162;
}
var C__AND() {
	return 163;
}
var C__OR() {
	return 164;
}
var C__GREATER() {
	return 165;
}
var C__LESS() {
	return 166;
}
var C__EQUAL() {
	return 167;
}
var C__ROOT() {
	return 168;
}
var C__EXPR() {
	return 169;
}
var C__CALL() {
	return 170;
}
var C__CLASSNAME() {
	return 171;
}
var C__ARGS() {
	return 172;
}
var C__VARNAME() {
	return 173;
}
var C__ARRAY() {
	return 174;
}
var C__ASSIGN() {
	return 175;
}
var C__STATEMENTS() {
	return 176;
}
var C__PARAMS() {
	return 177;
}
var C__VARS() {
	return 178;
}
var C__TYPE() {
	return 179;
}
var C__STRING() {
	return 180;
}
var C__ARRAYVAR() {
	return 181;
}
var C__PARAN() {
	return 182;
}
var C__UNARYOP() {
	return 183;
}
var C__TERM() {
	return 184;
}
var C__OP() {
	return 185;
}
var C__DOT() {
	return 186;
}
var C__BODY() {
	return 187;
}
var C__SUBROUTINENAME() {
	return 188;
}
var C__UNARYMINUS() {
	return 189;
}
var C__UNARYPLUS() {
	return 190;
}
var C__UNARYTILDE() {
	return 191;
}
var C__SUBROUTINECALL() {
	return 192;
}
var C__CLASSORVARNAME() {
	return 193;
}
var C__GREATEROREQUAL() {
	return 194;
}
var C__LESSOREQUAL() {
	return 195;
}
var C__NOTEQUAL() {
	return 196;
}
var C__XOR() {
	return 197;
}
var C__CONST() {
	return 198;
}
var C__LOGICALOR() {
	return 199;
}
var C__LOGICALAND() {
	return 200;
}
var C__NOT() {
	return 201;
}
var C__CONSTACCESS() {
	return 202;
}
var C__IN() {
	return 202;
}
var C__OUT() {
	return 203;
}
var C__IO() {
	return 204;
}
var C__NEXT_FREE_CONSTANT() {
	return 255;
}
#endif

#ifdef JACK_IMPLEMENTATION
var Const___str0[] = {32,0};
var Const___str1[] = {32,0};
var Const___str2[] = {32,0};
var Const___str3[] = {32,0};
var Const___str4[] = {32,0};
var Const___str5[] = {32,0};
var Const___str6[] = {32,0};
var Const___str7[] = {32,0};
var Const___str8[] = {32,0};
var Const___str9[] = {32,0};
var Const___str10[] = {32,0};
var Const___str11[] = {32,0};
var Const___str12[] = {32,0};
var Const___str13[] = {32,0};
var Const___str14[] = {32,0};
var Const___str15[] = {32,0};
var Const___str16[] = {32,0};
var Const___str17[] = {32,0};
var Const___str18[] = {32,0};
var Const___str19[] = {32,0};
var Const___str20[] = {32,0};
var Const___str21[] = {32,0};
var Const___str22[] = {32,0};
var Const___str23[] = {32,0};
var Const___str24[] = {32,0};
var Const___str25[] = {32,0};
var Const___str26[] = {32,0};
var Const___str27[] = {32,0};
var Const___str28[] = {32,0};
var Const___str29[] = {32,0};
var Const___str30[] = {32,0};
var Const___str31[] = {32,0};
var Const___str32[] = {32,0};
var Const___str33[] = {33,0};
var Const___str34[] = {32,0};
var Const___str35[] = {35,0};
var Const___str36[] = {36,0};
var Const___str37[] = {37,0};
var Const___str38[] = {38,0};
var Const___str39[] = {39,0};
var Const___str40[] = {40,0};
var Const___str41[] = {41,0};
var Const___str42[] = {42,0};
var Const___str43[] = {43,0};
var Const___str44[] = {44,0};
var Const___str45[] = {45,0};
var Const___str46[] = {46,0};
var Const___str47[] = {47,0};
var Const___str48[] = {48,0};
var Const___str49[] = {49,0};
var Const___str50[] = {50,0};
var Const___str51[] = {51,0};
var Const___str52[] = {52,0};
var Const___str53[] = {53,0};
var Const___str54[] = {54,0};
var Const___str55[] = {55,0};
var Const___str56[] = {56,0};
var Const___str57[] = {57,0};
var Const___str58[] = {58,0};
var Const___str59[] = {59,0};
var Const___str60[] = {60,0};
var Const___str61[] = {61,0};
var Const___str62[] = {62,0};
var Const___str63[] = {63,0};
var Const___str64[] = {64,0};
var Const___str65[] = {65,0};
var Const___str66[] = {66,0};
var Const___str67[] = {67,0};
var Const___str68[] = {68,0};
var Const___str69[] = {69,0};
var Const___str70[] = {70,0};
var Const___str71[] = {71,0};
var Const___str72[] = {72,0};
var Const___str73[] = {73,0};
var Const___str74[] = {74,0};
var Const___str75[] = {75,0};
var Const___str76[] = {76,0};
var Const___str77[] = {77,0};
var Const___str78[] = {78,0};
var Const___str79[] = {79,0};
var Const___str80[] = {80,0};
var Const___str81[] = {81,0};
var Const___str82[] = {82,0};
var Const___str83[] = {83,0};
var Const___str84[] = {84,0};
var Const___str85[] = {85,0};
var Const___str86[] = {86,0};
var Const___str87[] = {87,0};
var Const___str88[] = {88,0};
var Const___str89[] = {89,0};
var Const___str90[] = {90,0};
var Const___str91[] = {91,0};
var Const___str92[] = {92,92,0};
var Const___str93[] = {93,0};
var Const___str94[] = {94,0};
var Const___str95[] = {95,0};
var Const___str96[] = {96,0};
var Const___str97[] = {97,0};
var Const___str98[] = {98,0};
var Const___str99[] = {99,0};
var Const___str100[] = {100,0};
var Const___str101[] = {101,0};
var Const___str102[] = {102,0};
var Const___str103[] = {103,0};
var Const___str104[] = {104,0};
var Const___str105[] = {105,0};
var Const___str106[] = {106,0};
var Const___str107[] = {107,0};
var Const___str108[] = {108,0};
var Const___str109[] = {109,0};
var Const___str110[] = {110,0};
var Const___str111[] = {111,0};
var Const___str112[] = {112,0};
var Const___str113[] = {113,0};
var Const___str114[] = {114,0};
var Const___str115[] = {115,0};
var Const___str116[] = {116,0};
var Const___str117[] = {117,0};
var Const___str118[] = {118,0};
var Const___str119[] = {119,0};
var Const___str120[] = {120,0};
var Const___str121[] = {121,0};
var Const___str122[] = {122,0};
var Const___str123[] = {123,0};
var Const___str124[] = {124,0};
var Const___str125[] = {125,0};
var Const___str126[] = {126,0};
var Const___str127[] = {32,0};
var Const___str128[] = {105,110,118,97,108,105,100,0};
var Const___str129[] = {110,117,108,108,0};
var Const___str130[] = {110,111,110,101,0};
var Const___str131[] = {107,101,121,119,111,114,100,0};
var Const___str132[] = {115,121,109,98,111,108,0};
var Const___str133[] = {105,100,101,110,116,105,102,105,101,114,0};
var Const___str134[] = {105,110,116,95,99,111,110,115,116,0};
var Const___str135[] = {115,116,114,105,110,103,95,99,111,110,115,116,0};
var Const___str136[] = {99,108,97,115,115,0};
var Const___str137[] = {109,101,116,104,111,100,0};
var Const___str138[] = {102,117,110,99,116,105,111,110,0};
var Const___str139[] = {99,111,110,115,116,114,117,99,116,111,114,0};
var Const___str140[] = {99,97,108,108,98,97,99,107,0};
var Const___str141[] = {105,110,116,0};
var Const___str142[] = {98,111,111,108,101,97,110,0};
var Const___str143[] = {99,104,97,114,0};
var Const___str144[] = {118,111,105,100,0};
var Const___str145[] = {118,97,114,0};
var Const___str146[] = {115,116,97,116,105,99,0};
var Const___str147[] = {102,105,101,108,100,0};
var Const___str148[] = {108,101,116,0};
var Const___str149[] = {100,111,0};
var Const___str150[] = {105,102,0};
var Const___str151[] = {101,108,115,101,0};
var Const___str152[] = {119,104,105,108,101,0};
var Const___str153[] = {114,101,116,117,114,110,0};
var Const___str154[] = {116,114,117,101,0};
var Const___str155[] = {102,97,108,115,101,0};
var Const___str156[] = {110,117,108,108,0};
var Const___str157[] = {116,104,105,115,0};
var Const___str158[] = {97,115,109,0};
var Const___str159[] = {112,108,117,115,0};
var Const___str160[] = {109,105,110,117,115,0};
var Const___str161[] = {109,117,108,116,105,112,108,121,0};
var Const___str162[] = {100,105,118,0};
var Const___str163[] = {97,110,100,0};
var Const___str164[] = {111,114,0};
var Const___str165[] = {103,114,101,97,116,101,114,0};
var Const___str166[] = {108,101,115,115,0};
var Const___str167[] = {101,113,117,97,108,0};
var Const___str168[] = {114,111,111,116,0};
var Const___str169[] = {101,120,112,114,0};
var Const___str170[] = {99,97,108,108,0};
var Const___str171[] = {99,108,97,115,115,110,97,109,101,0};
var Const___str172[] = {97,114,103,115,0};
var Const___str173[] = {118,97,114,110,97,109,101,0};
var Const___str174[] = {97,114,114,97,121,0};
var Const___str175[] = {97,115,115,105,103,110,0};
var Const___str176[] = {115,116,97,116,101,109,101,110,116,115,0};
var Const___str177[] = {112,97,114,97,109,115,0};
var Const___str178[] = {118,97,114,115,0};
var Const___str179[] = {116,121,112,101,0};
var Const___str180[] = {115,116,114,105,110,103,0};
var Const___str181[] = {97,114,114,97,121,118,97,114,0};
var Const___str182[] = {112,97,114,97,110,0};
var Const___str183[] = {117,110,97,114,121,111,112,0};
var Const___str184[] = {116,101,114,109,0};
var Const___str185[] = {111,112,0};
var Const___str186[] = {100,111,116,0};
var Const___str187[] = {98,111,100,121,0};
var Const___str188[] = {115,117,98,114,111,117,116,105,110,101,110,97,109,101,0};
var Const___str189[] = {117,110,97,114,121,109,105,110,117,115,0};
var Const___str190[] = {117,110,97,114,121,112,108,117,115,0};
var Const___str191[] = {117,110,97,114,121,116,105,108,100,101,0};
var Const___str192[] = {115,117,98,114,111,117,116,105,110,101,99,97,108,108,0};
var Const___str193[] = {99,108,97,115,115,111,114,118,97,114,110,97,109,101,0};
var Const___str194[] = {103,114,101,97,116,101,114,111,114,101,113,117,97,108,0};
var Const___str195[] = {108,101,115,115,111,114,101,113,117,97,108,0};
var Const___str196[] = {110,111,116,101,113,117,97,108,0};
var Const___str197[] = {120,111,114,0};
var Const___str198[] = {99,111,110,115,116,0};
var Const___str199[] = {108,111,103,105,99,97,108,111,114,0};
var Const___str200[] = {108,111,103,105,99,97,108,97,110,100,0};
var Const___str201[] = {110,111,116,0};
var Const___str202[] = {99,111,110,115,116,97,99,99,101,115,115,0};
var Const___str203[] = {105,110,0};
var Const___str204[] = {111,117,116,0};
var Const___str205[] = {105,111,0};
var Const___str206[] = {110,101,120,116,95,102,114,101,101,95,99,111,110,115,116,97,110,116,0};
var Const__getList() {
	var b;
	var s;
	b = Buffer__new(256, 0);
	s = Memory__getString(Const___str0);
	String__setCharAt(s, 0, 0);
	Buffer__append(b, s);
	s = Memory__getString(Const___str1);
	String__setCharAt(s, 0, 1);
	Buffer__append(b, s);
	s = Memory__getString(Const___str2);
	String__setCharAt(s, 0, 2);
	Buffer__append(b, s);
	s = Memory__getString(Const___str3);
	String__setCharAt(s, 0, 3);
	Buffer__append(b, s);
	s = Memory__getString(Const___str4);
	String__setCharAt(s, 0, 4);
	Buffer__append(b, s);
	s = Memory__getString(Const___str5);
	String__setCharAt(s, 0, 5);
	Buffer__append(b, s);
	s = Memory__getString(Const___str6);
	String__setCharAt(s, 0, 6);
	Buffer__append(b, s);
	s = Memory__getString(Const___str7);
	String__setCharAt(s, 0, 7);
	Buffer__append(b, s);
	s = Memory__getString(Const___str8);
	String__setCharAt(s, 0, 8);
	Buffer__append(b, s);
	s = Memory__getString(Const___str9);
	String__setCharAt(s, 0, 9);
	Buffer__append(b, s);
	s = Memory__getString(Const___str10);
	String__setCharAt(s, 0, 10);
	Buffer__append(b, s);
	s = Memory__getString(Const___str11);
	String__setCharAt(s, 0, 11);
	Buffer__append(b, s);
	s = Memory__getString(Const___str12);
	String__setCharAt(s, 0, 12);
	Buffer__append(b, s);
	s = Memory__getString(Const___str13);
	String__setCharAt(s, 0, 13);
	Buffer__append(b, s);
	s = Memory__getString(Const___str14);
	String__setCharAt(s, 0, 14);
	Buffer__append(b, s);
	s = Memory__getString(Const___str15);
	String__setCharAt(s, 0, 15);
	Buffer__append(b, s);
	s = Memory__getString(Const___str16);
	String__setCharAt(s, 0, 16);
	Buffer__append(b, s);
	s = Memory__getString(Const___str17);
	String__setCharAt(s, 0, 17);
	Buffer__append(b, s);
	s = Memory__getString(Const___str18);
	String__setCharAt(s, 0, 18);
	Buffer__append(b, s);
	s = Memory__getString(Const___str19);
	String__setCharAt(s, 0, 19);
	Buffer__append(b, s);
	s = Memory__getString(Const___str20);
	String__setCharAt(s, 0, 20);
	Buffer__append(b, s);
	s = Memory__getString(Const___str21);
	String__setCharAt(s, 0, 21);
	Buffer__append(b, s);
	s = Memory__getString(Const___str22);
	String__setCharAt(s, 0, 22);
	Buffer__append(b, s);
	s = Memory__getString(Const___str23);
	String__setCharAt(s, 0, 23);
	Buffer__append(b, s);
	s = Memory__getString(Const___str24);
	String__setCharAt(s, 0, 24);
	Buffer__append(b, s);
	s = Memory__getString(Const___str25);
	String__setCharAt(s, 0, 25);
	Buffer__append(b, s);
	s = Memory__getString(Const___str26);
	String__setCharAt(s, 0, 26);
	Buffer__append(b, s);
	s = Memory__getString(Const___str27);
	String__setCharAt(s, 0, 27);
	Buffer__append(b, s);
	s = Memory__getString(Const___str28);
	String__setCharAt(s, 0, 28);
	Buffer__append(b, s);
	s = Memory__getString(Const___str29);
	String__setCharAt(s, 0, 29);
	Buffer__append(b, s);
	s = Memory__getString(Const___str30);
	String__setCharAt(s, 0, 30);
	Buffer__append(b, s);
	s = Memory__getString(Const___str31);
	String__setCharAt(s, 0, 31);
	Buffer__append(b, s);
	Buffer__append(b, Memory__getString(Const___str32));
	Buffer__append(b, Memory__getString(Const___str33));
	s = Memory__getString(Const___str34);
	String__setCharAt(s, 0, 34);
	Buffer__append(b, s);
	Buffer__append(b, Memory__getString(Const___str35));
	Buffer__append(b, Memory__getString(Const___str36));
	Buffer__append(b, Memory__getString(Const___str37));
	Buffer__append(b, Memory__getString(Const___str38));
	Buffer__append(b, Memory__getString(Const___str39));
	Buffer__append(b, Memory__getString(Const___str40));
	Buffer__append(b, Memory__getString(Const___str41));
	Buffer__append(b, Memory__getString(Const___str42));
	Buffer__append(b, Memory__getString(Const___str43));
	Buffer__append(b, Memory__getString(Const___str44));
	Buffer__append(b, Memory__getString(Const___str45));
	Buffer__append(b, Memory__getString(Const___str46));
	Buffer__append(b, Memory__getString(Const___str47));
	Buffer__append(b, Memory__getString(Const___str48));
	Buffer__append(b, Memory__getString(Const___str49));
	Buffer__append(b, Memory__getString(Const___str50));
	Buffer__append(b, Memory__getString(Const___str51));
	Buffer__append(b, Memory__getString(Const___str52));
	Buffer__append(b, Memory__getString(Const___str53));
	Buffer__append(b, Memory__getString(Const___str54));
	Buffer__append(b, Memory__getString(Const___str55));
	Buffer__append(b, Memory__getString(Const___str56));
	Buffer__append(b, Memory__getString(Const___str57));
	Buffer__append(b, Memory__getString(Const___str58));
	Buffer__append(b, Memory__getString(Const___str59));
	Buffer__append(b, Memory__getString(Const___str60));
	Buffer__append(b, Memory__getString(Const___str61));
	Buffer__append(b, Memory__getString(Const___str62));
	Buffer__append(b, Memory__getString(Const___str63));
	Buffer__append(b, Memory__getString(Const___str64));
	Buffer__append(b, Memory__getString(Const___str65));
	Buffer__append(b, Memory__getString(Const___str66));
	Buffer__append(b, Memory__getString(Const___str67));
	Buffer__append(b, Memory__getString(Const___str68));
	Buffer__append(b, Memory__getString(Const___str69));
	Buffer__append(b, Memory__getString(Const___str70));
	Buffer__append(b, Memory__getString(Const___str71));
	Buffer__append(b, Memory__getString(Const___str72));
	Buffer__append(b, Memory__getString(Const___str73));
	Buffer__append(b, Memory__getString(Const___str74));
	Buffer__append(b, Memory__getString(Const___str75));
	Buffer__append(b, Memory__getString(Const___str76));
	Buffer__append(b, Memory__getString(Const___str77));
	Buffer__append(b, Memory__getString(Const___str78));
	Buffer__append(b, Memory__getString(Const___str79));
	Buffer__append(b, Memory__getString(Const___str80));
	Buffer__append(b, Memory__getString(Const___str81));
	Buffer__append(b, Memory__getString(Const___str82));
	Buffer__append(b, Memory__getString(Const___str83));
	Buffer__append(b, Memory__getString(Const___str84));
	Buffer__append(b, Memory__getString(Const___str85));
	Buffer__append(b, Memory__getString(Const___str86));
	Buffer__append(b, Memory__getString(Const___str87));
	Buffer__append(b, Memory__getString(Const___str88));
	Buffer__append(b, Memory__getString(Const___str89));
	Buffer__append(b, Memory__getString(Const___str90));
	Buffer__append(b, Memory__getString(Const___str91));
	Buffer__append(b, Memory__getString(Const___str92));
	Buffer__append(b, Memory__getString(Const___str93));
	Buffer__append(b, Memory__getString(Const___str94));
	Buffer__append(b, Memory__getString(Const___str95));
	Buffer__append(b, Memory__getString(Const___str96));
	Buffer__append(b, Memory__getString(Const___str97));
	Buffer__append(b, Memory__getString(Const___str98));
	Buffer__append(b, Memory__getString(Const___str99));
	Buffer__append(b, Memory__getString(Const___str100));
	Buffer__append(b, Memory__getString(Const___str101));
	Buffer__append(b, Memory__getString(Const___str102));
	Buffer__append(b, Memory__getString(Const___str103));
	Buffer__append(b, Memory__getString(Const___str104));
	Buffer__append(b, Memory__getString(Const___str105));
	Buffer__append(b, Memory__getString(Const___str106));
	Buffer__append(b, Memory__getString(Const___str107));
	Buffer__append(b, Memory__getString(Const___str108));
	Buffer__append(b, Memory__getString(Const___str109));
	Buffer__append(b, Memory__getString(Const___str110));
	Buffer__append(b, Memory__getString(Const___str111));
	Buffer__append(b, Memory__getString(Const___str112));
	Buffer__append(b, Memory__getString(Const___str113));
	Buffer__append(b, Memory__getString(Const___str114));
	Buffer__append(b, Memory__getString(Const___str115));
	Buffer__append(b, Memory__getString(Const___str116));
	Buffer__append(b, Memory__getString(Const___str117));
	Buffer__append(b, Memory__getString(Const___str118));
	Buffer__append(b, Memory__getString(Const___str119));
	Buffer__append(b, Memory__getString(Const___str120));
	Buffer__append(b, Memory__getString(Const___str121));
	Buffer__append(b, Memory__getString(Const___str122));
	Buffer__append(b, Memory__getString(Const___str123));
	Buffer__append(b, Memory__getString(Const___str124));
	Buffer__append(b, Memory__getString(Const___str125));
	Buffer__append(b, Memory__getString(Const___str126));
	s = Memory__getString(Const___str127);
	String__setCharAt(s, 0, 127);
	Buffer__append(b, s);
	Buffer__append(b, Memory__getString(Const___str128));
	Buffer__append(b, Memory__getString(Const___str129));
	Buffer__append(b, Memory__getString(Const___str130));
	Buffer__append(b, Memory__getString(Const___str131));
	Buffer__append(b, Memory__getString(Const___str132));
	Buffer__append(b, Memory__getString(Const___str133));
	Buffer__append(b, Memory__getString(Const___str134));
	Buffer__append(b, Memory__getString(Const___str135));
	Buffer__append(b, Memory__getString(Const___str136));
	Buffer__append(b, Memory__getString(Const___str137));
	Buffer__append(b, Memory__getString(Const___str138));
	Buffer__append(b, Memory__getString(Const___str139));
	Buffer__append(b, Memory__getString(Const___str140));
	Buffer__append(b, Memory__getString(Const___str141));
	Buffer__append(b, Memory__getString(Const___str142));
	Buffer__append(b, Memory__getString(Const___str143));
	Buffer__append(b, Memory__getString(Const___str144));
	Buffer__append(b, Memory__getString(Const___str145));
	Buffer__append(b, Memory__getString(Const___str146));
	Buffer__append(b, Memory__getString(Const___str147));
	Buffer__append(b, Memory__getString(Const___str148));
	Buffer__append(b, Memory__getString(Const___str149));
	Buffer__append(b, Memory__getString(Const___str150));
	Buffer__append(b, Memory__getString(Const___str151));
	Buffer__append(b, Memory__getString(Const___str152));
	Buffer__append(b, Memory__getString(Const___str153));
	Buffer__append(b, Memory__getString(Const___str154));
	Buffer__append(b, Memory__getString(Const___str155));
	Buffer__append(b, Memory__getString(Const___str156));
	Buffer__append(b, Memory__getString(Const___str157));
	Buffer__append(b, Memory__getString(Const___str158));
	Buffer__append(b, Memory__getString(Const___str159));
	Buffer__append(b, Memory__getString(Const___str160));
	Buffer__append(b, Memory__getString(Const___str161));
	Buffer__append(b, Memory__getString(Const___str162));
	Buffer__append(b, Memory__getString(Const___str163));
	Buffer__append(b, Memory__getString(Const___str164));
	Buffer__append(b, Memory__getString(Const___str165));
	Buffer__append(b, Memory__getString(Const___str166));
	Buffer__append(b, Memory__getString(Const___str167));
	Buffer__append(b, Memory__getString(Const___str168));
	Buffer__append(b, Memory__getString(Const___str169));
	Buffer__append(b, Memory__getString(Const___str170));
	Buffer__append(b, Memory__getString(Const___str171));
	Buffer__append(b, Memory__getString(Const___str172));
	Buffer__append(b, Memory__getString(Const___str173));
	Buffer__append(b, Memory__getString(Const___str174));
	Buffer__append(b, Memory__getString(Const___str175));
	Buffer__append(b, Memory__getString(Const___str176));
	Buffer__append(b, Memory__getString(Const___str177));
	Buffer__append(b, Memory__getString(Const___str178));
	Buffer__append(b, Memory__getString(Const___str179));
	Buffer__append(b, Memory__getString(Const___str180));
	Buffer__append(b, Memory__getString(Const___str181));
	Buffer__append(b, Memory__getString(Const___str182));
	Buffer__append(b, Memory__getString(Const___str183));
	Buffer__append(b, Memory__getString(Const___str184));
	Buffer__append(b, Memory__getString(Const___str185));
	Buffer__append(b, Memory__getString(Const___str186));
	Buffer__append(b, Memory__getString(Const___str187));
	Buffer__append(b, Memory__getString(Const___str188));
	Buffer__append(b, Memory__getString(Const___str189));
	Buffer__append(b, Memory__getString(Const___str190));
	Buffer__append(b, Memory__getString(Const___str191));
	Buffer__append(b, Memory__getString(Const___str192));
	Buffer__append(b, Memory__getString(Const___str193));
	Buffer__append(b, Memory__getString(Const___str194));
	Buffer__append(b, Memory__getString(Const___str195));
	Buffer__append(b, Memory__getString(Const___str196));
	Buffer__append(b, Memory__getString(Const___str197));
	Buffer__append(b, Memory__getString(Const___str198));
	Buffer__append(b, Memory__getString(Const___str199));
	Buffer__append(b, Memory__getString(Const___str200));
	Buffer__append(b, Memory__getString(Const___str201));
	Buffer__append(b, Memory__getString(Const___str202));
	Buffer__append(b, Memory__getString(Const___str203));
	Buffer__append(b, Memory__getString(Const___str204));
	Buffer__append(b, Memory__getString(Const___str205));
	Buffer__append(b, Memory__getString(Const___str206));
	return b;
}
#endif

#ifdef JACK_IMPLEMENTATION
var JackParser___str0[] = {0};
var JackParser___str1[] = {0};
var JackParser___str2[] = {32,0};
var JackParser___str3[] = {83,121,110,116,97,120,32,101,114,114,111,114,32,105,110,32,0};
var JackParser___str4[] = {32,0};
var JackParser___str5[] = {32,97,116,32,108,105,110,101,40,0};
var JackParser___str6[] = {41,32,103,111,116,32,39,0};
var JackParser___str7[] = {39,0};
var JackParser___str8[] = {101,110,100,32,111,102,32,102,105,108,101,0};
var JackParser___str9[] = {69,120,112,101,99,116,101,100,32,99,108,97,115,115,0};
var JackParser___str10[] = {69,120,112,101,99,116,101,100,32,99,108,97,115,115,32,105,100,101,110,116,105,102,105,101,114,0};
var JackParser___str11[] = {69,120,112,101,99,116,101,100,32,123,0};
var JackParser___str12[] = {69,120,112,101,99,116,101,100,32,125,32,0};
var JackParser___str13[] = {69,120,116,114,97,32,99,111,110,116,101,110,116,32,97,102,116,101,114,32,99,108,97,115,115,32,100,101,102,105,110,105,116,105,111,110,0};
var JackParser___str14[] = {116,121,112,101,32,101,120,112,101,99,116,101,100,0};
var JackParser___str15[] = {118,97,114,78,97,109,101,32,101,120,112,101,99,116,101,100,46,0};
var JackParser___str16[] = {105,110,118,97,108,105,100,32,39,44,39,32,105,110,32,99,111,110,115,116,46,0};
var JackParser___str17[] = {44,32,111,114,32,59,32,101,120,112,101,99,116,101,100,0};
var JackParser___str18[] = {44,118,97,114,78,97,109,101,32,101,120,112,101,99,116,101,100,0};
var JackParser___str19[] = {32,58,61,32,101,120,112,101,99,116,101,100,0};
var JackParser___str20[] = {39,59,39,32,101,120,112,101,99,116,101,100,46,0};
var JackParser___str21[] = {39,125,39,32,101,120,112,101,99,116,101,100,44,44,0};
var JackParser___str22[] = {39,123,836,39,32,101,120,112,101,99,116,101,100,0};
var JackParser___str23[] = {101,120,112,101,99,116,32,116,121,112,101,0};
var JackParser___str24[] = {101,120,112,101,99,116,32,115,117,98,114,111,117,116,105,110,101,78,97,109,101,0};
var JackParser___str25[] = {101,120,112,101,99,116,32,39,40,39,0};
var JackParser___str26[] = {101,120,112,101,99,116,32,39,41,39,46,0};
var JackParser___str27[] = {118,97,114,78,97,109,101,32,101,120,112,101,99,116,101,100,46,46,0};
var JackParser___str28[] = {44,32,111,114,32,59,32,101,120,112,101,99,116,101,100,0};
var JackParser___str29[] = {118,97,114,78,97,109,101,32,101,120,112,101,99,116,101,100,46,46,0};
var JackParser___str30[] = {115,116,97,116,101,109,101,110,116,32,101,120,112,101,99,116,101,100,0};
var JackParser___str31[] = {105,100,101,110,116,105,102,105,101,114,32,101,120,112,101,99,116,101,100,0};
var JackParser___str32[] = {39,93,39,32,101,120,112,101,99,116,101,100,0};
var JackParser___str33[] = {39,58,61,39,32,101,120,112,101,99,116,101,100,0};
var JackParser___str34[] = {39,59,39,32,101,120,112,101,99,116,101,100,0};
var JackParser___str35[] = {39,59,39,32,101,120,112,101,99,116,101,100,46,46,0};
var JackParser___str36[] = {39,40,39,32,101,120,112,101,99,116,101,100,0};
var JackParser___str37[] = {39,44,39,32,101,120,112,101,99,116,101,100,0};
var JackParser___str38[] = {39,41,39,32,101,120,112,101,99,116,101,100,0};
var JackParser___str39[] = {39,41,39,32,101,120,112,101,99,116,101,100,0};
var JackParser___str40[] = {39,40,39,32,111,114,32,39,46,39,32,101,120,112,101,99,116,101,100,0};
var JackParser___str41[] = {115,117,98,114,111,117,116,105,110,101,78,97,109,101,32,101,120,112,101,99,116,101,100,0};
var JackParser___str42[] = {39,40,39,32,101,120,112,101,99,116,101,100,0};
var JackParser___str43[] = {39,41,39,32,101,120,112,101,99,116,101,100,46,0};
var JackParser___str44[] = {119,104,105,108,101,32,101,120,112,101,99,116,101,100,0};
var JackParser___str45[] = {39,40,39,32,101,120,112,101,99,116,101,100,0};
var JackParser___str46[] = {39,41,39,32,101,120,112,101,99,116,101,100,0};
var JackParser___str47[] = {39,123,39,32,101,120,112,101,99,116,101,100,0};
var JackParser___str48[] = {39,125,39,32,101,120,112,101,99,116,101,100,44,0};
var JackParser___str49[] = {114,101,116,117,114,110,32,101,120,112,101,99,116,101,100,0};
var JackParser___str50[] = {39,59,39,32,101,120,112,101,99,116,101,100,46,46,46,0};
var JackParser___str51[] = {105,102,32,101,120,112,101,99,116,101,100,0};
var JackParser___str52[] = {39,40,39,32,101,120,112,101,99,116,101,100,0};
var JackParser___str53[] = {39,41,39,32,101,120,112,101,99,116,101,100,46,46,0};
var JackParser___str54[] = {39,123,39,32,101,120,112,101,99,116,101,100,0};
var JackParser___str55[] = {39,125,39,32,101,120,112,101,99,116,101,100,46,0};
var JackParser___str56[] = {39,123,39,32,111,114,32,39,105,102,39,32,101,120,112,101,99,116,101,100,0};
var JackParser___str57[] = {39,125,39,32,101,120,112,101,99,116,101,100,46,46,0};
var JackParser___str58[] = {0};
var JackParser___str59[] = {117,110,101,120,112,101,99,116,101,100,32,111,112,46,0};
var JackParser___str60[] = {109,105,115,115,105,110,103,32,116,111,107,101,110,32,97,116,32,101,110,100,32,111,102,32,102,105,108,101,0};
var JackParser___str61[] = {39,41,39,32,101,120,112,101,99,116,101,100,32,104,101,114,101,0};
var JackParser___str62[] = {85,110,101,120,112,101,99,116,101,100,32,116,111,107,101,110,46,46,46,0};
var JackParser___str63[] = {39,93,39,32,101,120,112,101,99,116,101,100,46,0};
var JackParser___str64[] = {67,111,110,115,116,97,110,116,32,110,97,109,101,32,101,120,112,101,99,116,101,100,46,0};
#define jt__ (__this+0)
#define src__ (__this+1)
#define maxerror__ (__this+2)
#define nberror__ (__this+3)
#define exp__ (__this+4)
#define line__ (__this+5)
#define last_line__ (__this+6)
#define ast__ (__this+7)
#define current__ (__this+8)
#define const__ (__this+9)
var JackParser__new(var source) {
	var __this;
	__this = Memory__alloc(10);
	__poke(nberror__, 0);
	__poke(maxerror__, 1);
	__poke(src__, 0);
	__poke(jt__, source);
	__poke(ast__, JackAst__new(C__ROOT(), Memory__getString(JackParser___str0), 0));
	__poke(current__, __peek(ast__));
	__poke(const__, Const__getList());
	return __this;
}
var JackParser__dispose(var __this) {
	Buffer__dispose(__peek(const__));
	JackAst__dispose(__peek(ast__));
	Memory__deAlloc(__this);
	return 0;
}
var JackParser__init(var __this, var source) {
	__poke(src__, source);
	__poke(nberror__, 0);
	__poke(line__, 0);
	__poke(last_line__, -1);
	JackAst__dispose(__peek(ast__));
	__poke(ast__, JackAst__new(C__ROOT(), Memory__getString(JackParser___str1), 0));
	__poke(current__, __peek(ast__));
	return 0;
}
var JackParser__getConst(var __this, var index) {
	return Buffer__getAt(__peek(const__), index);
}
var JackParser__getAst(var __this) {
	return __peek(ast__);
}
var JackParser__advance(var __this) {
	if (JackTokenizer__hasMoreTokens(__peek(jt__))) {
		JackTokenizer__advance(__peek(jt__));
	} else {
		return 0;
	}
	return -1;
}
var JackParser__matched(var __this, var tok, var k) {
	return 0;
	Output__printInt(tok);
	Output__printString(Memory__getString(JackParser___str2));
	Output__printInt(k);
	Output__println();
	return 0;
}
var JackParser__matchKeyword(var __this, var k, var eat) {
	var t;
	if (eat) {
		if (JackTokenizer__hasMoreTokens(__peek(jt__))) {
			JackTokenizer__advance(__peek(jt__));
		} else {
			return 0;
		}
	}

	t = JackTokenizer__tokenType(__peek(jt__));
	if (((t)==(C__KEYWORD()))) {
		if (((JackTokenizer__keyWord(__peek(jt__)))==(k))) {
			JackParser__matched(__this, k, 0);
			return -1;
		}

	}

	return 0;
}
var JackParser__matchSymbol(var __this, var k, var eat) {
	if (eat) {
		if (JackTokenizer__hasMoreTokens(__peek(jt__))) {
			JackTokenizer__advance(__peek(jt__));
		} else {
			return 0;
		}
	}

	if (((JackTokenizer__tokenType(__peek(jt__)))==(C__SYMBOL()))) {
		if (((JackTokenizer__symbol(__peek(jt__)))==(k))) {
			JackParser__matched(__this, C__SYMBOL(), k);
			return -1;
		}

	}

	return 0;
}
var JackParser__matchIntegerConstant(var __this, var eat) {
	if (eat) {
		if (JackTokenizer__hasMoreTokens(__peek(jt__))) {
			JackTokenizer__advance(__peek(jt__));
		} else {
			return 0;
		}
	}

	if (((JackTokenizer__tokenType(__peek(jt__)))==(C__INT_CONST()))) {
		JackParser__matched(__this, C__INT_CONST(), 0);
		return -1;
	}

	return 0;
}
var JackParser__matchStringConstant(var __this, var eat) {
	if (eat) {
		if (JackTokenizer__hasMoreTokens(__peek(jt__))) {
			JackTokenizer__advance(__peek(jt__));
		} else {
			return 0;
		}
	}

	if (((JackTokenizer__tokenType(__peek(jt__)))==(C__STRING_CONST()))) {
		JackParser__matched(__this, JackTokenizer__stringVal(__peek(jt__)), 0);
		return -1;
	}

	return 0;
}
var JackParser__matchIdentifier(var __this, var eat) {
	if (eat) {
		if (JackTokenizer__hasMoreTokens(__peek(jt__))) {
			JackTokenizer__advance(__peek(jt__));
		} else {
			return 0;
		}
	}

	if (((JackTokenizer__tokenType(__peek(jt__)))==(C__IDENTIFIER()))) {
		JackParser__matched(__this, JackTokenizer__identifier(__peek(jt__)), 0);
		return -1;
	}

	return 0;
}
var JackParser__error(var __this, var w) {
	var s;
	__poke(nberror__, __peek(nberror__)+1);
	if (((__peek(nberror__))>(__peek(maxerror__)))) {
		return 0;
	}

	Output__printString(Memory__getString(JackParser___str3));
	Output__printString(File__getName(__peek(src__)));
	Output__printString(Memory__getString(JackParser___str4));
	Output__printString(w);
	Output__printString(Memory__getString(JackParser___str5));
	Output__printInt(JackTokenizer__getLine(__peek(jt__)));
	Output__printString(Memory__getString(JackParser___str6));
	s = JackParser__getData(__this);
	Output__printString(s);
	String__dispose(s);
	Output__printString(Memory__getString(JackParser___str7));
	Output__println();
	Sys__error(-1);
	return 0;
}
var JackParser__getData(var __this) {
	var s;
	s = 0;
	if (((JackTokenizer__tokenType(__peek(jt__)))==(C__KEYWORD()))) {
		s = JackParser__getConst(__this, JackTokenizer__keyWord(__peek(jt__)));
		s = String__copy(s);
	}

	if (((JackTokenizer__tokenType(__peek(jt__)))==(C__SYMBOL()))) {
		s = String__new(8);
		s = String__appendString(s, JackParser__getConst(__this, JackTokenizer__symbol(__peek(jt__))));
	}

	if (((JackTokenizer__tokenType(__peek(jt__)))==(C__INT_CONST()))) {
		s = String__new(8);
		s = String__setInt(s, JackTokenizer__intVal(__peek(jt__)));
	}

	if (((JackTokenizer__tokenType(__peek(jt__)))==(C__STRING_CONST()))) {
		s = JackTokenizer__stringVal(__peek(jt__));
		s = String__copy(s);
	}

	if (((JackTokenizer__tokenType(__peek(jt__)))==(C__IDENTIFIER()))) {
		s = JackTokenizer__identifier(__peek(jt__));
		s = String__copy(s);
	}

	if (((JackTokenizer__tokenType(__peek(jt__)))==(C__ASM()))) {
		s = JackTokenizer__identifier(__peek(jt__));
		s = String__copy(s);
	}

	if (((JackTokenizer__tokenType(__peek(jt__)))==(0))) {
		s = Memory__getString(JackParser___str8);
		s = String__copy(s);
	}

	if (((s)==(0))) {
		s = String__new(1);
	}

	return s;
}
var JackParser__astSetCurrent(var __this, var c) {
	__poke(current__, c);
	return 0;
}
var JackParser__astAddName(var __this, var c, var name, var line_) {
	__poke(current__, JackAst__add(__peek(current__), c, name));
	return 0;
}
var JackParser__astAdd(var __this, var c) {
	var s;
	s = JackParser__getData(__this);
	__poke(current__, JackAst__add(__peek(current__), c, s));
	JackAst__setLine(__peek(current__), JackTokenizer__getLine(__peek(jt__)), File__getName(__peek(src__)));
	String__dispose(s);
	return 0;
}
var JackParser__astAddType(var __this) {
	if (((JackTokenizer__tokenType(__peek(jt__)))==(C__KEYWORD()))) {
		JackParser__astAdd(__this, JackTokenizer__keyWord(__peek(jt__)));
	} else {
		if (((JackTokenizer__tokenType(__peek(jt__)))==(C__SYMBOL()))) {
			JackParser__astAdd(__this, JackTokenizer__symbol(__peek(jt__)));
		} else {
			JackParser__astAdd(__this, JackTokenizer__tokenType(__peek(jt__)));
		}
	}
	return 0;
}
var JackParser__astAddLike(var __this, var prim, var type) {
	var c;
	var d;
	c = __peek(current__);
	__poke(current__, JackAst__getParent(prim));
	d = prim;
	while (!(((JackAst__getChild(d))==(0)))) {
		__poke(current__, JackAst__add(__peek(current__), JackAst__getTag(d), JackAst__getData(d)));
		d = JackAst__getChild(d);
	}
	JackParser__astAdd(__this, type);
	__poke(current__, c);
	return 0;
}
var JackParser__compileClass(var __this, var tk, var dst_) {
	var doit;
	var save;
	save = __peek(current__);
	__poke(jt__, tk);
	doit = -1;
	if (((0)==(JackParser__matchKeyword(__this, C__CLASS(), -1)))) {
		JackParser__error(__this, Memory__getString(JackParser___str9));
		return 0;
	}

	if (((0)==(JackParser__matchIdentifier(__this, -1)))) {
		JackParser__error(__this, Memory__getString(JackParser___str10));
		return 0;
	}

	JackParser__astAdd(__this, C__CLASS());
	if (((0)==(JackParser__matchSymbol(__this, C__LEFT_CURLY_BRACKET(), -1)))) {
		JackParser__error(__this, Memory__getString(JackParser___str11));
		return 0;
	}

	JackParser__advance(__this);
	while (!(((JackParser__compileClassVarDec(__this))==(0)))) {
		doit = doit;
	}
	while (!(((JackParser__compileSubroutine(__this))==(0)))) {
		doit = doit;
	}
	if (((0)==(JackParser__matchSymbol(__this, C__RIGHT_CURLY_BRACKET(), 0)))) {
		JackParser__error(__this, Memory__getString(JackParser___str12));
		return 0;
	}

	if (((0)==((((JackTokenizer__hasMoreTokens(__peek(jt__)))==(0)))))) {
		JackParser__error(__this, Memory__getString(JackParser___str13));
		return 0;
	}

	__poke(current__, save);
	return 0;
}
var JackParser__compileClassVarDec(var __this) {
	var z;
	var is_const;
	var save;
	var primary;
	save = __peek(current__);
	z = JackParser__matchKeyword(__this, C__CONST(), 0);
	is_const = z;
	z = z||JackParser__matchKeyword(__this, C__STATIC(), 0);
	z = z||JackParser__matchKeyword(__this, C__FIELD(), 0);
	if (((0)==(z))) {
		return 0;
	}

	JackParser__astAddType(__this);
	primary = __peek(current__);
	z = JackParser__matchKeyword(__this, C__INT(), -1);
	z = z||JackParser__matchKeyword(__this, C__CHAR(), 0);
	z = z||JackParser__matchKeyword(__this, C__BOOLEAN(), 0);
	if (z) {
		JackParser__astAddType(__this);
	} else {
		z = JackParser__matchIdentifier(__this, 0);
		if (z) {
			JackParser__astAdd(__this, C__CLASSNAME());
		}

	}
	if (((0)==(z))) {
		JackParser__error(__this, Memory__getString(JackParser___str14));
		return 0;
	}

	z = JackParser__matchIdentifier(__this, -1);
	if (z) {
		JackParser__astAdd(__this, C__VARNAME());
	} else {
		z = JackParser__matchKeyword(__this, C__CALLBACK(), 0);
		if (z) {
			JackParser__astAdd(__this, C__CALLBACK());
		}

	}
	if (((0)==(z))) {
		JackParser__error(__this, Memory__getString(JackParser___str15));
		return 0;
	}

	z = JackParser__matchSymbol(__this, C__COMMA(), -1);
	if (is_const) {
		if (z) {
			JackParser__error(__this, Memory__getString(JackParser___str16));
			return 0;
		}

	}

	while (!(((z)==(0)))) {
		__poke(current__, save);
		z = JackParser__matchIdentifier(__this, -1);
		if (z) {
			JackParser__astAddLike(__this, primary, C__VARNAME());
			z = JackParser__matchSymbol(__this, C__COMMA(), -1);
			if (((0)==(z))) {
				z = JackParser__matchSymbol(__this, C__SEMICOLON(), 0);
				if (z) {
					JackParser__advance(__this);
					__poke(current__, save);
					return -1;
				} else {
					JackParser__error(__this, Memory__getString(JackParser___str17));
					return 0;
				}
			}

		} else {
			z = JackParser__matchSymbol(__this, C__SEMICOLON(), 0);
			if (z) {
				JackParser__advance(__this);
				__poke(current__, save);
				return -1;
			}

			JackParser__error(__this, Memory__getString(JackParser___str18));
			return 0;
		}
	}
	if (is_const) {
		z = JackParser__matchSymbol(__this, C__ASSIGN(), 0);
		if (((z)==(0))) {
			JackParser__error(__this, Memory__getString(JackParser___str19));
			return 0;
		}

		JackParser__advance(__this);
		JackParser__astAddType(__this);
		JackParser__advance(__this);
	}

	z = JackParser__matchSymbol(__this, C__SEMICOLON(), 0);
	if (z) {
		JackParser__advance(__this);
		__poke(current__, save);
		return -1;
	}

	JackParser__error(__this, Memory__getString(JackParser___str20));
	return 0;
}
var JackParser__compileSubroutineBody(var __this) {
	var z;
	var save;
	save = __peek(current__);
	z = JackParser__matchSymbol(__this, C__LEFT_CURLY_BRACKET(), 0);
	if (z) {
		JackParser__advance(__this);
		z = JackParser__compileVarDec(__this);
		z = JackParser__compileStatements(__this);
		z = JackParser__matchSymbol(__this, C__RIGHT_CURLY_BRACKET(), 0);
		if (z) {
			JackParser__advance(__this);
			__poke(current__, save);
			return -1;
		}

		JackParser__error(__this, Memory__getString(JackParser___str21));
		return 0;
	}

	JackParser__error(__this, Memory__getString(JackParser___str22));
	return 0;
}
var JackParser__compileSubroutine(var __this) {
	var z;
	var iscb;
	var save;
	var body;
	save = __peek(current__);
	z = JackParser__matchKeyword(__this, C__CONSTRUCTOR(), 0);
	z = z||JackParser__matchKeyword(__this, C__FUNCTION(), 0);
	z = z||JackParser__matchKeyword(__this, C__METHOD(), 0);
	if (((0)==(z))) {
		return 0;
	}

	JackParser__astAddType(__this);
	body = __peek(current__);
	z = JackParser__matchKeyword(__this, C__VOID(), -1);
	z = z||JackParser__matchKeyword(__this, C__INT(), 0);
	z = z||JackParser__matchKeyword(__this, C__CHAR(), 0);
	z = z||JackParser__matchKeyword(__this, C__BOOLEAN(), 0);
	if (z) {
		JackParser__astAddType(__this);
	} else {
		z = z||JackParser__matchIdentifier(__this, 0);
		JackParser__astAdd(__this, C__CLASSNAME());
	}
	if (((0)==(z))) {
		JackParser__error(__this, Memory__getString(JackParser___str23));
		return 0;
	}

	iscb = 0;
	z = JackParser__matchIdentifier(__this, -1);
	if (!z) {
		z = JackParser__matchKeyword(__this, C__CALLBACK(), 0);
		if (z) {
			iscb = -1;
		}

	}

	if (((0)==(z))) {
		JackParser__error(__this, Memory__getString(JackParser___str24));
		return 0;
	}

	if (iscb) {
		JackParser__astAdd(__this, C__CALLBACK());
	} else {
		JackParser__astAdd(__this, C__SUBROUTINENAME());
	}
	z = JackParser__matchSymbol(__this, C__LEFT_PARENTHESIS(), -1);
	if (((0)==(z))) {
		JackParser__error(__this, Memory__getString(JackParser___str25));
		return 0;
	}

	JackParser__advance(__this);
	z = JackParser__compileParameterList(__this);
	if (((0)==(z))) {
		return 0;
	}

	z = JackParser__matchSymbol(__this, C__RIGHT_PARENTHESIS(), 0);
	if (z) {
		JackParser__advance(__this);
		__poke(current__, body);
		z = JackParser__compileSubroutineBody(__this);
		__poke(current__, save);
		return z;
	}

	JackParser__error(__this, Memory__getString(JackParser___str26));
	return 0;
}
var JackParser__compileParameter(var __this) {
	var z;
	var save;
	save = __peek(current__);
	z = JackParser__matchKeyword(__this, C__IN(), 0);
	z = z||JackParser__matchKeyword(__this, C__OUT(), 0);
	z = z||JackParser__matchKeyword(__this, C__IO(), 0);
	if (z) {
		JackParser__advance(__this);
	}

	z = JackParser__matchKeyword(__this, C__INT(), 0);
	z = z||JackParser__matchKeyword(__this, C__CHAR(), 0);
	z = z||JackParser__matchKeyword(__this, C__BOOLEAN(), 0);
	if (z) {
		JackParser__astAddType(__this);
	} else {
		z = z||JackParser__matchIdentifier(__this, 0);
		if (z) {
			JackParser__astAdd(__this, C__CLASSNAME());
		}

	}
	if (z) {
		z = JackParser__matchIdentifier(__this, -1);
		if (z) {
			JackParser__astAdd(__this, C__VARNAME());
			JackParser__advance(__this);
			__poke(current__, save);
			return -1;
		} else {
			JackParser__error(__this, Memory__getString(JackParser___str27));
			return 0;
		}
	} else {
		return 0;
	}
}
var JackParser__compileParameterList(var __this) {
	var z;
	var save;
	save = __peek(current__);
	z = -1;
	JackParser__astAdd(__this, C__PARAMS());
	while (!(((JackTokenizer__hasMoreTokens(__peek(jt__)))==(0)))) {
		z = JackParser__compileParameter(__this);
		z = JackParser__matchSymbol(__this, C__COMMA(), 0);
		if (((0)==(z))) {
			__poke(current__, save);
			return -1;
		}

		JackParser__advance(__this);
	}
	return 0;
}
var JackParser__compileVarDecVarList(var __this, var primary) {
	var z;
	var i;
	var save;
	save = __peek(current__);
	i = 0;
	z = JackParser__matchIdentifier(__this, -1);
	while (!(((z)==(0)))) {
		if (i) {
			JackParser__astAddLike(__this, primary, C__VARNAME());
		} else {
			JackParser__astAdd(__this, C__VARNAME());
		}
		__poke(current__, save);
		z = JackParser__matchSymbol(__this, C__COMMA(), -1);
		if (((0)==(z))) {
			z = JackParser__matchSymbol(__this, C__SEMICOLON(), 0);
			if (((0)==(z))) {
				JackParser__error(__this, Memory__getString(JackParser___str28));
				return 0;
			}

			JackParser__advance(__this);
			z = 0;
		} else {
			z = JackParser__matchIdentifier(__this, -1);
			if (((0)==(z))) {
				JackParser__error(__this, Memory__getString(JackParser___str29));
				return 0;
			}

			z = -1;
		}
		__poke(current__, save);
		i = i+1;
	}
	__poke(current__, save);
	return -1;
}
var JackParser__compileVarDec(var __this) {
	var z;
	var save;
	var primary;
	save = __peek(current__);
	z = -1;
	z = JackParser__matchKeyword(__this, C__VAR(), 0);
	if (((0)==(z))) {
		return 0;
	}

	while (!(((z)==(0)))) {
		JackParser__astAdd(__this, C__VAR());
		primary = __peek(current__);
		z = JackParser__matchKeyword(__this, C__INT(), -1);
		z = z||JackParser__matchKeyword(__this, C__CHAR(), 0);
		z = z||JackParser__matchKeyword(__this, C__BOOLEAN(), 0);
		if (z) {
			JackParser__astAddType(__this);
		} else {
			z = z||JackParser__matchIdentifier(__this, 0);
			JackParser__astAdd(__this, C__CLASSNAME());
		}
		if (z) {
			z = JackParser__compileVarDecVarList(__this, primary);
		}

		__poke(current__, save);
		z = JackParser__matchKeyword(__this, C__VAR(), 0);
	}
	__poke(current__, save);
	return -1;
}
var JackParser__compileStatements(var __this) {
	var z;
	var save;
	var begin;
	save = __peek(current__);
	z = -1;
	JackParser__astAdd(__this, C__STATEMENTS());
	begin = __peek(current__);
	while (-1) {
		z = JackParser__matchSymbol(__this, C__RIGHT_CURLY_BRACKET(), 0);
		if (z) {
			__poke(current__, save);
			return 0;
		}

		if (JackParser__matchKeyword(__this, C__IF(), 0)) {
			JackParser__compileIf(__this);
		} else {
			if (JackParser__matchKeyword(__this, C__WHILE(), 0)) {
				JackParser__compileWhile(__this);
			} else {
				if (JackParser__matchKeyword(__this, C__RETURN(), 0)) {
					JackParser__compileReturn(__this);
				} else {
					if (((JackTokenizer__tokenType(__peek(jt__)))==(C__ASM()))) {
						JackParser__astAdd(__this, C__ASM());
						JackParser__advance(__this);
						__poke(current__, begin);
					} else {
						if (((JackParser__compileLetOrDo(__this))==(0))) {
							JackParser__error(__this, Memory__getString(JackParser___str30));
							return 0;
						}

					}
				}
			}
		}
	}
	__poke(current__, save);
	return 0;
}
var JackParser__compileLetOrDo(var __this) {
	var s;
	var z;
	var l;
	var save;
	save = __peek(current__);
	if (JackParser__matchKeyword(__this, C__LET(), 0)) {
		JackParser__advance(__this);
	} else {
		if (JackParser__matchKeyword(__this, C__DO(), 0)) {
			JackParser__advance(__this);
		} else {
		}
	}
	z = JackParser__matchIdentifier(__this, 0);
	if (((0)==(z))) {
		JackParser__error(__this, Memory__getString(JackParser___str31));
		return 0;
	}

	s = JackTokenizer__identifier(__peek(jt__));
	s = String__copy(s);
	l = JackTokenizer__getLine(__peek(jt__));
	z = JackParser__matchSymbol(__this, C__LEFT_SQUARE_BRACKET(), -1);
	if (((0)==(z))) {
		z = JackParser__matchSymbol(__this, C__ASSIGN(), 0);
	}

	if (((-1)==(z))) {
		z = JackParser__compileLet(__this, s, l);
	} else {
		z = JackParser__compileDo(__this, s, l);
	}
	String__dispose(s);
	__poke(current__, save);
	return z;
}
var JackParser__compileLet(var __this, var s, var l) {
	var z;
	var last;
	JackParser__astAddName(__this, C__VARNAME(), s, l);
	last = __peek(current__);
	z = JackParser__matchSymbol(__this, C__LEFT_SQUARE_BRACKET(), 0);
	if (z) {
		JackParser__astAdd(__this, C__LEFT_SQUARE_BRACKET());
		JackParser__advance(__this);
		JackParser__compileExpression(__this);
		z = JackParser__matchSymbol(__this, C__RIGHT_SQUARE_BRACKET(), 0);
		if (((0)==(z))) {
			JackParser__error(__this, Memory__getString(JackParser___str32));
			return 0;
		}

		JackParser__advance(__this);
	}

	__poke(current__, last);
	z = JackParser__matchSymbol(__this, C__ASSIGN(), 0);
	if (((0)==(z))) {
		JackParser__error(__this, Memory__getString(JackParser___str33));
		return 0;
	}

	JackParser__astAddAssign(__this);
	JackParser__advance(__this);
	JackParser__compileExpression(__this);
	z = JackParser__matchSymbol(__this, C__SEMICOLON(), 0);
	if (((0)==(z))) {
		JackParser__error(__this, Memory__getString(JackParser___str34));
		return 0;
	}

	JackParser__advance(__this);
	return -1;
}
var JackParser__compileDo(var __this, var s, var l) {
	var z;
	JackParser__subroutineCall(__this, s, l);
	z = JackParser__matchSymbol(__this, C__SEMICOLON(), 0);
	if (((0)==(z))) {
		JackParser__error(__this, Memory__getString(JackParser___str35));
		return 0;
	}

	JackParser__advance(__this);
	return -1;
}
var JackParser__callbackCall(var __this) {
	var z;
	var save;
	save = __peek(current__);
	if (((0)==(JackParser__matchKeyword(__this, C__CALLBACK(), 0)))) {
		return 0;
	}

	JackParser__astAdd(__this, C__SUBROUTINECALL());
	JackParser__astAdd(__this, C__CALLBACK());
	z = JackParser__matchSymbol(__this, C__LEFT_PARENTHESIS(), -1);
	if (((0)==(z))) {
		JackParser__error(__this, Memory__getString(JackParser___str36));
	}

	JackParser__advance(__this);
	JackParser__compileExpression(__this);
	z = JackParser__matchSymbol(__this, C__COMMA(), 0);
	if (((0)==(z))) {
		JackParser__error(__this, Memory__getString(JackParser___str37));
	}

	JackParser__advance(__this);
	JackParser__compileExpression(__this);
	z = JackParser__matchSymbol(__this, C__RIGHT_PARENTHESIS(), 0);
	if (((0)==(z))) {
		JackParser__error(__this, Memory__getString(JackParser___str38));
	}

	JackParser__advance(__this);
	__poke(current__, save);
	return 0;
}
var JackParser__subroutineCall(var __this, var subroutineName, var tokenLine) {
	var z;
	var save;
	save = __peek(current__);
	JackParser__astAdd(__this, C__SUBROUTINECALL());
	z = JackParser__matchSymbol(__this, C__LEFT_PARENTHESIS(), 0);
	JackParser__astAddName(__this, C__SUBROUTINENAME(), subroutineName, tokenLine);
	if (z) {
		JackParser__advance(__this);
		JackParser__compileExpressionList(__this);
		z = JackParser__matchSymbol(__this, C__RIGHT_PARENTHESIS(), 0);
		if (((0)==(z))) {
			JackParser__error(__this, Memory__getString(JackParser___str39));
			return 0;
		}

		JackParser__advance(__this);
		__poke(current__, save);
		return 0;
	}

	z = JackParser__matchSymbol(__this, C__DOT(), 0);
	if (((0)==(z))) {
		JackParser__error(__this, Memory__getString(JackParser___str40));
		return 0;
	}

	JackAst__setTag(__peek(current__), C__CLASSORVARNAME());
	z = JackParser__matchIdentifier(__this, -1);
	if (((0)==(z))) {
		JackParser__error(__this, Memory__getString(JackParser___str41));
		return 0;
	}

	JackParser__astAdd(__this, C__SUBROUTINENAME());
	z = JackParser__matchSymbol(__this, C__LEFT_PARENTHESIS(), -1);
	if (((0)==(z))) {
		JackParser__error(__this, Memory__getString(JackParser___str42));
		return 0;
	}

	JackParser__advance(__this);
	JackParser__compileExpressionList(__this);
	z = JackParser__matchSymbol(__this, C__RIGHT_PARENTHESIS(), 0);
	if (z) {
		JackParser__advance(__this);
		__poke(current__, save);
		return 0;
	}

	JackParser__error(__this, Memory__getString(JackParser___str43));
	return 0;
}
var JackParser__compileWhile(var __this) {
	var z;
	var save;
	save = __peek(current__);
	if (((0)==(JackParser__matchKeyword(__this, C__WHILE(), 0)))) {
		JackParser__error(__this, Memory__getString(JackParser___str44));
		return 0;
	}

	JackParser__astAddType(__this);
	z = JackParser__matchSymbol(__this, C__LEFT_PARENTHESIS(), -1);
	if (((0)==(z))) {
		JackParser__error(__this, Memory__getString(JackParser___str45));
		return 0;
	}

	JackParser__advance(__this);
	JackParser__compileExpression(__this);
	z = JackParser__matchSymbol(__this, C__RIGHT_PARENTHESIS(), 0);
	if (((0)==(z))) {
		JackParser__error(__this, Memory__getString(JackParser___str46));
		return 0;
	}

	z = JackParser__matchSymbol(__this, C__LEFT_CURLY_BRACKET(), -1);
	if (((0)==(z))) {
		JackParser__error(__this, Memory__getString(JackParser___str47));
		return 0;
	}

	JackParser__advance(__this);
	JackParser__compileStatements(__this);
	z = JackParser__matchSymbol(__this, C__RIGHT_CURLY_BRACKET(), 0);
	if (((0)==(z))) {
		JackParser__error(__this, Memory__getString(JackParser___str48));
		return 0;
	}

	JackParser__advance(__this);
	__poke(current__, save);
	return 0;
}
var JackParser__compileReturn(var __this) {
	var z;
	var save;
	save = __peek(current__);
	if (((0)==(JackParser__matchKeyword(__this, C__RETURN(), 0)))) {
		JackParser__error(__this, Memory__getString(JackParser___str49));
		return 0;
	}

	JackParser__astAddType(__this);
	JackParser__advance(__this);
	JackParser__callbackCall(__this);
	z = JackParser__matchSymbol(__this, C__SEMICOLON(), 0);
	if (z) {
		JackParser__advance(__this);
		__poke(current__, save);
		return 0;
	}

	JackParser__compileExpression(__this);
	z = JackParser__matchSymbol(__this, C__SEMICOLON(), 0);
	if (((0)==(z))) {
		JackParser__error(__this, Memory__getString(JackParser___str50));
		return 0;
	}

	JackParser__advance(__this);
	__poke(current__, save);
	return 0;
}
var JackParser__compileIf(var __this) {
	var z;
	var save;
	var begin;
	save = __peek(current__);
	if (((0)==(JackParser__matchKeyword(__this, C__IF(), 0)))) {
		JackParser__error(__this, Memory__getString(JackParser___str51));
		return 0;
	}

	JackParser__astAddType(__this);
	begin = __peek(current__);
	z = JackParser__matchSymbol(__this, C__LEFT_PARENTHESIS(), -1);
	if (((0)==(z))) {
		JackParser__error(__this, Memory__getString(JackParser___str52));
		return 0;
	}

	JackParser__advance(__this);
	JackParser__compileExpression(__this);
	z = JackParser__matchSymbol(__this, C__RIGHT_PARENTHESIS(), 0);
	if (((0)==(z))) {
		JackParser__error(__this, Memory__getString(JackParser___str53));
		return 0;
	}

	z = JackParser__matchSymbol(__this, C__LEFT_CURLY_BRACKET(), -1);
	if (((0)==(z))) {
		JackParser__error(__this, Memory__getString(JackParser___str54));
		return 0;
	}

	JackParser__advance(__this);
	JackParser__compileStatements(__this);
	z = JackParser__matchSymbol(__this, C__RIGHT_CURLY_BRACKET(), 0);
	if (((0)==(z))) {
		JackParser__error(__this, Memory__getString(JackParser___str55));
		return 0;
	}

	z = JackParser__matchKeyword(__this, C__ELSE(), -1);
	if (((0)==(z))) {
		__poke(current__, save);
		return 0;
	}

	__poke(current__, begin);
	JackParser__astAddType(__this);
	z = JackParser__matchSymbol(__this, C__LEFT_CURLY_BRACKET(), -1);
	if (((0)==(z))) {
		if (((0)==(JackParser__matchKeyword(__this, C__IF(), 0)))) {
			JackParser__error(__this, Memory__getString(JackParser___str56));
		} else {
			JackParser__astAdd(__this, C__STATEMENTS());
			JackParser__compileIf(__this);
		}
		__poke(current__, save);
		return 0;
	}

	JackParser__advance(__this);
	JackParser__compileStatements(__this);
	z = JackParser__matchSymbol(__this, C__RIGHT_CURLY_BRACKET(), 0);
	if (((0)==(z))) {
		JackParser__error(__this, Memory__getString(JackParser___str57));
		return 0;
	}

	JackParser__advance(__this);
	__poke(current__, save);
	return 0;
}
var JackParser__astAddAssign(var __this) {
	var me;
	var parent;
	parent = JackAst__getParent(__peek(current__));
	me = JackAst__new(C__ASSIGN(), Memory__getString(JackParser___str58), parent);
	JackAst__replaceChild(parent, __peek(current__), me);
	JackAst__setParent(__peek(current__), me);
	JackAst__setLeft(me, __peek(current__));
	__poke(current__, me);
	return me;
}
var JackParser__astAddOp(var __this) {
	var c;
	var r;
	var parent;
	var left;
	var oldcurrent;
	c = JackTokenizer__symbol(__peek(jt__));
	r = 0;
	if (((c)==(C__PLUS()))) {
		r = -1;
	}

	if (((c)==(C__MINUS()))) {
		r = -1;
	}

	if (((c)==(C__MULTIPLY()))) {
		r = -1;
	}

	if (((c)==(C__DIV()))) {
		r = -1;
	}

	if (((c)==(C__AND()))) {
		r = -1;
	}

	if (((c)==(C__OR()))) {
		r = -1;
	}

	if (((c)==(C__LOGICALAND()))) {
		r = -1;
	}

	if (((c)==(C__LOGICALOR()))) {
		r = -1;
	}

	if (((c)==(C__GREATER()))) {
		r = -1;
	}

	if (((c)==(C__GREATEROREQUAL()))) {
		r = -1;
	}

	if (((c)==(C__LESS()))) {
		r = -1;
	}

	if (((c)==(C__LESSOREQUAL()))) {
		r = -1;
	}

	if (((c)==(C__EQUAL()))) {
		r = -1;
	}

	if (((c)==(C__NOTEQUAL()))) {
		r = -1;
	}

	if (((c)>(0))) {
		parent = JackAst__getParent(__peek(current__));
		left = __peek(current__);
		oldcurrent = __peek(current__);
		if (((JackAst__getTag(left))==(C__EXPR()))) {
			parent = left;
			left = JackAst__getChild(left);
		}

		JackParser__astAddType(__this);
		if (left) {
			JackAst__removeChild(oldcurrent, __peek(current__));
			JackAst__replaceChild(parent, left, __peek(current__));
			JackAst__setParent(left, __peek(current__));
			JackAst__setLeft(__peek(current__), left);
		}

	}

	return r;
}
var JackParser__compileExpression(var __this) {
	var first;
	var save;
	save = __peek(current__);
	first = -1;
	while (-1) {
		JackParser__compileTerm(__this, first);
		first = 0;
		if (JackParser__matchSymbol(__this, C__SEMICOLON(), 0)) {
			__poke(current__, save);
			return 0;
		}

		if (JackParser__matchSymbol(__this, C__RIGHT_PARENTHESIS(), 0)) {
			__poke(current__, save);
			return 0;
		}

		if (JackParser__matchSymbol(__this, C__RIGHT_SQUARE_BRACKET(), 0)) {
			__poke(current__, save);
			return 0;
		}

		if (JackParser__matchSymbol(__this, C__COMMA(), 0)) {
			__poke(current__, save);
			return 0;
		}

		if (((JackTokenizer__tokenType(__peek(jt__)))==(C__SYMBOL()))) {
			if (((JackParser__astAddOp(__this))==(0))) {
				JackParser__error(__this, Memory__getString(JackParser___str59));
				return 0;
			}

			if (((0)==(JackParser__advance(__this)))) {
				JackParser__error(__this, Memory__getString(JackParser___str60));
				return 0;
			}

		} else {
			__poke(current__, save);
			return 0;
		}
	}
	__poke(current__, save);
	return 0;
}
var JackParser__compileTerm(var __this, var expr) {
	var z;
	var s;
	var l;
	var save;
	save = __peek(current__);
	z = JackParser__matchIntegerConstant(__this, 0);
	if (z) {
		if (expr) {
			JackParser__astAdd(__this, C__EXPR());
			save = __peek(current__);
		}

		JackParser__astAddType(__this);
		JackParser__advance(__this);
		__poke(current__, save);
		return 0;
	}

	z = JackParser__matchStringConstant(__this, 0);
	if (z) {
		if (expr) {
			JackParser__astAdd(__this, C__EXPR());
			save = __peek(current__);
		}

		JackParser__astAddType(__this);
		JackParser__advance(__this);
		__poke(current__, save);
		return 0;
	}

	if (((JackTokenizer__tokenType(__peek(jt__)))==(C__KEYWORD()))) {
		if (JackParser__matchKeyword(__this, C__TRUE(), 0)) {
			if (expr) {
				JackParser__astAdd(__this, C__EXPR());
				save = __peek(current__);
			}

			JackParser__astAddType(__this);
			JackParser__advance(__this);
			__poke(current__, save);
			return 0;
		} else {
			if (JackParser__matchKeyword(__this, C__FALSE(), 0)) {
				if (expr) {
					JackParser__astAdd(__this, C__EXPR());
					save = __peek(current__);
				}

				JackParser__astAddType(__this);
				JackParser__advance(__this);
				__poke(current__, save);
				return 0;
			} else {
				if (JackParser__matchKeyword(__this, C__NULL(), 0)) {
					if (expr) {
						JackParser__astAdd(__this, C__EXPR());
						save = __peek(current__);
					}

					JackParser__astAddType(__this);
					JackParser__advance(__this);
					__poke(current__, save);
					return 0;
				} else {
					if (JackParser__matchKeyword(__this, C__THIS(), 0)) {
						if (expr) {
							JackParser__astAdd(__this, C__EXPR());
							save = __peek(current__);
						}

						JackParser__astAddType(__this);
						JackParser__advance(__this);
						__poke(current__, save);
						return 0;
					}

				}
			}
		}
	}

	z = JackParser__matchSymbol(__this, C__TILDE(), 0);
	if (((z)==(0))) {
		z = JackParser__matchSymbol(__this, C__NOT(), 0);
	}

	if (z) {
		if (expr) {
			JackParser__astAdd(__this, C__EXPR());
			save = __peek(current__);
		}

		JackParser__astAdd(__this, C__UNARYTILDE());
		JackParser__advance(__this);
		JackParser__compileTerm(__this, 0);
		__poke(current__, save);
		return 0;
	}

	z = JackParser__matchSymbol(__this, C__MINUS(), 0);
	if (z) {
		if (expr) {
			JackParser__astAdd(__this, C__EXPR());
			save = __peek(current__);
		}

		JackParser__astAdd(__this, C__UNARYMINUS());
		JackParser__advance(__this);
		JackParser__compileTerm(__this, 0);
		__poke(current__, save);
		return 0;
	}

	z = JackParser__matchSymbol(__this, C__RIGHT_PARENTHESIS(), 0);
	if (z) {
		__poke(current__, save);
		return 0;
	}

	z = JackParser__matchSymbol(__this, C__LEFT_PARENTHESIS(), 0);
	if (z) {
		if (expr) {
			JackParser__astAdd(__this, C__EXPR());
			save = __peek(current__);
		}

		JackParser__astAddType(__this);
		JackParser__advance(__this);
		JackParser__compileExpression(__this);
		z = JackParser__matchSymbol(__this, C__RIGHT_PARENTHESIS(), 0);
		if (z) {
			JackParser__advance(__this);
			__poke(current__, save);
			return 0;
		}

		JackParser__error(__this, Memory__getString(JackParser___str61));
		return 0;
	}

	z = JackParser__matchIdentifier(__this, 0);
	if (((0)==(z))) {
		JackParser__error(__this, Memory__getString(JackParser___str62));
		return 0;
	}

	if (expr) {
		JackParser__astAdd(__this, C__EXPR());
		save = __peek(current__);
	}

	s = JackTokenizer__identifier(__peek(jt__));
	s = String__copy(s);
	l = JackTokenizer__getLine(__peek(jt__));
	z = JackParser__matchSymbol(__this, C__LEFT_SQUARE_BRACKET(), -1);
	if (z) {
		JackParser__astAddName(__this, C__VARNAME(), s, l);
		JackParser__astAdd(__this, C__LEFT_SQUARE_BRACKET());
		String__dispose(s);
		JackParser__advance(__this);
		JackParser__compileExpression(__this);
		z = JackParser__matchSymbol(__this, C__RIGHT_SQUARE_BRACKET(), 0);
		if (((0)==(z))) {
			JackParser__error(__this, Memory__getString(JackParser___str63));
			return 0;
		}

		JackParser__advance(__this);
		__poke(current__, save);
		return 0;
	}

	z = JackParser__matchSymbol(__this, C__CONSTACCESS(), 0);
	if (z) {
		JackParser__astAddName(__this, C__CONSTACCESS(), s, l);
		String__dispose(s);
		z = JackParser__matchIdentifier(__this, -1);
		if (((0)==(z))) {
			JackParser__error(__this, Memory__getString(JackParser___str64));
			__poke(current__, save);
			return 0;
		}

		JackParser__astAddType(__this);
		JackParser__advance(__this);
		__poke(current__, save);
		return 0;
	}

	z = JackParser__matchSymbol(__this, C__DOT(), 0);
	z = z||JackParser__matchSymbol(__this, C__LEFT_PARENTHESIS(), 0);
	if (((0)==(z))) {
		JackParser__astAddName(__this, C__VARNAME(), s, l);
		String__dispose(s);
		__poke(current__, save);
		return 0;
	}

	JackParser__subroutineCall(__this, s, l);
	String__dispose(s);
	__poke(current__, save);
	return 0;
}
var JackParser__compileExpressionList(var __this) {
	var save;
	save = __peek(current__);
	JackParser__compileExpression(__this);
	while (!(((JackParser__matchSymbol(__this, C__COMMA(), 0))==(0)))) {
		JackParser__advance(__this);
		JackParser__compileExpression(__this);
	}
	__poke(current__, save);
	return 0;
}
#undef jt__
#undef src__
#undef maxerror__
#undef nberror__
#undef exp__
#undef line__
#undef last_line__
#undef ast__
#undef current__
#undef const__
#endif

#ifdef JACK_IMPLEMENTATION
var JackCompiler___str0[] = {116,101,115,116,46,120,109,108,0};
var JackCompiler___str1[] = {46,104,0};
var JackCompiler___str2[] = {35,105,102,100,101,102,32,74,65,67,75,95,73,77,80,76,69,77,69,78,84,65,84,73,79,78,0};
var JackCompiler___str3[] = {35,105,102,100,101,102,32,74,65,67,75,95,73,77,80,76,69,77,69,78,84,65,84,73,79,78,0};
var JackCompiler___str4[] = {46,99,0};
var JackCompiler___str5[] = {35,105,102,110,100,101,102,32,118,97,114,0};
var JackCompiler___str6[] = {35,100,101,102,105,110,101,32,74,65,67,75,95,72,65,67,75,0};
var JackCompiler___str7[] = {35,100,101,102,105,110,101,32,118,97,114,32,115,104,111,114,116,0};
var JackCompiler___str8[] = {35,100,101,102,105,110,101,32,95,95,112,111,107,101,32,77,101,109,111,114,121,95,95,112,111,107,101,0};
var JackCompiler___str9[] = {35,100,101,102,105,110,101,32,95,95,112,101,101,107,32,77,101,109,111,114,121,95,95,112,101,101,107,0};
var JackCompiler___str10[] = {35,105,102,100,101,102,32,95,87,73,78,54,52,0};
var JackCompiler___str11[] = {35,105,110,99,108,117,100,101,32,60,119,105,110,100,111,119,115,46,104,62,0};
var JackCompiler___str12[] = {35,100,101,102,105,110,101,32,118,97,114,32,95,95,105,110,116,54,52,0};
var JackCompiler___str13[] = {35,101,108,115,101,0};
var JackCompiler___str14[] = {35,100,101,102,105,110,101,32,118,97,114,32,108,111,110,103,0};
var JackCompiler___str15[] = {35,101,110,100,105,102,0};
var JackCompiler___str16[] = {35,100,101,102,105,110,101,32,95,95,112,111,107,101,40,97,44,32,118,41,32,95,95,112,101,101,107,40,40,97,41,41,32,61,32,118,0};
var JackCompiler___str17[] = {47,47,35,100,101,102,105,110,101,32,95,95,112,101,101,107,40,97,41,32,40,40,40,118,97,114,42,41,40,97,41,41,91,48,93,41,0};
var JackCompiler___str18[] = {35,100,101,102,105,110,101,32,95,95,112,101,101,107,40,97,41,32,40,40,40,118,97,114,42,41,40,40,97,41,42,115,105,122,101,111,102,40,118,97,114,41,41,41,91,48,93,41,0};
var JackCompiler___str19[] = {35,101,110,100,105,102,0};
var JackCompiler___str20[] = {46,104,0};
var JackCompiler___str21[] = {35,100,101,102,105,110,101,32,74,65,67,75,95,73,77,80,76,69,77,69,78,84,65,84,73,79,78,0};
var JackCompiler___str22[] = {47,108,105,98,47,99,47,109,97,105,110,46,104,0};
var JackCompiler___str23[] = {47,108,105,98,47,99,47,88,49,49,46,104,0};
var JackCompiler___str24[] = {47,108,105,98,47,99,47,119,105,110,51,50,46,104,0};
var JackCompiler___str25[] = {47,108,105,98,47,99,47,109,97,99,46,104,0};
var JackCompiler___str26[] = {47,108,105,98,47,99,47,105,111,115,46,104,0};
var JackCompiler___str27[] = {47,108,105,98,47,99,47,97,110,100,114,111,105,100,46,104,0};
var JackCompiler___str28[] = {47,99,47,112,108,97,116,102,111,114,109,46,104,0};
var JackCompiler___str29[] = {46,104,0};
#define src__ (__this+0)
#define t__ (__this+1)
#define comp__ (__this+2)
#define hack__ (__this+3)
var JackCompiler__new(var hack_mode) {
	var __this;
	__this = Memory__alloc(4);
	__poke(src__, 0);
	__poke(t__, JackTokenizer__new(hack_mode));
	__poke(comp__, JackParser__new(__peek(t__)));
	__poke(hack__, hack_mode);
	return __this;
}
var JackCompiler__dispose(var __this) {
	JackTokenizer__dispose(__peek(t__));
	if (__peek(comp__)) {
		JackParser__dispose(__peek(comp__));
	}

	Memory__deAlloc(__this);
	return 0;
}
var JackCompiler__compile(var __this, var src_) {
	var dst;
	var a;
	var c;
	var s;
	__poke(src__, File__new(src_, 0));
	dst = File__new(Memory__getString(JackCompiler___str0), -1);
	s = String__copy(src_);
	s = String__appendString(s, Memory__getString(JackCompiler___str1));
	a = File__new(s, -1);
	String__dispose(s);
	JackTokenizer__init(__peek(t__), __peek(src__), 0);
	JackParser__init(__peek(comp__), __peek(src__));
	JackParser__compileClass(__peek(comp__), __peek(t__), dst);
	c = JackAstToC__new(__peek(comp__), __peek(hack__));
	JackAstToC__compile(c, a);
	JackAstToC__dispose(c);
	File__dispose(a);
	File__dispose(dst);
	File__dispose(__peek(src__));
	__poke(src__, 0);
	return -1;
}
var JackCompiler__copyHead(var __this, var dst, var source) {
	var s;
	var l;
	var src_;
	var b;
	src_ = File__new(source, 0);
	s = Memory__getString(JackCompiler___str2);
	s = String__copy(s);
	s = String__appendChar(s, 10);
	b = String__new(1024);
	l = File__readLine(src_, b);
	while (!(((l)==(0)))) {
		b = l;
		if (((String__compare(s, b))==(0))) {
			l = 0;
		} else {
			File__writeString(dst, b);
			l = File__readLine(src_, b);
		}
	}
	String__dispose(s);
	String__dispose(b);
	File__dispose(src_);
	return 0;
}
var JackCompiler__copy(var __this, var dst, var source) {
	var l;
	var src_;
	var b;
	src_ = File__new(source, 0);
	b = String__new(1024);
	l = File__readLine(src_, b);
	while (!(((l)==(0)))) {
		b = l;
		File__writeString(dst, b);
		l = File__readLine(src_, b);
	}
	String__dispose(b);
	File__dispose(src_);
	return 0;
}
var JackCompiler__copyBody(var __this, var dst, var source) {
	var s;
	var l;
	var src_;
	var b;
	var doit;
	doit = 0;
	src_ = File__new(source, 0);
	s = Memory__getString(JackCompiler___str3);
	s = String__copy(s);
	s = String__appendChar(s, 10);
	b = String__new(1024);
	l = File__readLine(src_, b);
	while (!(((l)==(0)))) {
		b = l;
		if (((doit)==(0))) {
			if (((String__compare(s, b))==(0))) {
				doit = -1;
			}

		}

		if (doit) {
			File__writeString(dst, b);
		}

		l = File__readLine(src_, b);
	}
	String__dispose(s);
	String__dispose(b);
	File__dispose(src_);
	return 0;
}
var JackCompiler__link(var __this, var dir, var files) {
	var i;
	var l;
	var s;
	var dst;
	var sr;
	s = String__copy(dir);
	l = String__length(s);
	if (((String__charAt(s, l-1))==(47))) {
		String__setCharAt(s, l-1, 0);
	}

	s = String__appendString(s, Memory__getString(JackCompiler___str4));
	dst = File__new(s, -1);
	String__dispose(s);
	i = 0;
	File__writeByte(dst, 10);
	File__writeString(dst, Memory__getString(JackCompiler___str5));
	File__writeByte(dst, 10);
	if (__peek(hack__)) {
		File__writeString(dst, Memory__getString(JackCompiler___str6));
		File__writeByte(dst, 10);
		File__writeString(dst, Memory__getString(JackCompiler___str7));
		File__writeByte(dst, 10);
		File__writeString(dst, Memory__getString(JackCompiler___str8));
		File__writeByte(dst, 10);
		File__writeString(dst, Memory__getString(JackCompiler___str9));
		File__writeByte(dst, 10);
	} else {
		File__writeString(dst, Memory__getString(JackCompiler___str10));
		File__writeByte(dst, 10);
		File__writeString(dst, Memory__getString(JackCompiler___str11));
		File__writeByte(dst, 10);
		File__writeString(dst, Memory__getString(JackCompiler___str12));
		File__writeByte(dst, 10);
		File__writeString(dst, Memory__getString(JackCompiler___str13));
		File__writeByte(dst, 10);
		File__writeString(dst, Memory__getString(JackCompiler___str14));
		File__writeByte(dst, 10);
		File__writeString(dst, Memory__getString(JackCompiler___str15));
		File__writeByte(dst, 10);
		File__writeString(dst, Memory__getString(JackCompiler___str16));
		File__writeByte(dst, 10);
		File__writeString(dst, Memory__getString(JackCompiler___str17));
		File__writeByte(dst, 10);
		File__writeString(dst, Memory__getString(JackCompiler___str18));
		File__writeByte(dst, 10);
	}
	File__writeString(dst, Memory__getString(JackCompiler___str19));
	File__writeByte(dst, 10);
	while (((i)<(Buffer__getSize(files)))) {
		s = Buffer__getAt(files, i);
		s = String__copy(s);
		s = String__appendString(s, Memory__getString(JackCompiler___str20));
		JackCompiler__copyHead(__this, dst, s);
		File__writeByte(dst, 10);
		String__dispose(s);
		i = i+1;
	}
	i = 0;
	File__writeString(dst, Memory__getString(JackCompiler___str21));
	File__writeByte(dst, 10);
	s = String__copy(dir);
	s = String__appendString(s, Memory__getString(JackCompiler___str22));
	JackCompiler__copy(__this, dst, s);
	String__dispose(s);
	s = String__copy(dir);
	s = String__appendString(s, Memory__getString(JackCompiler___str23));
	JackCompiler__copy(__this, dst, s);
	String__dispose(s);
	s = String__copy(dir);
	s = String__appendString(s, Memory__getString(JackCompiler___str24));
	JackCompiler__copy(__this, dst, s);
	String__dispose(s);
	s = String__copy(dir);
	s = String__appendString(s, Memory__getString(JackCompiler___str25));
	JackCompiler__copy(__this, dst, s);
	String__dispose(s);
	s = String__copy(dir);
	s = String__appendString(s, Memory__getString(JackCompiler___str26));
	JackCompiler__copy(__this, dst, s);
	String__dispose(s);
	s = String__copy(dir);
	s = String__appendString(s, Memory__getString(JackCompiler___str27));
	JackCompiler__copy(__this, dst, s);
	String__dispose(s);
	s = String__copy(dir);
	s = String__appendString(s, Memory__getString(JackCompiler___str28));
	JackCompiler__copy(__this, dst, s);
	String__dispose(s);
	while (((i)<(Buffer__getSize(files)))) {
		s = Buffer__getAt(files, i);
		s = String__copy(s);
		s = String__appendString(s, Memory__getString(JackCompiler___str29));
		JackCompiler__copyBody(__this, dst, s);
		File__writeByte(dst, 10);
		sr = File__new(s, 0);
		File__remove(sr);
		File__dispose(sr);
		String__dispose(s);
		i = i+1;
	}
	File__dispose(dst);
	return -1;
}
#undef src__
#undef t__
#undef comp__
#undef hack__
#endif

#ifdef JACK_IMPLEMENTATION
var JackAstToC___str0[] = {35,105,102,32,48,0};
var JackAstToC___str1[] = {35,101,110,100,105,102,0};
var JackAstToC___str2[] = {35,105,102,110,100,101,102,32,74,65,67,75,95,0};
var JackAstToC___str3[] = {95,72,0};
var JackAstToC___str4[] = {35,100,101,102,105,110,101,32,74,65,67,75,95,0};
var JackAstToC___str5[] = {95,72,0};
var JackAstToC___str6[] = {35,101,110,100,105,102,0};
var JackAstToC___str7[] = {35,105,102,100,101,102,32,74,65,67,75,95,73,77,80,76,69,77,69,78,84,65,84,73,79,78,0};
var JackAstToC___str8[] = {85,110,101,120,112,101,99,116,101,100,32,107,105,110,100,46,0};
var JackAstToC___str9[] = {35,101,110,100,105,102,0};
var JackAstToC___str10[] = {118,97,114,32,0};
var JackAstToC___str11[] = {95,95,95,115,116,114,0};
var JackAstToC___str12[] = {91,93,32,61,32,123,0};
var JackAstToC___str13[] = {44,0};
var JackAstToC___str14[] = {48,125,59,0};
var JackAstToC___str15[] = {9,0};
var JackAstToC___str16[] = {99,0};
var JackAstToC___str17[] = {35,100,101,102,105,110,101,32,68,69,70,95,95,0};
var JackAstToC___str18[] = {95,95,0};
var JackAstToC___str19[] = {32,0};
var JackAstToC___str20[] = {77,101,109,111,114,121,95,95,103,101,116,83,116,114,105,110,103,40,0};
var JackAstToC___str21[] = {95,95,95,115,116,114,0};
var JackAstToC___str22[] = {41,0};
var JackAstToC___str23[] = {118,97,114,32,0};
var JackAstToC___str24[] = {32,61,32,48,59,0};
var JackAstToC___str25[] = {59,0};
var JackAstToC___str26[] = {35,117,110,100,101,102,32,0};
var JackAstToC___str27[] = {35,100,101,102,105,110,101,32,0};
var JackAstToC___str28[] = {32,40,95,95,116,104,105,115,43,0};
var JackAstToC___str29[] = {41,0};
var JackAstToC___str30[] = {99,97,108,108,98,97,99,107,32,109,117,115,116,32,98,101,32,116,104,101,32,102,105,114,115,116,32,102,105,101,108,100,46,0};
var JackAstToC___str31[] = {59,0};
var JackAstToC___str32[] = {59,0};
var JackAstToC___str33[] = {32,123,0};
var JackAstToC___str34[] = {125,0};
var JackAstToC___str35[] = {32,123,0};
var JackAstToC___str36[] = {118,97,114,32,95,95,116,104,105,115,59,0};
var JackAstToC___str37[] = {118,97,114,32,95,95,116,104,105,115,59,0};
var JackAstToC___str38[] = {95,95,116,104,105,115,32,61,32,77,101,109,111,114,121,95,95,97,108,108,111,99,40,0};
var JackAstToC___str39[] = {41,59,0};
var JackAstToC___str40[] = {40,95,95,112,101,101,107,40,95,95,116,104,105,115,43,48,41,41,32,61,32,40,118,97,114,41,0};
var JackAstToC___str41[] = {95,95,99,97,108,108,98,97,99,107,59,0};
var JackAstToC___str42[] = {125,0};
var JackAstToC___str43[] = {59,0};
var JackAstToC___str44[] = {32,123,0};
var JackAstToC___str45[] = {125,0};
var JackAstToC___str46[] = {73,110,32,0};
var JackAstToC___str47[] = {32,40,0};
var JackAstToC___str48[] = {41,32,0};
var JackAstToC___str49[] = {32,103,111,116,32,0};
var JackAstToC___str50[] = {32,39,0};
var JackAstToC___str51[] = {39,46,0};
var JackAstToC___str52[] = {32,110,117,108,108,32,0};
var JackAstToC___str53[] = {59,0};
var JackAstToC___str54[] = {85,110,107,110,111,119,110,32,115,116,97,116,101,109,101,110,116,0};
var JackAstToC___str55[] = {119,104,105,108,101,32,40,45,49,61,61,40,0};
var JackAstToC___str56[] = {119,104,105,108,101,32,40,0};
var JackAstToC___str57[] = {101,120,112,101,99,116,101,100,32,101,120,112,114,101,115,115,105,111,110,32,105,110,32,119,104,105,108,101,0};
var JackAstToC___str58[] = {41,41,32,123,0};
var JackAstToC___str59[] = {41,32,123,0};
var JackAstToC___str60[] = {125,0};
var JackAstToC___str61[] = {105,102,32,40,48,33,61,40,0};
var JackAstToC___str62[] = {105,102,32,40,0};
var JackAstToC___str63[] = {101,120,112,101,99,116,101,100,32,101,120,112,114,101,115,115,105,111,110,32,105,110,32,105,102,0};
var JackAstToC___str64[] = {41,41,32,123,0};
var JackAstToC___str65[] = {41,32,123,0};
var JackAstToC___str66[] = {101,120,112,101,99,116,101,100,32,115,116,97,116,101,109,101,110,116,115,32,105,110,32,105,102,0};
var JackAstToC___str67[] = {101,120,112,101,99,116,101,100,32,115,116,97,116,101,109,101,110,116,115,46,0};
var JackAstToC___str68[] = {125,0};
var JackAstToC___str69[] = {101,120,112,101,99,116,101,100,32,101,108,115,101,0};
var JackAstToC___str70[] = {125,32,101,108,115,101,32,123,0};
var JackAstToC___str71[] = {101,120,112,101,99,116,101,100,32,115,116,97,116,101,109,101,110,116,115,32,105,110,32,101,108,115,101,0};
var JackAstToC___str72[] = {125,0};
var JackAstToC___str73[] = {114,101,116,117,114,110,32,0};
var JackAstToC___str74[] = {48,0};
var JackAstToC___str75[] = {59,0};
var JackAstToC___str76[] = {95,95,112,111,107,101,40,0};
var JackAstToC___str77[] = {44,32,0};
var JackAstToC___str78[] = {32,61,32,0};
var JackAstToC___str79[] = {41,0};
var JackAstToC___str80[] = {59,0};
var JackAstToC___str81[] = {95,95,112,101,101,107,40,0};
var JackAstToC___str82[] = {95,95,0};
var JackAstToC___str83[] = {43,0};
var JackAstToC___str84[] = {41,0};
var JackAstToC___str85[] = {39,91,39,32,101,120,112,101,99,116,101,100,0};
var JackAstToC___str86[] = {45,0};
var JackAstToC___str87[] = {126,0};
var JackAstToC___str88[] = {33,0};
var JackAstToC___str89[] = {38,0};
var JackAstToC___str90[] = {38,38,0};
var JackAstToC___str91[] = {38,38,0};
var JackAstToC___str92[] = {124,124,0};
var JackAstToC___str93[] = {124,0};
var JackAstToC___str94[] = {124,124,0};
var JackAstToC___str95[] = {48,0};
var JackAstToC___str96[] = {95,95,116,104,105,115,0};
var JackAstToC___str97[] = {48,0};
var JackAstToC___str98[] = {45,49,0};
var JackAstToC___str99[] = {40,0};
var JackAstToC___str100[] = {41,0};
var JackAstToC___str101[] = {77,101,109,111,114,121,95,95,103,101,116,83,116,114,105,110,103,40,0};
var JackAstToC___str102[] = {95,95,95,115,116,114,0};
var JackAstToC___str103[] = {41,0};
var JackAstToC___str104[] = {43,0};
var JackAstToC___str105[] = {45,0};
var JackAstToC___str106[] = {42,0};
var JackAstToC___str107[] = {47,0};
var JackAstToC___str108[] = {40,40,40,0};
var JackAstToC___str109[] = {41,60,40,0};
var JackAstToC___str110[] = {41,41,63,45,49,58,48,41,0};
var JackAstToC___str111[] = {40,40,0};
var JackAstToC___str112[] = {41,60,40,0};
var JackAstToC___str113[] = {41,41,0};
var JackAstToC___str114[] = {40,40,40,0};
var JackAstToC___str115[] = {41,60,61,40,0};
var JackAstToC___str116[] = {41,41,63,45,49,58,48,41,0};
var JackAstToC___str117[] = {40,40,0};
var JackAstToC___str118[] = {41,60,61,40,0};
var JackAstToC___str119[] = {41,41,0};
var JackAstToC___str120[] = {40,40,40,0};
var JackAstToC___str121[] = {41,62,40,0};
var JackAstToC___str122[] = {41,41,63,45,49,58,48,41,0};
var JackAstToC___str123[] = {40,40,0};
var JackAstToC___str124[] = {41,62,40,0};
var JackAstToC___str125[] = {41,41,0};
var JackAstToC___str126[] = {40,40,40,0};
var JackAstToC___str127[] = {41,62,61,40,0};
var JackAstToC___str128[] = {41,41,63,45,49,58,48,41,0};
var JackAstToC___str129[] = {40,40,0};
var JackAstToC___str130[] = {41,62,61,40,0};
var JackAstToC___str131[] = {41,41,0};
var JackAstToC___str132[] = {40,40,40,0};
var JackAstToC___str133[] = {41,61,61,40,0};
var JackAstToC___str134[] = {41,41,63,45,49,58,48,41,0};
var JackAstToC___str135[] = {40,40,0};
var JackAstToC___str136[] = {41,61,61,40,0};
var JackAstToC___str137[] = {41,41,0};
var JackAstToC___str138[] = {40,40,40,0};
var JackAstToC___str139[] = {41,33,61,40,0};
var JackAstToC___str140[] = {41,41,63,45,49,58,48,41,0};
var JackAstToC___str141[] = {40,40,0};
var JackAstToC___str142[] = {41,33,61,40,0};
var JackAstToC___str143[] = {41,41,0};
var JackAstToC___str144[] = {68,69,70,95,95,0};
var JackAstToC___str145[] = {95,95,0};
var JackAstToC___str146[] = {85,110,101,120,112,101,99,116,101,100,32,116,101,114,109,0};
var JackAstToC___str147[] = {95,95,95,0};
var JackAstToC___str148[] = {95,95,112,101,101,107,40,0};
var JackAstToC___str149[] = {95,95,41,0};
var JackAstToC___str150[] = {95,95,0};
var JackAstToC___str151[] = {95,95,0};
var JackAstToC___str152[] = {47,42,32,69,82,82,79,82,32,110,111,116,32,97,108,108,111,119,101,100,32,98,121,32,72,65,67,75,32,42,47,0};
var JackAstToC___str153[] = {109,105,115,115,105,110,103,32,99,97,108,108,98,97,99,107,32,102,105,101,108,100,0};
var JackAstToC___str154[] = {40,40,118,97,114,40,42,41,40,118,97,114,44,118,97,114,44,118,97,114,41,41,40,95,95,112,101,101,107,40,95,95,116,104,105,115,41,41,41,0};
var JackAstToC___str155[] = {95,95,116,104,105,115,0};
var JackAstToC___str156[] = {95,95,0};
var JackAstToC___str157[] = {95,95,116,104,105,115,0};
var JackAstToC___str158[] = {40,0};
var JackAstToC___str159[] = {44,32,0};
var JackAstToC___str160[] = {41,0};
var JackAstToC___str161[] = {118,97,114,0};
var JackAstToC___str162[] = {118,97,114,0};
var JackAstToC___str163[] = {32,0};
var JackAstToC___str164[] = {95,95,0};
var JackAstToC___str165[] = {99,97,108,108,98,97,99,107,0};
var JackAstToC___str166[] = {115,117,98,114,111,117,116,105,110,101,32,110,97,109,101,32,101,120,112,101,99,116,101,100,0};
var JackAstToC___str167[] = {40,0};
var JackAstToC___str168[] = {118,97,114,32,95,95,116,104,105,115,0};
var JackAstToC___str169[] = {44,32,0};
var JackAstToC___str170[] = {32,0};
var JackAstToC___str171[] = {44,32,0};
var JackAstToC___str172[] = {41,0};
var JackAstToC___str173[] = {32,0};
var JackAstToC___str174[] = {32,61,32,48,59,0};
var JackAstToC___str175[] = {59,0};
var JackAstToC___str176[] = {118,97,114,0};
var JackAstToC___str177[] = {118,97,114,0};
var JackAstToC___str178[] = {95,95,95,0};
var JackAstToC___str179[] = {95,95,112,101,101,107,40,0};
var JackAstToC___str180[] = {95,95,41,0};
var JackAstToC___str181[] = {95,95,0};
#define dst__ (__this+0)
#define parser__ (__this+1)
#define ast__ (__this+2)
#define current__ (__this+3)
#define clas__ (__this+4)
#define nb_field__ (__this+5)
#define nb_static__ (__this+6)
#define has_callback__ (__this+7)
#define hack__ (__this+8)
#define sp__ (__this+9)
#define stringid__ (__this+10)
var JackAstToC__new(var parse, var hack_mode) {
	var __this;
	__this = Memory__alloc(11);
	__poke(parser__, parse);
	__poke(dst__, 0);
	__poke(ast__, JackParser__getAst(parse));
	__poke(hack__, hack_mode);
	return __this;
}
var JackAstToC__dispose(var __this) {
	Memory__deAlloc(__this);
	return 0;
}
var JackAstToC__compile(var __this, var dst_) {
	var c;
	__poke(dst__, dst_);
	__poke(current__, __peek(ast__));
	JackAstToC__nl(__this);
	File__writeString(__peek(dst__), Memory__getString(JackAstToC___str0));
	JackAstToC__nl(__this);
	JackAstToC__nl(__this);
	File__writeString(__peek(dst__), Memory__getString(JackAstToC___str1));
	JackAstToC__nl(__this);
	__poke(stringid__, 0);
	__poke(sp__, 0);
	__poke(nb_field__, 0);
	__poke(nb_static__, 0);
	__poke(has_callback__, 0);
	JackAstToC__nl(__this);
	while (!(((__peek(current__))==(0)))) {
		c = JackAst__getChild(__peek(current__));
		if (c) {
			if (((JackAst__getTag(c))==(C__CLASS()))) {
				JackAstToC__coClass(__this, c);
			}

		}

		__poke(current__, JackAst__getNext(__peek(current__)));
	}
	return -1;
}
var JackAstToC__coClass(var __this, var c) {
	var d;
	var t;
	__poke(clas__, JackAst__getData(c));
	File__writeString(__peek(dst__), Memory__getString(JackAstToC___str2));
	File__writeString(__peek(dst__), __peek(clas__));
	File__writeString(__peek(dst__), Memory__getString(JackAstToC___str3));
	JackAstToC__nl(__this);
	File__writeString(__peek(dst__), Memory__getString(JackAstToC___str4));
	File__writeString(__peek(dst__), __peek(clas__));
	File__writeString(__peek(dst__), Memory__getString(JackAstToC___str5));
	JackAstToC__nl(__this);
	d = JackAst__getChild(c);
	if (d) {
		JackAstToC__genStrings(__this, d, 0);
	}

	d = JackAst__getChild(c);
	while (!(((d)==(0)))) {
		t = JackAst__getTag(d);
		if (((t)==(C__FUNCTION()))) {
			JackAstToC__coFunctionPre(__this, d);
		} else {
			if (((t)==(C__METHOD()))) {
				JackAstToC__coMethodPre(__this, d);
			} else {
				if (((t)==(C__CONSTRUCTOR()))) {
					JackAstToC__coConstructorPre(__this, d);
				} else {
					if (((t)==(C__CONST()))) {
						JackAstToC__coConstPre(__this, d);
					}

				}
			}
		}
		d = JackAst__getNext(d);
	}
	File__writeString(__peek(dst__), Memory__getString(JackAstToC___str6));
	JackAstToC__nl(__this);
	File__writeString(__peek(dst__), Memory__getString(JackAstToC___str7));
	JackAstToC__nl(__this);
	d = JackAst__getChild(c);
	if (d) {
		JackAstToC__genStrings(__this, d, -1);
	}

	d = JackAst__getChild(c);
	while (!(((d)==(0)))) {
		t = JackAst__getTag(d);
		if (((t)==(C__FUNCTION()))) {
			JackAstToC__coFunction(__this, d);
		} else {
			if (((t)==(C__METHOD()))) {
				JackAstToC__coMethod(__this, d);
			} else {
				if (((t)==(C__CONSTRUCTOR()))) {
					JackAstToC__coConstructor(__this, d);
				} else {
					if (((t)==(C__FIELD()))) {
						JackAstToC__coField(__this, d);
					} else {
						if (((t)==(C__STATIC()))) {
							JackAstToC__coStatic(__this, d);
						} else {
							if (((t)==(C__CONST()))) {
								d = d;
							} else {
								JackAstToC__error(__this, Memory__getString(JackAstToC___str8), d);
							}
						}
					}
				}
			}
		}
		d = JackAst__getNext(d);
	}
	d = JackAst__getChild(c);
	while (!(((d)==(0)))) {
		t = JackAst__getTag(d);
		if (((t)==(C__FIELD()))) {
			JackAstToC__coFieldUndef(__this, d);
		}

		d = JackAst__getNext(d);
	}
	File__writeString(__peek(dst__), Memory__getString(JackAstToC___str9));
	JackAstToC__nl(__this);
	return 0;
}
var JackAstToC__genStrings(var __this, var a, var write) {
	var s;
	var o;
	var i;
	var l;
	var n;
	if (((JackAst__getTag(a))==(C__STRING_CONST()))) {
		if (write) {
			File__writeString(__peek(dst__), Memory__getString(JackAstToC___str10));
			File__writeString(__peek(dst__), __peek(clas__));
			File__writeString(__peek(dst__), Memory__getString(JackAstToC___str11));
			s = String__new(8);
			s = String__setInt(s, JackAst__getId(a));
			File__writeString(__peek(dst__), s);
			File__writeString(__peek(dst__), Memory__getString(JackAstToC___str12));
			o = JackAst__getData(a);
			l = String__length(o);
			i = 0;
			while (((i)<(l))) {
				n = String__charAt(o, i);
				s = String__setInt(s, n);
				File__writeString(__peek(dst__), s);
				i = i+1;
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str13));
			}
			File__writeString(__peek(dst__), Memory__getString(JackAstToC___str14));
			JackAstToC__nl(__this);
			String__dispose(s);
		} else {
			JackAst__setId(a, __peek(stringid__));
			__poke(stringid__, __peek(stringid__)+1);
		}
	}

	if (JackAst__getLeft(a)) {
		JackAstToC__genStrings(__this, JackAst__getLeft(a), write);
	}

	if (JackAst__getChild(a)) {
		JackAstToC__genStrings(__this, JackAst__getChild(a), write);
	}

	if (JackAst__getNext(a)) {
		JackAstToC__genStrings(__this, JackAst__getNext(a), write);
	}

	return 0;
}
var JackAstToC__spc(var __this) {
	var i;
	i = 0;
	while (((i)<(__peek(sp__)))) {
		i = i+1;
		File__writeString(__peek(dst__), Memory__getString(JackAstToC___str15));
	}
	return 0;
}
var JackAstToC__getTypeOf(var __this, var y) {
	return JackAstUtils__getTypeOf(__peek(parser__), y);
}
var JackAstToC__getClassOf(var __this, var y) {
	return JackAstUtils__getClassOf(__peek(clas__), y);
}
var JackAstToC__isInt(var __this, var y) {
	return JackAstUtils__isInt(__peek(parser__), y);
}
var JackAstToC__isStatic(var __this, var y) {
	return JackAstUtils__isStatic(y);
}
var JackAstToC__isField(var __this, var y) {
	return JackAstUtils__isField(y);
}
var JackAstToC__isType(var __this, var y) {
	return JackAstUtils__isType(y);
}
var JackAstToC__str(var __this, var c) {
	return JackParser__getConst(__peek(parser__), c);
}
var JackAstToC__nl(var __this) {
	File__writeByte(__peek(dst__), 10);
	return 0;
}
var JackAstToC__coAsm(var __this, var c) {
	var s;
	var z;
	var i;
	var l;
	i = 0;
	z = Memory__getString(JackAstToC___str16);
	s = JackAst__getData(c);
	l = String__length(s);
	while (((String__charAt(s, i))==(String__charAt(z, i)))) {
		i = i+1;
		if (((i)==(l))) {
			return 0;
		}

		if (((i)==(String__length(z)))) {
			while (((i)<(l))) {
				File__writeUtf8(__peek(dst__), String__charAt(s, i));
				i = i+1;
			}
			return 0;
		}

	}
	return 0;
}
var JackAstToC__coConstPre(var __this, var c) {
	var d;
	var s;
	c = JackAst__getChild(c);
	File__writeString(__peek(dst__), Memory__getString(JackAstToC___str17));
	File__writeString(__peek(dst__), __peek(clas__));
	File__writeString(__peek(dst__), Memory__getString(JackAstToC___str18));
	c = JackAst__getChild(c);
	d = c;
	JackAstToC__coVarName(__this, c, -1);
	c = JackAst__getChild(c);
	File__writeString(__peek(dst__), Memory__getString(JackAstToC___str19));
	if (((JackAst__getTag(c))==(C__STRING_CONST()))) {
		File__writeString(__peek(dst__), Memory__getString(JackAstToC___str20));
		File__writeString(__peek(dst__), __peek(clas__));
		File__writeString(__peek(dst__), Memory__getString(JackAstToC___str21));
		s = String__new(8);
		s = String__setInt(s, JackAst__getId(d));
		File__writeString(__peek(dst__), s);
		String__dispose(s);
		File__writeString(__peek(dst__), Memory__getString(JackAstToC___str22));
	} else {
		File__writeString(__peek(dst__), JackAst__getData(c));
	}
	JackAstToC__nl(__this);
	return 0;
}
var JackAstToC__coStatic(var __this, var c) {
	c = JackAst__getChild(c);
	File__writeString(__peek(dst__), Memory__getString(JackAstToC___str23));
	c = JackAst__getChild(c);
	JackAstToC__coVarName(__this, c, -1);
	if (__peek(hack__)) {
		File__writeString(__peek(dst__), Memory__getString(JackAstToC___str24));
	} else {
		File__writeString(__peek(dst__), Memory__getString(JackAstToC___str25));
	}
	JackAstToC__nl(__this);
	__poke(nb_static__, __peek(nb_static__)+1);
	return 0;
}
var JackAstToC__coFieldUndef(var __this, var c) {
	c = JackAst__getChild(c);
	File__writeString(__peek(dst__), Memory__getString(JackAstToC___str26));
	c = JackAst__getChild(c);
	JackAstToC__coVarName(__this, c, -1);
	JackAstToC__nl(__this);
	return 0;
}
var JackAstToC__coField(var __this, var c) {
	var s;
	c = JackAst__getChild(c);
	File__writeString(__peek(dst__), Memory__getString(JackAstToC___str27));
	c = JackAst__getChild(c);
	JackAstToC__coVarName(__this, c, -1);
	File__writeString(__peek(dst__), Memory__getString(JackAstToC___str28));
	s = String__new(8);
	s = String__setInt(s, __peek(nb_field__));
	File__writeString(__peek(dst__), s);
	String__dispose(s);
	File__writeString(__peek(dst__), Memory__getString(JackAstToC___str29));
	JackAstToC__nl(__this);
	if (((JackAst__getTag(c))==(C__CALLBACK()))) {
		if (((__peek(nb_field__))>(0))) {
			JackAstToC__error(__this, Memory__getString(JackAstToC___str30), c);
		}

		__poke(has_callback__, 1);
	}

	__poke(nb_field__, __peek(nb_field__)+1);
	return 0;
}
var JackAstToC__coMethodPre(var __this, var c) {
	var d;
	var t;
	d = JackAst__getChild(c);
	while (!(((d)==(0)))) {
		t = JackAst__getTag(d);
		if (JackAstToC__isType(__this, t)) {
			JackAstToC__coFunctionHead(__this, d, -1);
			File__writeString(__peek(dst__), Memory__getString(JackAstToC___str31));
			JackAstToC__nl(__this);
			return 0;
		}

		d = JackAst__getNext(d);
	}
	return 0;
}
var JackAstToC__coConstructorPre(var __this, var c) {
	var d;
	var t;
	d = JackAst__getChild(c);
	while (!(((d)==(0)))) {
		t = JackAst__getTag(d);
		if (JackAstToC__isType(__this, t)) {
			JackAstToC__coFunctionHead(__this, d, 0);
			File__writeString(__peek(dst__), Memory__getString(JackAstToC___str32));
			JackAstToC__nl(__this);
			return 0;
		}

		d = JackAst__getNext(d);
	}
	return 0;
}
var JackAstToC__coMethod(var __this, var c) {
	var d;
	var t;
	var l;
	d = JackAst__getChild(c);
	l = 0;
	while (!(((d)==(0)))) {
		t = JackAst__getTag(d);
		if (JackAstToC__isType(__this, t)) {
			JackAstToC__coFunctionHead(__this, d, -1);
			File__writeString(__peek(dst__), Memory__getString(JackAstToC___str33));
			JackAstToC__nl(__this);
			__poke(sp__, __peek(sp__)+1);
		}

		if (((t)==(C__VAR()))) {
			JackAstToC__coVarDec(__this, d);
			l = l+1;
		}

		if (((t)==(C__STATEMENTS()))) {
			JackAstToC__coStatements(__this, d);
			__poke(sp__, __peek(sp__)-1);
			File__writeString(__peek(dst__), Memory__getString(JackAstToC___str34));
			JackAstToC__nl(__this);
		}

		d = JackAst__getNext(d);
	}
	return 0;
}
var JackAstToC__coConstructor(var __this, var c) {
	var d;
	var t;
	var l;
	var s;
	d = JackAst__getChild(c);
	l = 0;
	while (!(((d)==(0)))) {
		t = JackAst__getTag(d);
		if (JackAstToC__isType(__this, t)) {
			JackAstToC__coFunctionHead(__this, d, 0);
			File__writeString(__peek(dst__), Memory__getString(JackAstToC___str35));
			JackAstToC__nl(__this);
			__poke(sp__, __peek(sp__)+1);
		}

		if (((t)==(C__VAR()))) {
			if (((l)==(0))) {
				JackAstToC__spc(__this);
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str36));
				JackAstToC__nl(__this);
			}

			JackAstToC__coVarDec(__this, d);
			l = l+1;
		}

		if (((t)==(C__STATEMENTS()))) {
			t = t;
			if (((l)==(0))) {
				JackAstToC__spc(__this);
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str37));
				JackAstToC__nl(__this);
			}

			JackAstToC__spc(__this);
			File__writeString(__peek(dst__), Memory__getString(JackAstToC___str38));
			s = String__new(8);
			if (((__peek(nb_field__))<(1))) {
				s = String__setInt(s, 1);
			} else {
				s = String__setInt(s, __peek(nb_field__));
			}
			File__writeString(__peek(dst__), s);
			String__dispose(s);
			File__writeString(__peek(dst__), Memory__getString(JackAstToC___str39));
			JackAstToC__nl(__this);
			if (__peek(has_callback__)) {
				JackAstToC__spc(__this);
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str40));
				File__writeString(__peek(dst__), __peek(clas__));
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str41));
				JackAstToC__nl(__this);
			}

			JackAstToC__coStatements(__this, d);
			__poke(sp__, __peek(sp__)-1);
			File__writeString(__peek(dst__), Memory__getString(JackAstToC___str42));
			JackAstToC__nl(__this);
		}

		d = JackAst__getNext(d);
	}
	return 0;
}
var JackAstToC__coFunctionPre(var __this, var c) {
	var d;
	var t;
	d = JackAst__getChild(c);
	while (!(((d)==(0)))) {
		t = JackAst__getTag(d);
		if (JackAstToC__isType(__this, t)) {
			JackAstToC__coFunctionHead(__this, d, 0);
			File__writeString(__peek(dst__), Memory__getString(JackAstToC___str43));
			JackAstToC__nl(__this);
			return 0;
		}

		d = JackAst__getNext(d);
	}
	return 0;
}
var JackAstToC__coFunction(var __this, var c) {
	var d;
	var t;
	d = JackAst__getChild(c);
	while (!(((d)==(0)))) {
		t = JackAst__getTag(d);
		if (JackAstToC__isType(__this, t)) {
			JackAstToC__coFunctionHead(__this, d, 0);
			File__writeString(__peek(dst__), Memory__getString(JackAstToC___str44));
			JackAstToC__nl(__this);
			__poke(sp__, __peek(sp__)+1);
		}

		if (((t)==(C__VAR()))) {
			JackAstToC__coVarDec(__this, d);
		}

		if (((t)==(C__STATEMENTS()))) {
			t = t;
			JackAstToC__coStatements(__this, d);
			__poke(sp__, __peek(sp__)-1);
			File__writeString(__peek(dst__), Memory__getString(JackAstToC___str45));
			JackAstToC__nl(__this);
		}

		d = JackAst__getNext(d);
	}
	return 0;
}
var JackAstToC__error(var __this, var txt, var c) {
	if (((String__length(txt))<(1))) {
		return 0;
	}

	Output__printString(Memory__getString(JackAstToC___str46));
	if (c) {
		Output__printString(JackAst__getFile(c));
	} else {
		Output__printString(__peek(clas__));
	}
	Output__printString(Memory__getString(JackAstToC___str47));
	if (c) {
		Output__printInt(JackAst__getLine(c));
	}

	Output__printString(Memory__getString(JackAstToC___str48));
	Output__printString(txt);
	Output__printString(Memory__getString(JackAstToC___str49));
	if (c) {
		Output__printString(JackAstToC__str(__this, JackAst__getTag(c)));
		Output__printString(Memory__getString(JackAstToC___str50));
		if (JackAst__getData(c)) {
			Output__printString(JackAst__getData(c));
		}

		Output__printString(Memory__getString(JackAstToC___str51));
	} else {
		Output__printString(Memory__getString(JackAstToC___str52));
	}
	Output__println();
	Sys__error(-1);
	return 0;
}
var JackAstToC__coStatement(var __this, var c) {
	var t;
	var newline;
	newline = -1;
	t = JackAst__getTag(c);
	if (((t)==(C__ASSIGN()))) {
		JackAstToC__coAssign(__this, c);
	} else {
		if (((t)==(C__WHILE()))) {
			JackAstToC__coWhile(__this, c);
		} else {
			if (((t)==(C__IF()))) {
				JackAstToC__coIf(__this, c);
			} else {
				if (((t)==(C__SUBROUTINECALL()))) {
					JackAstToC__spc(__this);
					JackAstToC__coSubroutineCall(__this, c);
					File__writeString(__peek(dst__), Memory__getString(JackAstToC___str53));
				} else {
					if (((t)==(C__RETURN()))) {
						JackAstToC__coReturn(__this, c);
					} else {
						if (((t)==(C__ASM()))) {
							JackAstToC__coAsm(__this, c);
							newline = 0;
						} else {
							JackAstToC__error(__this, Memory__getString(JackAstToC___str54), c);
						}
					}
				}
			}
		}
	}
	if (newline) {
		JackAstToC__nl(__this);
	}

	return 0;
}
var JackAstToC__coWhile(var __this, var c) {
	var d;
	d = JackAst__getChild(c);
	JackAstToC__spc(__this);
	if (__peek(hack__)) {
		File__writeString(__peek(dst__), Memory__getString(JackAstToC___str55));
	} else {
		File__writeString(__peek(dst__), Memory__getString(JackAstToC___str56));
	}
	if (d) {
		JackAstToC__coExpr(__this, d, 0);
	} else {
		JackAstToC__error(__this, Memory__getString(JackAstToC___str57), c);
		return 0;
	}
	if (__peek(hack__)) {
		File__writeString(__peek(dst__), Memory__getString(JackAstToC___str58));
	} else {
		File__writeString(__peek(dst__), Memory__getString(JackAstToC___str59));
	}
	JackAstToC__nl(__this);
	__poke(sp__, __peek(sp__)+1);
	d = JackAst__getNext(d);
	JackAstToC__coStatements(__this, d);
	__poke(sp__, __peek(sp__)-1);
	d = JackAst__getNext(d);
	JackAstToC__spc(__this);
	File__writeString(__peek(dst__), Memory__getString(JackAstToC___str60));
	return 0;
}
var JackAstToC__coIf(var __this, var c) {
	var d;
	d = JackAst__getChild(c);
	JackAstToC__spc(__this);
	if (__peek(hack__)) {
		File__writeString(__peek(dst__), Memory__getString(JackAstToC___str61));
	} else {
		File__writeString(__peek(dst__), Memory__getString(JackAstToC___str62));
	}
	if (d) {
		JackAstToC__coExpr(__this, d, 0);
	} else {
		JackAstToC__error(__this, Memory__getString(JackAstToC___str63), c);
		return 0;
	}
	if (__peek(hack__)) {
		File__writeString(__peek(dst__), Memory__getString(JackAstToC___str64));
	} else {
		File__writeString(__peek(dst__), Memory__getString(JackAstToC___str65));
	}
	JackAstToC__nl(__this);
	__poke(sp__, __peek(sp__)+1);
	d = JackAst__getNext(d);
	if (((d)==(0))) {
		JackAstToC__error(__this, Memory__getString(JackAstToC___str66), c);
		return 0;
	}

	if ((((((JackAst__getTag(d))==(C__STATEMENTS()))))==(0))) {
		JackAstToC__error(__this, Memory__getString(JackAstToC___str67), d);
		return 0;
	}

	JackAstToC__coStatements(__this, d);
	d = JackAst__getNext(d);
	__poke(sp__, __peek(sp__)-1);
	if (((d)==(0))) {
		JackAstToC__spc(__this);
		File__writeString(__peek(dst__), Memory__getString(JackAstToC___str68));
		JackAstToC__nl(__this);
		return 0;
	}

	if ((((((JackAst__getTag(d))==(C__ELSE()))))==(0))) {
		JackAstToC__error(__this, Memory__getString(JackAstToC___str69), c);
		return 0;
	}

	JackAstToC__spc(__this);
	File__writeString(__peek(dst__), Memory__getString(JackAstToC___str70));
	JackAstToC__nl(__this);
	__poke(sp__, __peek(sp__)+1);
	c = d;
	d = JackAst__getChild(d);
	if (((d)==(0))) {
		JackAstToC__error(__this, Memory__getString(JackAstToC___str71), c);
		return 0;
	}

	JackAstToC__coStatements(__this, d);
	__poke(sp__, __peek(sp__)-1);
	JackAstToC__spc(__this);
	File__writeString(__peek(dst__), Memory__getString(JackAstToC___str72));
	return 0;
}
var JackAstToC__coReturn(var __this, var c) {
	var d;
	d = JackAst__getChild(c);
	JackAstToC__spc(__this);
	File__writeString(__peek(dst__), Memory__getString(JackAstToC___str73));
	if (d) {
		JackAstToC__coExpr(__this, d, 0);
	} else {
		File__writeString(__peek(dst__), Memory__getString(JackAstToC___str74));
	}
	File__writeString(__peek(dst__), Memory__getString(JackAstToC___str75));
	return 0;
}
var JackAstToC__coAssign(var __this, var c) {
	var d;
	var is_field;
	is_field = 0;
	d = JackAst__getLeft(c);
	if (((d)==(0))) {
		return 0;
	}

	JackAstToC__spc(__this);
	if (JackAst__getChild(d)||JackAstToC__isField(__this, d)) {
		File__writeString(__peek(dst__), Memory__getString(JackAstToC___str76));
		is_field = -1;
	}

	JackAstToC__coVarNameOrIndexed(__this, d, -1);
	if (is_field) {
		File__writeString(__peek(dst__), Memory__getString(JackAstToC___str77));
	}

	d = JackAst__getChild(c);
	if (d) {
		if (!is_field) {
			File__writeString(__peek(dst__), Memory__getString(JackAstToC___str78));
		}

		JackAstToC__coExpr(__this, d, 0);
	}

	if (is_field) {
		File__writeString(__peek(dst__), Memory__getString(JackAstToC___str79));
	}

	File__writeString(__peek(dst__), Memory__getString(JackAstToC___str80));
	return 0;
}
var JackAstToC__coVarNameOrIndexed(var __this, var c, var isassign) {
	var d;
	d = JackAst__getChild(c);
	if (d) {
		if (((isassign)==(0))) {
			File__writeString(__peek(dst__), Memory__getString(JackAstToC___str81));
			JackAstToC__coVarName(__this, c, 0);
			if (JackAstToC__isField(__this, c)&&(((0)==(JackAst__getChild(c))))) {
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str82));
			}

		} else {
			JackAstToC__coVarName(__this, c, 0);
		}
		if (((JackAst__getTag(d))==(C__LEFT_SQUARE_BRACKET()))) {
			File__writeString(__peek(dst__), Memory__getString(JackAstToC___str83));
			d = JackAst__getChild(d);
			JackAstToC__coExpr(__this, d, 0);
			if (((isassign)==(0))) {
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str84));
			}

		} else {
			JackAstToC__error(__this, Memory__getString(JackAstToC___str85), d);
			return 0;
		}
	} else {
		JackAstToC__coVarName(__this, c, isassign);
	}
	return 0;
}
var JackAstToC__coExpr(var __this, var c, var isterm) {
	var d;
	var ok;
	var t;
	var s;
	if (((JackAst__getTag(c))==(C__EXPR()))) {
		d = JackAst__getChild(c);
	} else {
		d = c;
	}
	while (!(((d)==(0)))) {
		ok = 0;
		t = JackAst__getTag(d);
		if (((t)==(C__SUBROUTINECALL()))) {
			JackAstToC__coSubroutineCall(__this, d);
			ok = -1;
		}

		if (((t)==(C__UNARYMINUS()))) {
			File__writeString(__peek(dst__), Memory__getString(JackAstToC___str86));
			JackAstToC__coExpr(__this, JackAst__getChild(d), -1);
			ok = -1;
		}

		if (((t)==(C__UNARYTILDE()))) {
			if (__peek(hack__)||JackAstToC__isInt(__this, d)) {
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str87));
			} else {
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str88));
			}
			JackAstToC__coExpr(__this, JackAst__getChild(d), -1);
			ok = -1;
		}

		if (((t)==(C__AND()))) {
			JackAstToC__coExpr(__this, JackAst__getLeft(d), 0);
			if (__peek(hack__)||JackAstToC__isInt(__this, d)) {
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str89));
			} else {
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str90));
			}
			JackAstToC__coExpr(__this, JackAst__getChild(d), 0);
			ok = -1;
		}

		if (((t)==(C__LOGICALAND()))) {
			JackAstToC__coExpr(__this, JackAst__getLeft(d), 0);
			File__writeString(__peek(dst__), Memory__getString(JackAstToC___str91));
			JackAstToC__coExpr(__this, JackAst__getChild(d), 0);
			ok = -1;
		}

		if (((t)==(C__LOGICALOR()))) {
			JackAstToC__coExpr(__this, JackAst__getLeft(d), 0);
			File__writeString(__peek(dst__), Memory__getString(JackAstToC___str92));
			JackAstToC__coExpr(__this, JackAst__getChild(d), 0);
			ok = -1;
		}

		if (((t)==(C__OR()))) {
			JackAstToC__coExpr(__this, JackAst__getLeft(d), 0);
			if (__peek(hack__)||JackAstToC__isInt(__this, d)) {
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str93));
			} else {
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str94));
			}
			JackAstToC__coExpr(__this, JackAst__getChild(d), 0);
			ok = -1;
		}

		if (((t)==(C__NULL()))) {
			File__writeString(__peek(dst__), Memory__getString(JackAstToC___str95));
			ok = -1;
		}

		if (((t)==(C__THIS()))) {
			File__writeString(__peek(dst__), Memory__getString(JackAstToC___str96));
			ok = -1;
		}

		if (((t)==(C__FALSE()))) {
			File__writeString(__peek(dst__), Memory__getString(JackAstToC___str97));
			ok = -1;
		}

		if (((t)==(C__TRUE()))) {
			File__writeString(__peek(dst__), Memory__getString(JackAstToC___str98));
			ok = -1;
		}

		if (((t)==(C__LEFT_PARENTHESIS()))) {
			File__writeString(__peek(dst__), Memory__getString(JackAstToC___str99));
			JackAstToC__coExpr(__this, JackAst__getChild(d), 0);
			File__writeString(__peek(dst__), Memory__getString(JackAstToC___str100));
			ok = -1;
		}

		if (((t)==(C__INT_CONST()))) {
			File__writeString(__peek(dst__), JackAst__getData(d));
			ok = -1;
		}

		if (((t)==(C__STRING_CONST()))) {
			File__writeString(__peek(dst__), Memory__getString(JackAstToC___str101));
			File__writeString(__peek(dst__), __peek(clas__));
			File__writeString(__peek(dst__), Memory__getString(JackAstToC___str102));
			s = String__new(8);
			s = String__setInt(s, JackAst__getId(d));
			File__writeString(__peek(dst__), s);
			String__dispose(s);
			__poke(stringid__, __peek(stringid__)+1);
			File__writeString(__peek(dst__), Memory__getString(JackAstToC___str103));
			ok = -1;
		}

		if (((t)==(C__PLUS()))) {
			JackAstToC__coExpr(__this, JackAst__getLeft(d), 0);
			File__writeString(__peek(dst__), Memory__getString(JackAstToC___str104));
			JackAstToC__coExpr(__this, JackAst__getChild(d), 0);
			ok = -1;
		}

		if (((t)==(C__MINUS()))) {
			JackAstToC__coExpr(__this, JackAst__getLeft(d), 0);
			File__writeString(__peek(dst__), Memory__getString(JackAstToC___str105));
			JackAstToC__coExpr(__this, JackAst__getChild(d), 0);
			ok = -1;
		}

		if (((t)==(C__MULTIPLY()))) {
			JackAstToC__coExpr(__this, JackAst__getLeft(d), 0);
			File__writeString(__peek(dst__), Memory__getString(JackAstToC___str106));
			JackAstToC__coExpr(__this, JackAst__getChild(d), 0);
			ok = -1;
		}

		if (((t)==(C__DIV()))) {
			JackAstToC__coExpr(__this, JackAst__getLeft(d), 0);
			File__writeString(__peek(dst__), Memory__getString(JackAstToC___str107));
			JackAstToC__coExpr(__this, JackAst__getChild(d), 0);
			ok = -1;
		}

		if (((t)==(C__LESS()))) {
			if (__peek(hack__)) {
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str108));
				JackAstToC__coExpr(__this, JackAst__getLeft(d), 0);
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str109));
				JackAstToC__coExpr(__this, JackAst__getChild(d), 0);
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str110));
			} else {
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str111));
				JackAstToC__coExpr(__this, JackAst__getLeft(d), 0);
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str112));
				JackAstToC__coExpr(__this, JackAst__getChild(d), 0);
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str113));
			}
			ok = -1;
		}

		if (((t)==(C__LESSOREQUAL()))) {
			if (__peek(hack__)) {
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str114));
				JackAstToC__coExpr(__this, JackAst__getLeft(d), 0);
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str115));
				JackAstToC__coExpr(__this, JackAst__getChild(d), 0);
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str116));
			} else {
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str117));
				JackAstToC__coExpr(__this, JackAst__getLeft(d), 0);
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str118));
				JackAstToC__coExpr(__this, JackAst__getChild(d), 0);
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str119));
			}
			ok = -1;
		}

		if (((t)==(C__GREATER()))) {
			if (__peek(hack__)) {
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str120));
				JackAstToC__coExpr(__this, JackAst__getLeft(d), 0);
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str121));
				JackAstToC__coExpr(__this, JackAst__getChild(d), 0);
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str122));
			} else {
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str123));
				JackAstToC__coExpr(__this, JackAst__getLeft(d), 0);
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str124));
				JackAstToC__coExpr(__this, JackAst__getChild(d), 0);
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str125));
			}
			ok = -1;
		}

		if (((t)==(C__GREATEROREQUAL()))) {
			if (__peek(hack__)) {
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str126));
				JackAstToC__coExpr(__this, JackAst__getLeft(d), 0);
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str127));
				JackAstToC__coExpr(__this, JackAst__getChild(d), 0);
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str128));
			} else {
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str129));
				JackAstToC__coExpr(__this, JackAst__getLeft(d), 0);
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str130));
				JackAstToC__coExpr(__this, JackAst__getChild(d), 0);
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str131));
			}
			ok = -1;
		}

		if (((t)==(C__EQUAL()))) {
			if (__peek(hack__)) {
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str132));
				JackAstToC__coExpr(__this, JackAst__getLeft(d), 0);
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str133));
				JackAstToC__coExpr(__this, JackAst__getChild(d), 0);
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str134));
			} else {
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str135));
				JackAstToC__coExpr(__this, JackAst__getLeft(d), 0);
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str136));
				JackAstToC__coExpr(__this, JackAst__getChild(d), 0);
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str137));
			}
			ok = -1;
		}

		if (((t)==(C__NOTEQUAL()))) {
			if (__peek(hack__)) {
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str138));
				JackAstToC__coExpr(__this, JackAst__getLeft(d), 0);
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str139));
				JackAstToC__coExpr(__this, JackAst__getChild(d), 0);
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str140));
			} else {
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str141));
				JackAstToC__coExpr(__this, JackAst__getLeft(d), 0);
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str142));
				JackAstToC__coExpr(__this, JackAst__getChild(d), 0);
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str143));
			}
			ok = -1;
		}

		if (((t)==(C__VARNAME()))) {
			JackAstToC__coVarNameOrIndexed(__this, d, 0);
			ok = -1;
		}

		if (((t)==(C__EXPR()))) {
			if ((((((d)==(c))))==(0))) {
				JackAstToC__coExpr(__this, d, 0);
			}

			ok = -1;
		}

		if (((t)==(C__CONSTACCESS()))) {
			File__writeString(__peek(dst__), Memory__getString(JackAstToC___str144));
			File__writeString(__peek(dst__), JackAst__getData(d));
			File__writeString(__peek(dst__), Memory__getString(JackAstToC___str145));
			d = JackAst__getChild(d);
			File__writeString(__peek(dst__), JackAst__getData(d));
			ok = -1;
		}

		if (((ok)==(0))) {
			JackAstToC__error(__this, Memory__getString(JackAstToC___str146), d);
		}

		if (isterm) {
			return 0;
		}

		return 0;
		d = JackAst__getNext(d);
	}
	return 0;
}
var JackAstToC__coSubroutineCall(var __this, var c) {
	var d;
	var t;
	var s;
	var thi;
	var first;
	var free_thi;
	free_thi = 0;
	first = -1;
	thi = 0;
	d = JackAst__getChild(c);
	t = JackAst__getTag(d);
	if ((((t)==(C__CLASSORVARNAME())))) {
		if (JackAstToC__isStatic(__this, d)) {
			s = JackAstToC__getTypeOf(__this, d);
			File__writeString(__peek(dst__), s);
			thi = String__copy(__peek(clas__));
			thi = String__appendString(thi, Memory__getString(JackAstToC___str147));
			thi = String__appendString(thi, JackAst__getData(d));
			free_thi = -1;
			s = 0;
		} else {
			s = JackAstToC__getTypeOf(__this, d);
		}
		if (s) {
			if (((String__length(s))>(0))) {
				File__writeString(__peek(dst__), s);
				if (JackAstToC__isField(__this, d)) {
					thi = String__new(20);
					thi = String__appendString(thi, Memory__getString(JackAstToC___str148));
					thi = String__appendString(thi, JackAst__getData(d));
					thi = String__appendString(thi, Memory__getString(JackAstToC___str149));
					free_thi = -1;
				} else {
					thi = JackAst__getData(d);
				}
			} else {
				File__writeString(__peek(dst__), JackAst__getData(d));
			}
		} else {
			if (((free_thi)==(0))) {
				File__writeString(__peek(dst__), JackAst__getData(d));
			}

		}
		d = JackAst__getChild(d);
		File__writeString(__peek(dst__), Memory__getString(JackAstToC___str150));
		File__writeString(__peek(dst__), JackAst__getData(d));
	} else {
		if ((((t)==(C__CLASSNAME())))) {
			File__writeString(__peek(dst__), JackAst__getData(d));
			d = JackAst__getChild(d);
			File__writeString(__peek(dst__), Memory__getString(JackAstToC___str151));
			File__writeString(__peek(dst__), JackAst__getData(d));
		} else {
			if (((t)==(C__CALLBACK()))) {
				if (__peek(hack__)) {
					File__writeString(__peek(dst__), Memory__getString(JackAstToC___str152));
				} else {
					if (!__peek(has_callback__)) {
						JackAstToC__error(__this, Memory__getString(JackAstToC___str153), d);
					}

					File__writeString(__peek(dst__), Memory__getString(JackAstToC___str154));
				}
				thi = Memory__getString(JackAstToC___str155);
			} else {
				if (((t)==(C__SUBROUTINENAME()))) {
					File__writeString(__peek(dst__), __peek(clas__));
					File__writeString(__peek(dst__), Memory__getString(JackAstToC___str156));
					File__writeString(__peek(dst__), JackAst__getData(d));
					thi = Memory__getString(JackAstToC___str157);
				}

			}
		}
	}
	File__writeString(__peek(dst__), Memory__getString(JackAstToC___str158));
	if (thi) {
		first = 0;
		File__writeString(__peek(dst__), thi);
	}

	if (free_thi) {
		String__dispose(thi);
	}

	d = JackAst__getChild(d);
	while (!(((d)==(0)))) {
		if (((first)==(0))) {
			File__writeString(__peek(dst__), Memory__getString(JackAstToC___str159));
		}

		first = 0;
		JackAstToC__coExpr(__this, d, 0);
		d = JackAst__getNext(d);
	}
	File__writeString(__peek(dst__), Memory__getString(JackAstToC___str160));
	return 0;
}
var JackAstToC__coStatements(var __this, var c) {
	var d;
	d = JackAst__getChild(c);
	while (!(((d)==(0)))) {
		JackAstToC__coStatement(__this, d);
		d = JackAst__getNext(d);
	}
	return 0;
}
var JackAstToC__coFunctionHead(var __this, var c, var add_this) {
	var d;
	var t;
	d = JackAst__getChild(c);
	t = JackAst__getTag(c);
	if (((d)==(0))) {
		return 0;
	}

	if (((t)==(C__CLASSNAME()))) {
		File__writeString(__peek(dst__), Memory__getString(JackAstToC___str161));
	} else {
		File__writeString(__peek(dst__), Memory__getString(JackAstToC___str162));
	}
	File__writeString(__peek(dst__), Memory__getString(JackAstToC___str163));
	File__writeString(__peek(dst__), __peek(clas__));
	File__writeString(__peek(dst__), Memory__getString(JackAstToC___str164));
	if (((JackAst__getTag(d))==(C__SUBROUTINENAME()))) {
		File__writeString(__peek(dst__), JackAst__getData(d));
		d = JackAst__getChild(d);
	} else {
		if (((JackAst__getTag(d))==(C__CALLBACK()))) {
			File__writeString(__peek(dst__), Memory__getString(JackAstToC___str165));
			d = JackAst__getChild(d);
		} else {
			JackAstToC__error(__this, Memory__getString(JackAstToC___str166), c);
			return 0;
		}
	}
	if (((JackAst__getTag(d))==(C__PARAMS()))) {
		JackAstToC__coParams(__this, d, add_this);
	}

	return 0;
}
var JackAstToC__coParams(var __this, var d, var add_this) {
	var n;
	File__writeString(__peek(dst__), Memory__getString(JackAstToC___str167));
	d = JackAst__getChild(d);
	if (add_this) {
		File__writeString(__peek(dst__), Memory__getString(JackAstToC___str168));
		if (d) {
			File__writeString(__peek(dst__), Memory__getString(JackAstToC___str169));
		}

	}

	while (!(((d)==(0)))) {
		JackAstToC__coType(__this, d);
		File__writeString(__peek(dst__), Memory__getString(JackAstToC___str170));
		n = JackAst__getChild(d);
		File__writeString(__peek(dst__), JackAst__getData(n));
		d = JackAst__getNext(d);
		if (d) {
			File__writeString(__peek(dst__), Memory__getString(JackAstToC___str171));
		}

	}
	File__writeString(__peek(dst__), Memory__getString(JackAstToC___str172));
	return 0;
}
var JackAstToC__coVarDec(var __this, var c) {
	var d;
	var n;
	d = JackAst__getChild(c);
	while (!(((d)==(0)))) {
		JackAstToC__spc(__this);
		JackAstToC__coType(__this, d);
		n = JackAst__getChild(d);
		if (n) {
			File__writeString(__peek(dst__), Memory__getString(JackAstToC___str173));
			JackAstToC__coVarName(__this, n, -1);
			if (__peek(hack__)) {
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str174));
			} else {
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str175));
			}
			JackAstToC__nl(__this);
		}

		d = JackAst__getNext(d);
	}
	return 0;
}
var JackAstToC__coType(var __this, var c) {
	var t;
	t = JackAst__getTag(c);
	if (((t)==(C__CLASSNAME()))) {
		File__writeString(__peek(dst__), Memory__getString(JackAstToC___str176));
	} else {
		File__writeString(__peek(dst__), Memory__getString(JackAstToC___str177));
	}
	return 0;
}
var JackAstToC__coVarName(var __this, var c, var isassign) {
	var s;
	var t;
	t = JackAst__getTag(c);
	if ((((t)==(C__VARNAME())))||(((t)==(C__CLASSORVARNAME())))||(((t)==(C__CALLBACK())))) {
		if (((JackAstToC__isField(__this, c))==(0))) {
			if (JackAstToC__isStatic(__this, c)) {
				s = __peek(clas__);
			} else {
				s = JackAstToC__getClassOf(__this, c);
			}
			if (s) {
				if (((String__length(s))>(0))) {
					File__writeString(__peek(dst__), s);
					File__writeString(__peek(dst__), Memory__getString(JackAstToC___str178));
				}

			}

			File__writeString(__peek(dst__), JackAst__getData(c));
		} else {
			if (((isassign)==(0))) {
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str179));
				File__writeString(__peek(dst__), JackAst__getData(c));
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str180));
			} else {
				File__writeString(__peek(dst__), JackAst__getData(c));
				File__writeString(__peek(dst__), Memory__getString(JackAstToC___str181));
			}
		}
	}

	return 0;
}
#undef dst__
#undef parser__
#undef ast__
#undef current__
#undef clas__
#undef nb_field__
#undef nb_static__
#undef has_callback__
#undef hack__
#undef sp__
#undef stringid__
#endif

#ifdef JACK_IMPLEMENTATION
var JackTokenizer___str0[] = {99,108,97,115,115,0};
var JackTokenizer___str1[] = {109,101,116,104,111,100,0};
var JackTokenizer___str2[] = {102,117,110,99,116,105,111,110,0};
var JackTokenizer___str3[] = {99,111,110,115,116,114,117,99,116,111,114,0};
var JackTokenizer___str4[] = {99,97,108,108,98,97,99,107,0};
var JackTokenizer___str5[] = {105,110,116,0};
var JackTokenizer___str6[] = {98,111,111,108,101,97,110,0};
var JackTokenizer___str7[] = {99,104,97,114,0};
var JackTokenizer___str8[] = {118,111,105,100,0};
var JackTokenizer___str9[] = {118,97,114,0};
var JackTokenizer___str10[] = {115,116,97,116,105,99,0};
var JackTokenizer___str11[] = {102,105,101,108,100,0};
var JackTokenizer___str12[] = {99,111,110,115,116,0};
var JackTokenizer___str13[] = {108,101,116,0};
var JackTokenizer___str14[] = {100,111,0};
var JackTokenizer___str15[] = {105,102,0};
var JackTokenizer___str16[] = {101,108,115,101,0};
var JackTokenizer___str17[] = {119,104,105,108,101,0};
var JackTokenizer___str18[] = {114,101,116,117,114,110,0};
var JackTokenizer___str19[] = {116,114,117,101,0};
var JackTokenizer___str20[] = {102,97,108,115,101,0};
var JackTokenizer___str21[] = {110,117,108,108,0};
var JackTokenizer___str22[] = {116,104,105,115,0};
var JackTokenizer___str23[] = {105,110,0};
var JackTokenizer___str24[] = {111,117,116,0};
var JackTokenizer___str25[] = {105,111,0};
var JackTokenizer___str26[] = {35,0};
var JackTokenizer___str27[] = {43,0};
var JackTokenizer___str28[] = {45,0};
var JackTokenizer___str29[] = {42,0};
var JackTokenizer___str30[] = {47,0};
var JackTokenizer___str31[] = {38,0};
var JackTokenizer___str32[] = {38,38,0};
var JackTokenizer___str33[] = {124,0};
var JackTokenizer___str34[] = {124,124,0};
var JackTokenizer___str35[] = {94,0};
var JackTokenizer___str36[] = {62,0};
var JackTokenizer___str37[] = {62,61,0};
var JackTokenizer___str38[] = {60,0};
var JackTokenizer___str39[] = {60,61,0};
var JackTokenizer___str40[] = {61,61,0};
var JackTokenizer___str41[] = {33,61,0};
var JackTokenizer___str42[] = {58,61,0};
var JackTokenizer___str43[] = {44,0};
var JackTokenizer___str44[] = {126,0};
var JackTokenizer___str45[] = {59,0};
var JackTokenizer___str46[] = {46,0};
var JackTokenizer___str47[] = {46,36,0};
var JackTokenizer___str48[] = {33,0};
var JackTokenizer___str49[] = {123,0};
var JackTokenizer___str50[] = {125,0};
var JackTokenizer___str51[] = {40,0};
var JackTokenizer___str52[] = {41,0};
var JackTokenizer___str53[] = {91,0};
var JackTokenizer___str54[] = {93,0};
var JackTokenizer___str55[] = {67,111,109,109,101,110,116,32,116,111,119,97,114,100,32,101,110,100,32,111,102,32,102,105,108,101,46,0};
var JackTokenizer___str56[] = {105,110,118,97,108,105,100,101,32,113,117,111,116,101,0};
var JackTokenizer___str57[] = {87,104,105,116,101,32,115,112,97,99,101,0};
var JackTokenizer___str58[] = {65,115,115,101,109,98,108,121,32,116,101,120,116,32,116,111,119,97,114,100,32,101,110,100,32,111,102,32,102,105,108,101,46,0};
var JackTokenizer___str59[] = {67,111,109,109,101,110,116,32,116,111,119,97,114,100,32,101,110,100,32,111,102,32,102,105,108,101,46,0};
var JackTokenizer___str60[] = {82,101,97,99,104,101,100,32,101,110,100,32,111,102,32,102,105,108,101,32,116,111,107,101,110,46,0};
var JackTokenizer___str61[] = {76,101,120,101,114,32,101,114,114,111,114,44,32,105,110,32,0};
var JackTokenizer___str62[] = {32,117,110,101,120,112,101,99,116,101,100,32,39,0};
var JackTokenizer___str63[] = {39,32,97,116,32,108,105,110,101,32,0};
#define src__ (__this+0)
#define tbl__ (__this+1)
#define token__ (__this+2)
#define c__ (__this+3)
#define ahead__ (__this+4)
#define token_type__ (__this+5)
#define key_word__ (__this+6)
#define int_val__ (__this+7)
#define line__ (__this+8)
#define last_line__ (__this+9)
#define new_file__ (__this+10)
#define symbol___ (__this+11)
#define gen_xml__ (__this+12)
#define inasm__ (__this+13)
#define inasmmulti__ (__this+14)
#define hack__ (__this+15)
var JackTokenizer__new(var ishack) {
	var __this;
	__this = Memory__alloc(16);
	__poke(src__, 0);
	__poke(token__, String__new(256));
	__poke(new_file__, 0);
	__poke(c__, 0);
	__poke(line__, 0);
	__poke(last_line__, -1);
	__poke(ahead__, 0);
	__poke(token_type__, -1);
	__poke(key_word__, 0);
	__poke(symbol___, 0);
	__poke(int_val__, 0);
	__poke(gen_xml__, 0);
	__poke(inasm__, 0);
	__poke(inasmmulti__, 0);
	__poke(tbl__, JackTokenizer__getSymbolHash(__this));
	__poke(hack__, ishack);
	return __this;
}
var JackTokenizer__dispose(var __this) {
	Hash__dispose(__peek(tbl__));
	String__dispose(__peek(token__));
	Memory__deAlloc(__this);
	return 0;
}
var JackTokenizer__init(var __this, var source, var generate_xml) {
	__poke(src__, source);
	if (__peek(src__)) {
		__poke(new_file__, File__getName(__peek(src__)));
	}

	__poke(gen_xml__, generate_xml);
	__poke(c__, 0);
	__poke(ahead__, 0);
	__poke(token_type__, -1);
	__poke(key_word__, 0);
	__poke(int_val__, 0);
	__poke(line__, 0);
	__poke(last_line__, -1);
	return 0;
}
var JackTokenizer__getSymbolHash(var __this) {
	var h;
	h = Hash__new(256, 0);
	Hash__add(h, Memory__getString(JackTokenizer___str0), C__CLASS());
	Hash__add(h, Memory__getString(JackTokenizer___str1), C__METHOD());
	Hash__add(h, Memory__getString(JackTokenizer___str2), C__FUNCTION());
	Hash__add(h, Memory__getString(JackTokenizer___str3), C__CONSTRUCTOR());
	if (!__peek(hack__)) {
		Hash__add(h, Memory__getString(JackTokenizer___str4), C__CALLBACK());
	}

	Hash__add(h, Memory__getString(JackTokenizer___str5), C__INT());
	Hash__add(h, Memory__getString(JackTokenizer___str6), C__BOOLEAN());
	Hash__add(h, Memory__getString(JackTokenizer___str7), C__CHAR());
	Hash__add(h, Memory__getString(JackTokenizer___str8), C__VOID());
	Hash__add(h, Memory__getString(JackTokenizer___str9), C__VAR());
	Hash__add(h, Memory__getString(JackTokenizer___str10), C__STATIC());
	Hash__add(h, Memory__getString(JackTokenizer___str11), C__FIELD());
	Hash__add(h, Memory__getString(JackTokenizer___str12), C__CONST());
	Hash__add(h, Memory__getString(JackTokenizer___str13), C__LET());
	Hash__add(h, Memory__getString(JackTokenizer___str14), C__DO());
	Hash__add(h, Memory__getString(JackTokenizer___str15), C__IF());
	Hash__add(h, Memory__getString(JackTokenizer___str16), C__ELSE());
	Hash__add(h, Memory__getString(JackTokenizer___str17), C__WHILE());
	Hash__add(h, Memory__getString(JackTokenizer___str18), C__RETURN());
	Hash__add(h, Memory__getString(JackTokenizer___str19), C__TRUE());
	Hash__add(h, Memory__getString(JackTokenizer___str20), C__FALSE());
	Hash__add(h, Memory__getString(JackTokenizer___str21), C__NULL());
	Hash__add(h, Memory__getString(JackTokenizer___str22), C__THIS());
	Hash__add(h, Memory__getString(JackTokenizer___str23), C__IN());
	Hash__add(h, Memory__getString(JackTokenizer___str24), C__OUT());
	Hash__add(h, Memory__getString(JackTokenizer___str25), C__IO());
	Hash__add(h, Memory__getString(JackTokenizer___str26), C__ASM());
	Hash__add(h, Memory__getString(JackTokenizer___str27), C__PLUS());
	Hash__add(h, Memory__getString(JackTokenizer___str28), C__MINUS());
	Hash__add(h, Memory__getString(JackTokenizer___str29), C__MULTIPLY());
	Hash__add(h, Memory__getString(JackTokenizer___str30), C__DIV());
	Hash__add(h, Memory__getString(JackTokenizer___str31), C__AND());
	Hash__add(h, Memory__getString(JackTokenizer___str32), C__LOGICALAND());
	Hash__add(h, Memory__getString(JackTokenizer___str33), C__OR());
	Hash__add(h, Memory__getString(JackTokenizer___str34), C__LOGICALOR());
	Hash__add(h, Memory__getString(JackTokenizer___str35), C__XOR());
	Hash__add(h, Memory__getString(JackTokenizer___str36), C__GREATER());
	Hash__add(h, Memory__getString(JackTokenizer___str37), C__GREATEROREQUAL());
	Hash__add(h, Memory__getString(JackTokenizer___str38), C__LESS());
	Hash__add(h, Memory__getString(JackTokenizer___str39), C__LESSOREQUAL());
	Hash__add(h, Memory__getString(JackTokenizer___str40), C__EQUAL());
	Hash__add(h, Memory__getString(JackTokenizer___str41), C__NOTEQUAL());
	Hash__add(h, Memory__getString(JackTokenizer___str42), C__ASSIGN());
	Hash__add(h, Memory__getString(JackTokenizer___str43), C__COMMA());
	Hash__add(h, Memory__getString(JackTokenizer___str44), C__TILDE());
	Hash__add(h, Memory__getString(JackTokenizer___str45), C__SEMICOLON());
	Hash__add(h, Memory__getString(JackTokenizer___str46), C__DOT());
	Hash__add(h, Memory__getString(JackTokenizer___str47), C__CONSTACCESS());
	Hash__add(h, Memory__getString(JackTokenizer___str48), C__NOT());
	Hash__add(h, Memory__getString(JackTokenizer___str49), C__LEFT_CURLY_BRACKET());
	Hash__add(h, Memory__getString(JackTokenizer___str50), C__RIGHT_CURLY_BRACKET());
	Hash__add(h, Memory__getString(JackTokenizer___str51), C__LEFT_PARENTHESIS());
	Hash__add(h, Memory__getString(JackTokenizer___str52), C__RIGHT_PARENTHESIS());
	Hash__add(h, Memory__getString(JackTokenizer___str53), C__LEFT_SQUARE_BRACKET());
	Hash__add(h, Memory__getString(JackTokenizer___str54), C__RIGHT_SQUARE_BRACKET());
	return h;
}
var JackTokenizer__hasMoreTokens(var __this) {
	var in_comment;
	var ignore_line;
	var start;
	if (((__peek(token_type__))==(-1))) {
		__poke(c__, File__readUtf8(__peek(src__)));
		__poke(ahead__, File__readUtf8(__peek(src__)));
		__poke(token_type__, 0);
	}

	in_comment = 0;
	ignore_line = 0;
	__poke(inasm__, 0);
	__poke(inasmmulti__, 0);
	start = __peek(line__);
	while ((((__peek(c__))>(0)))&&(((__peek(c__))<(1114112)))) {
		if (ignore_line) {
			if (((__peek(c__))==(10))) {
				ignore_line = 0;
			}

		} else {
			if (in_comment) {
				if (((__peek(c__))==(42))) {
					if (((__peek(ahead__))==(47))) {
						in_comment = 0;
						JackTokenizer__next(__this);
					}

				}

			} else {
				if (((__peek(c__))==(47))) {
					if (((__peek(ahead__))==(42))) {
						JackTokenizer__next(__this);
						if (((__peek(ahead__))==(35))) {
							__poke(inasmmulti__, -1);
							JackTokenizer__next(__this);
							JackTokenizer__next(__this);
							return -1;
						} else {
							start = __peek(line__);
							in_comment = -1;
						}
					} else {
						if (((__peek(ahead__))==(47))) {
							JackTokenizer__next(__this);
							if (((__peek(ahead__))==(35))) {
								__poke(inasm__, -1);
								JackTokenizer__next(__this);
								JackTokenizer__next(__this);
								return -1;
							} else {
								ignore_line = -1;
							}
						} else {
							return -1;
						}
					}
				} else {
					if ((((__peek(c__))==(9)))||(((__peek(c__))==(10)))||(((__peek(c__))==(13)))||(((__peek(c__))==(32)))) {
						__poke(c__, __peek(c__));
					} else {
						return -1;
					}
				}
			}
		}
		JackTokenizer__next(__this);
	}
	if (in_comment) {
		JackTokenizer__error(__this, start, Memory__getString(JackTokenizer___str55));
	}

	__poke(token_type__, 0);
	return 0;
}
var JackTokenizer__next(var __this) {
	if (((__peek(c__))==(10))) {
		__poke(line__, __peek(line__)+1);
	}

	__poke(c__, __peek(ahead__));
	__poke(ahead__, File__readUtf8(__peek(src__)));
	return 0;
}
var JackTokenizer__addLine(var __this) {
	var u;
	if (((__peek(line__))>(__peek(last_line__)))) {
		u = String__new(8);
		u = String__setInt(u, __peek(line__)+1);
		String__dispose(u);
		__poke(last_line__, __peek(line__));
	}

	if (__peek(new_file__)) {
		__poke(new_file__, 0);
	}

	return 0;
}
var JackTokenizer__getFileName(var __this) {
	return __peek(new_file__);
}
var JackTokenizer__getTokenConst(var __this, var s) {
	return Hash__get(__peek(tbl__), s);
}
var JackTokenizer__advance(var __this) {
	var start;
	var l;
	var esca;
	var k;
	var key_or_id;
	var in_string;
	var in_quote;
	var in_int;
	var in_asm;
	var in_asm_multi;
	var in_escape;
	l = 0;
	key_or_id = 0;
	in_string = 0;
	in_quote = 0;
	in_int = 0;
	in_asm = __peek(inasm__);
	in_asm_multi = __peek(inasmmulti__);
	in_escape = 0;
	esca = 0;
	String__setCharAt(__peek(token__), 0, 0);
	start = __peek(line__);
	while ((((__peek(c__))>(0)))&&(((__peek(c__))<(1114112)))) {
		if (in_escape) {
			if (((((__peek(c__))>(47)))&&(((__peek(c__))<(58))))) {
				esca = esca*10;
				esca = esca+__peek(c__)-48;
				if (((0)==(((((__peek(ahead__))>(47)))&&(((__peek(ahead__))<(58))))))) {
					in_escape = 0;
					__poke(c__, esca);
				} else {
					__poke(c__, 0);
				}
			} else {
				in_escape = 0;
				esca = __peek(c__);
				if (((__peek(c__))==(97))) {
					esca = 7;
				}

				if (((__peek(c__))==(98))) {
					esca = 8;
				}

				if (((__peek(c__))==(116))) {
					esca = 9;
				}

				if (((__peek(c__))==(110))) {
					esca = 10;
				}

				if (((__peek(c__))==(118))) {
					esca = 11;
				}

				if (((__peek(c__))==(102))) {
					esca = 12;
				}

				if (((__peek(c__))==(114))) {
					esca = 13;
				}

				__poke(c__, esca);
			}
		}

		if (in_escape) {
			__poke(c__, 0);
		} else {
			if (in_quote) {
				if (((__peek(c__))==(92))) {
					in_escape = -1;
					esca = 0;
					__poke(c__, 0);
				} else {
					if ((((__peek(c__))==(39)))) {
						JackTokenizer__error(__this, __peek(line__), Memory__getString(JackTokenizer___str56));
						return 0;
					} else {
						if (((__peek(ahead__))==(39))) {
							__poke(token__, String__setInt(__peek(token__), __peek(c__)));
							__poke(token_type__, C__INT_CONST());
							JackTokenizer__next(__this);
							JackTokenizer__next(__this);
							return 0;
						}

					}
				}
			} else {
				if (in_string&&(((__peek(c__))==(34)))&&(!in_escape)) {
					__poke(token_type__, C__STRING_CONST());
					JackTokenizer__next(__this);
					return 0;
				} else {
					if (in_int) {
						if (((((__peek(c__))>(47)))&&(((__peek(c__))<(58))))) {
							__poke(token__, String__appendChar(__peek(token__), __peek(c__)));
							l = l+1;
						} else {
							__poke(token_type__, C__INT_CONST());
							return 0;
						}
					} else {
						if (in_string) {
							if (((__peek(c__))==(10))) {
								__poke(c__, __peek(c__));
							} else {
								if (((__peek(c__))==(92))) {
									in_escape = -1;
									__poke(c__, 0);
									esca = 0;
								}

							}
							if (__peek(c__)) {
								__poke(token__, String__appendChar(__peek(token__), __peek(c__)));
								l = l+1;
							}

						} else {
							if (in_asm) {
								__poke(token__, String__appendChar(__peek(token__), __peek(c__)));
								l = l+1;
								if (((__peek(c__))==(10))) {
									__poke(token_type__, C__ASM());
									JackTokenizer__next(__this);
									__poke(inasm__, 0);
									return 0;
								}

							} else {
								if (in_asm_multi) {
									if ((((__peek(c__))==(35)))&&(((__peek(ahead__))==(42)))) {
										JackTokenizer__next(__this);
										if (((__peek(ahead__))==(47))) {
											__poke(token_type__, C__ASM());
											__poke(token__, String__appendChar(__peek(token__), 10));
											l = l+1;
											JackTokenizer__next(__this);
											JackTokenizer__next(__this);
											__poke(inasmmulti__, 0);
											return 0;
										}

										__poke(token__, String__appendChar(__peek(token__), 35));
										l = l+1;
										__poke(token__, String__appendChar(__peek(token__), 42));
										l = l+1;
									} else {
										__poke(token__, String__appendChar(__peek(token__), __peek(c__)));
										l = l+1;
									}
								} else {
									if ((((__peek(c__))==(39)))&&!(((esca)==(39)))) {
										in_quote = -1;
									} else {
										if (((__peek(c__))==(34))) {
											in_string = -1;
										} else {
											if (((((__peek(c__))>(64)))&&(((__peek(c__))<(91))))||((((__peek(c__))>(96)))&&(((__peek(c__))<(123))))||(((__peek(c__))==(95)))||((((__peek(c__))>(47)))&&(((__peek(c__))<(58)))&&(((l)>(0))))) {
												key_or_id = -1;
												__poke(token__, String__appendChar(__peek(token__), __peek(c__)));
												l = l+1;
											} else {
												if (key_or_id) {
													k = JackTokenizer__getTokenConst(__this, __peek(token__));
													if ((((k)==(C__CLASS())))||(((k)==(C__METHOD())))||(((k)==(C__FUNCTION())))||(((k)==(C__CONSTRUCTOR())))||(((k)==(C__CALLBACK())))||(((k)==(C__INT())))||(((k)==(C__BOOLEAN())))||(((k)==(C__CHAR())))||(((k)==(C__VOID())))||(((k)==(C__VAR())))||(((k)==(C__STATIC())))||(((k)==(C__FIELD())))||(((k)==(C__CONST())))||(((k)==(C__LET())))||(((k)==(C__DO())))||(((k)==(C__IF())))||(((k)==(C__ELSE())))||(((k)==(C__WHILE())))||(((k)==(C__RETURN())))||(((k)==(C__TRUE())))||(((k)==(C__FALSE())))||(((k)==(C__NULL())))||(((k)==(C__IO())))||(((k)==(C__IN())))||(((k)==(C__OUT())))||(((k)==(C__THIS())))) {
														__poke(token_type__, C__KEYWORD());
														__poke(key_word__, k);
													} else {
														__poke(token_type__, C__IDENTIFIER());
													}
													return 0;
												} else {
													if (((((__peek(c__))>(47)))&&(((__peek(c__))<(58))))) {
														__poke(token__, String__appendChar(__peek(token__), __peek(c__)));
														l = l+1;
														in_int = -1;
													} else {
														__poke(token__, String__appendChar(__peek(token__), __peek(c__)));
														if ((((__peek(ahead__))==(61)))) {
															if ((((__peek(c__))==(C__GREATER_THAN_SIGN())))||(((__peek(c__))==(C__LESS_THAN_SIGN())))||(((__peek(c__))==(C__COLON())))||(((__peek(c__))==(C__EQUAL_SIGN())))||(((__peek(c__))==(C__EXCLAMATION_MARK())))) {
																JackTokenizer__next(__this);
																__poke(token__, String__appendChar(__peek(token__), __peek(c__)));
															}

														} else {
															if (((__peek(ahead__))==(124))) {
																if (((__peek(c__))==(C__VERTICAL_BAR()))) {
																	JackTokenizer__next(__this);
																	__poke(token__, String__appendChar(__peek(token__), __peek(c__)));
																}

															} else {
																if (((__peek(ahead__))==(38))) {
																	if (((__peek(c__))==(C__AMPERSAND()))) {
																		JackTokenizer__next(__this);
																		__poke(token__, String__appendChar(__peek(token__), __peek(c__)));
																	}

																} else {
																	if (((__peek(ahead__))==(36))) {
																		if (((__peek(c__))==(C__FULL_STOP()))) {
																			JackTokenizer__next(__this);
																			__poke(token__, String__appendChar(__peek(token__), __peek(c__)));
																		}

																	}

																}
															}
														}
														__poke(c__, JackTokenizer__getTokenConst(__this, __peek(token__)));
														if ((((__peek(c__))==(C__LEFT_CURLY_BRACKET())))||(((__peek(c__))==(C__RIGHT_CURLY_BRACKET())))||(((__peek(c__))==(C__LEFT_PARENTHESIS())))||(((__peek(c__))==(C__RIGHT_PARENTHESIS())))||(((__peek(c__))==(C__LEFT_SQUARE_BRACKET())))||(((__peek(c__))==(C__RIGHT_SQUARE_BRACKET())))||(((__peek(c__))==(C__DOT())))||(((__peek(c__))==(C__COMMA())))||(((__peek(c__))==(C__COLON())))||(((__peek(c__))==(C__SEMICOLON())))||(((__peek(c__))==(C__PLUS())))||(((__peek(c__))==(C__MINUS())))||(((__peek(c__))==(C__MULTIPLY())))||(((__peek(c__))==(C__DIV())))||(((__peek(c__))==(C__AND())))||(((__peek(c__))==(C__OR())))||(((__peek(c__))==(C__XOR())))||(((__peek(c__))==(C__GREATER())))||(((__peek(c__))==(C__GREATEROREQUAL())))||(((__peek(c__))==(C__LESS())))||(((__peek(c__))==(C__LESSOREQUAL())))||(((__peek(c__))==(C__EQUAL())))||(((__peek(c__))==(C__NOTEQUAL())))||(((__peek(c__))==(C__ASSIGN())))||(((__peek(c__))==(C__LOGICALOR())))||(((__peek(c__))==(C__LOGICALAND())))||(((__peek(c__))==(C__EXCLAMATION_MARK())))||(((__peek(c__))==(C__CONSTACCESS())))||(((__peek(c__))==(C__TILDE())))) {
															__poke(token_type__, C__SYMBOL());
															__poke(symbol___, __peek(c__));
															JackTokenizer__next(__this);
															return 0;
														} else {
															if ((((__peek(c__))==(9)))||(((__peek(c__))==(10)))||(((__peek(c__))==(13)))||(((__peek(c__))==(32)))) {
																JackTokenizer__error(__this, __peek(line__), Memory__getString(JackTokenizer___str57));
																__poke(line__, __peek(line__));
															} else {
																__poke(token__, String__appendChar(__peek(token__), __peek(c__)));
																JackTokenizer__error(__this, __peek(line__), __peek(token__));
																JackTokenizer__next(__this);
																return 0;
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		JackTokenizer__next(__this);
	}
	if (in_asm||in_asm_multi) {
		JackTokenizer__error(__this, start, Memory__getString(JackTokenizer___str58));
	}

	if (in_string) {
		JackTokenizer__error(__this, start, Memory__getString(JackTokenizer___str59));
	}

	if (in_int||key_or_id) {
		JackTokenizer__error(__this, start, Memory__getString(JackTokenizer___str60));
	}

	return 0;
}
var JackTokenizer__error(var __this, var line_, var w) {
	Output__printString(Memory__getString(JackTokenizer___str61));
	Output__printString(File__getName(__peek(src__)));
	Output__printString(Memory__getString(JackTokenizer___str62));
	Output__printString(w);
	Output__printString(Memory__getString(JackTokenizer___str63));
	Output__printInt(line_+1);
	Output__println();
	__poke(c__, 0);
	return 0;
}
var JackTokenizer__getLine(var __this) {
	return __peek(line__)+1;
}
var JackTokenizer__tokenType(var __this) {
	return __peek(token_type__);
}
var JackTokenizer__keyWord(var __this) {
	return __peek(key_word__);
}
var JackTokenizer__symbol(var __this) {
	return __peek(symbol___);
}
var JackTokenizer__identifier(var __this) {
	return __peek(token__);
}
var JackTokenizer__intVal(var __this) {
	return String__intValue(__peek(token__));
}
var JackTokenizer__stringVal(var __this) {
	return __peek(token__);
}
#undef src__
#undef tbl__
#undef token__
#undef c__
#undef ahead__
#undef token_type__
#undef key_word__
#undef int_val__
#undef line__
#undef last_line__
#undef new_file__
#undef symbol___
#undef gen_xml__
#undef inasm__
#undef inasmmulti__
#undef hack__
#endif

#ifdef JACK_IMPLEMENTATION
#define buffer__ (__this+0)
#define size__ (__this+1)
#define pos__ (__this+2)
#define dispCb__ (__this+3)
var Buffer__new(var initial, var disposeCb) {
	var __this;
	var i;
	__this = Memory__alloc(4);
	__poke(dispCb__, disposeCb);
	__poke(buffer__, Array__new(initial));
	__poke(size__, initial);
	__poke(pos__, 0);
	i = 0;
	while (((i)<(initial))) {
		__poke(__peek(buffer__)+i, 0);
		i = i+1;
	}
	return __this;
}
var Buffer__newString(var initial) {
	var cb;
	cb = CallbackStringDispose__new();
	return Buffer__new(initial, cb);
}
var Buffer__dispose(var __this) {
	var s;
	var i;
	i = 0;
	if (__peek(dispCb__)) {
		while (((i)<(__peek(pos__)))) {
			s = __peek(__peek(buffer__)+i);
			if (s) {
				Callback__invoke(__peek(dispCb__), s, 0);
			}

			i = i+1;
		}
		Callback__dispose(__peek(dispCb__));
	}

	Array__dispose(__peek(buffer__));
	Memory__deAlloc(__this);
	return 0;
}
var Buffer__getAt(var __this, var p) {
	return __peek(__peek(buffer__)+p);
}
var Buffer__setAt(var __this, var p, var data) {
	var r;
	Buffer__checkSize(__this, p);
	r = __peek(__peek(buffer__)+p);
	__poke(__peek(buffer__)+p, data);
	return r;
}
var Buffer__append(var __this, var data) {
	var i;
	i = __peek(pos__);
	Buffer__checkSize(__this, __peek(pos__));
	__poke(__peek(buffer__)+__peek(pos__), data);
	__poke(pos__, __peek(pos__)+1);
	return i;
}
var Buffer__insertSortedStr(var __this, var q) {
	var i;
	i = Buffer__append(__this, q);
	return i;
}
var Buffer__remove(var __this, var q) {
	var s;
	var i;
	var j;
	i = 0;
	j = 0;
	while (((i)<(__peek(pos__)))) {
		s = __peek(__peek(buffer__)+i);
		if (((s)==(q))) {
			j = j-1;
		}

		__poke(__peek(buffer__)+i, __peek(__peek(buffer__)+j));
		i = i+1;
		j = j+1;
	}
	__poke(pos__, i);
	if (((i)==(j))) {
		return 0;
	}

	return q;
}
var Buffer__indexOfStr(var __this, var q) {
	var s;
	var i;
	i = 0;
	while (((i)<(__peek(pos__)))) {
		s = __peek(__peek(buffer__)+i);
		if (((String__compare(s, q))==(0))) {
			return i;
		}

		i = i+1;
	}
	return -1;
}
var Buffer__checkSize(var __this, var idx) {
	var b;
	var i;
	var ns;
	if (((idx)>((__peek(size__)-1)))) {
		ns = __peek(size__)+idx+32;
		b = Array__new(ns);
		i = 0;
		while (((i)<(__peek(pos__)))) {
			__poke(b+i, __peek(__peek(buffer__)+i));
			i = i+1;
		}
		while (((i)<(ns))) {
			__poke(b+i, 0);
			i = i+1;
		}
		__poke(size__, ns);
		Array__dispose(__peek(buffer__));
		__poke(buffer__, b);
	}

	return 0;
}
var Buffer__getArray(var __this) {
	return __peek(buffer__);
}
var Buffer__getSize(var __this) {
	return __peek(pos__);
}
#undef buffer__
#undef size__
#undef pos__
#undef dispCb__
#endif

#ifdef JACK_IMPLEMENTATION
var Bytes___addressmask;
var Bytes___bytesize;
var Bytes___isbig;
var Bytes___iswin;
var Bytes___log2;
#define buf__ (__this+0)
#define size__ (__this+1)
#define pos__ (__this+2)
#define string__ (__this+3)
var Bytes__new(var size_in_byte) {
	var __this;
	var i;
	var s;
	__this = Memory__alloc(4);
	Bytes___isbig = Math__isBigEndian();
	Bytes___iswin = Math__isWindows();
	__poke(pos__, 0);
	Bytes___bytesize = Math__sizeOfInt();
	Bytes___addressmask = Bytes___bytesize-1;
	Bytes___log2 = Math__log2(Bytes___bytesize);
	if (((Bytes___log2)<(0))) {
		Bytes___log2 = 0;
	}

	__poke(size__, Math__shiftRight((size_in_byte+Bytes___addressmask), Bytes___log2)+1);
	__poke(buf__, Array__new(__peek(size__)));
	i = 0;
	while (((i)<(__peek(size__)))) {
		__poke(__peek(buf__)+i, 0);
		i = i+1;
	}
	s = 0;
	__poke(string__, s);
	return __this;
}
var Bytes__dispose(var __this) {
	var s;
	s = 0;
	__poke(string__, s);
	Array__dispose(__peek(buf__));
	Memory__deAlloc(__this);
	return 0;
}
var Bytes__alloc(var __this, var s) {
	var nsize;
	var i;
	var l;
	var nbuf;
	var b;
	nsize = Math__shiftRight(s+Bytes___bytesize, Bytes___log2)+1;
	nbuf = Array__new(nsize);
	l = __peek(size__);
	i = 0;
	b = __peek(buf__);
	if (((nsize)<(__peek(size__)))) {
		return 0;
	}

	while (((i)<(l))) {
		__poke(nbuf+i, __peek(b+i));
		i = i+1;
	}
	l = nsize;
	while (((i)<(l))) {
		__poke(nbuf+i, 0);
		i = i+1;
	}
	Array__dispose(__peek(buf__));
	__poke(buf__, nbuf);
	__poke(size__, nsize);
	return 0;
}
var Bytes__getBuffer(var __this) {
	return __peek(buf__);
}
var Bytes__length(var __this) {
	return __peek(pos__);
}
var Bytes__getByte(var __this, var address) {
	var s;
	var a;
	var v;
	s = Math__shiftLeft(address&Bytes___addressmask, 3);
	a = Math__shiftRight(address, Bytes___log2);
	v = __peek(__peek(buf__)+a);
	v = Math__shiftRight(v, s)&255;
	return v;
}
var Bytes__setByte(var __this, var address, var b) {
	var s;
	var a;
	var v;
	var m;
	s = Math__shiftLeft(address&Bytes___addressmask, 3);
	a = Math__shiftRight(address, Bytes___log2);
	m = Math__shiftLeft(255, s);
	v = Math__shiftLeft(b&255, s);
	__poke(__peek(buf__)+a, (__peek(__peek(buf__)+a)&(~m))|v);
	return 0;
}
var Bytes__appendByte(var __this, var b) {
	if (((__peek(size__))<((Math__shiftRight(__peek(pos__)+Bytes___bytesize, Bytes___log2)+1)))) {
		Bytes__alloc(__this, __peek(pos__)+256);
	}

	Bytes__setByte(__this, __peek(pos__), b);
	__poke(pos__, __peek(pos__)+1);
	return 0;
}
var Bytes__append16bit(var __this, var b) {
	Bytes__appendByte(__this, b);
	Bytes__appendByte(__this, Math__shiftRight(b, 8));
	return 0;
}
var Bytes__append32bit(var __this, var b) {
	Bytes__append16bit(__this, b);
	Bytes__append16bit(__this, Math__shiftRight(b, 16));
	return 0;
}
var Bytes__append64bit(var __this, var b) {
	Bytes__append32bit(__this, b);
	Bytes__append32bit(__this, Math__shiftRight(b, 32));
	return 0;
}
var Bytes__append16bitBig(var __this, var b) {
	Bytes__appendByte(__this, Math__shiftRight(b, 8));
	Bytes__appendByte(__this, b);
	return 0;
}
var Bytes__append32bitBig(var __this, var b) {
	Bytes__append16bit(__this, Math__shiftRight(b, 16));
	Bytes__append16bit(__this, b);
	return 0;
}
var Bytes__append64bitBig(var __this, var b) {
	Bytes__append32bit(__this, Math__shiftRight(b, 32));
	Bytes__append32bit(__this, b);
	return 0;
}
var Bytes__appendInt(var __this, var b) {
	if (((Bytes___bytesize)==(8))) {
		if (Bytes___isbig) {
			Bytes__append64bitBig(__this, b);
		} else {
			Bytes__append64bit(__this, b);
		}
		return 0;
	}

	if (((Bytes___bytesize)==(4))) {
		if (Bytes___isbig) {
			Bytes__append32bitBig(__this, b);
		} else {
			Bytes__append32bit(__this, b);
		}
		return 0;
	}

	if (Bytes___isbig) {
		Bytes__append16bitBig(__this, b);
	} else {
		Bytes__append16bit(__this, b);
	}
	return 0;
}
var Bytes__appendUtf8(var __this, var codepoint) {
	if (((codepoint)<(128))) {
		Bytes__appendByte(__this, codepoint);
		return 0;
	}

	return 0;
}
var Bytes__appendUtf16(var __this, var codepoint) {
	if (((codepoint)<(65536))) {
		Bytes__append16bit(__this, codepoint);
		return 0;
	}

	return 0;
}
var Bytes__appendNativeChar(var __this, var codepoint) {
	if (Bytes___iswin) {
		Bytes__appendUtf16(__this, codepoint);
	} else {
		Bytes__appendUtf8(__this, codepoint);
	}
	return 0;
}
var Bytes__getStringNativePointer(var __this) {
	var b;
	var c;
	b = __peek(buf__);
	c = __peek(string__);
 	b = b * sizeof(var) + c - c;
	return b;
}
var Bytes__setStringToNative(var __this, var name) {
	var i;
	var l;
	var c;
	var p;
	var n;
	var b;
	b = __this;
	__poke(pos__, 0);
	n = __peek(string__);
	l = String__length(name);
	if (((l)<(0))) {
		return 0;
	}

	i = 0;
	while (((i)<(l))) {
		c = String__charAt(name, i);
		Bytes__appendNativeChar(b, c);
		i = i+1;
	}
	__poke(string__, n);
	p = __peek(pos__);
	Bytes__appendNativeChar(b, 0);
	__poke(pos__, p);
	return 0;
}
#undef buf__
#undef size__
#undef pos__
#undef string__
#endif

#ifdef JACK_IMPLEMENTATION
#define callback__ (__this+0)
var Callback__new() {
	var __this;
	__this = Memory__alloc(1);
	(__peek(__this+0)) = (var)Callback__callback;
	return __this;
}
var Callback__dispose(var __this) {
	Memory__deAlloc(__this);
	return 0;
}
var Callback__callback(var __this, var a, var b) {
	return 0;
}
var Callback__invoke(var __this, var a, var b) {
	return ((var(*)(var,var,var))(__peek(__this)))(__this, a, b);
}
#undef callback__
#endif

#ifdef JACK_IMPLEMENTATION
#define callback__ (__this+0)
var CallbackStringDispose__callback(var __this, var a, var b) {
	String__dispose(a);
	return 0;
}
var CallbackStringDispose__new() {
	var __this;
	__this = Memory__alloc(1);
	(__peek(__this+0)) = (var)CallbackStringDispose__callback;
	return __this;
}
#undef callback__
#endif

#ifdef JACK_IMPLEMENTATION
var File___str0[] = {78,101,103,97,116,105,118,101,32,83,116,114,105,110,103,32,108,101,110,103,116,104,46,0};
#define fd__ (__this+0)
#define is_write__ (__this+1)
#define buffer__ (__this+2)
#define name__ (__this+3)
var File__new(var path, var writing) {
	var __this;
	var l;
	__this = Memory__alloc(4);
	__poke(fd__, -1);
	__poke(is_write__, writing);
	l = String__length(path);
	if (((l)<(0))) {
		Output__printString(Memory__getString(File___str0));
		Sys__error(-1);
		return __this;
	}

	__poke(name__, String__copy(path));
	return __this;
}
var File__dispose(var __this) {
	var f;
	f = __peek(fd__);
	if (__peek(name__)) {
		String__dispose(__peek(name__));
	}

	if (((__peek(fd__))<(0))) {
		Memory__deAlloc(__this);
		return 0;
	}

 	fclose((FILE*)f);
	Memory__deAlloc(__this);
	return 0;
}
var File__getName(var __this) {
	return __peek(name__);
}
var File__isdir(var __this) {
	var l;
	var s;
	var f;
	var b;
	l = String__length(__peek(name__));
	if (((l)<(1))) {
		return 0;
	}

	b = Bytes__new(256);
	Bytes__setStringToNative(b, __peek(name__));
	s = Bytes__getStringNativePointer(b);
	f = 0;
 #ifdef _WIN32
 	if (_waccess((wchar_t*)s, 0)) {
 		_wstat64((wchar_t*)s, &File__status);
 		if ((File__status.st_mode & S_IFDIR) != 0) {
 			f =  -1;
 		}
 	}
 #else
 	if (access((char*)s, 0)) {
 		stat((char*)s, &File__status);
 		if ((File__status.st_mode & S_IFDIR) != 0) {
 			f = -1;
 		}
 	}
 #endif
	Bytes__dispose(b);
	return f;
}
var File__open(var __this) {
	var l;
	var m;
	var s;
	var f;
	var writing;
	var b;
	if (((__peek(fd__))>(-1))) {
		return 0;
	}

	writing = __peek(is_write__);
	l = String__length(__peek(name__));
	if (((l)<(1))) {
		return 0;
	}

	if (File__isdir(__this)) {
		return 0;
	}

	b = Bytes__new(256);
	Bytes__setStringToNative(b, __peek(name__));
	s = Bytes__getStringNativePointer(b);
	f = -1;
 #ifdef _WIN32
 	m = (var)L"rb";
 	if (writing) {m = (var)L"w+b";}
 	f = 0;
 	_wfopen_s((FILE**)&f, (wchar_t*)s, (wchar_t*)m);
 	if(((var*)f)==NULL) f = -1;
 #else
 	m = (var)"rb";
 	if (writing) {m = (var)"w+b";}
 	f = (var)fopen((char*)s, (char*)m);
 	if(((var*)f)==NULL) f = -1;
 #endif
	__poke(fd__, f);
	Bytes__dispose(b);
	return -1;
}
var File__readByte(var __this) {
	var b;
	var f;
	f = __peek(fd__);
	if (((f)<(0))) {
		File__open(__this);
		f = __peek(fd__);
		if (((f)<(0))) {
			return -1;
		}

	}

	b = 0;
 	if (fread(&b, 1, 1, (FILE*)f) < 1) { return -1;};
 	b = b & 255;
	return b;
}
var File__seek(var __this, var position) {
	var b;
	var f;
	var p;
	f = __peek(fd__);
	p = position;
	if (((f)<(0))) {
		File__open(__this);
		f = __peek(fd__);
		if (((f)<(0))) {
			return -1;
		}

	}

 	b = fseek((FILE*)f, (long int)p, SEEK_SET);
	return b;
}
var File__writeByte(var __this, var data) {
	var r;
	var f;
	var b;
	b = data;
	if (((__peek(fd__))<(0))) {
		File__open(__this);
		if (((__peek(fd__))<(0))) {
			return -1;
		}

	}

	f = __peek(fd__);
 	r = fwrite(&b, 1, 1, (FILE*)f);
	return r;
}
var File__writeString(var __this, var s) {
	var i;
	var l;
	var c;
	i = 0;
	l = String__length(s);
	while (((i)<(l))) {
		c = String__charAt(s, i);
		File__writeUtf8(__this, c);
		i = i+1;
	}
	return i;
}
var File__readLine(var __this, var buff) {
	var c;
	c = File__readUtf8(__this);
	if (((c)==(0))) {
		return 0;
	}

	String__setCharAt(buff, 0, 0);
	while ((((c)>(0)))) {
		buff = String__appendChar(buff, c);
		if (((c)==(10))) {
			c = 0;
		} else {
			c = File__readUtf8(__this);
		}
	}
	return buff;
}
var File__readUtf8(var __this) {
	var c;
	var b;
	c = File__readByte(__this);
	if ((((c)<(1)))||(((c)>(255)))) {
		return 0;
	}

	if (((c)<(128))) {
		return c;
	} else {
		if (((c)<(192))) {
			return c;
		} else {
			if (((c)<(224))) {
				c = c&31;
				b = File__readByte(__this)&63;
				c = b+(c*64);
				return c;
			} else {
				if (((c)<(240))) {
					c = c&15;
					b = File__readByte(__this)&63;
					c = (b*64)+(c*4096);
					b = File__readByte(__this)&63;
					c = c+b;
					return c;
				} else {
					if (((c)<(248))) {
						c = c&7;
						b = File__readByte(__this)&63;
						c = (b*4096)+(c*262144);
						b = File__readByte(__this)&63;
						c = (b*64)+c;
						b = File__readByte(__this)&63;
						c = c+b;
						return c;
					} else {
						if (((c)<(252))) {
							c = c&3;
							b = File__readByte(__this)&63;
							c = (b*262144)+(c*16777216);
							b = File__readByte(__this)&63;
							c = (b*4096)+c;
							b = File__readByte(__this)&63;
							c = (b*64)+c;
							b = File__readByte(__this)&63;
							c = c+b;
							return c;
						} else {
							c = c&3;
							b = File__readByte(__this)&63;
							c = (b*16777216)|(c*1073741824);
							b = File__readByte(__this)&63;
							c = (b*262144)|c;
							b = File__readByte(__this)&63;
							c = (b*4096)|c;
							b = File__readByte(__this)&63;
							c = (b*64)|c;
							b = File__readByte(__this)&63;
							c = c|b;
							return c;
						}
					}
				}
			}
		}
	}
	return c;
}
var File__writeUtf8(var __this, var data) {
	if (data&3221225472) {
		File__writeByte(__this, ((data/1073741824)&3)|252);
		File__writeByte(__this, ((data/16777216)&63)|128);
		File__writeByte(__this, ((data/262144)&63)|128);
		File__writeByte(__this, ((data/4096)&63)|128);
		File__writeByte(__this, ((data/64)&63)|128);
		File__writeByte(__this, ((data)&63)|128);
	} else {
		if (((data)>(2097152))) {
			File__writeByte(__this, ((data/16777216)&3)|248);
			File__writeByte(__this, ((data/262144)&63)|128);
			File__writeByte(__this, ((data/4096)&63)|128);
			File__writeByte(__this, ((data/64)&63)|128);
			File__writeByte(__this, ((data)&63)|128);
		} else {
			if (((data)>(65535))) {
				File__writeByte(__this, ((data/262144)&7)|240);
				File__writeByte(__this, ((data/4096)&63)|128);
				File__writeByte(__this, ((data/64)&63)|128);
				File__writeByte(__this, ((data)&63)|128);
			} else {
				if (((data)>(2047))) {
					File__writeByte(__this, ((data/4096)&15)|224);
					File__writeByte(__this, ((data/64)&63)|128);
					File__writeByte(__this, ((data)&63)|128);
				} else {
					if (((data)>(127))) {
						File__writeByte(__this, ((data/64)&31)|192);
						File__writeByte(__this, ((data)&63)|128);
					} else {
						File__writeByte(__this, ((data)&127));
					}
				}
			}
		}
	}
	return 0;
}
var File__writeInt16(var __this, var d) {
	File__writeByte(__this, d&255);
	return File__writeByte(__this, (d/256)&255);
}
var File__writeInt32(var __this, var d) {
	File__writeInt16(__this, d);
	return File__writeInt16(__this, d/65536);
}
var File__writeInt64(var __this, var d) {
	File__writeInt32(__this, d);
	return File__writeInt32(__this, (d/2147483648)/2);
}
var File__readInt16(var __this) {
	var d;
	d = File__readByte(__this);
	d = d+(File__readByte(__this)*256);
	return d;
}
var File__readInt32(var __this) {
	var d;
	d = File__readInt16(__this);
	d = d+(File__readInt16(__this)*65536);
	return d;
}
var File__readInt64(var __this) {
	var d;
	d = File__readInt32(__this);
	d = d+((File__readInt32(__this)*2147483648)*2);
	return d;
}
var File__remove(var __this) {
	var l;
	var m;
	var b;
	var s;
	if (((__peek(name__))==(0))) {
		return 0;
	}

	l = String__length(__peek(name__));
	if (((l)<(1))) {
		return 0;
	}

	b = Bytes__new(256);
	Bytes__setStringToNative(b, __peek(name__));
	s = Bytes__getStringNativePointer(b);
	if (((File__isdir(__this))==(0))) {
 #ifdef _WIN32
 	m = (var)_wremove((wchar_t*)s);
 #else
 	m = (var)remove((char*)s);
 #endif
	} else {
 #ifdef _WIN32
 	m = (var)_wrmdir((wchar_t*)s);
 #else
 	m = (var)rmdir((char*)s);
 #endif
	}
	Bytes__dispose(b);
	return (((m)==(0)));
}
var File__mkdir(var __this) {
	var l;
	var m;
	var s;
	var b;
	if (((__peek(name__))==(0))) {
		return 0;
	}

	l = String__length(__peek(name__));
	if (((l)<(1))) {
		return 0;
	}

	b = Bytes__new(256);
	Bytes__setStringToNative(b, __peek(name__));
	s = Bytes__getStringNativePointer(b);
 #ifdef _WIN32
 	m = (var)_wmkdir((wchar_t*)s);
 #else
 	m = (var)mkdir((char*)s, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
 #endif
	return (((m)==(0)));
}
var File__list(var __this) {
	var i;
	var l;
	var b;
	var s;
	var na;
	var n;
	var a;
	var str;
	if (((__peek(name__))==(0))) {
		return 0;
	}

	l = String__length(__peek(name__));
	if (((l)<(1))) {
		return 0;
	}

	na = String__copy(__peek(name__));
	if ((((((String__charAt(na, l-1))==(47))))==(0))) {
		na = String__appendChar(na, 47);
	}

	str = Bytes__new(256);
	Bytes__setStringToNative(str, na);
	n = Bytes__getStringNativePointer(str);
	b = Buffer__new(10, 0);
	i = 0;
 // C code
 	i = i + 1;
#ifdef _WIN32
	l = wcslen((wchar_t*)n);
	if (((wchar_t*)n)[l - 1] != L'*') {
		Bytes__appendNativeChar(str, L'*');
 		n = Bytes__getStringNativePointer(str);
 	}
	for (i = 0; i < l; i++) {
		if (((wchar_t*)n)[i] == '/') {
			((wchar_t*)n)[i] = '\\';
 		}
 	}
 		
 	if((File__hFind = FindFirstFileW((LPCWSTR)n, &File__FindFileData))
 	 	!= INVALID_HANDLE_VALUE)
 	{
 		do {
         		a = (var)File__FindFileData.cFileName;
			if (((wchar_t*)a)[0] == L'.' && 
 			 	(((((wchar_t*)a)[1] == L'.') && 
 					(((wchar_t*)a)[2] == 0))
 					|| (((wchar_t*)a)[1] == 0)))
 			{} else {
 				s=String__copy(na);
 				s=String__appendFromNative(s, a);
 				if (File__FindFileData.dwFileAttributes & 
 					FILE_ATTRIBUTE_DIRECTORY) { 
 					s=String__appendChar(s, 47); 
 				}
 				Buffer__append(b, s);
			}
 			i = i + 1;
		} while(FindNextFileW(File__hFind, &File__FindFileData));
 		FindClose(File__hFind);
	}
#else
 	//n = n * sizeof(var);
 	//printf("OPNE %s\n", n);
 	if((File__dir = opendir((char*)n)) != 0){
    		while((File__dp = readdir(File__dir)) != 0){
 			a = (var)File__dp->d_name;
 			if (((char*)a)[0] == '.' && 
 			 	(((((char*)a)[1] == '.') && (((char*)a)[2] == 0))
 					|| (((char*)a)[1] == 0)))
 			{} else {
 				s=String__copy(na);
 				s=String__appendFromNative(s, a);
 				
 				if (File__dp->d_type == DT_DIR) {
 					s=String__appendChar(s, 47); 
 				}
 				Buffer__append(b, s);
 			}
 			i = i + 1;
     		}
     		closedir(File__dir);
 	}
#endif

	Bytes__dispose(str);
	String__dispose(na);
	return b;
}
#undef fd__
#undef is_write__
#undef buffer__
#undef name__
#endif

#ifdef JACK_IMPLEMENTATION
var Hash___str0[] = {64,0};
var Hash___str1[] = {32,0};
var Hash___str2[] = {72,65,83,72,32,100,101,112,116,104,61,0};
var Hash___str3[] = {32,115,105,122,101,61,0};
var Hash___str4[] = {59,0};
#define size___ (__this+0)
#define mask__ (__this+1)
#define table__ (__this+2)
#define cb__ (__this+3)
var Hash__new(var size, var disposeCb) {
	var __this;
	var i;
	__this = Memory__alloc(4);
	__poke(size___, Math__shiftLeft(1, Math__log2(size)));
	__poke(mask__, __peek(size___)-1);
	__poke(table__, Array__new(__peek(size___)));
	i = 0;
	while (((i)<(__peek(size___)))) {
		__poke(__peek(table__)+i, 0);
		i = i+1;
	}
	__poke(cb__, disposeCb);
	return __this;
}
var Hash__dispose(var __this) {
	var s;
	var n;
	var next;
	var i;
	i = 0;
	while (((i)<(__peek(size___)))) {
		n = __peek(__peek(table__)+i);
		while (n) {
			next = __peek(n+0);
			if (__peek(cb__)) {
				if (__peek(n+3)) {
					Callback__invoke(__peek(cb__), __peek(n+3), 0);
				}

			}

			s = __peek(n+2);
			String__dispose(s);
			Array__dispose(n);
			n = next;
		}
		i = i+1;
	}
	if (__peek(cb__)) {
		Callback__dispose(__peek(cb__));
	}

	Array__dispose(__peek(table__));
	Memory__deAlloc(__this);
	return 0;
}
var Hash__stats(var __this) {
	var s;
	var n;
	var next;
	var i;
	var max;
	var depth;
	i = 0;
	max = 0;
	while (((i)<(__peek(size___)))) {
		n = __peek(__peek(table__)+i);
		depth = 0;
		while (((0)==((((n)==(0)))))) {
			depth = depth+1;
			next = __peek(n+0);
			s = __peek(n+2);
			Output__printString(Memory__getString(Hash___str0));
			Output__printInt(i);
			Output__printString(Memory__getString(Hash___str1));
			Output__printString(s);
			Output__printInt(depth);
			Output__println();
			n = next;
		}
		if (((depth)>(max))) {
			max = depth;
		}

		i = i+1;
	}
	Output__printString(Memory__getString(Hash___str2));
	Output__printInt(max);
	Output__printString(Memory__getString(Hash___str3));
	Output__printInt(__peek(size___));
	Output__printString(Memory__getString(Hash___str4));
	Output__println();
	return 0;
}
var Hash__hash(var __this, var k) {
	var h;
	var l;
	var i;
	var t;
	i = 1;
	h = 0;
	l = String__length(k);
	if (((l)>(0))) {
		h = String__charAt(k, 0);
	}

	while (((i)<(l))) {
		i = i+1;
		t = String__charAt(k, i);
		h = Math__xor(Math__shiftLeft(h, 3), t);
	}
	return h;
}
var Hash__add(var __this, var k, var val) {
	var p;
	var hhh;
	var cmp;
	var a;
	var n;
	var r;
	var prev;
	hhh = Hash__hash(__this, k);
	p = hhh&__peek(mask__);
	a = __peek(__peek(table__)+p);
	r = 0;
	if (((a)==(0))) {
		r = Array__new(4);
		__poke(r+0, 0);
		__poke(__peek(table__)+p, r);
	} else {
		n = a;
		prev = 0;
		while ((((r)==(0)))&&((((((n)==(0))))==(0)))) {
			if (((__peek(n+1))==(hhh))) {
				cmp = String__compare(k, __peek(n+2));
				if (((cmp)>(0))) {
					r = Array__new(4);
					__poke(r+0, n);
					if (((prev)==(0))) {
						__poke(__peek(table__)+p, r);
					} else {
						__poke(prev+0, r);
					}
				} else {
					if (((cmp)==(0))) {
						if (__peek(cb__)) {
							if (__peek(n+3)) {
								Callback__invoke(__peek(cb__), __peek(n+3), 0);
							}

						}

						__poke(n+3, val);
						return 0;
					}

				}
			} else {
				if (((hhh)>(__peek(n+1)))) {
					r = Array__new(4);
					__poke(r+0, n);
					if (((prev)==(0))) {
						__poke(__peek(table__)+p, r);
					} else {
						__poke(prev+0, r);
					}
				}

			}
			prev = n;
			if ((((r)==(0)))&&(((__peek(n+0))==(0)))) {
				r = Array__new(4);
				__poke(r+0, 0);
				__poke(n+0, r);
				n = 0;
			} else {
				n = __peek(n+0);
			}
		}
	}
	if (r) {
		__poke(r+1, hhh);
		__poke(r+2, String__copy(k));
		__poke(r+3, val);
	}

	return 0;
}
var Hash__get(var __this, var k) {
	var p;
	var h;
	var cmp;
	var a;
	var n;
	h = Hash__hash(__this, k);
	p = h&__peek(mask__);
	a = __peek(table__)+p;
	a = __peek(__peek(table__)+p);
	if (((a)==(0))) {
		return -1;
	} else {
		n = a;
		while (((0)==((((n)==(0)))))) {
			if (((__peek(n+1))==(h))) {
				cmp = String__compare(k, __peek(n+2));
				if (((cmp)>(0))) {
					return -1;
				} else {
					if (((cmp)==(0))) {
						return __peek(n+3);
					}

				}
			} else {
				if (((h)>(__peek(n+1)))) {
					return -1;
				}

			}
			n = __peek(n+0);
		}
	}
	return -1;
}
#undef size___
#undef mask__
#undef table__
#undef cb__
#endif

#ifdef JACK_IMPLEMENTATION
var Array__new(var size) {
	var a;
	a = Memory__alloc(size);
	return a;
}
var Array__dispose(var __this) {
	Memory__deAlloc(__this);
	return 0;
}
#endif

#ifdef JACK_IMPLEMENTATION
#define fnt__ (__this+0)
var Font__new() {
	var __this;
	__this = Memory__alloc(1);
	__poke(fnt__, Array__new(570));
	__poke(__peek(fnt__)+0, 0);
	__poke(__peek(fnt__)+1, 0);
	__poke(__peek(fnt__)+2, 0);
	__poke(__peek(fnt__)+3, 0);
	__poke(__peek(fnt__)+4, 0);
	__poke(__peek(fnt__)+5, 0);
	__poke(__peek(fnt__)+6, 6144);
	__poke(__peek(fnt__)+7, 6168);
	__poke(__peek(fnt__)+8, 6168);
	__poke(__peek(fnt__)+9, 6144);
	__poke(__peek(fnt__)+10, 24);
	__poke(__peek(fnt__)+11, 0);
	__poke(__peek(fnt__)+12, 5140);
	__poke(__peek(fnt__)+13, 20);
	__poke(__peek(fnt__)+14, 0);
	__poke(__peek(fnt__)+15, 0);
	__poke(__peek(fnt__)+16, 0);
	__poke(__peek(fnt__)+17, 0);
	__poke(__peek(fnt__)+18, 20480);
	__poke(__peek(fnt__)+19, -472);
	__poke(__peek(fnt__)+20, 32548);
	__poke(__peek(fnt__)+21, 2580);
	__poke(__peek(fnt__)+22, 0);
	__poke(__peek(fnt__)+23, 0);
	__poke(__peek(fnt__)+24, 11272);
	__poke(__peek(fnt__)+25, 2634);
	__poke(__peek(fnt__)+26, 10268);
	__poke(__peek(fnt__)+27, 6697);
	__poke(__peek(fnt__)+28, 8);
	__poke(__peek(fnt__)+29, 0);
	__poke(__peek(fnt__)+30, 17920);
	__poke(__peek(fnt__)+31, 5673);
	__poke(__peek(fnt__)+32, 13320);
	__poke(__peek(fnt__)+33, 12618);
	__poke(__peek(fnt__)+34, 0);
	__poke(__peek(fnt__)+35, 0);
	__poke(__peek(fnt__)+36, 17436);
	__poke(__peek(fnt__)+37, 9284);
	__poke(__peek(fnt__)+38, 16924);
	__poke(__peek(fnt__)+39, -1660);
	__poke(__peek(fnt__)+40, 0);
	__poke(__peek(fnt__)+41, 0);
	__poke(__peek(fnt__)+42, 4096);
	__poke(__peek(fnt__)+43, 4112);
	__poke(__peek(fnt__)+44, 0);
	__poke(__peek(fnt__)+45, 0);
	__poke(__peek(fnt__)+46, 0);
	__poke(__peek(fnt__)+47, 0);
	__poke(__peek(fnt__)+48, 1032);
	__poke(__peek(fnt__)+49, 514);
	__poke(__peek(fnt__)+50, 513);
	__poke(__peek(fnt__)+51, 1026);
	__poke(__peek(fnt__)+52, 8);
	__poke(__peek(fnt__)+53, 0);
	__poke(__peek(fnt__)+54, 513);
	__poke(__peek(fnt__)+55, 1028);
	__poke(__peek(fnt__)+56, 1032);
	__poke(__peek(fnt__)+57, 516);
	__poke(__peek(fnt__)+58, 1);
	__poke(__peek(fnt__)+59, 0);
	__poke(__peek(fnt__)+60, 0);
	__poke(__peek(fnt__)+61, 18688);
	__poke(__peek(fnt__)+62, 7210);
	__poke(__peek(fnt__)+63, 10780);
	__poke(__peek(fnt__)+64, 73);
	__poke(__peek(fnt__)+65, 0);
	__poke(__peek(fnt__)+66, 0);
	__poke(__peek(fnt__)+67, 2056);
	__poke(__peek(fnt__)+68, 2110);
	__poke(__peek(fnt__)+69, 8);
	__poke(__peek(fnt__)+70, 0);
	__poke(__peek(fnt__)+71, 0);
	__poke(__peek(fnt__)+72, 0);
	__poke(__peek(fnt__)+73, 0);
	__poke(__peek(fnt__)+74, 0);
	__poke(__peek(fnt__)+75, 6144);
	__poke(__peek(fnt__)+76, 1032);
	__poke(__peek(fnt__)+77, 0);
	__poke(__peek(fnt__)+78, 0);
	__poke(__peek(fnt__)+79, 0);
	__poke(__peek(fnt__)+80, 124);
	__poke(__peek(fnt__)+81, 0);
	__poke(__peek(fnt__)+82, 0);
	__poke(__peek(fnt__)+83, 0);
	__poke(__peek(fnt__)+84, 0);
	__poke(__peek(fnt__)+85, 0);
	__poke(__peek(fnt__)+86, 0);
	__poke(__peek(fnt__)+87, 6144);
	__poke(__peek(fnt__)+88, 24);
	__poke(__peek(fnt__)+89, 0);
	__poke(__peek(fnt__)+90, 0);
	__poke(__peek(fnt__)+91, 8256);
	__poke(__peek(fnt__)+92, 2064);
	__poke(__peek(fnt__)+93, 516);
	__poke(__peek(fnt__)+94, 1);
	__poke(__peek(fnt__)+95, 0);
	__poke(__peek(fnt__)+96, 23552);
	__poke(__peek(fnt__)+97, 12834);
	__poke(__peek(fnt__)+98, 9770);
	__poke(__peek(fnt__)+99, 7458);
	__poke(__peek(fnt__)+100, 0);
	__poke(__peek(fnt__)+101, 0);
	__poke(__peek(fnt__)+102, 6144);
	__poke(__peek(fnt__)+103, 4112);
	__poke(__peek(fnt__)+104, 4112);
	__poke(__peek(fnt__)+105, 4112);
	__poke(__peek(fnt__)+106, 0);
	__poke(__peek(fnt__)+107, 0);
	__poke(__peek(fnt__)+108, 15360);
	__poke(__peek(fnt__)+109, 8228);
	__poke(__peek(fnt__)+110, 3088);
	__poke(__peek(fnt__)+111, 15876);
	__poke(__peek(fnt__)+112, 0);
	__poke(__peek(fnt__)+113, 0);
	__poke(__peek(fnt__)+114, 15360);
	__poke(__peek(fnt__)+115, 8224);
	__poke(__peek(fnt__)+116, 8248);
	__poke(__peek(fnt__)+117, 15392);
	__poke(__peek(fnt__)+118, 0);
	__poke(__peek(fnt__)+119, 0);
	__poke(__peek(fnt__)+120, 4096);
	__poke(__peek(fnt__)+121, 5144);
	__poke(__peek(fnt__)+122, 15890);
	__poke(__peek(fnt__)+123, 4112);
	__poke(__peek(fnt__)+124, 0);
	__poke(__peek(fnt__)+125, 0);
	__poke(__peek(fnt__)+126, 15360);
	__poke(__peek(fnt__)+127, 7172);
	__poke(__peek(fnt__)+128, 8244);
	__poke(__peek(fnt__)+129, 15396);
	__poke(__peek(fnt__)+130, 0);
	__poke(__peek(fnt__)+131, 0);
	__poke(__peek(fnt__)+132, 12288);
	__poke(__peek(fnt__)+133, 3080);
	__poke(__peek(fnt__)+134, 16956);
	__poke(__peek(fnt__)+135, 15426);
	__poke(__peek(fnt__)+136, 0);
	__poke(__peek(fnt__)+137, 0);
	__poke(__peek(fnt__)+138, 15872);
	__poke(__peek(fnt__)+139, 12320);
	__poke(__peek(fnt__)+140, 6160);
	__poke(__peek(fnt__)+141, 2056);
	__poke(__peek(fnt__)+142, 0);
	__poke(__peek(fnt__)+143, 0);
	__poke(__peek(fnt__)+144, 15360);
	__poke(__peek(fnt__)+145, 9282);
	__poke(__peek(fnt__)+146, 16956);
	__poke(__peek(fnt__)+147, 15426);
	__poke(__peek(fnt__)+148, 0);
	__poke(__peek(fnt__)+149, 0);
	__poke(__peek(fnt__)+150, 15360);
	__poke(__peek(fnt__)+151, 9252);
	__poke(__peek(fnt__)+152, 4156);
	__poke(__peek(fnt__)+153, 2072);
	__poke(__peek(fnt__)+154, 0);
	__poke(__peek(fnt__)+155, 0);
	__poke(__peek(fnt__)+156, 0);
	__poke(__peek(fnt__)+157, 6144);
	__poke(__peek(fnt__)+158, 24);
	__poke(__peek(fnt__)+159, 6144);
	__poke(__peek(fnt__)+160, 24);
	__poke(__peek(fnt__)+161, 0);
	__poke(__peek(fnt__)+162, 0);
	__poke(__peek(fnt__)+163, 6144);
	__poke(__peek(fnt__)+164, 24);
	__poke(__peek(fnt__)+165, 6144);
	__poke(__peek(fnt__)+166, 1032);
	__poke(__peek(fnt__)+167, 0);
	__poke(__peek(fnt__)+168, 16384);
	__poke(__peek(fnt__)+169, 1040);
	__poke(__peek(fnt__)+170, 1025);
	__poke(__peek(fnt__)+171, 16400);
	__poke(__peek(fnt__)+172, 0);
	__poke(__peek(fnt__)+173, 0);
	__poke(__peek(fnt__)+174, 0);
	__poke(__peek(fnt__)+175, 0);
	__poke(__peek(fnt__)+176, 126);
	__poke(__peek(fnt__)+177, 126);
	__poke(__peek(fnt__)+178, 0);
	__poke(__peek(fnt__)+179, 0);
	__poke(__peek(fnt__)+180, 0);
	__poke(__peek(fnt__)+181, 1025);
	__poke(__peek(fnt__)+182, 16400);
	__poke(__peek(fnt__)+183, 1040);
	__poke(__peek(fnt__)+184, 1);
	__poke(__peek(fnt__)+185, 0);
	__poke(__peek(fnt__)+186, 7176);
	__poke(__peek(fnt__)+187, 4146);
	__poke(__peek(fnt__)+188, 2072);
	__poke(__peek(fnt__)+189, 6144);
	__poke(__peek(fnt__)+190, 24);
	__poke(__peek(fnt__)+191, 0);
	__poke(__peek(fnt__)+192, 15360);
	__poke(__peek(fnt__)+193, -25278);
	__poke(__peek(fnt__)+194, 31141);
	__poke(__peek(fnt__)+195, 15362);
	__poke(__peek(fnt__)+196, 0);
	__poke(__peek(fnt__)+197, 0);
	__poke(__peek(fnt__)+198, 3072);
	__poke(__peek(fnt__)+199, 7180);
	__poke(__peek(fnt__)+200, 7702);
	__poke(__peek(fnt__)+201, 9010);
	__poke(__peek(fnt__)+202, 0);
	__poke(__peek(fnt__)+203, 0);
	__poke(__peek(fnt__)+204, 15872);
	__poke(__peek(fnt__)+205, 13862);
	__poke(__peek(fnt__)+206, 9790);
	__poke(__peek(fnt__)+207, 15910);
	__poke(__peek(fnt__)+208, 0);
	__poke(__peek(fnt__)+209, 0);
	__poke(__peek(fnt__)+210, 15376);
	__poke(__peek(fnt__)+211, 1540);
	__poke(__peek(fnt__)+212, 1542);
	__poke(__peek(fnt__)+213, 15428);
	__poke(__peek(fnt__)+214, 0);
	__poke(__peek(fnt__)+215, 0);
	__poke(__peek(fnt__)+216, 15872);
	__poke(__peek(fnt__)+217, 26150);
	__poke(__peek(fnt__)+218, 26182);
	__poke(__peek(fnt__)+219, 15910);
	__poke(__peek(fnt__)+220, 0);
	__poke(__peek(fnt__)+221, 0);
	__poke(__peek(fnt__)+222, 15872);
	__poke(__peek(fnt__)+223, 1542);
	__poke(__peek(fnt__)+224, 1598);
	__poke(__peek(fnt__)+225, 15878);
	__poke(__peek(fnt__)+226, 0);
	__poke(__peek(fnt__)+227, 0);
	__poke(__peek(fnt__)+228, 15872);
	__poke(__peek(fnt__)+229, 1542);
	__poke(__peek(fnt__)+230, 1598);
	__poke(__peek(fnt__)+231, 1542);
	__poke(__peek(fnt__)+232, 0);
	__poke(__peek(fnt__)+233, 0);
	__poke(__peek(fnt__)+234, 7680);
	__poke(__peek(fnt__)+235, 770);
	__poke(__peek(fnt__)+236, 13115);
	__poke(__peek(fnt__)+237, 7714);
	__poke(__peek(fnt__)+238, 0);
	__poke(__peek(fnt__)+239, 0);
	__poke(__peek(fnt__)+240, 26112);
	__poke(__peek(fnt__)+241, 26214);
	__poke(__peek(fnt__)+242, 26238);
	__poke(__peek(fnt__)+243, 26214);
	__poke(__peek(fnt__)+244, 0);
	__poke(__peek(fnt__)+245, 0);
	__poke(__peek(fnt__)+246, 4096);
	__poke(__peek(fnt__)+247, 4112);
	__poke(__peek(fnt__)+248, 4112);
	__poke(__peek(fnt__)+249, 4112);
	__poke(__peek(fnt__)+250, 0);
	__poke(__peek(fnt__)+251, 0);
	__poke(__peek(fnt__)+252, 8192);
	__poke(__peek(fnt__)+253, 8224);
	__poke(__peek(fnt__)+254, 8736);
	__poke(__peek(fnt__)+255, 7204);
	__poke(__peek(fnt__)+256, 0);
	__poke(__peek(fnt__)+257, 0);
	__poke(__peek(fnt__)+258, 13056);
	__poke(__peek(fnt__)+259, 3867);
	__poke(__peek(fnt__)+260, 2823);
	__poke(__peek(fnt__)+261, 13075);
	__poke(__peek(fnt__)+262, 0);
	__poke(__peek(fnt__)+263, 0);
	__poke(__peek(fnt__)+264, 1536);
	__poke(__peek(fnt__)+265, 1542);
	__poke(__peek(fnt__)+266, 1542);
	__poke(__peek(fnt__)+267, 15878);
	__poke(__peek(fnt__)+268, 0);
	__poke(__peek(fnt__)+269, 0);
	__poke(__peek(fnt__)+270, 17152);
	__poke(__peek(fnt__)+271, 26467);
	__poke(__peek(fnt__)+272, 24423);
	__poke(__peek(fnt__)+273, 23387);
	__poke(__peek(fnt__)+274, 0);
	__poke(__peek(fnt__)+275, 0);
	__poke(__peek(fnt__)+276, 17920);
	__poke(__peek(fnt__)+277, 20046);
	__poke(__peek(fnt__)+278, 30294);
	__poke(__peek(fnt__)+279, 26214);
	__poke(__peek(fnt__)+280, 0);
	__poke(__peek(fnt__)+281, 0);
	__poke(__peek(fnt__)+282, 7680);
	__poke(__peek(fnt__)+283, 8994);
	__poke(__peek(fnt__)+284, 8995);
	__poke(__peek(fnt__)+285, 7714);
	__poke(__peek(fnt__)+286, 0);
	__poke(__peek(fnt__)+287, 0);
	__poke(__peek(fnt__)+288, 15872);
	__poke(__peek(fnt__)+289, 9766);
	__poke(__peek(fnt__)+290, 1566);
	__poke(__peek(fnt__)+291, 1542);
	__poke(__peek(fnt__)+292, 0);
	__poke(__peek(fnt__)+293, 0);
	__poke(__peek(fnt__)+294, 7688);
	__poke(__peek(fnt__)+295, 8994);
	__poke(__peek(fnt__)+296, 8995);
	__poke(__peek(fnt__)+297, 15922);
	__poke(__peek(fnt__)+298, 0);
	__poke(__peek(fnt__)+299, 0);
	__poke(__peek(fnt__)+300, 15872);
	__poke(__peek(fnt__)+301, 9766);
	__poke(__peek(fnt__)+302, 5662);
	__poke(__peek(fnt__)+303, 9782);
	__poke(__peek(fnt__)+304, 0);
	__poke(__peek(fnt__)+305, 0);
	__poke(__peek(fnt__)+306, 15360);
	__poke(__peek(fnt__)+307, 3078);
	__poke(__peek(fnt__)+308, 8216);
	__poke(__peek(fnt__)+309, 15394);
	__poke(__peek(fnt__)+310, 0);
	__poke(__peek(fnt__)+311, 0);
	__poke(__peek(fnt__)+312, 32256);
	__poke(__peek(fnt__)+313, 4112);
	__poke(__peek(fnt__)+314, 4112);
	__poke(__peek(fnt__)+315, 4112);
	__poke(__peek(fnt__)+316, 0);
	__poke(__peek(fnt__)+317, 0);
	__poke(__peek(fnt__)+318, 17920);
	__poke(__peek(fnt__)+319, 17990);
	__poke(__peek(fnt__)+320, 17990);
	__poke(__peek(fnt__)+321, 15396);
	__poke(__peek(fnt__)+322, 0);
	__poke(__peek(fnt__)+323, 0);
	__poke(__peek(fnt__)+324, 17920);
	__poke(__peek(fnt__)+325, 9316);
	__poke(__peek(fnt__)+326, 14380);
	__poke(__peek(fnt__)+327, 6168);
	__poke(__peek(fnt__)+328, 0);
	__poke(__peek(fnt__)+329, 0);
	__poke(__peek(fnt__)+330, -9472);
	__poke(__peek(fnt__)+331, 23131);
	__poke(__peek(fnt__)+332, 30302);
	__poke(__peek(fnt__)+333, 26214);
	__poke(__peek(fnt__)+334, 0);
	__poke(__peek(fnt__)+335, 0);
	__poke(__peek(fnt__)+336, 25600);
	__poke(__peek(fnt__)+337, 6180);
	__poke(__peek(fnt__)+338, 6168);
	__poke(__peek(fnt__)+339, 26148);
	__poke(__peek(fnt__)+340, 0);
	__poke(__peek(fnt__)+341, 0);
	__poke(__peek(fnt__)+342, 9216);
	__poke(__peek(fnt__)+343, 6196);
	__poke(__peek(fnt__)+344, 6168);
	__poke(__peek(fnt__)+345, 6168);
	__poke(__peek(fnt__)+346, 0);
	__poke(__peek(fnt__)+347, 0);
	__poke(__peek(fnt__)+348, 15872);
	__poke(__peek(fnt__)+349, 6160);
	__poke(__peek(fnt__)+350, 1032);
	__poke(__peek(fnt__)+351, 15878);
	__poke(__peek(fnt__)+352, 0);
	__poke(__peek(fnt__)+353, 0);
	__poke(__peek(fnt__)+354, 3096);
	__poke(__peek(fnt__)+355, 3084);
	__poke(__peek(fnt__)+356, 3084);
	__poke(__peek(fnt__)+357, 3084);
	__poke(__peek(fnt__)+358, 24);
	__poke(__peek(fnt__)+359, 0);
	__poke(__peek(fnt__)+360, 1028);
	__poke(__peek(fnt__)+361, 2056);
	__poke(__peek(fnt__)+362, 4120);
	__poke(__peek(fnt__)+363, 8240);
	__poke(__peek(fnt__)+364, 0);
	__poke(__peek(fnt__)+365, 0);
	__poke(__peek(fnt__)+366, 6168);
	__poke(__peek(fnt__)+367, 4112);
	__poke(__peek(fnt__)+368, 4112);
	__poke(__peek(fnt__)+369, 6160);
	__poke(__peek(fnt__)+370, 24);
	__poke(__peek(fnt__)+371, 0);
	__poke(__peek(fnt__)+372, 7168);
	__poke(__peek(fnt__)+373, 20);
	__poke(__peek(fnt__)+374, 0);
	__poke(__peek(fnt__)+375, 0);
	__poke(__peek(fnt__)+376, 0);
	__poke(__peek(fnt__)+377, 0);
	__poke(__peek(fnt__)+378, 0);
	__poke(__peek(fnt__)+379, 0);
	__poke(__peek(fnt__)+380, 0);
	__poke(__peek(fnt__)+381, 0);
	__poke(__peek(fnt__)+382, 126);
	__poke(__peek(fnt__)+383, 0);
	__poke(__peek(fnt__)+384, 2052);
	__poke(__peek(fnt__)+385, 0);
	__poke(__peek(fnt__)+386, 0);
	__poke(__peek(fnt__)+387, 0);
	__poke(__peek(fnt__)+388, 0);
	__poke(__peek(fnt__)+389, 0);
	__poke(__peek(fnt__)+390, 0);
	__poke(__peek(fnt__)+391, 7168);
	__poke(__peek(fnt__)+392, 7704);
	__poke(__peek(fnt__)+393, 7190);
	__poke(__peek(fnt__)+394, 0);
	__poke(__peek(fnt__)+395, 0);
	__poke(__peek(fnt__)+396, 1536);
	__poke(__peek(fnt__)+397, 15886);
	__poke(__peek(fnt__)+398, 9766);
	__poke(__peek(fnt__)+399, 7734);
	__poke(__peek(fnt__)+400, 0);
	__poke(__peek(fnt__)+401, 0);
	__poke(__peek(fnt__)+402, 0);
	__poke(__peek(fnt__)+403, 7176);
	__poke(__peek(fnt__)+404, 518);
	__poke(__peek(fnt__)+405, 7174);
	__poke(__peek(fnt__)+406, 0);
	__poke(__peek(fnt__)+407, 0);
	__poke(__peek(fnt__)+408, 8192);
	__poke(__peek(fnt__)+409, 15416);
	__poke(__peek(fnt__)+410, 12854);
	__poke(__peek(fnt__)+411, 15414);
	__poke(__peek(fnt__)+412, 0);
	__poke(__peek(fnt__)+413, 0);
	__poke(__peek(fnt__)+414, 0);
	__poke(__peek(fnt__)+415, 7176);
	__poke(__peek(fnt__)+416, 15926);
	__poke(__peek(fnt__)+417, 7174);
	__poke(__peek(fnt__)+418, 0);
	__poke(__peek(fnt__)+419, 0);
	__poke(__peek(fnt__)+420, 6144);
	__poke(__peek(fnt__)+421, 6168);
	__poke(__peek(fnt__)+422, 2056);
	__poke(__peek(fnt__)+423, 2056);
	__poke(__peek(fnt__)+424, 0);
	__poke(__peek(fnt__)+425, 0);
	__poke(__peek(fnt__)+426, 0);
	__poke(__peek(fnt__)+427, 15368);
	__poke(__peek(fnt__)+428, 12854);
	__poke(__peek(fnt__)+429, 15414);
	__poke(__peek(fnt__)+430, 7216);
	__poke(__peek(fnt__)+431, 0);
	__poke(__peek(fnt__)+432, 1536);
	__poke(__peek(fnt__)+433, 7694);
	__poke(__peek(fnt__)+434, 9766);
	__poke(__peek(fnt__)+435, 9766);
	__poke(__peek(fnt__)+436, 0);
	__poke(__peek(fnt__)+437, 0);
	__poke(__peek(fnt__)+438, 4096);
	__poke(__peek(fnt__)+439, 6144);
	__poke(__peek(fnt__)+440, 6168);
	__poke(__peek(fnt__)+441, 6168);
	__poke(__peek(fnt__)+442, 0);
	__poke(__peek(fnt__)+443, 0);
	__poke(__peek(fnt__)+444, 4096);
	__poke(__peek(fnt__)+445, 4096);
	__poke(__peek(fnt__)+446, 4112);
	__poke(__peek(fnt__)+447, 4112);
	__poke(__peek(fnt__)+448, 7184);
	__poke(__peek(fnt__)+449, 0);
	__poke(__peek(fnt__)+450, 1536);
	__poke(__peek(fnt__)+451, 7686);
	__poke(__peek(fnt__)+452, 3598);
	__poke(__peek(fnt__)+453, 5662);
	__poke(__peek(fnt__)+454, 0);
	__poke(__peek(fnt__)+455, 0);
	__poke(__peek(fnt__)+456, 3072);
	__poke(__peek(fnt__)+457, 3084);
	__poke(__peek(fnt__)+458, 3084);
	__poke(__peek(fnt__)+459, 2060);
	__poke(__peek(fnt__)+460, 0);
	__poke(__peek(fnt__)+461, 0);
	__poke(__peek(fnt__)+462, 0);
	__poke(__peek(fnt__)+463, 32548);
	__poke(__peek(fnt__)+464, 19291);
	__poke(__peek(fnt__)+465, 19275);
	__poke(__peek(fnt__)+466, 0);
	__poke(__peek(fnt__)+467, 0);
	__poke(__peek(fnt__)+468, 0);
	__poke(__peek(fnt__)+469, 7688);
	__poke(__peek(fnt__)+470, 9766);
	__poke(__peek(fnt__)+471, 9766);
	__poke(__peek(fnt__)+472, 0);
	__poke(__peek(fnt__)+473, 0);
	__poke(__peek(fnt__)+474, 0);
	__poke(__peek(fnt__)+475, 7176);
	__poke(__peek(fnt__)+476, 9766);
	__poke(__peek(fnt__)+477, 7206);
	__poke(__peek(fnt__)+478, 0);
	__poke(__peek(fnt__)+479, 0);
	__poke(__peek(fnt__)+480, 0);
	__poke(__peek(fnt__)+481, 15880);
	__poke(__peek(fnt__)+482, 9766);
	__poke(__peek(fnt__)+483, 7734);
	__poke(__peek(fnt__)+484, 1542);
	__poke(__peek(fnt__)+485, 0);
	__poke(__peek(fnt__)+486, 0);
	__poke(__peek(fnt__)+487, 15368);
	__poke(__peek(fnt__)+488, 12854);
	__poke(__peek(fnt__)+489, 15414);
	__poke(__peek(fnt__)+490, 8224);
	__poke(__peek(fnt__)+491, 0);
	__poke(__peek(fnt__)+492, 0);
	__poke(__peek(fnt__)+493, 7184);
	__poke(__peek(fnt__)+494, 3084);
	__poke(__peek(fnt__)+495, 3084);
	__poke(__peek(fnt__)+496, 0);
	__poke(__peek(fnt__)+497, 0);
	__poke(__peek(fnt__)+498, 0);
	__poke(__peek(fnt__)+499, 7176);
	__poke(__peek(fnt__)+500, 7174);
	__poke(__peek(fnt__)+501, 7184);
	__poke(__peek(fnt__)+502, 0);
	__poke(__peek(fnt__)+503, 0);
	__poke(__peek(fnt__)+504, 2048);
	__poke(__peek(fnt__)+505, 6152);
	__poke(__peek(fnt__)+506, 2056);
	__poke(__peek(fnt__)+507, 6152);
	__poke(__peek(fnt__)+508, 0);
	__poke(__peek(fnt__)+509, 0);
	__poke(__peek(fnt__)+510, 0);
	__poke(__peek(fnt__)+511, 9728);
	__poke(__peek(fnt__)+512, 9766);
	__poke(__peek(fnt__)+513, 15412);
	__poke(__peek(fnt__)+514, 0);
	__poke(__peek(fnt__)+515, 0);
	__poke(__peek(fnt__)+516, 0);
	__poke(__peek(fnt__)+517, 13824);
	__poke(__peek(fnt__)+518, 5140);
	__poke(__peek(fnt__)+519, 2076);
	__poke(__peek(fnt__)+520, 0);
	__poke(__peek(fnt__)+521, 0);
	__poke(__peek(fnt__)+522, 0);
	__poke(__peek(fnt__)+523, 27392);
	__poke(__peek(fnt__)+524, 13870);
	__poke(__peek(fnt__)+525, 5686);
	__poke(__peek(fnt__)+526, 0);
	__poke(__peek(fnt__)+527, 0);
	__poke(__peek(fnt__)+528, 0);
	__poke(__peek(fnt__)+529, 5632);
	__poke(__peek(fnt__)+530, 3084);
	__poke(__peek(fnt__)+531, 5660);
	__poke(__peek(fnt__)+532, 0);
	__poke(__peek(fnt__)+533, 0);
	__poke(__peek(fnt__)+534, 0);
	__poke(__peek(fnt__)+535, 9728);
	__poke(__peek(fnt__)+536, 9766);
	__poke(__peek(fnt__)+537, 15412);
	__poke(__peek(fnt__)+538, 7200);
	__poke(__peek(fnt__)+539, 0);
	__poke(__peek(fnt__)+540, 0);
	__poke(__peek(fnt__)+541, 7168);
	__poke(__peek(fnt__)+542, 2072);
	__poke(__peek(fnt__)+543, 7684);
	__poke(__peek(fnt__)+544, 0);
	__poke(__peek(fnt__)+545, 0);
	__poke(__peek(fnt__)+546, 6160);
	__poke(__peek(fnt__)+547, 2056);
	__poke(__peek(fnt__)+548, 2060);
	__poke(__peek(fnt__)+549, 6152);
	__poke(__peek(fnt__)+550, 16);
	__poke(__peek(fnt__)+551, 0);
	__poke(__peek(fnt__)+552, 6144);
	__poke(__peek(fnt__)+553, 6168);
	__poke(__peek(fnt__)+554, 6168);
	__poke(__peek(fnt__)+555, 6168);
	__poke(__peek(fnt__)+556, 0);
	__poke(__peek(fnt__)+557, 0);
	__poke(__peek(fnt__)+558, 6152);
	__poke(__peek(fnt__)+559, 4120);
	__poke(__peek(fnt__)+560, 4112);
	__poke(__peek(fnt__)+561, 6168);
	__poke(__peek(fnt__)+562, 8);
	__poke(__peek(fnt__)+563, 0);
	__poke(__peek(fnt__)+564, 0);
	__poke(__peek(fnt__)+565, 0);
	__poke(__peek(fnt__)+566, 60);
	__poke(__peek(fnt__)+567, 0);
	__poke(__peek(fnt__)+568, 0);
	__poke(__peek(fnt__)+569, 0);
	return __this;
}
var Font__get(var __this, var c) {
	var i;
	i = (c-32)*6;
	return __peek(fnt__)+i;
}
#undef fnt__
#endif

#ifdef JACK_IMPLEMENTATION
var Keyboard__exit() {
 #ifndef _WIN32
 	Keyboard__term.c_lflag |= (ICANON | ECHO);
 	tcsetattr(0, TCSANOW, &Keyboard__term);
	exit(0);
 #endif
	return 0;
}
var Keyboard__exits(var a, var b) {
	Keyboard__exit();
	return 0;
}
var Keyboard__init() {
 
#ifndef _WIN32
 	struct sigaction act;
 	memset(&act, 0, sizeof(act));
 	sigemptyset(&act.sa_mask);
 	atexit((void(*)())Keyboard__exits);
 	tcgetattr(0, &Keyboard__term);
 	act.sa_handler = ((void(*)(int))Keyboard__exits);
 	act.sa_flags = 0;
 	sigaction(SIGINT, &act, NULL); 
 	sigaction(SIGTSTP, &act, NULL); 
 	Keyboard__term.c_lflag &= ~(ICANON);
 	tcsetattr(0, TCSANOW, &Keyboard__term);
#endif

	return 0;
}
var Keyboard__deInit() {
	return 0;
}
var Keyboard__keyPressed() {
	var c;
	c = Keyboard__getKey();
	if (c) {
		Memory__poke(24576, c);
	}

	return Memory__peek(24576);
}
var Keyboard__getKey() {
	var x;
	x = Keyboard__getChar();
	if (((x)==(10))) {
		return 128;
	}

	if (((x)==(127))) {
		return 129;
	}

	if (((x)==(27))) {
		x = Keyboard__getChar();
		if (((x)==(0))) {
			return 140;
		}

		if (((x)==(91))) {
			x = Keyboard__getChar();
			if (((x)==(65))) {
				x = 131;
			}

			if (((x)==(66))) {
				x = 133;
			}

			if (((x)==(67))) {
				x = 132;
			}

			if (((x)==(68))) {
				x = 130;
			}

			if (((x)==(53))) {
				x = Keyboard__getChar();
				if (((x)==(126))) {
					x = 136;
				}

			}

			if (((x)==(54))) {
				x = Keyboard__getChar();
				if (((x)==(126))) {
					x = 137;
				}

			}

			if (((x)==(50))) {
				x = Keyboard__getChar();
				if (((x)==(126))) {
					x = 138;
				}

				if (((x)==(52))) {
					x = Keyboard__getChar();
					x = (x-125)+150;
				}

			}

			if (((x)==(51))) {
				x = Keyboard__getChar();
				if (((x)==(126))) {
					x = 139;
				}

			}

			if (((x)==(91))) {
				x = Keyboard__getChar();
				if (((x)==(70))) {
					x = 135;
				}

			}

			if (((x)==(91))) {
				x = Keyboard__getChar();
				if (((x)==(72))) {
					x = 134;
				}

			}

		} else {
			if (((x)==(79))) {
				x = Keyboard__getChar();
				x = (x-80)+141;
			}

		}
	}

	return x;
}
var Keyboard__getChar() {
	var x;
 
#ifndef _WIN32
 	//fd_set rd;
 	int flags;
 	flags = fcntl(STDIN_FILENO, F_GETFL, 0);
 	fcntl(STDIN_FILENO, F_SETFL, flags | O_NONBLOCK);
 	//struct timeval tv = {0};
 	//tv.tv_usec = 1000;
 	//FD_ZERO(&rd);
 	//FD_SET(STDIN_FILENO, &rd);
 	//x = select(1, &rd, NULL, NULL, &tv);
	x = getchar();
 	//ioctl(STDIN_FILENO, FIONREAD, ((int*)&x)); // crash on linux 64bit
 	if (x > 0) {
 		x = x;
 	} else {
 		x = 0;
 	}
 	//printf("KKEY %d\n",(int) x);
#else
 	x = 0;
 	if (_kbhit()) {
 		x = _getch();
 	}
#endif

	return x;
}
var Keyboard__readChar() {
	var k;
	k = Keyboard__keyPressed();
	while (((k)==(0))) {
		Sys__wait(50);
		k = Keyboard__keyPressed();
	}
	Memory__poke(24576, 0);
	while (Keyboard__keyPressed()) {
		Sys__wait(50);
	}
	Memory__poke(24576, 0);
	return k;
}
var Keyboard__readLine(var message) {
	var s;
	var k;
	s = String__new(256);
	Output__printString(message);
	k = Keyboard__readChar();
	while ((((((k)==(10))))==(0))) {
		s = String__appendChar(s, k);
		k = Keyboard__readChar();
	}
	return s;
}
var Keyboard__readInt(var message) {
	var k;
	var i;
	Output__printString(message);
	i = 0;
	k = Keyboard__readChar();
	while ((((k)>(47)))&&(((k)<(58)))) {
		i = (k-48)+(i*10);
		k = Keyboard__readChar();
	}
	return i;
}
var Keyboard__NEWLINE() {
	return 128;
}
var Keyboard__BACKSPACE() {
	return 129;
}
var Keyboard__LEFT_ARROW() {
	return 130;
}
var Keyboard__UP_ARROW() {
	return 131;
}
var Keyboard__RIGHT_ARROW() {
	return 132;
}
var Keyboard__DOWN_ARROW() {
	return 133;
}
var Keyboard__HOME() {
	return 134;
}
var Keyboard__END() {
	return 135;
}
var Keyboard__PAGE_UP() {
	return 136;
}
var Keyboard__PAGE_DOWN() {
	return 137;
}
var Keyboard__INSERT() {
	return 138;
}
var Keyboard__DELETE() {
	return 139;
}
var Keyboard__ESC() {
	return 140;
}
var Keyboard__F1() {
	return 141;
}
var Keyboard__F2() {
	return 142;
}
var Keyboard__F3() {
	return 143;
}
var Keyboard__F4() {
	return 144;
}
var Keyboard__F5() {
	return 145;
}
var Keyboard__F6() {
	return 146;
}
var Keyboard__F7() {
	return 147;
}
var Keyboard__F8() {
	return 148;
}
var Keyboard__F9() {
	return 149;
}
var Keyboard__F10() {
	return 150;
}
var Keyboard__F11() {
	return 151;
}
var Keyboard__F12() {
	return 152;
}
#endif

#ifdef JACK_IMPLEMENTATION
var Math__init() {
	return 0;
}
var Math__deInit() {
	return 0;
}
var Math__abs(var a) {
	if (((a)<(0))) {
		return -a;
	}

	return a;
}
var Math__multiply(var x, var y) {
	var sum;
	var j;
	var b;
	var shiftedX;
	sum = 0;
	shiftedX = x;
	if ((((x)<(1)))||(((y)<(1)))) {
		return 0;
	}

	j = 0;
	b = 1;
	while (((j)<(16))) {
		if (y&b) {
			sum = sum+shiftedX;
		}

		b = b+b;
		shiftedX = shiftedX+shiftedX;
		j = j+1;
	}
	return sum;
}
var Math__divide(var x, var y) {
	var q;
	if ((((x)<(0)))||(((y)<(1)))) {
		return 0;
	}

	if (((y)>(x))) {
		return 0;
	}

	q = Math__divide(x, y+y);
	if ((((x-((q+q)*y)))<(y))) {
		return q+q;
	}

	return (q+q)+1;
}
var Math__min(var x, var y) {
	if (((x)<(y))) {
		return x;
	}

	return y;
}
var Math__max(var x, var y) {
	if (((x)>(y))) {
		return x;
	}

	return y;
}
var Math__sqrt(var x) {
	var y;
	var j;
	var y2j;
	var n2;
	var xp;
	if (((x)<(1))) {
		return 0;
	}

	xp = x+1;
	y = 0;
	n2 = 128;
	j = 7;
	while (((j)>(-1))) {
		y2j = y+n2;
		y2j = y2j*y2j;
		if (((y2j)<(xp))) {
			y = y+n2;
		}

		n2 = n2/2;
		j = j-1;
	}
	return y;
}
var Math__shiftLeft(var value, var shift) {
	while (((shift)>(0))) {
		value = value*2;
		shift = shift-1;
	}
	return value;
}
var Math__shiftRight(var value, var shift) {
	while (((shift)>(0))) {
		value = value/2;
		shift = shift-1;
	}
	return value;
}
var Math__rem(var a, var b) {
	var c;
	if (((b)==(0))) {
		return 0;
	}

	c = a/b;
	c = c*b;
	return a-c;
}
var Math__xor(var a, var b) {
	var c;
	c = a|b;
	c = c&(~((a)&(b)));
	return c;
}
var Math__log2(var n) {
	var r;
	r = 0;
	if (((n)==(0))) {
		return -1;
	}

	while (((n)>(1))) {
		n = Math__shiftRight(n, 1);
		r = r+1;
	}
	return r;
}
var Math__sizeOfInt() {
	var s;
 	s = sizeof(var);
	return s;
}
var Math__isBigEndian() {
	var s;
 	int x = 1;
 	char *y = (char*)&x;
 	s = 0;
 	if (!y[0]) { s = -1;}
	return s;
}
var Math__isWindows() {
	var s;
	s = 0;
 #ifdef _WIN32
 	s = -1;
 #endif
	return s;
}
#endif

#ifdef JACK_IMPLEMENTATION
var Output___x;
var Output___y;
var Output___f;
var Output__init() {
	Output___x = 0;
	Output___y = 0;
	Output___f = Font__new();
	return 0;
}
var Output__deInit() {
	return 0;
}
var Output__moveCursor(var row, var col) {
	var xx;
	var yy;
	Output___x = col;
	Output___y = row;
	if (((Output___x)<(0))) {
		Output___x = 0;
	}

	if (((Output___x)>(63))) {
		Output___x = 63;
	}

	if (((Output___y)<(0))) {
		Output___y = 0;
	}

	if (((Output___y)>(22))) {
		Output___y = 22;
	}

	xx = Output___x;
	yy = Output___y;
	Output__printChar(32);
	Output___x = xx;
	Output___y = yy;
 	
#ifdef _WIN32
	output = GetStdHandle(STD_OUTPUT_HANDLE);
	coord.X = (SHORT)xx;
	coord.Y = (SHORT)yy;
	SetConsoleCursorPosition(output, coord);	
#else
	printf("\033[%ld;%ldf ", (long)yy + 1, (long)xx + 1);
 	fflush(stdout);
#endif

	return 0;
}
var Output__printString(var s) {
	var i;
	var l;
	var c;
	i = 0;
	l = String__length(s);
	while (((i)<(l))) {
		c = String__charAt(s, i);
		Output__printChar(c);
		i = i+1;
	}
	return 0;
}
var Output__println() {
	Output___y = Output___y+1;
	if (((Output___y)>(22))) {
		Output___y = 22;
	}

	Output___x = 0;
 	putc('\n', stdout);
	return 0;
}
var Output__printChar(var c) {
	var xx;
	var yy;
	var i;
	var j;
	var l;
	var p;
	var chr;
	var m;
	if ((((c)>(1114111)))||(((c)<(0)))) {
		return 0;
	}

	if ((((c)<(32)))||(((c)>(126)))) {
		c = 32;
	}

	xx = Output___x;
	yy = Output___y;
	chr = Font__get(Output___f, c);
	if (xx&1) {
		m = 255;
	} else {
		m = 255*256;
	}
	i = 0;
	j = 0;
	while (((i)<(11))) {
		l = ((yy*11)+i)*32;
		l = l+(xx/2);
		l = l+16384;
		p = Memory__peek(l);
		if ((xx&1)) {
			p = (p&m)|(__peek(chr+j)*256);
		} else {
			p = (p&m)|(__peek(chr+j)&255);
		}
		Memory__poke(l, p);
		l = l+32;
		if (((i)<(10))) {
			p = Memory__peek(l);
			if (xx&1) {
				p = (p&m)|(__peek(chr+j)&~m);
			} else {
				p = (p&m)|((__peek(chr+j)/256)&255);
			}
			Memory__poke(l, p);
		}

		i = i+2;
		j = j+1;
	}
 	printf("%c", (char)c);
 	fflush(stdout);
	Output___x = Output___x+1;
	if (((Output___x)>(63))) {
		Output___x = 0;
		Output___y = Output___y+1;
		if (((Output___y)>(22))) {
			Output___y = 22;
		}

	}

	return 0;
}
var Output__printInt(var c) {
	var s;
	s = String__new(8);
	s = String__setInt(s, c);
	Output__printString(s);
	String__dispose(s);
	return 0;
}
var Output__backSpace() {
	var xx;
	var yy;
	Output___x = Output___x-1;
	if (((Output___x)<(0))) {
		Output___x = 0;
	}

	xx = Output___x;
	yy = Output___y;
	Output__printChar(8);
	Output___x = xx;
	Output___y = yy;
	return 0;
}
#endif

#ifdef JACK_IMPLEMENTATION
var Screen___color;
var Screen__init() {
	Screen___color = -1;
	return 0;
}
var Screen__deInit() {
	return 0;
}
var Screen__clearScreen() {
	var i;
	i = 16384;
	while (((i)<(24576))) {
		Memory__poke(i, 0);
		i = i+1;
	}
 	puts("\033[2J");
	return 0;
}
var Screen__setColor(var b) {
	Screen___color = b;
	return 0;
}
var Screen__drawPixel(var x, var y) {
	var b;
	var i;
	var r;
	var p;
	i = (x/16)+(y*(512/16))+16384;
	b = Memory__peek(i);
	r = x-((x/16)*16);
	p = 1;
	while (((r)>(0))) {
		p = p*2;
		r = r-1;
	}
	if (Screen___color) {
		b = b|p;
	} else {
		b = b&~p;
	}
	Memory__poke(i, b);
	return 0;
}
var Screen__drawLine(var x, var y, var x2, var y2) {
	var a;
	var b;
	var dx;
	var dy;
	var ax;
	var ay;
	var adyMinusbdx;
	dx = x2-x;
	dy = y2-y;
	if (((dx)==(0))) {
		if (((y)>(y2))) {
			a = y2;
			y2 = y;
			y = a;
		}

		b = y;
		y2 = y2+1;
		Screen__drawPixel(x, b);
		while (((b)<(y2))) {
			b = b+1;
			Screen__drawPixel(x, b);
		}
		return 0;
	}

	if (((dy)==(0))) {
		if (((x)>(x2))) {
			a = x2;
			x2 = x;
			x = a;
		}

		a = x;
		x2 = x2+1;
		Screen__drawPixel(a, y);
		while (((a)<(x2))) {
			a = a+1;
			Screen__drawPixel(a, y);
		}
		return 0;
	}

	ax = 0;
	ay = 0;
	if ((((dx)<(0)))&&(((dy)<(0)))) {
		dx = -dx;
		dy = -dy;
		x = x2;
		y = y2;
	} else {
		if ((((dx)>(0)))&&(((dy)<(0)))) {
			dy = -dy;
			ay = dy;
		} else {
			if ((((dx)<(0)))&&(((dy)>(0)))) {
				dx = -dx;
				ax = dx;
			}

		}
	}
	a = 0;
	b = 0;
	adyMinusbdx = 0;
	Screen__drawPixel(x, y);
	while ((((dx)>(a)))&&(((dy)>(b)))) {
		if (((adyMinusbdx)<(0))) {
			a = a+1;
			adyMinusbdx = adyMinusbdx+dy;
		} else {
			b = b+1;
			adyMinusbdx = adyMinusbdx-dx;
		}
		if (ay) {
			Screen__drawPixel(x+a, y-b);
		} else {
			if (ax) {
				Screen__drawPixel(x-a, y+b);
			} else {
				Screen__drawPixel(x+a, y+b);
			}
		}
	}
	return 0;
}
var Screen__drawRectangle(var x, var y, var x2, var y2) {
	var i;
	i = y;
	Screen__drawLine(x, i, x2, i);
	while (((i)<(y2))) {
		i = i+1;
		Screen__drawLine(x, i, x2, i);
	}
	return 0;
}
var Screen__drawCircle(var x, var y, var r) {
	var dy;
	var s;
	var r2;
	var x0;
	var x1;
	var y0;
	dy = -r;
	if ((((r)>(181)))||(((r)<(0)))) {
		return 0;
	}

	r2 = r*r;
	while (((r)>(dy))) {
		s = Math__sqrt(r2-(dy*dy));
		x0 = x-s;
		y0 = y+dy;
		x1 = x+s;
		if (((x0)<(0))) {
			x0 = 0;
		}

		if (((x0)>(511))) {
			x0 = 511;
		}

		if (((x1)<(0))) {
			x1 = 0;
		}

		if (((x1)>(511))) {
			x1 = 511;
		}

		if (((y0)<(0))) {
			y0 = 0;
		}

		if (((y0)>(255))) {
			y0 = 255;
		}

		Screen__drawLine(x0, y0, x1, y0);
		dy = dy+1;
	}
	return 0;
}
#endif

#ifdef JACK_IMPLEMENTATION
var String___str0[] = {45,0};
#define str__ (__this+0)
#define size__ (__this+1)
var String__new(var maxLength) {
	var __this;
	__this = Memory__alloc(2);
	__poke(str__, Array__new(maxLength+1));
	__poke(__peek(str__)+0, 0);
	__poke(size__, maxLength);
	return __this;
}
var String__dispose(var __this) {
	Array__dispose(__peek(str__));
	Memory__deAlloc(__this);
	return 0;
}
var String__length(var __this) {
	var s;
	var l;
	l = 0;
	s = __peek(str__);
	if (((s)==(0))) {
		return 0;
	}

	while (((0)==((((__peek(s+l))==(0)))))) {
		l = l+1;
	}
	return l;
}
var String__charAt(var __this, var a) {
	var ret;
	ret = __peek(__peek(str__)+a);
	return ret;
}
var String__setCharAt(var __this, var j, var c) {
	var s;
	s = __peek(str__);
	__poke(s+j, c);
	return 0;
}
var String__getArray(var __this) {
	return __peek(str__);
}
var String__appendChar(var __this, var c) {
	var l;
	var i;
	var nl;
	var max;
	var b;
	var d;
	d = __peek(str__);
	if (((__peek(size__))<(1))) {
		Sys__error(12);
	}

	max = __peek(size__);
	l = String__length(__this);
	if (((l)<((max-1)))) {
		__poke(__peek(str__)+l, c);
		__poke(__peek(str__)+l+1, 0);
		return __this;
	}

	nl = (l*2)+4;
	b = Array__new(nl+1);
	i = 0;
	while (((i)<(l))) {
		__poke(b+i, __peek(d+i));
		i = i+1;
	}
	__poke(b+l, c);
	__poke(b+l+1, 0);
	Array__dispose(__peek(str__));
	__poke(size__, nl);
	__poke(str__, b);
	return __this;
}
var String__eraseLastChar(var __this) {
	var l;
	var s;
	s = __peek(str__);
	l = String__length(__this);
	if (((l)>(0))) {
		__poke(s+l-1, 0);
	}

	return 0;
}
var String__intValue(var __this) {
	var v;
	var s;
	var d;
	var i;
	var o;
	o = __peek(str__);
	v = 0;
	s = 1;
	d = __peek(o+0);
	i = 1;
	if (((d)==(45))) {
		s = -1;
		d = __peek(o+i);
		i = i+1;
	}

	while ((((d)>(47)))&&(((d)<(58)))) {
		v = v*10;
		v = v+d-48;
		d = __peek(o+i);
		i = i+1;
	}
	return v*s;
}
var String__setInt(var __this, var j) {
	var n;
	var k;
	var s;
	var p;
	p = 0;
	s = __this;
	String__setCharAt(s, 0, 0);
	if (((j)<(0))) {
		j = -j;
		s = String__appendString(s, Memory__getString(String___str0));
	}

	n = 10000;

 	if (sizeof(var) == 8) {
 		n = n * n * n * n * 100;
 	} else if (sizeof(var) == 4) {
 		n = n * n * 10; 
 	} 

	while (((n)>(0))) {
		k = j/n;
		if (((k)>(0))) {
			p = -1;
		}

		if (p) {
			s = String__appendChar(s, k+48);
		}

		j = Math__rem(j, n);
		n = n/10;
	}
	if (((p)==(0))) {
		s = String__appendChar(s, 48);
	}

	return __this;
}
var String__appendFromNative(var __this, var native) {
	var l;
	var i;
	var c;
	var n;
	var s;
	s = __this;
	n = native;
	i = 0;
 
#ifdef JACK_HACK 
 	n = 0;
 	l = n;
#else
#ifdef _WIN32
 	l = (var)wcslen((wchar_t*)n);
#else
	l = strlen((char*)n);
#endif 
#endif 

	while (((i)<(l))) {
 
#ifdef JACK_HACK 
 	c = 0;
#else
#ifdef _WIN32
 		c = (var)((wchar_t*)n)[i];// FIXME UTF16
#else
 		c = (var)(((char*)n)[i]) & 255; // FIXME UTF8
#endif 
#endif 

		s = String__appendChar(s, c);
		i = i+1;
	}
	return __this;
}
var String__ord(var s) {
	return __peek(s+0);
}
var String__backSpace() {
	return 8;
}
var String__doubleQuote() {
	return 34;
}
var String__newLine() {
	return 10;
}
var String__copy(var __this) {
	var s;
	var j;
	var l;
	j = 0;
	l = String__length(__this);
	s = String__new(l+1);
	while (((j)<(l))) {
		s = String__appendChar(s, String__charAt(__this, j));
		j = j+1;
	}
	return s;
}
var String__appendString(var __this, var p) {
	var j;
	var l;
	var s;
	s = __this;
	j = 0;
	l = String__length(p);
	while (((j)<(l))) {
		s = String__appendChar(s, String__charAt(p, j));
		j = j+1;
	}
	return __this;
}
var String__compare(var __this, var s) {
	var p;
	var j;
	var lp;
	var ls;
	var r;
	p = __this;
	lp = String__length(p);
	ls = String__length(s);
	j = 0;
	while ((((j)<(lp)))&&(((j)<(ls)))) {
		r = String__charAt(p, j)-String__charAt(s, j);
		if (r) {
			return r;
		}

		j = j+1;
	}
	return lp-ls;
}
#undef str__
#undef size__
#endif

#ifdef JACK_IMPLEMENTATION
var Sys___str0[] = {69,114,114,111,114,40,0};
var Sys___str1[] = {41,0};
var Sys___in_error;
var Sys___args_;
var Sys__init() {
	Sys___in_error = 0;
	Memory__init();
 
#ifndef JACK_HACK
#endif

	Math__init();
	Output__init();
	Screen__init();
	Keyboard__init();
	Main__main();
	return 0;
}
var Sys__deInit() {
	var b;
	if (Sys___args_) {
		b = Sys___args_;
		Buffer__dispose(b);
		Sys___args_ = 0;
	}

	Math__deInit();
	Output__deInit();
	Screen__deInit();
	Keyboard__deInit();
	Memory__deInit();
	return 0;
}
var Sys__halt() {
 	exit(0);
	return 0;
}
var Sys__error(var errorCode) {
	if (Sys___in_error) {
		return 0;
	}

	Sys___in_error = -1;
	Output__printString(Memory__getString(Sys___str0));
	Output__printInt(errorCode);
	Output__printString(Memory__getString(Sys___str1));
	Output__println();

 	errorCode = 0;
 	errorCode = 1 / (errorCode);
 	exit(errorCode);

	Sys___in_error = 0;
	return 0;
}
var Sys__wait(var duration) {
	Screen__processEvents(-1);
 
#ifdef _WIN32
 	Sleep(duration);
#else
 	usleep(duration * 1000);
#endif

	return 0;
}
var Sys__args() {
	var a;
	var s;
	var i;
	var isq;
	var b;
	if (Sys___args_) {
		return Sys___args_;
	}

	Sys___args_ = Buffer__newString(1);
	i = 0;
 	isq = Sys__argc__;
	while (((i)<(isq))) {
 		a = (var)Sys__argv__[i];
		s = String__new(255);
		s = String__appendFromNative(s, a);
		b = Sys___args_;
		Buffer__append(b, s);
		i = i+1;
	}
	return Sys___args_;
}
#endif

#ifdef JACK_IMPLEMENTATION
var Memory___str0[] = {65,108,108,111,99,32,97,114,101,110,97,32,105,115,32,110,111,116,32,102,114,101,101,33,32,112,61,0};
var Memory___str1[] = {32,112,91,48,93,61,0};
var Memory___str2[] = {85,110,101,115,112,101,99,101,100,32,112,48,32,112,61,0};
var Memory___str3[] = {83,105,122,101,32,116,111,111,32,115,109,97,108,108,32,105,110,32,97,108,108,111,99,33,0};
var Memory___str4[] = {69,114,114,111,114,32,105,110,32,97,108,108,111,99,33,0};
var Memory___str5[] = {32,112,61,0};
var Memory___str6[] = {32,97,114,101,110,97,61,0};
var Memory___str7[] = {32,101,110,100,61,0};
var Memory___str8[] = {32,112,91,48,93,61,0};
var Memory___str9[] = {69,114,114,111,114,32,105,110,32,97,108,108,111,99,33,0};
var Memory___str10[] = {32,112,91,48,93,61,0};
var Memory___str11[] = {32,97,114,101,110,97,61,0};
var Memory___str12[] = {32,97,115,105,122,101,61,0};
var Memory___str13[] = {100,101,65,108,108,111,99,32,101,114,114,111,114,58,32,97,114,101,110,97,61,0};
var Memory___str14[] = {32,112,61,0};
var Memory___str15[] = {69,114,114,111,114,32,105,110,32,100,101,65,108,108,111,99,33,0};
var Memory___str16[] = {32,97,115,105,122,101,61,0};
var Memory___arena;
var Memory___asize;
var Memory___freep;
var Memory___mem;
var Memory___keyread;
var Memory__init() {
	var i;
	Memory___mem = 0;
	Memory___keyread = 0;
 #ifndef JACK_HACK
 	return 0;
 #endif
	i = 0;
	while (((i)<(24576))) {
		Memory__poke(i, 0);
		i = i+1;
	}
	Memory___arena = Math__abs(__peek(Memory___mem+0));
	Memory___arena = 0;
	Memory___asize = 16384;
	__poke(Memory___arena+0, Memory___asize);
	Memory___freep = Memory___arena;
	return 0;
}
var Memory__deInit() {
	return 0;
}
var Memory__peek(var addr) {
	if (((addr)<(0))) {
		Sys__error(27);
	}

	if (((addr)>(24576))) {
		Sys__error(28);
	}

	if (((addr)==(24576))) {
		Memory___keyread = -1;
		addr = addr;
	}

 	if (addr == 24576) {
 		Screen__processEvents(0);
	}
 	return Memory__memory[addr];
	return __peek(Memory___mem+addr);
}
var Memory__poke(var addr, var value) {
	if (((addr)<(0))) {
		Sys__error(29);
	}

	if (((addr)>(24576))) {
		Sys__error(30);
	}

	if ((((addr)>(16383)))&&(((addr)<(24576)))) {
		if (Memory___keyread) {
			__poke(Memory___mem+24576, 0);
			Memory___keyread = 0;
		}

		Screen__refresh();
	}

 	return Memory__memory[addr] = value;
	__poke(Memory___mem+addr, value);
	return 0;
}
var Memory__defrag() {
	var p;
	var q;
	var end;
	end = Memory___arena+Memory___asize;
	p = Memory___arena;
	while (((p)<(end))) {
		if (((__peek(p+0))>(0))) {
			q = p+__peek(p+0);
			while ((((q)<(end)))&&(((__peek(q+0))>(0)))) {
				__poke(p+0, q-p);
				q = q+__peek(q+0);
			}
		} else {
			if (((__peek(p+0))==(0))) {
				return 0;
			}

		}
		p = p+Math__abs(__peek(p+0));
	}
	return 0;
}
var Memory__checkEmpty() {
	var ok;
	var p;
	var end;
 	return -1;
	end = Memory___arena+Memory___asize;
	p = Memory___arena;
	ok = -1;
	while (((p)<(end))) {
		if (((__peek(p+0))<(0))) {
			Output__printString(Memory__getString(Memory___str0));
			Output__printInt(p);
			Output__printString(Memory__getString(Memory___str1));
			Output__printInt(__peek(p+0));
			Output__println();
			ok = 0;
		} else {
			if (((__peek(p+0))==(0))) {
				Output__printString(Memory__getString(Memory___str2));
				Output__printInt(p);
				Output__println();
				return 0;
			}

		}
		p = p+Math__abs(__peek(p+0));
	}
	return ok;
}
var Memory__alloc(var size) {
	var p;
	var end;
	var k;
	var tries;
	var i;
	var j;
	var doit;
	size = size+1;
 #ifndef JACK_HACK
 	p = (var) malloc(sizeof(var)* (size+1));
 	((var*)p)[0] = -(size+1);
 	((var*)p)[1] = 0;
 	return ((var)(((var*)p+2))) / sizeof(var);
 #endif
	tries = 0;
	i = 0;
	j = 0;
	if (((size)<(1))) {
		Output__printString(Memory__getString(Memory___str3));
		Output__printInt(size);
		Output__println();
		Sys__error(24);
		return 0;
	}

	while (((tries)<(3))) {
		end = Memory___arena+Memory___asize;
		p = Memory___freep;
		doit = -1;
		while (doit||((((((p)==(Memory___freep))))==(0)))) {
			doit = 0;
			if (((__peek(p+0))>(size))) {
				if ((((size+1))==(__peek(p+0)))) {
					__poke(p+0, -__peek(p+0));
				} else {
					k = __peek(p+0);
					__poke(p+0, -(size+1));
					__poke(p+size+1, (k-size)-1);
				}
				Memory___freep = p;
				return p+1;
			}

			p = p+Math__abs(__peek(p+0));
			if (((p)==(end))) {
				p = Memory___arena;
			}

			if ((((p)<(Memory___arena)))||(((p)>((end-1))))||(((__peek(p+0))==(0)))) {
				Output__printString(Memory__getString(Memory___str4));
				Output__printString(Memory__getString(Memory___str5));
				Output__printInt(p);
				Output__printString(Memory__getString(Memory___str6));
				Output__printInt(Memory___arena);
				Output__printString(Memory__getString(Memory___str7));
				Output__printInt(end);
				Output__printString(Memory__getString(Memory___str8));
				Output__printInt(__peek(p+0));
				Output__println();
				Sys__error(23);
			}

		}
		if (((tries)==(0))) {
			Memory__defrag();
		} else {
			k = Memory___asize;
			Memory___asize = Memory___asize+(size*8)+64;
			i = 0;
			j = Memory___arena+k;
			while (((i)<(j))) {
				i = i+1;
			}
			__poke(end+0, Memory___asize-k);
			__poke(Memory___arena+Memory___asize-1, 0);
		}
		tries = tries+1;
	}
	Output__printString(Memory__getString(Memory___str9));
	Output__println();
	Sys__error(26);
	return 0;
}
var Memory__log(var msg, var p, var q) {
	return 0;
	Output__printString(msg);
	Output__printInt(p);
	Output__printString(Memory__getString(Memory___str10));
	Output__printInt(q);
	Output__printString(Memory__getString(Memory___str11));
	Output__printInt(Memory___arena);
	Output__printString(Memory__getString(Memory___str12));
	Output__printInt(Memory___asize);
}
var Memory__deAlloc(var p) {
	var pi;
	p = p-1;
 #ifndef JACK_HACK
 	free(((var*)(p* sizeof(var)))-1);
 	return 0;
 #endif
	if (((p)<(Memory___arena))) {
		Output__printString(Memory__getString(Memory___str13));
		Output__printInt(Memory___arena);
		Output__printString(Memory__getString(Memory___str14));
		Output__printInt(p);
		Output__println();
		Sys__error(25);
		return 0;
	}

	pi = p;
	if ((((pi)<(Memory___arena)))||((((Memory___arena+Memory___asize))<(pi)))||(((__peek(Memory___mem+pi-1))>((-1))))) {
		Output__println();
		Output__printInt(Memory___arena);
		Output__printString(Memory__getString(Memory___str15));
		Output__printInt(pi);
		Output__printString(Memory__getString(Memory___str16));
		Output__printInt(Memory___asize);
		Output__println();
		return 0;
	}

	pi = pi-1;
	Memory__poke(pi, -Memory__peek(pi));
	return 0;
}
#endif

