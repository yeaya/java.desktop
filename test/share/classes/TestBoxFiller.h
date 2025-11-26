#ifndef _TestBoxFiller_h_
#define _TestBoxFiller_h_
//$ class TestBoxFiller
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
	}
}

class $export TestBoxFiller : public ::java::lang::Object {
	$class(TestBoxFiller, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestBoxFiller();
	void init$();
	static void lambda$main$0();
	static void main($StringArray* args);
	static void showFocusOwner(::java::beans::PropertyChangeEvent* e);
	static ::javax::swing::JFrame* frame;
};

#endif // _TestBoxFiller_h_