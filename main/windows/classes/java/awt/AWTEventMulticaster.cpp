#include <java/awt/AWTEventMulticaster.h>

#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/AdjustmentEvent.h>
#include <java/awt/event/AdjustmentListener.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/ComponentListener.h>
#include <java/awt/event/ContainerEvent.h>
#include <java/awt/event/ContainerListener.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/FocusListener.h>
#include <java/awt/event/HierarchyBoundsListener.h>
#include <java/awt/event/HierarchyEvent.h>
#include <java/awt/event/HierarchyListener.h>
#include <java/awt/event/InputMethodEvent.h>
#include <java/awt/event/InputMethodListener.h>
#include <java/awt/event/ItemEvent.h>
#include <java/awt/event/ItemListener.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/KeyListener.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/awt/event/MouseWheelEvent.h>
#include <java/awt/event/MouseWheelListener.h>
#include <java/awt/event/TextEvent.h>
#include <java/awt/event/TextListener.h>
#include <java/awt/event/WindowEvent.h>
#include <java/awt/event/WindowFocusListener.h>
#include <java/awt/event/WindowListener.h>
#include <java/awt/event/WindowStateListener.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/reflect/Array.h>
#include <java/util/EventListener.h>
#include <jcpp.h>

using $EventListenerArray = $Array<::java::util::EventListener>;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $AdjustmentEvent = ::java::awt::event::AdjustmentEvent;
using $AdjustmentListener = ::java::awt::event::AdjustmentListener;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ComponentListener = ::java::awt::event::ComponentListener;
using $ContainerEvent = ::java::awt::event::ContainerEvent;
using $ContainerListener = ::java::awt::event::ContainerListener;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusListener = ::java::awt::event::FocusListener;
using $HierarchyBoundsListener = ::java::awt::event::HierarchyBoundsListener;
using $HierarchyEvent = ::java::awt::event::HierarchyEvent;
using $HierarchyListener = ::java::awt::event::HierarchyListener;
using $InputMethodEvent = ::java::awt::event::InputMethodEvent;
using $InputMethodListener = ::java::awt::event::InputMethodListener;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $ItemListener = ::java::awt::event::ItemListener;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $KeyListener = ::java::awt::event::KeyListener;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $MouseWheelEvent = ::java::awt::event::MouseWheelEvent;
using $MouseWheelListener = ::java::awt::event::MouseWheelListener;
using $TextEvent = ::java::awt::event::TextEvent;
using $TextListener = ::java::awt::event::TextListener;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $WindowFocusListener = ::java::awt::event::WindowFocusListener;
using $WindowListener = ::java::awt::event::WindowListener;
using $WindowStateListener = ::java::awt::event::WindowStateListener;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $1Array = ::java::lang::reflect::Array;
using $EventListener = ::java::util::EventListener;

