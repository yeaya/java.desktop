#ifndef _DefaultButtonTest_h_
#define _DefaultButtonTest_h_
//$ class DefaultButtonTest
//$ extends javax.swing.JFrame
//$ implements java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>
#include <java/lang/Array.h>
#include <javax/swing/JFrame.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

class $export DefaultButtonTest : public ::javax::swing::JFrame, public ::java::awt::event::ActionListener {
	$class(DefaultButtonTest, 0, ::javax::swing::JFrame, ::java::awt::event::ActionListener)
public:
	DefaultButtonTest();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::JFrame::isFocusCycleRoot;
	using ::javax::swing::JFrame::add;
	using ::javax::swing::JFrame::getMousePosition;
	using ::javax::swing::JFrame::list;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* evt) override;
	static void main($StringArray* args);
	using ::javax::swing::JFrame::remove;
	using ::javax::swing::JFrame::repaint;
	using ::javax::swing::JFrame::setCursor;
	using ::javax::swing::JFrame::show;
	static void test();
	static void testDefaultButton(bool flag);
	static void testEditChange(bool flag);
	virtual $String* toString() override;
	static bool defaultButtonPressed;
	static bool editChanged;
	static $StringArray* strData;
	static $StringArray* strData2;
};

#endif // _DefaultButtonTest_h_