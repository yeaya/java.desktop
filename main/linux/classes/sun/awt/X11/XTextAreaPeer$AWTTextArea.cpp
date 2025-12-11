#include <sun/awt/X11/XTextAreaPeer$AWTTextArea.h>

#include <com/sun/java/swing/plaf/motif/MotifTextAreaUI.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/InputMethodEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/TextEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/plaf/basic/BasicTextAreaUI.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/awt/AWTAccessor$ClientPropertyKeyAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/X11/XTextAreaPeer$AWTTextAreaUI.h>
#include <sun/awt/X11/XTextAreaPeer.h>
#include <sun/awt/X11/XWindow.h>
#include <jcpp.h>

#undef TEXT_VALUE_CHANGED

using $MotifTextAreaUI = ::com::sun::java::swing::plaf::motif::MotifTextAreaUI;
using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $InputMethodEvent = ::java::awt::event::InputMethodEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $TextEvent = ::java::awt::event::TextEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JTextArea = ::javax::swing::JTextArea;
using $TransferHandler = ::javax::swing::TransferHandler;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TextUI = ::javax::swing::plaf::TextUI;
using $BasicTextAreaUI = ::javax::swing::plaf::basic::BasicTextAreaUI;
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ClientPropertyKeyAccessor = ::sun::awt::AWTAccessor$ClientPropertyKeyAccessor;
using $XTextAreaPeer = ::sun::awt::X11::XTextAreaPeer;
using $XTextAreaPeer$AWTTextAreaUI = ::sun::awt::X11::XTextAreaPeer$AWTTextAreaUI;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XTextAreaPeer$AWTTextArea_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XTextAreaPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XTextAreaPeer$AWTTextArea, this$0)},
	{"isFocused", "Z", nullptr, $PRIVATE, $field(XTextAreaPeer$AWTTextArea, isFocused)},
	{"peer", "Lsun/awt/X11/XTextAreaPeer;", nullptr, $PRIVATE | $FINAL, $field(XTextAreaPeer$AWTTextArea, peer)},
	{}
};

