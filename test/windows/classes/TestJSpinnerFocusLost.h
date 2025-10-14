#ifndef _TestJSpinnerFocusLost_h_
#define _TestJSpinnerFocusLost_h_
//$ class TestJSpinnerFocusLost
//$ extends javax.swing.JFrame
//$ implements javax.swing.event.ChangeListener,java.awt.event.FocusListener

#include <java/awt/event/FocusListener.h>
#include <java/lang/Array.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/event/ChangeListener.h>

namespace java {
	namespace awt {
		class Component;
		class Point;
		class Rectangle;
		class Robot;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JSpinner;
		class UIManager$LookAndFeelInfo;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
		}
	}
}

class $export TestJSpinnerFocusLost : public ::javax::swing::JFrame, public ::javax::swing::event::ChangeListener, public ::java::awt::event::FocusListener {
	$class(TestJSpinnerFocusLost, $NO_CLASS_INIT, ::javax::swing::JFrame, ::javax::swing::event::ChangeListener, ::java::awt::event::FocusListener)
public:
	TestJSpinnerFocusLost();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::JFrame::add;
	using ::javax::swing::JFrame::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	static void blockTillDisplayed(::java::awt::Component* comp);
	virtual void doTest();
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	using ::javax::swing::JFrame::isFocusCycleRoot;
	void lambda$doTest$0();
	void lambda$doTest$1();
	static void lambda$main$2(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static void lambda$main$3();
	static void lambda$main$4();
	using ::javax::swing::JFrame::list;
	static void main($StringArray* argv);
	using ::javax::swing::JFrame::remove;
	using ::javax::swing::JFrame::repaint;
	using ::javax::swing::JFrame::setCursor;
	static void setLookAndFeel(::javax::swing::UIManager$LookAndFeelInfo* laf);
	using ::javax::swing::JFrame::show;
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	virtual $String* toString() override;
	::javax::swing::JSpinner* spinner = nullptr;
	bool spinnerGainedFocus = false;
	bool spinnerLostFocus = false;
	static ::TestJSpinnerFocusLost* b;
	::java::awt::Point* p = nullptr;
	::java::awt::Rectangle* rect = nullptr;
	static ::java::awt::Robot* robot;
	bool changing = false;
};

#endif // _TestJSpinnerFocusLost_h_