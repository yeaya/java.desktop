#ifndef _bug5012888_h_
#define _bug5012888_h_
//$ class bug5012888
//$ extends javax.swing.JFrame

#include <java/lang/Array.h>
#include <javax/swing/JFrame.h>

namespace javax {
	namespace swing {
		class JSpinner;
	}
}

class $export bug5012888 : public ::javax::swing::JFrame {
	$class(bug5012888, $NO_CLASS_INIT, ::javax::swing::JFrame)
public:
	bug5012888();
	using ::javax::swing::JFrame::add;
	using ::javax::swing::JFrame::getMousePosition;
	void init$();
	virtual void doTest();
	using ::javax::swing::JFrame::isFocusCycleRoot;
	using ::javax::swing::JFrame::list;
	static void main($StringArray* argv);
	using ::javax::swing::JFrame::remove;
	using ::javax::swing::JFrame::repaint;
	using ::javax::swing::JFrame::setCursor;
	using ::javax::swing::JFrame::show;
	::javax::swing::JSpinner* spinner1 = nullptr;
	::javax::swing::JSpinner* spinner2 = nullptr;
};

#endif // _bug5012888_h_