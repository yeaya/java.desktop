#ifndef _Sysout_h_
#define _Sysout_h_
//$ class Sysout
//$ extends java.lang.Object

#include <java/lang/Array.h>

class TestDialog4bug8037575;
namespace javax {
	namespace swing {
		class JFrame;
	}
}

class Sysout : public ::java::lang::Object {
	$class(Sysout, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Sysout();
	void init$();
	static void createDialogWithInstructions($StringArray* instructions);
	static void dispose();
	static void printInstructions($StringArray* instructions);
	static void println($String* messageIn);
	static ::TestDialog4bug8037575* dialog;
	static ::javax::swing::JFrame* frame;
};

#endif // _Sysout_h_