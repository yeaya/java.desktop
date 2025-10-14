#ifndef _Sysout4JFileChooserCombolistSelection_h_
#define _Sysout4JFileChooserCombolistSelection_h_
//$ class Sysout4JFileChooserCombolistSelection
//$ extends java.lang.Object

#include <java/lang/Array.h>

class TestDialog4Sysout;
namespace javax {
	namespace swing {
		class JFrame;
	}
}

class Sysout4JFileChooserCombolistSelection : public ::java::lang::Object {
	$class(Sysout4JFileChooserCombolistSelection, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Sysout4JFileChooserCombolistSelection();
	void init$();
	static void createDialogWithInstructions($StringArray* instructions);
	static void dispose();
	static void printInstructions($StringArray* instructions);
	static void println($String* messageIn);
	static ::TestDialog4Sysout* dialog;
	static ::javax::swing::JFrame* frame;
};

#endif // _Sysout4JFileChooserCombolistSelection_h_