$MethodInfo _XTextAreaPeer$AWTTextArea_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/awt/X11/XTextAreaPeer;Ljava/lang/String;Lsun/awt/X11/XTextAreaPeer;)V", nullptr, 0, $method(static_cast<void(XTextAreaPeer$AWTTextArea::*)($XTextAreaPeer*,$String*,$XTextAreaPeer*)>(&XTextAreaPeer$AWTTextArea::init$))},
	{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC},
	{"forwardFocusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, 0, $method(static_cast<void(XTextAreaPeer$AWTTextArea::*)($FocusEvent*)>(&XTextAreaPeer$AWTTextArea::forwardFocusGained))},
	{"forwardFocusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, 0, $method(static_cast<void(XTextAreaPeer$AWTTextArea::*)($FocusEvent*)>(&XTextAreaPeer$AWTTextArea::forwardFocusLost))},
	{"hasFocus", "()Z", nullptr, $PUBLIC},
	{"insertUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC},
	{"processInputMethodEventPublic", "(Ljava/awt/event/InputMethodEvent;)V", nullptr, $PUBLIC, $method(static_cast<void(XTextAreaPeer$AWTTextArea::*)($InputMethodEvent*)>(&XTextAreaPeer$AWTTextArea::processInputMethodEventPublic))},
	{"processMouseEventPublic", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $method(static_cast<void(XTextAreaPeer$AWTTextArea::*)($MouseEvent*)>(&XTextAreaPeer$AWTTextArea::processMouseEventPublic))},
	{"processMouseMotionEventPublic", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $method(static_cast<void(XTextAreaPeer$AWTTextArea::*)($MouseEvent*)>(&XTextAreaPeer$AWTTextArea::processMouseMotionEventPublic))},
	{"removeUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC},
	{"repaintNow", "()V", nullptr, $PUBLIC, $method(static_cast<void(XTextAreaPeer$AWTTextArea::*)()>(&XTextAreaPeer$AWTTextArea::repaintNow))},
	{"setTransferHandler", "(Ljavax/swing/TransferHandler;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateUI", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XTextAreaPeer$AWTTextArea_InnerClassesInfo_[] = {
	{"sun.awt.X11.XTextAreaPeer$AWTTextArea", "sun.awt.X11.XTextAreaPeer", "AWTTextArea", $FINAL},
	{}
};

$ClassInfo _XTextAreaPeer$AWTTextArea_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.X11.XTextAreaPeer$AWTTextArea",
	"javax.swing.JTextArea",
	"javax.swing.event.DocumentListener",
	_XTextAreaPeer$AWTTextArea_FieldInfo_,
	_XTextAreaPeer$AWTTextArea_MethodInfo_,
	nullptr,
	nullptr,
	_XTextAreaPeer$AWTTextArea_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XTextAreaPeer"
};

$Object* allocate$XTextAreaPeer$AWTTextArea($Class* clazz) {
	return $of($alloc(XTextAreaPeer$AWTTextArea));
}

$String* XTextAreaPeer$AWTTextArea::toString() {
	 return this->$JTextArea::toString();
}

int32_t XTextAreaPeer$AWTTextArea::hashCode() {
	 return this->$JTextArea::hashCode();
}

bool XTextAreaPeer$AWTTextArea::equals(Object$* arg0) {
	 return this->$JTextArea::equals(arg0);
}

$Object* XTextAreaPeer$AWTTextArea::clone() {
	 return this->$JTextArea::clone();
}

void XTextAreaPeer$AWTTextArea::finalize() {
	this->$JTextArea::finalize();
}

void XTextAreaPeer$AWTTextArea::init$($XTextAreaPeer* this$0, $String* text, $XTextAreaPeer* peer) {
	$set(this, this$0, this$0);
	$JTextArea::init$(text);
	this->isFocused = false;
	setFocusable(false);
	$set(this, peer, peer);
}

void XTextAreaPeer$AWTTextArea::insertUpdate($DocumentEvent* e) {
	if (this->peer != nullptr) {
		$nc(this->peer)->postEvent($$new($TextEvent, $nc(this->peer)->target, $TextEvent::TEXT_VALUE_CHANGED));
	}
}

void XTextAreaPeer$AWTTextArea::removeUpdate($DocumentEvent* e) {
	if (this->peer != nullptr) {
		$nc(this->peer)->postEvent($$new($TextEvent, $nc(this->peer)->target, $TextEvent::TEXT_VALUE_CHANGED));
	}
}

void XTextAreaPeer$AWTTextArea::changedUpdate($DocumentEvent* e) {
	if (this->peer != nullptr) {
		$nc(this->peer)->postEvent($$new($TextEvent, $nc(this->peer)->target, $TextEvent::TEXT_VALUE_CHANGED));
	}
}

void XTextAreaPeer$AWTTextArea::forwardFocusGained($FocusEvent* e) {
	$useLocalCurrentObjectStackCache();
	this->isFocused = true;
	int32_t var$0 = $nc(e)->getID();
	bool var$1 = e->isTemporary();
	$var($Component, var$2, e->getOppositeComponent());
	$var($FocusEvent, fe, $new($FocusEvent, this, var$0, var$1, var$2, $(e->getCause())));
	$JTextArea::processFocusEvent(fe);
}

void XTextAreaPeer$AWTTextArea::forwardFocusLost($FocusEvent* e) {
	$useLocalCurrentObjectStackCache();
	this->isFocused = false;
	int32_t var$0 = $nc(e)->getID();
	bool var$1 = e->isTemporary();
	$var($Component, var$2, e->getOppositeComponent());
	$var($FocusEvent, fe, $new($FocusEvent, this, var$0, var$1, var$2, $(e->getCause())));
	$JTextArea::processFocusEvent(fe);
}

bool XTextAreaPeer$AWTTextArea::hasFocus() {
	return this->isFocused;
}

void XTextAreaPeer$AWTTextArea::repaintNow() {
	paintImmediately($(getBounds()));
}

void XTextAreaPeer$AWTTextArea::processMouseEventPublic($MouseEvent* e) {
	processMouseEvent(e);
}

void XTextAreaPeer$AWTTextArea::processMouseMotionEventPublic($MouseEvent* e) {
	processMouseMotionEvent(e);
}

void XTextAreaPeer$AWTTextArea::processInputMethodEventPublic($InputMethodEvent* e) {
	processInputMethodEvent(e);
}

void XTextAreaPeer$AWTTextArea::updateUI() {
	$var($ComponentUI, ui, $new($XTextAreaPeer$AWTTextAreaUI, this->this$0));
	setUI(ui);
}

void XTextAreaPeer$AWTTextArea::setTransferHandler($TransferHandler* newHandler) {
	$useLocalCurrentObjectStackCache();
	$var($Object, key, $nc($($AWTAccessor::getClientPropertyKeyAccessor()))->getJComponent_TRANSFER_HANDLER());
	$var($Object, oldHandler, getClientProperty(key));
	putClientProperty(key, newHandler);
	firePropertyChange("transferHandler"_s, oldHandler, $of(newHandler));
}

XTextAreaPeer$AWTTextArea::XTextAreaPeer$AWTTextArea() {
}

$Class* XTextAreaPeer$AWTTextArea::load$($String* name, bool initialize) {
	$loadClass(XTextAreaPeer$AWTTextArea, name, initialize, &_XTextAreaPeer$AWTTextArea_ClassInfo_, allocate$XTextAreaPeer$AWTTextArea);
	return class$;
}

$Class* XTextAreaPeer$AWTTextArea::class$ = nullptr;

		} // X11
	} // awt
} // sun