#ifndef _ActionListenerExceptionTest_h_
#define _ActionListenerExceptionTest_h_
//$ class ActionListenerExceptionTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TOTAL_MENU_ITEMS")
#undef TOTAL_MENU_ITEMS

namespace java {
	namespace awt {
		class Dimension;
		class Point;
	}
}
namespace javax {
	namespace swing {
		class JComboBox;
		class JFrame;
	}
}

class $export ActionListenerExceptionTest : public ::java::lang::Object {
	$class(ActionListenerExceptionTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ActionListenerExceptionTest();
	void init$();
	void createGUI();
	void disposeGUI();
	int32_t getCount();
	static void main($StringArray* args);
	void test();
	static const int32_t TOTAL_MENU_ITEMS = 3;
	$volatile(int32_t) count = 0;
	::javax::swing::JFrame* frame = nullptr;
	::javax::swing::JComboBox* combo = nullptr;
	int32_t menuItemHeight = 0;
	int32_t yPos = 0;
	::java::awt::Point* cbPos = nullptr;
	::java::awt::Dimension* cbSize = nullptr;
};

#pragma pop_macro("TOTAL_MENU_ITEMS")

#endif // _ActionListenerExceptionTest_h_