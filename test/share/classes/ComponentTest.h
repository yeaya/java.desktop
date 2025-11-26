#ifndef _ComponentTest_h_
#define _ComponentTest_h_
//$ class ComponentTest
//$ extends javax.swing.JFrame

#include <java/lang/Array.h>
#include <javax/swing/JFrame.h>

class $export ComponentTest : public ::javax::swing::JFrame {
	$class(ComponentTest, $NO_CLASS_INIT, ::javax::swing::JFrame)
public:
	ComponentTest();
	using ::javax::swing::JFrame::add;
	using ::javax::swing::JFrame::getMousePosition;
	void init$();
	using ::javax::swing::JFrame::isFocusCycleRoot;
	using ::javax::swing::JFrame::list;
	static void main($StringArray* args);
	using ::javax::swing::JFrame::remove;
	using ::javax::swing::JFrame::repaint;
	using ::javax::swing::JFrame::setCursor;
	using ::javax::swing::JFrame::show;
	static ::javax::swing::JFrame* frame;
};

#endif // _ComponentTest_h_