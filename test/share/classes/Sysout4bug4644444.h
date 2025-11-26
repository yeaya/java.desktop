#ifndef _Sysout4bug4644444_h_
#define _Sysout4bug4644444_h_
//$ class Sysout4bug4644444
//$ extends java.lang.Object

#include <java/lang/Array.h>

class TestDialog4bug4644444;

class Sysout4bug4644444 : public ::java::lang::Object {
	$class(Sysout4bug4644444, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Sysout4bug4644444();
	void init$();
	static void createDialog();
	static void createDialogWithInstructions($StringArray* instructions);
	static bool failStatus();
	static $String* getFailureMessages();
	static void printInstructions($StringArray* instructions);
	static void println($String* messageIn);
	static void setInstructionsWithExceptions($Array<::java::lang::String, 2>* instructionsSet, $StringArray* exceptionsSet);
	static ::TestDialog4bug4644444* dialog;
};

#endif // _Sysout4bug4644444_h_