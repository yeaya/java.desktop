#ifndef _DefaultButtonModelCrashTest_h_
#define _DefaultButtonModelCrashTest_h_
//$ class DefaultButtonModelCrashTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Point;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JPanel;
	}
}

class $export DefaultButtonModelCrashTest : public ::java::lang::Object {
	$class(DefaultButtonModelCrashTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DefaultButtonModelCrashTest();
	void init$();
	void go();
	void lambda$new$0();
	void lambda$new$1();
	static void main($StringArray* args);
	::javax::swing::JFrame* frame = nullptr;
	::javax::swing::JPanel* panel = nullptr;
	$volatile(::java::awt::Point*) p = nullptr;
};

#endif // _DefaultButtonModelCrashTest_h_