#ifndef _PopupMenuTest_h_
#define _PopupMenuTest_h_
//$ class PopupMenuTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JPanel;
		class JPopupMenu;
	}
}

class $export PopupMenuTest : public ::java::lang::Object {
	$class(PopupMenuTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PopupMenuTest();
	void init$();
	void createUI();
	void dispose();
	void exectuteTest();
	void lambda$createUI$0();
	static void lambda$dispose$1();
	static void main($StringArray* s);
	::javax::swing::JPopupMenu* jpopup = nullptr;
	static $volatile(bool) isLightWeight;
	static ::javax::swing::JFrame* frame;
	static ::java::awt::Robot* robot;
	static ::javax::swing::JPanel* panel;
};

#endif // _PopupMenuTest_h_