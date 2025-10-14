#ifndef _CloseOnMouseClickPropertyTest_h_
#define _CloseOnMouseClickPropertyTest_h_
//$ class CloseOnMouseClickPropertyTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CHECK_BOX_PROP")
#undef CHECK_BOX_PROP
#pragma push_macro("RADIO_BUTTON_PROP")
#undef RADIO_BUTTON_PROP
#pragma push_macro("TEST_ITEMS")
#undef TEST_ITEMS

class CloseOnMouseClickPropertyTest$TestItem;
namespace java {
	namespace awt {
		class Point;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JMenu;
	}
}

class $export CloseOnMouseClickPropertyTest : public ::java::lang::Object {
	$class(CloseOnMouseClickPropertyTest, 0, ::java::lang::Object)
public:
	CloseOnMouseClickPropertyTest();
	void init$();
	static void createAndShowGUI(::CloseOnMouseClickPropertyTest$TestItem* testItem);
	static ::java::awt::Point* getClickPoint(bool parent);
	static void lambda$getClickPoint$2(bool parent, $Array<::java::awt::Point>* points);
	static void lambda$test$0(::CloseOnMouseClickPropertyTest$TestItem* item);
	static void lambda$test$1(::CloseOnMouseClickPropertyTest$TestItem* item);
	static void main($StringArray* args);
	static void test(::CloseOnMouseClickPropertyTest$TestItem* item);
	static $String* CHECK_BOX_PROP;
	static $String* RADIO_BUTTON_PROP;
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JMenu* menu;
	static $Array<CloseOnMouseClickPropertyTest$TestItem>* TEST_ITEMS;
};

#pragma pop_macro("CHECK_BOX_PROP")
#pragma pop_macro("RADIO_BUTTON_PROP")
#pragma pop_macro("TEST_ITEMS")

#endif // _CloseOnMouseClickPropertyTest_h_