#ifndef _Sysout4FileChooserTest_h_
#define _Sysout4FileChooserTest_h_
//$ class Sysout4FileChooserTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

class TestDialog4FileChooserTest;
namespace javax {
	namespace swing {
		class JFrame;
	}
}

class Sysout4FileChooserTest : public ::java::lang::Object {
	$class(Sysout4FileChooserTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Sysout4FileChooserTest();
	void init$();
	static void createDialogWithInstructions($StringArray* instructions);
	static void dispose();
	static void printInstructions($StringArray* instructions);
	static void println($String* messageIn);
	static ::TestDialog4FileChooserTest* dialog;
	static ::javax::swing::JFrame* frame;
};

#endif // _Sysout4FileChooserTest_h_