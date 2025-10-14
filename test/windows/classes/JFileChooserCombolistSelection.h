#ifndef _JFileChooserCombolistSelection_h_
#define _JFileChooserCombolistSelection_h_
//$ class JFileChooserCombolistSelection
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Thread;
	}
}
namespace javax {
	namespace swing {
		class JFileChooser;
	}
}

class $export JFileChooserCombolistSelection : public ::java::lang::Object {
	$class(JFileChooserCombolistSelection, 0, ::java::lang::Object)
public:
	JFileChooserCombolistSelection();
	void init$();
	static void fail();
	static void init();
	static void main($StringArray* args);
	static void pass();
	static bool theTestPassed;
	static bool testGeneratedInterrupt;
	static $Thread* mainThread;
	static int32_t sleepTime;
	static ::javax::swing::JFileChooser* fileChooser;
};

#endif // _JFileChooserCombolistSelection_h_