namespace java {
	namespace awt {

$FieldInfo _AWTEventMulticaster_FieldInfo_[] = {
	{"a", "Ljava/util/EventListener;", nullptr, $PROTECTED | $FINAL, $field(AWTEventMulticaster, a)},
	{"b", "Ljava/util/EventListener;", nullptr, $PROTECTED | $FINAL, $field(AWTEventMulticaster, b)},
	{}
};

$MethodInfo _AWTEventMulticaster_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/EventListener;Ljava/util/EventListener;)V", nullptr, $PROTECTED, $method(static_cast<void(AWTEventMulticaster::*)($EventListener*,$EventListener*)>(&AWTEventMulticaster::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"add", "(Ljava/awt/event/ComponentListener;Ljava/awt/event/ComponentListener;)Ljava/awt/event/ComponentListener;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentListener*(*)($ComponentListener*,$ComponentListener*)>(&AWTEventMulticaster::add))},
	{"add", "(Ljava/awt/event/ContainerListener;Ljava/awt/event/ContainerListener;)Ljava/awt/event/ContainerListener;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ContainerListener*(*)($ContainerListener*,$ContainerListener*)>(&AWTEventMulticaster::add))},
	{"add", "(Ljava/awt/event/FocusListener;Ljava/awt/event/FocusListener;)Ljava/awt/event/FocusListener;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$FocusListener*(*)($FocusListener*,$FocusListener*)>(&AWTEventMulticaster::add))},
	{"add", "(Ljava/awt/event/KeyListener;Ljava/awt/event/KeyListener;)Ljava/awt/event/KeyListener;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$KeyListener*(*)($KeyListener*,$KeyListener*)>(&AWTEventMulticaster::add))},
	{"add", "(Ljava/awt/event/MouseListener;Ljava/awt/event/MouseListener;)Ljava/awt/event/MouseListener;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MouseListener*(*)($MouseListener*,$MouseListener*)>(&AWTEventMulticaster::add))},
	{"add", "(Ljava/awt/event/MouseMotionListener;Ljava/awt/event/MouseMotionListener;)Ljava/awt/event/MouseMotionListener;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MouseMotionListener*(*)($MouseMotionListener*,$MouseMotionListener*)>(&AWTEventMulticaster::add))},
	{"add", "(Ljava/awt/event/WindowListener;Ljava/awt/event/WindowListener;)Ljava/awt/event/WindowListener;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$WindowListener*(*)($WindowListener*,$WindowListener*)>(&AWTEventMulticaster::add))},
	{"add", "(Ljava/awt/event/WindowStateListener;Ljava/awt/event/WindowStateListener;)Ljava/awt/event/WindowStateListener;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$WindowStateListener*(*)($WindowStateListener*,$WindowStateListener*)>(&AWTEventMulticaster::add))},
	{"add", "(Ljava/awt/event/WindowFocusListener;Ljava/awt/event/WindowFocusListener;)Ljava/awt/event/WindowFocusListener;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$WindowFocusListener*(*)($WindowFocusListener*,$WindowFocusListener*)>(&AWTEventMulticaster::add))},
	{"add", "(Ljava/awt/event/ActionListener;Ljava/awt/event/ActionListener;)Ljava/awt/event/ActionListener;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ActionListener*(*)($ActionListener*,$ActionListener*)>(&AWTEventMulticaster::add))},
	{"add", "(Ljava/awt/event/ItemListener;Ljava/awt/event/ItemListener;)Ljava/awt/event/ItemListener;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ItemListener*(*)($ItemListener*,$ItemListener*)>(&AWTEventMulticaster::add))},
	{"add", "(Ljava/awt/event/AdjustmentListener;Ljava/awt/event/AdjustmentListener;)Ljava/awt/event/AdjustmentListener;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AdjustmentListener*(*)($AdjustmentListener*,$AdjustmentListener*)>(&AWTEventMulticaster::add))},
	{"add", "(Ljava/awt/event/TextListener;Ljava/awt/event/TextListener;)Ljava/awt/event/TextListener;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$TextListener*(*)($TextListener*,$TextListener*)>(&AWTEventMulticaster::add))},
	{"add", "(Ljava/awt/event/InputMethodListener;Ljava/awt/event/InputMethodListener;)Ljava/awt/event/InputMethodListener;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$InputMethodListener*(*)($InputMethodListener*,$InputMethodListener*)>(&AWTEventMulticaster::add))},
	{"add", "(Ljava/awt/event/HierarchyListener;Ljava/awt/event/HierarchyListener;)Ljava/awt/event/HierarchyListener;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$HierarchyListener*(*)($HierarchyListener*,$HierarchyListener*)>(&AWTEventMulticaster::add))},
	{"add", "(Ljava/awt/event/HierarchyBoundsListener;Ljava/awt/event/HierarchyBoundsListener;)Ljava/awt/event/HierarchyBoundsListener;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$HierarchyBoundsListener*(*)($HierarchyBoundsListener*,$HierarchyBoundsListener*)>(&AWTEventMulticaster::add))},
	{"add", "(Ljava/awt/event/MouseWheelListener;Ljava/awt/event/MouseWheelListener;)Ljava/awt/event/MouseWheelListener;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MouseWheelListener*(*)($MouseWheelListener*,$MouseWheelListener*)>(&AWTEventMulticaster::add))},
	{"addInternal", "(Ljava/util/EventListener;Ljava/util/EventListener;)Ljava/util/EventListener;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$EventListener*(*)($EventListener*,$EventListener*)>(&AWTEventMulticaster::addInternal))},
	{"adjustmentValueChanged", "(Ljava/awt/event/AdjustmentEvent;)V", nullptr, $PUBLIC},
	{"ancestorMoved", "(Ljava/awt/event/HierarchyEvent;)V", nullptr, $PUBLIC},
	{"ancestorResized", "(Ljava/awt/event/HierarchyEvent;)V", nullptr, $PUBLIC},
	{"caretPositionChanged", "(Ljava/awt/event/InputMethodEvent;)V", nullptr, $PUBLIC},
	{"componentAdded", "(Ljava/awt/event/ContainerEvent;)V", nullptr, $PUBLIC},
	{"componentHidden", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentMoved", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentRemoved", "(Ljava/awt/event/ContainerEvent;)V", nullptr, $PUBLIC},
	{"componentResized", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentShown", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"getListenerCount", "(Ljava/util/EventListener;Ljava/lang/Class;)I", "(Ljava/util/EventListener;Ljava/lang/Class<*>;)I", $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($EventListener*,$Class*)>(&AWTEventMulticaster::getListenerCount))},
	{"getListeners", "(Ljava/util/EventListener;Ljava/lang/Class;)[Ljava/util/EventListener;", "<T::Ljava/util/EventListener;>(Ljava/util/EventListener;Ljava/lang/Class<TT;>;)[TT;", $PUBLIC | $STATIC, $method(static_cast<$EventListenerArray*(*)($EventListener*,$Class*)>(&AWTEventMulticaster::getListeners))},
	{"hierarchyChanged", "(Ljava/awt/event/HierarchyEvent;)V", nullptr, $PUBLIC},
	{"inputMethodTextChanged", "(Ljava/awt/event/InputMethodEvent;)V", nullptr, $PUBLIC},
	{"itemStateChanged", "(Ljava/awt/event/ItemEvent;)V", nullptr, $PUBLIC},
	{"keyPressed", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{"keyReleased", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{"keyTyped", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseWheelMoved", "(Ljava/awt/event/MouseWheelEvent;)V", nullptr, $PUBLIC},
	{"populateListenerArray", "([Ljava/util/EventListener;Ljava/util/EventListener;I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($EventListenerArray*,$EventListener*,int32_t)>(&AWTEventMulticaster::populateListenerArray))},
	{"remove", "(Ljava/util/EventListener;)Ljava/util/EventListener;", nullptr, $PROTECTED},
	{"remove", "(Ljava/awt/event/ComponentListener;Ljava/awt/event/ComponentListener;)Ljava/awt/event/ComponentListener;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentListener*(*)($ComponentListener*,$ComponentListener*)>(&AWTEventMulticaster::remove))},
	{"remove", "(Ljava/awt/event/ContainerListener;Ljava/awt/event/ContainerListener;)Ljava/awt/event/ContainerListener;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ContainerListener*(*)($ContainerListener*,$ContainerListener*)>(&AWTEventMulticaster::remove))},
	{"remove", "(Ljava/awt/event/FocusListener;Ljava/awt/event/FocusListener;)Ljava/awt/event/FocusListener;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$FocusListener*(*)($FocusListener*,$FocusListener*)>(&AWTEventMulticaster::remove))},
	{"remove", "(Ljava/awt/event/KeyListener;Ljava/awt/event/KeyListener;)Ljava/awt/event/KeyListener;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$KeyListener*(*)($KeyListener*,$KeyListener*)>(&AWTEventMulticaster::remove))},
	{"remove", "(Ljava/awt/event/MouseListener;Ljava/awt/event/MouseListener;)Ljava/awt/event/MouseListener;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MouseListener*(*)($MouseListener*,$MouseListener*)>(&AWTEventMulticaster::remove))},
	{"remove", "(Ljava/awt/event/MouseMotionListener;Ljava/awt/event/MouseMotionListener;)Ljava/awt/event/MouseMotionListener;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MouseMotionListener*(*)($MouseMotionListener*,$MouseMotionListener*)>(&AWTEventMulticaster::remove))},
	{"remove", "(Ljava/awt/event/WindowListener;Ljava/awt/event/WindowListener;)Ljava/awt/event/WindowListener;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$WindowListener*(*)($WindowListener*,$WindowListener*)>(&AWTEventMulticaster::remove))},
	{"remove", "(Ljava/awt/event/WindowStateListener;Ljava/awt/event/WindowStateListener;)Ljava/awt/event/WindowStateListener;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$WindowStateListener*(*)($WindowStateListener*,$WindowStateListener*)>(&AWTEventMulticaster::remove))},
	{"remove", "(Ljava/awt/event/WindowFocusListener;Ljava/awt/event/WindowFocusListener;)Ljava/awt/event/WindowFocusListener;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$WindowFocusListener*(*)($WindowFocusListener*,$WindowFocusListener*)>(&AWTEventMulticaster::remove))},
	{"remove", "(Ljava/awt/event/ActionListener;Ljava/awt/event/ActionListener;)Ljava/awt/event/ActionListener;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ActionListener*(*)($ActionListener*,$ActionListener*)>(&AWTEventMulticaster::remove))},
	{"remove", "(Ljava/awt/event/ItemListener;Ljava/awt/event/ItemListener;)Ljava/awt/event/ItemListener;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ItemListener*(*)($ItemListener*,$ItemListener*)>(&AWTEventMulticaster::remove))},
	{"remove", "(Ljava/awt/event/AdjustmentListener;Ljava/awt/event/AdjustmentListener;)Ljava/awt/event/AdjustmentListener;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AdjustmentListener*(*)($AdjustmentListener*,$AdjustmentListener*)>(&AWTEventMulticaster::remove))},
	{"remove", "(Ljava/awt/event/TextListener;Ljava/awt/event/TextListener;)Ljava/awt/event/TextListener;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$TextListener*(*)($TextListener*,$TextListener*)>(&AWTEventMulticaster::remove))},
	{"remove", "(Ljava/awt/event/InputMethodListener;Ljava/awt/event/InputMethodListener;)Ljava/awt/event/InputMethodListener;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$InputMethodListener*(*)($InputMethodListener*,$InputMethodListener*)>(&AWTEventMulticaster::remove))},
	{"remove", "(Ljava/awt/event/HierarchyListener;Ljava/awt/event/HierarchyListener;)Ljava/awt/event/HierarchyListener;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$HierarchyListener*(*)($HierarchyListener*,$HierarchyListener*)>(&AWTEventMulticaster::remove))},
	{"remove", "(Ljava/awt/event/HierarchyBoundsListener;Ljava/awt/event/HierarchyBoundsListener;)Ljava/awt/event/HierarchyBoundsListener;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$HierarchyBoundsListener*(*)($HierarchyBoundsListener*,$HierarchyBoundsListener*)>(&AWTEventMulticaster::remove))},
	{"remove", "(Ljava/awt/event/MouseWheelListener;Ljava/awt/event/MouseWheelListener;)Ljava/awt/event/MouseWheelListener;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MouseWheelListener*(*)($MouseWheelListener*,$MouseWheelListener*)>(&AWTEventMulticaster::remove))},
	{"removeInternal", "(Ljava/util/EventListener;Ljava/util/EventListener;)Ljava/util/EventListener;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$EventListener*(*)($EventListener*,$EventListener*)>(&AWTEventMulticaster::removeInternal))},
	{"save", "(Ljava/io/ObjectOutputStream;Ljava/lang/String;Ljava/util/EventListener;)V", nullptr, $PROTECTED | $STATIC, $method(static_cast<void(*)($ObjectOutputStream*,$String*,$EventListener*)>(&AWTEventMulticaster::save)), "java.io.IOException"},
	{"saveInternal", "(Ljava/io/ObjectOutputStream;Ljava/lang/String;)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"textValueChanged", "(Ljava/awt/event/TextEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"windowActivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowClosed", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowDeactivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowDeiconified", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowGainedFocus", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowIconified", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowLostFocus", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowOpened", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowStateChanged", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AWTEventMulticaster_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.AWTEventMulticaster",
	"java.lang.Object",
	"java.awt.event.ComponentListener,java.awt.event.ContainerListener,java.awt.event.FocusListener,java.awt.event.KeyListener,java.awt.event.MouseListener,java.awt.event.MouseMotionListener,java.awt.event.WindowListener,java.awt.event.WindowFocusListener,java.awt.event.WindowStateListener,java.awt.event.ActionListener,java.awt.event.ItemListener,java.awt.event.AdjustmentListener,java.awt.event.TextListener,java.awt.event.InputMethodListener,java.awt.event.HierarchyListener,java.awt.event.HierarchyBoundsListener,java.awt.event.MouseWheelListener",
	_AWTEventMulticaster_FieldInfo_,
	_AWTEventMulticaster_MethodInfo_
};

$Object* allocate$AWTEventMulticaster($Class* clazz) {
	return $of($alloc(AWTEventMulticaster));
}

int32_t AWTEventMulticaster::hashCode() {
	 return this->$ComponentListener::hashCode();
}

bool AWTEventMulticaster::equals(Object$* arg0) {
	 return this->$ComponentListener::equals(arg0);
}

$Object* AWTEventMulticaster::clone() {
	 return this->$ComponentListener::clone();
}

$String* AWTEventMulticaster::toString() {
	 return this->$ComponentListener::toString();
}

void AWTEventMulticaster::finalize() {
	this->$ComponentListener::finalize();
}

void AWTEventMulticaster::init$($EventListener* a, $EventListener* b) {
	$set(this, a, a);
	$set(this, b, b);
}

$EventListener* AWTEventMulticaster::remove($EventListener* oldl) {
	$useLocalCurrentObjectStackCache();
	if (oldl == this->a) {
		return this->b;
	}
	if (oldl == this->b) {
		return this->a;
	}
	$var($EventListener, a2, removeInternal(this->a, oldl));
	$var($EventListener, b2, removeInternal(this->b, oldl));
	if (a2 == this->a && b2 == this->b) {
		return static_cast<$EventListener*>(static_cast<$ComponentListener*>(this));
	}
	return addInternal(a2, b2);
}

void AWTEventMulticaster::componentResized($ComponentEvent* e) {
	$nc(($cast($ComponentListener, this->a)))->componentResized(e);
	$nc(($cast($ComponentListener, this->b)))->componentResized(e);
}

void AWTEventMulticaster::componentMoved($ComponentEvent* e) {
	$nc(($cast($ComponentListener, this->a)))->componentMoved(e);
	$nc(($cast($ComponentListener, this->b)))->componentMoved(e);
}

void AWTEventMulticaster::componentShown($ComponentEvent* e) {
	$nc(($cast($ComponentListener, this->a)))->componentShown(e);
	$nc(($cast($ComponentListener, this->b)))->componentShown(e);
}

void AWTEventMulticaster::componentHidden($ComponentEvent* e) {
	$nc(($cast($ComponentListener, this->a)))->componentHidden(e);
	$nc(($cast($ComponentListener, this->b)))->componentHidden(e);
}

void AWTEventMulticaster::componentAdded($ContainerEvent* e) {
	$nc(($cast($ContainerListener, this->a)))->componentAdded(e);
	$nc(($cast($ContainerListener, this->b)))->componentAdded(e);
}

void AWTEventMulticaster::componentRemoved($ContainerEvent* e) {
	$nc(($cast($ContainerListener, this->a)))->componentRemoved(e);
	$nc(($cast($ContainerListener, this->b)))->componentRemoved(e);
}

void AWTEventMulticaster::focusGained($FocusEvent* e) {
	$nc(($cast($FocusListener, this->a)))->focusGained(e);
	$nc(($cast($FocusListener, this->b)))->focusGained(e);
}

void AWTEventMulticaster::focusLost($FocusEvent* e) {
	$nc(($cast($FocusListener, this->a)))->focusLost(e);
	$nc(($cast($FocusListener, this->b)))->focusLost(e);
}

void AWTEventMulticaster::keyTyped($KeyEvent* e) {
	$nc(($cast($KeyListener, this->a)))->keyTyped(e);
	$nc(($cast($KeyListener, this->b)))->keyTyped(e);
}

void AWTEventMulticaster::keyPressed($KeyEvent* e) {
	$nc(($cast($KeyListener, this->a)))->keyPressed(e);
	$nc(($cast($KeyListener, this->b)))->keyPressed(e);
}

void AWTEventMulticaster::keyReleased($KeyEvent* e) {
	$nc(($cast($KeyListener, this->a)))->keyReleased(e);
	$nc(($cast($KeyListener, this->b)))->keyReleased(e);
}

void AWTEventMulticaster::mouseClicked($MouseEvent* e) {
	$nc(($cast($MouseListener, this->a)))->mouseClicked(e);
	$nc(($cast($MouseListener, this->b)))->mouseClicked(e);
}

void AWTEventMulticaster::mousePressed($MouseEvent* e) {
	$nc(($cast($MouseListener, this->a)))->mousePressed(e);
	$nc(($cast($MouseListener, this->b)))->mousePressed(e);
}

void AWTEventMulticaster::mouseReleased($MouseEvent* e) {
	$nc(($cast($MouseListener, this->a)))->mouseReleased(e);
	$nc(($cast($MouseListener, this->b)))->mouseReleased(e);
}

void AWTEventMulticaster::mouseEntered($MouseEvent* e) {
	$nc(($cast($MouseListener, this->a)))->mouseEntered(e);
	$nc(($cast($MouseListener, this->b)))->mouseEntered(e);
}

void AWTEventMulticaster::mouseExited($MouseEvent* e) {
	$nc(($cast($MouseListener, this->a)))->mouseExited(e);
	$nc(($cast($MouseListener, this->b)))->mouseExited(e);
}

void AWTEventMulticaster::mouseDragged($MouseEvent* e) {
	$nc(($cast($MouseMotionListener, this->a)))->mouseDragged(e);
	$nc(($cast($MouseMotionListener, this->b)))->mouseDragged(e);
}

void AWTEventMulticaster::mouseMoved($MouseEvent* e) {
	$nc(($cast($MouseMotionListener, this->a)))->mouseMoved(e);
	$nc(($cast($MouseMotionListener, this->b)))->mouseMoved(e);
}

void AWTEventMulticaster::windowOpened($WindowEvent* e) {
	$nc(($cast($WindowListener, this->a)))->windowOpened(e);
	$nc(($cast($WindowListener, this->b)))->windowOpened(e);
}

void AWTEventMulticaster::windowClosing($WindowEvent* e) {
	$nc(($cast($WindowListener, this->a)))->windowClosing(e);
	$nc(($cast($WindowListener, this->b)))->windowClosing(e);
}

void AWTEventMulticaster::windowClosed($WindowEvent* e) {
	$nc(($cast($WindowListener, this->a)))->windowClosed(e);
	$nc(($cast($WindowListener, this->b)))->windowClosed(e);
}

void AWTEventMulticaster::windowIconified($WindowEvent* e) {
	$nc(($cast($WindowListener, this->a)))->windowIconified(e);
	$nc(($cast($WindowListener, this->b)))->windowIconified(e);
}

void AWTEventMulticaster::windowDeiconified($WindowEvent* e) {
	$nc(($cast($WindowListener, this->a)))->windowDeiconified(e);
	$nc(($cast($WindowListener, this->b)))->windowDeiconified(e);
}

void AWTEventMulticaster::windowActivated($WindowEvent* e) {
	$nc(($cast($WindowListener, this->a)))->windowActivated(e);
	$nc(($cast($WindowListener, this->b)))->windowActivated(e);
}

void AWTEventMulticaster::windowDeactivated($WindowEvent* e) {
	$nc(($cast($WindowListener, this->a)))->windowDeactivated(e);
	$nc(($cast($WindowListener, this->b)))->windowDeactivated(e);
}

void AWTEventMulticaster::windowStateChanged($WindowEvent* e) {
	$nc(($cast($WindowStateListener, this->a)))->windowStateChanged(e);
	$nc(($cast($WindowStateListener, this->b)))->windowStateChanged(e);
}

void AWTEventMulticaster::windowGainedFocus($WindowEvent* e) {
	$nc(($cast($WindowFocusListener, this->a)))->windowGainedFocus(e);
	$nc(($cast($WindowFocusListener, this->b)))->windowGainedFocus(e);
}

void AWTEventMulticaster::windowLostFocus($WindowEvent* e) {
	$nc(($cast($WindowFocusListener, this->a)))->windowLostFocus(e);
	$nc(($cast($WindowFocusListener, this->b)))->windowLostFocus(e);
}

void AWTEventMulticaster::actionPerformed($ActionEvent* e) {
	$nc(($cast($ActionListener, this->a)))->actionPerformed(e);
	$nc(($cast($ActionListener, this->b)))->actionPerformed(e);
}

void AWTEventMulticaster::itemStateChanged($ItemEvent* e) {
	$nc(($cast($ItemListener, this->a)))->itemStateChanged(e);
	$nc(($cast($ItemListener, this->b)))->itemStateChanged(e);
}

void AWTEventMulticaster::adjustmentValueChanged($AdjustmentEvent* e) {
	$nc(($cast($AdjustmentListener, this->a)))->adjustmentValueChanged(e);
	$nc(($cast($AdjustmentListener, this->b)))->adjustmentValueChanged(e);
}

void AWTEventMulticaster::textValueChanged($TextEvent* e) {
	$nc(($cast($TextListener, this->a)))->textValueChanged(e);
	$nc(($cast($TextListener, this->b)))->textValueChanged(e);
}

void AWTEventMulticaster::inputMethodTextChanged($InputMethodEvent* e) {
	$nc(($cast($InputMethodListener, this->a)))->inputMethodTextChanged(e);
	$nc(($cast($InputMethodListener, this->b)))->inputMethodTextChanged(e);
}

void AWTEventMulticaster::caretPositionChanged($InputMethodEvent* e) {
	$nc(($cast($InputMethodListener, this->a)))->caretPositionChanged(e);
	$nc(($cast($InputMethodListener, this->b)))->caretPositionChanged(e);
}

void AWTEventMulticaster::hierarchyChanged($HierarchyEvent* e) {
	$nc(($cast($HierarchyListener, this->a)))->hierarchyChanged(e);
	$nc(($cast($HierarchyListener, this->b)))->hierarchyChanged(e);
}

void AWTEventMulticaster::ancestorMoved($HierarchyEvent* e) {
	$nc(($cast($HierarchyBoundsListener, this->a)))->ancestorMoved(e);
	$nc(($cast($HierarchyBoundsListener, this->b)))->ancestorMoved(e);
}

void AWTEventMulticaster::ancestorResized($HierarchyEvent* e) {
	$nc(($cast($HierarchyBoundsListener, this->a)))->ancestorResized(e);
	$nc(($cast($HierarchyBoundsListener, this->b)))->ancestorResized(e);
}

void AWTEventMulticaster::mouseWheelMoved($MouseWheelEvent* e) {
	$nc(($cast($MouseWheelListener, this->a)))->mouseWheelMoved(e);
	$nc(($cast($MouseWheelListener, this->b)))->mouseWheelMoved(e);
}

$ComponentListener* AWTEventMulticaster::add($ComponentListener* a, $ComponentListener* b) {
	$init(AWTEventMulticaster);
	return $cast($ComponentListener, addInternal(a, b));
}

$ContainerListener* AWTEventMulticaster::add($ContainerListener* a, $ContainerListener* b) {
	$init(AWTEventMulticaster);
	return $cast($ContainerListener, addInternal(a, b));
}

$FocusListener* AWTEventMulticaster::add($FocusListener* a, $FocusListener* b) {
	$init(AWTEventMulticaster);
	return $cast($FocusListener, addInternal(a, b));
}

$KeyListener* AWTEventMulticaster::add($KeyListener* a, $KeyListener* b) {
	$init(AWTEventMulticaster);
	return $cast($KeyListener, addInternal(a, b));
}

$MouseListener* AWTEventMulticaster::add($MouseListener* a, $MouseListener* b) {
	$init(AWTEventMulticaster);
	return $cast($MouseListener, addInternal(a, b));
}

$MouseMotionListener* AWTEventMulticaster::add($MouseMotionListener* a, $MouseMotionListener* b) {
	$init(AWTEventMulticaster);
	return $cast($MouseMotionListener, addInternal(a, b));
}

$WindowListener* AWTEventMulticaster::add($WindowListener* a, $WindowListener* b) {
	$init(AWTEventMulticaster);
	return $cast($WindowListener, addInternal(a, b));
}

$WindowStateListener* AWTEventMulticaster::add($WindowStateListener* a, $WindowStateListener* b) {
	$init(AWTEventMulticaster);
	return $cast($WindowStateListener, addInternal(a, b));
}

$WindowFocusListener* AWTEventMulticaster::add($WindowFocusListener* a, $WindowFocusListener* b) {
	$init(AWTEventMulticaster);
	return $cast($WindowFocusListener, addInternal(a, b));
}

$ActionListener* AWTEventMulticaster::add($ActionListener* a, $ActionListener* b) {
	$init(AWTEventMulticaster);
	return $cast($ActionListener, addInternal(a, b));
}

$ItemListener* AWTEventMulticaster::add($ItemListener* a, $ItemListener* b) {
	$init(AWTEventMulticaster);
	return $cast($ItemListener, addInternal(a, b));
}

$AdjustmentListener* AWTEventMulticaster::add($AdjustmentListener* a, $AdjustmentListener* b) {
	$init(AWTEventMulticaster);
	return $cast($AdjustmentListener, addInternal(a, b));
}

$TextListener* AWTEventMulticaster::add($TextListener* a, $TextListener* b) {
	$init(AWTEventMulticaster);
	return $cast($TextListener, addInternal(a, b));
}

$InputMethodListener* AWTEventMulticaster::add($InputMethodListener* a, $InputMethodListener* b) {
	$init(AWTEventMulticaster);
	return $cast($InputMethodListener, addInternal(a, b));
}

$HierarchyListener* AWTEventMulticaster::add($HierarchyListener* a, $HierarchyListener* b) {
	$init(AWTEventMulticaster);
	return $cast($HierarchyListener, addInternal(a, b));
}

$HierarchyBoundsListener* AWTEventMulticaster::add($HierarchyBoundsListener* a, $HierarchyBoundsListener* b) {
	$init(AWTEventMulticaster);
	return $cast($HierarchyBoundsListener, addInternal(a, b));
}

$MouseWheelListener* AWTEventMulticaster::add($MouseWheelListener* a, $MouseWheelListener* b) {
	$init(AWTEventMulticaster);
	return $cast($MouseWheelListener, addInternal(a, b));
}

$ComponentListener* AWTEventMulticaster::remove($ComponentListener* l, $ComponentListener* oldl) {
	$init(AWTEventMulticaster);
	return $cast($ComponentListener, removeInternal(l, oldl));
}

$ContainerListener* AWTEventMulticaster::remove($ContainerListener* l, $ContainerListener* oldl) {
	$init(AWTEventMulticaster);
	return $cast($ContainerListener, removeInternal(l, oldl));
}

$FocusListener* AWTEventMulticaster::remove($FocusListener* l, $FocusListener* oldl) {
	$init(AWTEventMulticaster);
	return $cast($FocusListener, removeInternal(l, oldl));
}

$KeyListener* AWTEventMulticaster::remove($KeyListener* l, $KeyListener* oldl) {
	$init(AWTEventMulticaster);
	return $cast($KeyListener, removeInternal(l, oldl));
}

$MouseListener* AWTEventMulticaster::remove($MouseListener* l, $MouseListener* oldl) {
	$init(AWTEventMulticaster);
	return $cast($MouseListener, removeInternal(l, oldl));
}

$MouseMotionListener* AWTEventMulticaster::remove($MouseMotionListener* l, $MouseMotionListener* oldl) {
	$init(AWTEventMulticaster);
	return $cast($MouseMotionListener, removeInternal(l, oldl));
}

$WindowListener* AWTEventMulticaster::remove($WindowListener* l, $WindowListener* oldl) {
	$init(AWTEventMulticaster);
	return $cast($WindowListener, removeInternal(l, oldl));
}

$WindowStateListener* AWTEventMulticaster::remove($WindowStateListener* l, $WindowStateListener* oldl) {
	$init(AWTEventMulticaster);
	return $cast($WindowStateListener, removeInternal(l, oldl));
}

$WindowFocusListener* AWTEventMulticaster::remove($WindowFocusListener* l, $WindowFocusListener* oldl) {
	$init(AWTEventMulticaster);
	return $cast($WindowFocusListener, removeInternal(l, oldl));
}

$ActionListener* AWTEventMulticaster::remove($ActionListener* l, $ActionListener* oldl) {
	$init(AWTEventMulticaster);
	return $cast($ActionListener, removeInternal(l, oldl));
}

$ItemListener* AWTEventMulticaster::remove($ItemListener* l, $ItemListener* oldl) {
	$init(AWTEventMulticaster);
	return $cast($ItemListener, removeInternal(l, oldl));
}

$AdjustmentListener* AWTEventMulticaster::remove($AdjustmentListener* l, $AdjustmentListener* oldl) {
	$init(AWTEventMulticaster);
	return $cast($AdjustmentListener, removeInternal(l, oldl));
}

$TextListener* AWTEventMulticaster::remove($TextListener* l, $TextListener* oldl) {
	$init(AWTEventMulticaster);
	return $cast($TextListener, removeInternal(l, oldl));
}

$InputMethodListener* AWTEventMulticaster::remove($InputMethodListener* l, $InputMethodListener* oldl) {
	$init(AWTEventMulticaster);
	return $cast($InputMethodListener, removeInternal(l, oldl));
}

$HierarchyListener* AWTEventMulticaster::remove($HierarchyListener* l, $HierarchyListener* oldl) {
	$init(AWTEventMulticaster);
	return $cast($HierarchyListener, removeInternal(l, oldl));
}

$HierarchyBoundsListener* AWTEventMulticaster::remove($HierarchyBoundsListener* l, $HierarchyBoundsListener* oldl) {
	$init(AWTEventMulticaster);
	return $cast($HierarchyBoundsListener, removeInternal(l, oldl));
}

$MouseWheelListener* AWTEventMulticaster::remove($MouseWheelListener* l, $MouseWheelListener* oldl) {
	$init(AWTEventMulticaster);
	return $cast($MouseWheelListener, removeInternal(l, oldl));
}

$EventListener* AWTEventMulticaster::addInternal($EventListener* a, $EventListener* b) {
	$init(AWTEventMulticaster);
	if (a == nullptr) {
		return b;
	}
	if (b == nullptr) {
		return a;
	}
	return static_cast<$EventListener*>(static_cast<$ComponentListener*>($new(AWTEventMulticaster, a, b)));
}

$EventListener* AWTEventMulticaster::removeInternal($EventListener* l, $EventListener* oldl) {
	$init(AWTEventMulticaster);
	if (l == oldl || l == nullptr) {
		return nullptr;
	} else if ($instanceOf(AWTEventMulticaster, l)) {
		return $nc(($cast(AWTEventMulticaster, l)))->remove(oldl);
	} else {
		return l;
	}
}

void AWTEventMulticaster::saveInternal($ObjectOutputStream* s, $String* k) {
	if ($instanceOf(AWTEventMulticaster, this->a)) {
		$nc(($cast(AWTEventMulticaster, this->a)))->saveInternal(s, k);
	} else if ($instanceOf($Serializable, this->a)) {
		$nc(s)->writeObject(k);
		s->writeObject(this->a);
	}
	if ($instanceOf(AWTEventMulticaster, this->b)) {
		$nc(($cast(AWTEventMulticaster, this->b)))->saveInternal(s, k);
	} else if ($instanceOf($Serializable, this->b)) {
		$nc(s)->writeObject(k);
		s->writeObject(this->b);
	}
}

void AWTEventMulticaster::save($ObjectOutputStream* s, $String* k, $EventListener* l) {
	$init(AWTEventMulticaster);
	if (l == nullptr) {
		return;
	} else if ($instanceOf(AWTEventMulticaster, l)) {
		$nc(($cast(AWTEventMulticaster, l)))->saveInternal(s, k);
	} else if ($instanceOf($Serializable, l)) {
		$nc(s)->writeObject(k);
		s->writeObject(l);
	}
}

int32_t AWTEventMulticaster::getListenerCount($EventListener* l, $Class* listenerType) {
	$init(AWTEventMulticaster);
	if ($instanceOf(AWTEventMulticaster, l)) {
		$var(AWTEventMulticaster, mc, $cast(AWTEventMulticaster, l));
		int32_t var$0 = getListenerCount($nc(mc)->a, listenerType);
		return var$0 + getListenerCount($nc(mc)->b, listenerType);
	} else {
		return $nc(listenerType)->isInstance(l) ? 1 : 0;
	}
}

int32_t AWTEventMulticaster::populateListenerArray($EventListenerArray* a, $EventListener* l, int32_t index) {
	$init(AWTEventMulticaster);
	if ($instanceOf(AWTEventMulticaster, l)) {
		$var(AWTEventMulticaster, mc, $cast(AWTEventMulticaster, l));
		int32_t lhs = populateListenerArray(a, $nc(mc)->a, index);
		return populateListenerArray(a, $nc(mc)->b, lhs);
	} else if ($nc($nc($of(a))->getClass()->getComponentType())->isInstance(l)) {
		a->set(index, l);
		return index + 1;
	} else {
		return index;
	}
}

$EventListenerArray* AWTEventMulticaster::getListeners($EventListener* l, $Class* listenerType) {
	$init(AWTEventMulticaster);
	if (listenerType == nullptr) {
		$throwNew($NullPointerException, "Listener type should not be null"_s);
	}
	int32_t n = getListenerCount(l, listenerType);
	$var($EventListenerArray, result, $cast($EventListenerArray, $1Array::newInstance(listenerType, n)));
	populateListenerArray(result, l, 0);
	return result;
}

AWTEventMulticaster::AWTEventMulticaster() {
}

$Class* AWTEventMulticaster::load$($String* name, bool initialize) {
	$loadClass(AWTEventMulticaster, name, initialize, &_AWTEventMulticaster_ClassInfo_, allocate$AWTEventMulticaster);
	return class$;
}

$Class* AWTEventMulticaster::class$ = nullptr;

	} // awt
} // java