#ifndef _OptionPaneTest_h_
#define _OptionPaneTest_h_
//$ class OptionPaneTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JDialog;
	}
}

class $export OptionPaneTest : public ::java::lang::Object {
	$class(OptionPaneTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	OptionPaneTest();
	void init$();
	static void main($StringArray* args);
	static $volatile(bool) testFailed;
	static ::javax::swing::JDialog* dialog;
	static ::java::awt::Robot* robot;
};

#endif // _OptionPaneTest_h_