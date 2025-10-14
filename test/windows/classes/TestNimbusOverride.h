#ifndef _TestNimbusOverride_h_
#define _TestNimbusOverride_h_
//$ class TestNimbusOverride
//$ extends javax.swing.JFrame

#include <java/lang/Array.h>
#include <javax/swing/JFrame.h>

class $export TestNimbusOverride : public ::javax::swing::JFrame {
	$class(TestNimbusOverride, 0, ::javax::swing::JFrame)
public:
	TestNimbusOverride();
	using ::javax::swing::JFrame::isFocusCycleRoot;
	using ::javax::swing::JFrame::add;
	using ::javax::swing::JFrame::getMousePosition;
	using ::javax::swing::JFrame::list;
	void init$();
	static void lambda$main$0();
	static void lambda$main$1();
	static void main($StringArray* args);
	using ::javax::swing::JFrame::remove;
	using ::javax::swing::JFrame::repaint;
	using ::javax::swing::JFrame::setCursor;
	using ::javax::swing::JFrame::show;
	static ::TestNimbusOverride* tf;
	static bool passed;
};

#endif // _TestNimbusOverride_h_