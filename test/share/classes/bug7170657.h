#ifndef _bug7170657_h_
#define _bug7170657_h_
//$ class bug7170657
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("FAILED")
#undef FAILED

namespace java {
	namespace awt {
		class Frame;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}

class $export bug7170657 : public ::java::lang::Object {
	$class(bug7170657, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug7170657();
	void init$();
	static void fail(::java::awt::event::MouseEvent* exp, ::java::awt::event::MouseEvent* act);
	static void main($StringArray* args);
	static void test(::java::awt::Frame* frame, ::java::awt::event::MouseEvent* me);
	static bool FAILED;
};

#pragma pop_macro("FAILED")

#endif // _bug7170657_h_