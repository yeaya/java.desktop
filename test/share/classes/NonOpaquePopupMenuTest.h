#ifndef _NonOpaquePopupMenuTest_h_
#define _NonOpaquePopupMenuTest_h_
//$ class NonOpaquePopupMenuTest
//$ extends javax.swing.JFrame

#include <java/lang/Array.h>
#include <javax/swing/JFrame.h>

#pragma push_macro("AQUALAF")
#undef AQUALAF

namespace java {
	namespace awt {
		class Point;
	}
}
namespace javax {
	namespace swing {
		class JMenu;
	}
}

class $export NonOpaquePopupMenuTest : public ::javax::swing::JFrame {
	$class(NonOpaquePopupMenuTest, 0, ::javax::swing::JFrame)
public:
	NonOpaquePopupMenuTest();
	using ::javax::swing::JFrame::add;
	using ::javax::swing::JFrame::getMousePosition;
	void init$();
	static ::java::awt::Point* getMenuClickPoint();
	using ::javax::swing::JFrame::isFocusCycleRoot;
	static bool isParentOpaque();
	using ::javax::swing::JFrame::list;
	static void main($StringArray* args);
	using ::javax::swing::JFrame::remove;
	using ::javax::swing::JFrame::repaint;
	using ::javax::swing::JFrame::setCursor;
	using ::javax::swing::JFrame::show;
	static ::javax::swing::JMenu* fileMenu;
	static $String* AQUALAF;
};

#pragma pop_macro("AQUALAF")

#endif // _NonOpaquePopupMenuTest_h_