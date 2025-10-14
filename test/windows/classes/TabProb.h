#ifndef _TabProb_h_
#define _TabProb_h_
//$ class TabProb
//$ extends javax.swing.JFrame

#include <java/lang/Array.h>
#include <javax/swing/JFrame.h>

class $export TabProb : public ::javax::swing::JFrame {
	$class(TabProb, $NO_CLASS_INIT, ::javax::swing::JFrame)
public:
	TabProb();
	using ::javax::swing::JFrame::add;
	using ::javax::swing::JFrame::getMousePosition;
	void init$(int32_t layoutPolicy);
	using ::javax::swing::JFrame::isFocusCycleRoot;
	static void lambda$test$0();
	static void lambda$test$1();
	using ::javax::swing::JFrame::list;
	static void main($StringArray* args);
	using ::javax::swing::JFrame::remove;
	using ::javax::swing::JFrame::repaint;
	using ::javax::swing::JFrame::setCursor;
	using ::javax::swing::JFrame::show;
	static void test();
	static ::TabProb* tb1;
	static ::TabProb* tb2;
};

#endif // _TabProb_h_