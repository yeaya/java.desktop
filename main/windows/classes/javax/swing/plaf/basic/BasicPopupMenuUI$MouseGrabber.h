#ifndef _javax_swing_plaf_basic_BasicPopupMenuUI$MouseGrabber_h_
#define _javax_swing_plaf_basic_BasicPopupMenuUI$MouseGrabber_h_
//$ class javax.swing.plaf.basic.BasicPopupMenuUI$MouseGrabber
//$ extends javax.swing.event.ChangeListener
//$ implements java.awt.event.AWTEventListener,java.awt.event.ComponentListener,java.awt.event.WindowListener

#include <java/awt/event/AWTEventListener.h>
#include <java/awt/event/ComponentListener.h>
#include <java/awt/event/WindowListener.h>
#include <java/lang/Array.h>
#include <javax/swing/event/ChangeListener.h>

namespace java {
	namespace awt {
		class AWTEvent;
		class Component;
		class Window;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ComponentEvent;
			class WindowEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class MenuElement;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicPopupMenuUI$MouseGrabber : public ::javax::swing::event::ChangeListener, public ::java::awt::event::AWTEventListener, public ::java::awt::event::ComponentListener, public ::java::awt::event::WindowListener {
	$class(BasicPopupMenuUI$MouseGrabber, $NO_CLASS_INIT, ::javax::swing::event::ChangeListener, ::java::awt::event::AWTEventListener, ::java::awt::event::ComponentListener, ::java::awt::event::WindowListener)
public:
	BasicPopupMenuUI$MouseGrabber();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void cancelPopupMenu();
	virtual void componentHidden(::java::awt::event::ComponentEvent* e) override;
	virtual void componentMoved(::java::awt::event::ComponentEvent* e) override;
	virtual void componentResized(::java::awt::event::ComponentEvent* e) override;
	virtual void componentShown(::java::awt::event::ComponentEvent* e) override;
	virtual void eventDispatched(::java::awt::AWTEvent* ev) override;
	virtual void grabWindow($Array<::javax::swing::MenuElement>* newPath);
	virtual bool isInPopup(::java::awt::Component* src);
	virtual void realUngrabWindow();
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	virtual $String* toString() override;
	virtual void ungrabWindow();
	virtual void uninstall();
	virtual void windowActivated(::java::awt::event::WindowEvent* e) override;
	virtual void windowClosed(::java::awt::event::WindowEvent* e) override;
	virtual void windowClosing(::java::awt::event::WindowEvent* e) override;
	virtual void windowDeactivated(::java::awt::event::WindowEvent* e) override;
	virtual void windowDeiconified(::java::awt::event::WindowEvent* e) override;
	virtual void windowIconified(::java::awt::event::WindowEvent* e) override;
	virtual void windowOpened(::java::awt::event::WindowEvent* e) override;
	::java::awt::Window* grabbedWindow = nullptr;
	$Array<::javax::swing::MenuElement>* lastPathSelected = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicPopupMenuUI$MouseGrabber_h_