#ifndef _ContextualMenuClearsTextSelectionTest_h_
#define _ContextualMenuClearsTextSelectionTest_h_
//$ class ContextualMenuClearsTextSelectionTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Point;
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JPopupMenu;
		class JTextField;
	}
}

class $export ContextualMenuClearsTextSelectionTest : public ::java::lang::Object {
	$class(ContextualMenuClearsTextSelectionTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ContextualMenuClearsTextSelectionTest();
	void init$();
	static void createAndShowGUI();
	static void createPopup(::javax::swing::JTextField* f);
	static void lambda$main$0();
	static void lambda$main$1();
	static void lambda$main$2();
	static void lambda$main$3();
	static void main($StringArray* args);
	static ::java::awt::Robot* robot;
	static ::java::awt::Point* p;
	static ::javax::swing::JTextField* textField;
	static ::javax::swing::JPopupMenu* popupMenu;
	static ::javax::swing::JFrame* frame;
	static bool isSelectionCleared;
};

#endif // _ContextualMenuClearsTextSelectionTest_h_