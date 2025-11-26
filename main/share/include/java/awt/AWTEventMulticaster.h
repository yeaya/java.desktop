#ifndef _java_awt_AWTEventMulticaster_h_
#define _java_awt_AWTEventMulticaster_h_
//$ class java.awt.AWTEventMulticaster
//$ extends java.awt.event.ComponentListener
//$ implements java.awt.event.ContainerListener,java.awt.event.FocusListener,java.awt.event.KeyListener,java.awt.event.MouseListener,java.awt.event.MouseMotionListener,java.awt.event.WindowListener,java.awt.event.WindowFocusListener,java.awt.event.WindowStateListener,java.awt.event.ActionListener,java.awt.event.ItemListener,java.awt.event.AdjustmentListener,java.awt.event.TextListener,java.awt.event.InputMethodListener,java.awt.event.HierarchyListener,java.awt.event.HierarchyBoundsListener,java.awt.event.MouseWheelListener

#include <java/awt/event/ActionListener.h>
#include <java/awt/event/AdjustmentListener.h>
#include <java/awt/event/ComponentListener.h>
#include <java/awt/event/ContainerListener.h>
#include <java/awt/event/FocusListener.h>
#include <java/awt/event/HierarchyBoundsListener.h>
#include <java/awt/event/HierarchyListener.h>
#include <java/awt/event/InputMethodListener.h>
#include <java/awt/event/ItemListener.h>
#include <java/awt/event/KeyListener.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/awt/event/MouseWheelListener.h>
#include <java/awt/event/TextListener.h>
#include <java/awt/event/WindowFocusListener.h>
#include <java/awt/event/WindowListener.h>
#include <java/awt/event/WindowStateListener.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
			class AdjustmentEvent;
			class ComponentEvent;
			class ContainerEvent;
			class FocusEvent;
			class HierarchyEvent;
			class InputMethodEvent;
			class ItemEvent;
			class KeyEvent;
			class MouseEvent;
			class MouseWheelEvent;
			class TextEvent;
			class WindowEvent;
		}
	}
}
namespace java {
	namespace io {
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class EventListener;
	}
}

