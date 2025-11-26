#ifndef _HiddenDefaultButtonTest_h_
#define _HiddenDefaultButtonTest_h_
//$ class HiddenDefaultButtonTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JFrame;
	}
}

class $export HiddenDefaultButtonTest : public ::java::lang::Object {
	$class(HiddenDefaultButtonTest, 0, ::java::lang::Object)
public:
	HiddenDefaultButtonTest();
	void init$();
	static void createGUI();
	static void disposeTestUI();
	static void lambda$disposeTestUI$0();
	static void main($StringArray* args);
	static void test();
	static int32_t ButtonClickCount;
	static ::javax::swing::JFrame* frame;
};

#endif // _HiddenDefaultButtonTest_h_