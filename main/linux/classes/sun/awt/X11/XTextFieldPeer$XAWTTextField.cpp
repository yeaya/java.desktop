#include <sun/awt/X11/XTextFieldPeer$XAWTTextField.h>

#include <com/sun/java/swing/plaf/motif/MotifPasswordFieldUI.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/InputMethodEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/TextEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPasswordField.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/plaf/basic/BasicPasswordFieldUI.h>
#include <javax/swing/plaf/basic/BasicTextFieldUI.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/awt/AWTAccessor$ClientPropertyKeyAccessor.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/X11/XComponentPeer.h>
#include <sun/awt/X11/XTextFieldPeer$AWTTextFieldUI.h>
#include <sun/awt/X11/XTextFieldPeer.h>
#include <jcpp.h>

#undef ACTION_PERFORMED
#undef TEXT_VALUE_CHANGED

using $MotifPasswordFieldUI = ::com::sun::java::swing::plaf::motif::MotifPasswordFieldUI;
using $AWTEvent = ::java::awt::AWTEvent;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $InputMethodEvent = ::java::awt::event::InputMethodEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $TextEvent = ::java::awt::event::TextEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JPasswordField = ::javax::swing::JPasswordField;
using $JTextField = ::javax::swing::JTextField;
using $TransferHandler = ::javax::swing::TransferHandler;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $DocumentListener = ::javax::swing::event::DocumentListener;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TextUI = ::javax::swing::plaf::TextUI;
using $BasicPasswordFieldUI = ::javax::swing::plaf::basic::BasicPasswordFieldUI;
using $BasicTextFieldUI = ::javax::swing::plaf::basic::BasicTextFieldUI;
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ClientPropertyKeyAccessor = ::sun::awt::AWTAccessor$ClientPropertyKeyAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $XComponentPeer = ::sun::awt::X11::XComponentPeer;
using $XTextFieldPeer = ::sun::awt::X11::XTextFieldPeer;
using $XTextFieldPeer$AWTTextFieldUI = ::sun::awt::X11::XTextFieldPeer$AWTTextFieldUI;
using $XWindow = ::sun::awt::X11::XWindow;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XTextFieldPeer$XAWTTextField_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XTextFieldPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XTextFieldPeer$XAWTTextField, this$0)},
	{"isFocused", "Z", nullptr, $PRIVATE, $field(XTextFieldPeer$XAWTTextField, isFocused)},
	{"xwin", "Lsun/awt/X11/XComponentPeer;", nullptr, $PRIVATE | $FINAL, $field(XTextFieldPeer$XAWTTextField, xwin)},
	{}
};

