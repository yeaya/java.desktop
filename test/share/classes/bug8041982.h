#ifndef _bug8041982_h_
#define _bug8041982_h_
//$ class bug8041982
//$ extends javax.swing.JFrame

#include <java/lang/Array.h>
#include <javax/swing/JFrame.h>

class $export bug8041982 : public ::javax::swing::JFrame {
	$class(bug8041982, $NO_CLASS_INIT, ::javax::swing::JFrame)
public:
	bug8041982();
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
};

#endif // _bug8041982_h_