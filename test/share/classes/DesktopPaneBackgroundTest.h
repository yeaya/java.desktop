#ifndef _DesktopPaneBackgroundTest_h_
#define _DesktopPaneBackgroundTest_h_
//$ class DesktopPaneBackgroundTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Color;
	}
}

class $export DesktopPaneBackgroundTest : public ::java::lang::Object {
	$class(DesktopPaneBackgroundTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DesktopPaneBackgroundTest();
	void init$();
	static void lambda$main$0();
	static void main($StringArray* args);
	static ::java::awt::Color* defaultBackgroudColor;
};

#endif // _DesktopPaneBackgroundTest_h_