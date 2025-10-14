#ifndef _IconifyTest_h_
#define _IconifyTest_h_
//$ class IconifyTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JButton;
		class JFrame;
	}
}

class $export IconifyTest : public ::java::lang::Object {
	$class(IconifyTest, 0, ::java::lang::Object)
public:
	IconifyTest();
	void init$();
	static void main($StringArray* args);
	static $volatile(bool) windowIconifiedIsCalled;
	static $volatile(bool) frameIsRepainted;
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JButton* button;
};

#endif // _IconifyTest_h_