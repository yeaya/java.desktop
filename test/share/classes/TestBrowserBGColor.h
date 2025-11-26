#ifndef _TestBrowserBGColor_h_
#define _TestBrowserBGColor_h_
//$ class TestBrowserBGColor
//$ extends javax.swing.JFrame
//$ implements javax.swing.event.HyperlinkListener

#include <java/lang/Array.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/event/HyperlinkListener.h>

namespace java {
	namespace awt {
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JEditorPane;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class HyperlinkEvent;
		}
	}
}

class $export TestBrowserBGColor : public ::javax::swing::JFrame, public ::javax::swing::event::HyperlinkListener {
	$class(TestBrowserBGColor, $NO_CLASS_INIT, ::javax::swing::JFrame, ::javax::swing::event::HyperlinkListener)
public:
	TestBrowserBGColor();
	using ::javax::swing::JFrame::add;
	using ::javax::swing::JFrame::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void hyperlinkUpdate(::javax::swing::event::HyperlinkEvent* e) override;
	using ::javax::swing::JFrame::isFocusCycleRoot;
	static void lambda$main$0();
	static void lambda$main$1(::java::awt::Robot* r);
	using ::javax::swing::JFrame::list;
	static void main($StringArray* args);
	using ::javax::swing::JFrame::remove;
	using ::javax::swing::JFrame::repaint;
	using ::javax::swing::JFrame::setCursor;
	using ::javax::swing::JFrame::show;
	virtual $String* toString() override;
	static ::TestBrowserBGColor* b;
	static ::javax::swing::JEditorPane* browser;
	$String* htmlDoc = nullptr;
};

#endif // _TestBrowserBGColor_h_