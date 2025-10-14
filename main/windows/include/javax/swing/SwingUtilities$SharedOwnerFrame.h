#ifndef _javax_swing_SwingUtilities$SharedOwnerFrame_h_
#define _javax_swing_SwingUtilities$SharedOwnerFrame_h_
//$ class javax.swing.SwingUtilities$SharedOwnerFrame
//$ extends java.awt.Frame
//$ implements java.awt.event.WindowListener

#include <java/awt/Frame.h>
#include <java/awt/event/WindowListener.h>

namespace java {
	namespace awt {
		namespace event {
			class WindowEvent;
		}
	}
}

namespace javax {
	namespace swing {

class $import SwingUtilities$SharedOwnerFrame : public ::java::awt::Frame, public ::java::awt::event::WindowListener {
	$class(SwingUtilities$SharedOwnerFrame, $NO_CLASS_INIT, ::java::awt::Frame, ::java::awt::event::WindowListener)
public:
	SwingUtilities$SharedOwnerFrame();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::awt::Frame::add;
	using ::java::awt::Frame::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void addNotify() override;
	virtual void dispose() override;
	virtual void installListeners();
	using ::java::awt::Frame::remove;
	using ::java::awt::Frame::setCursor;
	using ::java::awt::Frame::isFocusCycleRoot;
	using ::java::awt::Frame::list;
	using ::java::awt::Frame::show;
	virtual void show() override;
	virtual $String* toString() override;
	virtual void windowActivated(::java::awt::event::WindowEvent* e) override;
	virtual void windowClosed(::java::awt::event::WindowEvent* e) override;
	virtual void windowClosing(::java::awt::event::WindowEvent* e) override;
	virtual void windowDeactivated(::java::awt::event::WindowEvent* e) override;
	virtual void windowDeiconified(::java::awt::event::WindowEvent* e) override;
	virtual void windowIconified(::java::awt::event::WindowEvent* e) override;
	virtual void windowOpened(::java::awt::event::WindowEvent* e) override;
};

	} // swing
} // javax

#endif // _javax_swing_SwingUtilities$SharedOwnerFrame_h_