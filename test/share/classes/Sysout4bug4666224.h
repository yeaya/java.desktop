#ifndef _Sysout4bug4666224_h_
#define _Sysout4bug4666224_h_
//$ class Sysout4bug4666224
//$ extends java.lang.Object

#include <java/lang/Array.h>

class TestDialog4bug4666224;

class Sysout4bug4666224 : public ::java::lang::Object {
	$class(Sysout4bug4666224, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Sysout4bug4666224();
	void init$();
	static void createDialog();
	static void createDialogWithInstructions($StringArray* instructions);
	static bool failStatus();
	static $String* getFailureMessages();
	static void printInstructions($StringArray* instructions);
	static void println($String* messageIn);
	static void setInstructionsWithExceptions($Array<::java::lang::String, 2>* instructionsSet, $StringArray* exceptionsSet);
	static ::TestDialog4bug4666224* dialog;
};

#endif // _Sysout4bug4666224_h_