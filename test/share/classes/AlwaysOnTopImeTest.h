#ifndef _AlwaysOnTopImeTest_h_
#define _AlwaysOnTopImeTest_h_
//$ class AlwaysOnTopImeTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JDialog;
		class JFrame;
	}
}

class $export AlwaysOnTopImeTest : public ::java::lang::Object {
	$class(AlwaysOnTopImeTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AlwaysOnTopImeTest();
	void init$();
	static void lambda$main$0();
	static void lambda$main$1();
	static void main($StringArray* args);
	static ::javax::swing::JDialog* d;
	static ::javax::swing::JFrame* f;
};

#endif // _AlwaysOnTopImeTest_h_