namespace java {
	namespace awt {

class $import AWTEventMulticaster : public ::java::awt::event::ComponentListener, public ::java::awt::event::ContainerListener, public ::java::awt::event::FocusListener, public ::java::awt::event::KeyListener, public ::java::awt::event::MouseListener, public ::java::awt::event::MouseMotionListener, public ::java::awt::event::WindowListener, public ::java::awt::event::WindowFocusListener, public ::java::awt::event::WindowStateListener, public ::java::awt::event::ActionListener, public ::java::awt::event::ItemListener, public ::java::awt::event::AdjustmentListener, public ::java::awt::event::TextListener, public ::java::awt::event::InputMethodListener, public ::java::awt::event::HierarchyListener, public ::java::awt::event::HierarchyBoundsListener, public ::java::awt::event::MouseWheelListener {
	$class(AWTEventMulticaster, $NO_CLASS_INIT, ::java::awt::event::ComponentListener, ::java::awt::event::ContainerListener, ::java::awt::event::FocusListener, ::java::awt::event::KeyListener, ::java::awt::event::MouseListener, ::java::awt::event::MouseMotionListener, ::java::awt::event::WindowListener, ::java::awt::event::WindowFocusListener, ::java::awt::event::WindowStateListener, ::java::awt::event::ActionListener, ::java::awt::event::ItemListener, ::java::awt::event::AdjustmentListener, ::java::awt::event::TextListener, ::java::awt::event::InputMethodListener, ::java::awt::event::HierarchyListener, ::java::awt::event::HierarchyBoundsListener, ::java::awt::event::MouseWheelListener)
public:
	AWTEventMulticaster();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::EventListener* a, ::java::util::EventListener* b);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	static ::java::awt::event::ComponentListener* add(::java::awt::event::ComponentListener* a, ::java::awt::event::ComponentListener* b);
	static ::java::awt::event::ContainerListener* add(::java::awt::event::ContainerListener* a, ::java::awt::event::ContainerListener* b);
	static ::java::awt::event::FocusListener* add(::java::awt::event::FocusListener* a, ::java::awt::event::FocusListener* b);
	static ::java::awt::event::KeyListener* add(::java::awt::event::KeyListener* a, ::java::awt::event::KeyListener* b);
	static ::java::awt::event::MouseListener* add(::java::awt::event::MouseListener* a, ::java::awt::event::MouseListener* b);
	static ::java::awt::event::MouseMotionListener* add(::java::awt::event::MouseMotionListener* a, ::java::awt::event::MouseMotionListener* b);
	static ::java::awt::event::WindowListener* add(::java::awt::event::WindowListener* a, ::java::awt::event::WindowListener* b);
	static ::java::awt::event::WindowStateListener* add(::java::awt::event::WindowStateListener* a, ::java::awt::event::WindowStateListener* b);
	static ::java::awt::event::WindowFocusListener* add(::java::awt::event::WindowFocusListener* a, ::java::awt::event::WindowFocusListener* b);
	static ::java::awt::event::ActionListener* add(::java::awt::event::ActionListener* a, ::java::awt::event::ActionListener* b);
	static ::java::awt::event::ItemListener* add(::java::awt::event::ItemListener* a, ::java::awt::event::ItemListener* b);
	static ::java::awt::event::AdjustmentListener* add(::java::awt::event::AdjustmentListener* a, ::java::awt::event::AdjustmentListener* b);
	static ::java::awt::event::TextListener* add(::java::awt::event::TextListener* a, ::java::awt::event::TextListener* b);
	static ::java::awt::event::InputMethodListener* add(::java::awt::event::InputMethodListener* a, ::java::awt::event::InputMethodListener* b);
	static ::java::awt::event::HierarchyListener* add(::java::awt::event::HierarchyListener* a, ::java::awt::event::HierarchyListener* b);
	static ::java::awt::event::HierarchyBoundsListener* add(::java::awt::event::HierarchyBoundsListener* a, ::java::awt::event::HierarchyBoundsListener* b);
	static ::java::awt::event::MouseWheelListener* add(::java::awt::event::MouseWheelListener* a, ::java::awt::event::MouseWheelListener* b);
	static ::java::util::EventListener* addInternal(::java::util::EventListener* a, ::java::util::EventListener* b);
	virtual void adjustmentValueChanged(::java::awt::event::AdjustmentEvent* e) override;
	virtual void ancestorMoved(::java::awt::event::HierarchyEvent* e) override;
	virtual void ancestorResized(::java::awt::event::HierarchyEvent* e) override;
	virtual void caretPositionChanged(::java::awt::event::InputMethodEvent* e) override;
	virtual void componentAdded(::java::awt::event::ContainerEvent* e) override;
	virtual void componentHidden(::java::awt::event::ComponentEvent* e) override;
	virtual void componentMoved(::java::awt::event::ComponentEvent* e) override;
	virtual void componentRemoved(::java::awt::event::ContainerEvent* e) override;
	virtual void componentResized(::java::awt::event::ComponentEvent* e) override;
	virtual void componentShown(::java::awt::event::ComponentEvent* e) override;
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	static int32_t getListenerCount(::java::util::EventListener* l, $Class* listenerType);
	static $Array<::java::util::EventListener>* getListeners(::java::util::EventListener* l, $Class* listenerType);
	virtual void hierarchyChanged(::java::awt::event::HierarchyEvent* e) override;
	virtual void inputMethodTextChanged(::java::awt::event::InputMethodEvent* e) override;
	virtual void itemStateChanged(::java::awt::event::ItemEvent* e) override;
	virtual void keyPressed(::java::awt::event::KeyEvent* e) override;
	virtual void keyReleased(::java::awt::event::KeyEvent* e) override;
	virtual void keyTyped(::java::awt::event::KeyEvent* e) override;
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	virtual void mouseDragged(::java::awt::event::MouseEvent* e) override;
	virtual void mouseEntered(::java::awt::event::MouseEvent* e) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* e) override;
	virtual void mouseMoved(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	virtual void mouseWheelMoved(::java::awt::event::MouseWheelEvent* e) override;
	static int32_t populateListenerArray($Array<::java::util::EventListener>* a, ::java::util::EventListener* l, int32_t index);
	virtual ::java::util::EventListener* remove(::java::util::EventListener* oldl);
	static ::java::awt::event::ComponentListener* remove(::java::awt::event::ComponentListener* l, ::java::awt::event::ComponentListener* oldl);
	static ::java::awt::event::ContainerListener* remove(::java::awt::event::ContainerListener* l, ::java::awt::event::ContainerListener* oldl);
	static ::java::awt::event::FocusListener* remove(::java::awt::event::FocusListener* l, ::java::awt::event::FocusListener* oldl);
	static ::java::awt::event::KeyListener* remove(::java::awt::event::KeyListener* l, ::java::awt::event::KeyListener* oldl);
	static ::java::awt::event::MouseListener* remove(::java::awt::event::MouseListener* l, ::java::awt::event::MouseListener* oldl);
	static ::java::awt::event::MouseMotionListener* remove(::java::awt::event::MouseMotionListener* l, ::java::awt::event::MouseMotionListener* oldl);
	static ::java::awt::event::WindowListener* remove(::java::awt::event::WindowListener* l, ::java::awt::event::WindowListener* oldl);
	static ::java::awt::event::WindowStateListener* remove(::java::awt::event::WindowStateListener* l, ::java::awt::event::WindowStateListener* oldl);
	static ::java::awt::event::WindowFocusListener* remove(::java::awt::event::WindowFocusListener* l, ::java::awt::event::WindowFocusListener* oldl);
	static ::java::awt::event::ActionListener* remove(::java::awt::event::ActionListener* l, ::java::awt::event::ActionListener* oldl);
	static ::java::awt::event::ItemListener* remove(::java::awt::event::ItemListener* l, ::java::awt::event::ItemListener* oldl);
	static ::java::awt::event::AdjustmentListener* remove(::java::awt::event::AdjustmentListener* l, ::java::awt::event::AdjustmentListener* oldl);
	static ::java::awt::event::TextListener* remove(::java::awt::event::TextListener* l, ::java::awt::event::TextListener* oldl);
	static ::java::awt::event::InputMethodListener* remove(::java::awt::event::InputMethodListener* l, ::java::awt::event::InputMethodListener* oldl);
	static ::java::awt::event::HierarchyListener* remove(::java::awt::event::HierarchyListener* l, ::java::awt::event::HierarchyListener* oldl);
	static ::java::awt::event::HierarchyBoundsListener* remove(::java::awt::event::HierarchyBoundsListener* l, ::java::awt::event::HierarchyBoundsListener* oldl);
	static ::java::awt::event::MouseWheelListener* remove(::java::awt::event::MouseWheelListener* l, ::java::awt::event::MouseWheelListener* oldl);
	static ::java::util::EventListener* removeInternal(::java::util::EventListener* l, ::java::util::EventListener* oldl);
	static void save(::java::io::ObjectOutputStream* s, $String* k, ::java::util::EventListener* l);
	virtual void saveInternal(::java::io::ObjectOutputStream* s, $String* k);
	virtual void textValueChanged(::java::awt::event::TextEvent* e) override;
	virtual $String* toString() override;
	virtual void windowActivated(::java::awt::event::WindowEvent* e) override;
	virtual void windowClosed(::java::awt::event::WindowEvent* e) override;
	virtual void windowClosing(::java::awt::event::WindowEvent* e) override;
	virtual void windowDeactivated(::java::awt::event::WindowEvent* e) override;
	virtual void windowDeiconified(::java::awt::event::WindowEvent* e) override;
	virtual void windowGainedFocus(::java::awt::event::WindowEvent* e) override;
	virtual void windowIconified(::java::awt::event::WindowEvent* e) override;
	virtual void windowLostFocus(::java::awt::event::WindowEvent* e) override;
	virtual void windowOpened(::java::awt::event::WindowEvent* e) override;
	virtual void windowStateChanged(::java::awt::event::WindowEvent* e) override;
	::java::util::EventListener* a = nullptr;
	::java::util::EventListener* b = nullptr;
};

	} // awt
} // java

#endif // _java_awt_AWTEventMulticaster_h_