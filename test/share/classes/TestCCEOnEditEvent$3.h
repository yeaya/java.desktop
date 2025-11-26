#ifndef _TestCCEOnEditEvent$3_h_
#define _TestCCEOnEditEvent$3_h_
//$ class TestCCEOnEditEvent$3
//$ extends javax.swing.JTextArea

#include <javax/swing/JTextArea.h>

class TestCCEOnEditEvent;
namespace javax {
	namespace swing {
		namespace text {
			class Document;
		}
	}
}

class TestCCEOnEditEvent$3 : public ::javax::swing::JTextArea {
	$class(TestCCEOnEditEvent$3, $NO_CLASS_INIT, ::javax::swing::JTextArea)
public:
	TestCCEOnEditEvent$3();
	using ::javax::swing::JTextArea::getToolTipText;
	using ::javax::swing::JTextArea::contains;
	using ::javax::swing::JTextArea::enable;
	using ::javax::swing::JTextArea::getBounds;
	using ::javax::swing::JTextArea::getSize;
	using ::javax::swing::JTextArea::getLocation;
	using ::javax::swing::JTextArea::firePropertyChange;
	using ::javax::swing::JTextArea::add;
	using ::javax::swing::JTextArea::getMousePosition;
	void init$(::TestCCEOnEditEvent* this$0, $String* arg0);
	virtual ::javax::swing::text::Document* createDefaultModel() override;
	using ::javax::swing::JTextArea::setUI;
	using ::javax::swing::JTextArea::print;
	using ::javax::swing::JTextArea::requestFocus;
	using ::javax::swing::JTextArea::requestFocusInWindow;
	using ::javax::swing::JTextArea::repaint;
	using ::javax::swing::JTextArea::remove;
	using ::javax::swing::JTextArea::list;
	::TestCCEOnEditEvent* this$0 = nullptr;
};

#endif // _TestCCEOnEditEvent$3_h_