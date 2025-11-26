#ifndef _MenuItemIconTest_h_
#define _MenuItemIconTest_h_
//$ class MenuItemIconTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("IMAGE_WIDTH_AND_HEIGHT")
#undef IMAGE_WIDTH_AND_HEIGHT

namespace java {
	namespace awt {
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class ImageIcon;
		class JFrame;
		class JMenuItem;
	}
}

class $export MenuItemIconTest : public ::java::lang::Object {
	$class(MenuItemIconTest, 0, ::java::lang::Object)
public:
	MenuItemIconTest();
	void init$();
	static void checkPixeclColor(int32_t x, int32_t y);
	static ::javax::swing::ImageIcon* createIcon();
	static void createUI();
	static void executeTest();
	static void lambda$createUI$0();
	static void main($StringArray* args);
	static ::javax::swing::JFrame* frame;
	static ::java::awt::Robot* robot;
	static $String* errorMessage;
	static ::javax::swing::JMenuItem* menuItem;
	static const int32_t IMAGE_WIDTH_AND_HEIGHT = 25;
};

#pragma pop_macro("IMAGE_WIDTH_AND_HEIGHT")

#endif // _MenuItemIconTest_h_