$MethodInfo _XTextFieldPeer$XAWTTextField_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/awt/X11/XTextFieldPeer;Ljava/lang/String;Lsun/awt/X11/XComponentPeer;Ljava/awt/Container;)V", nullptr, 0, $method(static_cast<void(XTextFieldPeer$XAWTTextField::*)($XTextFieldPeer*,$String*,$XComponentPeer*,$Container*)>(&XTextFieldPeer$XAWTTextField::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC},
	{"forwardFocusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, 0, $method(static_cast<void(XTextFieldPeer$XAWTTextField::*)($FocusEvent*)>(&XTextFieldPeer$XAWTTextField::forwardFocusGained))},
	{"forwardFocusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, 0, $method(static_cast<void(XTextFieldPeer$XAWTTextField::*)($FocusEvent*)>(&XTextFieldPeer$XAWTTextField::forwardFocusLost))},
	{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"hasFocus", "()Z", nullptr, $PUBLIC},
	{"insertUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC},
	{"processInputMethodEventImpl", "(Ljava/awt/event/InputMethodEvent;)V", nullptr, $PUBLIC, $method(static_cast<void(XTextFieldPeer$XAWTTextField::*)($InputMethodEvent*)>(&XTextFieldPeer$XAWTTextField::processInputMethodEventImpl))},
	{"processMouseEventImpl", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $method(static_cast<void(XTextFieldPeer$XAWTTextField::*)($MouseEvent*)>(&XTextFieldPeer$XAWTTextField::processMouseEventImpl))},
	{"processMouseMotionEventImpl", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $method(static_cast<void(XTextFieldPeer$XAWTTextField::*)($MouseEvent*)>(&XTextFieldPeer$XAWTTextField::processMouseMotionEventImpl))},
	{"removeUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC},
	{"repaintNow", "()V", nullptr, $PUBLIC, $method(static_cast<void(XTextFieldPeer$XAWTTextField::*)()>(&XTextFieldPeer$XAWTTextField::repaintNow))},
	{"setEchoChar", "(C)V", nullptr, $PUBLIC},
	{"setTransferHandler", "(Ljavax/swing/TransferHandler;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateUI", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XTextFieldPeer$XAWTTextField_InnerClassesInfo_[] = {
	{"sun.awt.X11.XTextFieldPeer$XAWTTextField", "sun.awt.X11.XTextFieldPeer", "XAWTTextField", $FINAL},
	{}
};

$ClassInfo _XTextFieldPeer$XAWTTextField_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.X11.XTextFieldPeer$XAWTTextField",
	"javax.swing.JPasswordField",
	"java.awt.event.ActionListener,javax.swing.event.DocumentListener",
	_XTextFieldPeer$XAWTTextField_FieldInfo_,
	_XTextFieldPeer$XAWTTextField_MethodInfo_,
	nullptr,
	nullptr,
	_XTextFieldPeer$XAWTTextField_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XTextFieldPeer"
};

$Object* allocate$XTextFieldPeer$XAWTTextField($Class* clazz) {
	return $of($alloc(XTextFieldPeer$XAWTTextField));
}

$String* XTextFieldPeer$XAWTTextField::toString() {
	 return this->$JPasswordField::toString();
}

int32_t XTextFieldPeer$XAWTTextField::hashCode() {
	 return this->$JPasswordField::hashCode();
}

bool XTextFieldPeer$XAWTTextField::equals(Object$* arg0) {
	 return this->$JPasswordField::equals(arg0);
}

$Object* XTextFieldPeer$XAWTTextField::clone() {
	 return this->$JPasswordField::clone();
}

void XTextFieldPeer$XAWTTextField::finalize() {
	this->$JPasswordField::finalize();
}

void XTextFieldPeer$XAWTTextField::init$($XTextFieldPeer* this$0, $String* text, $XComponentPeer* xwin, $Container* parent) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$JPasswordField::init$(text);
	this->isFocused = false;
	$set(this, xwin, xwin);
	setDoubleBuffered(true);
	setFocusable(false);
	$nc($($AWTAccessor::getComponentAccessor()))->setParent(this, parent);
	setBackground($($nc(xwin)->getPeerBackground()));
	setForeground($($nc(xwin)->getPeerForeground()));
	setFont($($nc(xwin)->getPeerFont()));
	setCaretPosition(0);
	addActionListener(this);
	addNotify();
}

void XTextFieldPeer$XAWTTextField::actionPerformed($ActionEvent* actionEvent) {
	$useLocalCurrentObjectStackCache();
	$var($Object, var$0, $of($nc(this->xwin)->target));
	$var($String, var$1, getText());
	int64_t var$2 = $nc(actionEvent)->getWhen();
	$nc(this->xwin)->postEvent($$new($ActionEvent, var$0, $ActionEvent::ACTION_PERFORMED, var$1, var$2, actionEvent->getModifiers()));
}

void XTextFieldPeer$XAWTTextField::insertUpdate($DocumentEvent* e) {
	if (this->xwin != nullptr) {
		$nc(this->xwin)->postEvent($$new($TextEvent, $nc(this->xwin)->target, $TextEvent::TEXT_VALUE_CHANGED));
	}
}

void XTextFieldPeer$XAWTTextField::removeUpdate($DocumentEvent* e) {
	if (this->xwin != nullptr) {
		$nc(this->xwin)->postEvent($$new($TextEvent, $nc(this->xwin)->target, $TextEvent::TEXT_VALUE_CHANGED));
	}
}

void XTextFieldPeer$XAWTTextField::changedUpdate($DocumentEvent* e) {
	if (this->xwin != nullptr) {
		$nc(this->xwin)->postEvent($$new($TextEvent, $nc(this->xwin)->target, $TextEvent::TEXT_VALUE_CHANGED));
	}
}

void XTextFieldPeer$XAWTTextField::repaintNow() {
	paintImmediately($(getBounds()));
}

$Graphics* XTextFieldPeer$XAWTTextField::getGraphics() {
	return $nc(this->xwin)->getGraphics();
}

void XTextFieldPeer$XAWTTextField::updateUI() {
	$var($ComponentUI, ui, $new($XTextFieldPeer$AWTTextFieldUI, this->this$0));
	setUI(ui);
}

void XTextFieldPeer$XAWTTextField::forwardFocusGained($FocusEvent* e) {
	$useLocalCurrentObjectStackCache();
	this->isFocused = true;
	int32_t var$0 = $nc(e)->getID();
	bool var$1 = e->isTemporary();
	$var($Component, var$2, e->getOppositeComponent());
	$var($FocusEvent, fe, $new($FocusEvent, this, var$0, var$1, var$2, $(e->getCause())));
	$JPasswordField::processFocusEvent(fe);
}

void XTextFieldPeer$XAWTTextField::forwardFocusLost($FocusEvent* e) {
	$useLocalCurrentObjectStackCache();
	this->isFocused = false;
	int32_t var$0 = $nc(e)->getID();
	bool var$1 = e->isTemporary();
	$var($Component, var$2, e->getOppositeComponent());
	$var($FocusEvent, fe, $new($FocusEvent, this, var$0, var$1, var$2, $(e->getCause())));
	$JPasswordField::processFocusEvent(fe);
}

bool XTextFieldPeer$XAWTTextField::hasFocus() {
	return this->isFocused;
}

void XTextFieldPeer$XAWTTextField::processInputMethodEventImpl($InputMethodEvent* e) {
	processInputMethodEvent(e);
}

void XTextFieldPeer$XAWTTextField::processMouseEventImpl($MouseEvent* e) {
	processMouseEvent(e);
}

void XTextFieldPeer$XAWTTextField::processMouseMotionEventImpl($MouseEvent* e) {
	processMouseMotionEvent(e);
}

void XTextFieldPeer$XAWTTextField::setTransferHandler($TransferHandler* newHandler) {
	$useLocalCurrentObjectStackCache();
	$var($Object, key, $nc($($AWTAccessor::getClientPropertyKeyAccessor()))->getJComponent_TRANSFER_HANDLER());
	$var($Object, oldHandler, getClientProperty(key));
	putClientProperty(key, newHandler);
	firePropertyChange("transferHandler"_s, oldHandler, $of(newHandler));
}

void XTextFieldPeer$XAWTTextField::setEchoChar(char16_t c) {
	$JPasswordField::setEchoChar(c);
	$nc(($cast($XTextFieldPeer$AWTTextFieldUI, this->ui)))->installKeyboardActions();
}

XTextFieldPeer$XAWTTextField::XTextFieldPeer$XAWTTextField() {
}

$Class* XTextFieldPeer$XAWTTextField::load$($String* name, bool initialize) {
	$loadClass(XTextFieldPeer$XAWTTextField, name, initialize, &_XTextFieldPeer$XAWTTextField_ClassInfo_, allocate$XTextFieldPeer$XAWTTextField);
	return class$;
}

$Class* XTextFieldPeer$XAWTTextField::class$ = nullptr;

		} // X11
	} // awt
} // sun