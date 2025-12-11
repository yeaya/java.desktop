#include <sun/awt/X11/XTextAreaPeer$JavaMouseEventHandler$Pointer.h>

#include <java/lang/AssertionError.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JScrollBar.h>
#include <sun/awt/X11/XTextAreaPeer$JavaMouseEventHandler$Pointer$Type.h>
#include <sun/awt/X11/XTextAreaPeer$JavaMouseEventHandler.h>
#include <sun/awt/X11/XTextAreaPeer.h>
#include <jcpp.h>

#undef BAR
#undef BUTTON
#undef NONE
#undef TEXT

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JScrollBar = ::javax::swing::JScrollBar;
using $XTextAreaPeer = ::sun::awt::X11::XTextAreaPeer;
using $XTextAreaPeer$JavaMouseEventHandler$Pointer$Type = ::sun::awt::X11::XTextAreaPeer$JavaMouseEventHandler$Pointer$Type;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XTextAreaPeer$JavaMouseEventHandler$Pointer_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(XTextAreaPeer$JavaMouseEventHandler$Pointer, $assertionsDisabled)},
	{"type", "Lsun/awt/X11/XTextAreaPeer$JavaMouseEventHandler$Pointer$Type;", nullptr, $PRIVATE, $field(XTextAreaPeer$JavaMouseEventHandler$Pointer, type)},
	{"bar", "Ljavax/swing/JScrollBar;", nullptr, $PRIVATE, $field(XTextAreaPeer$JavaMouseEventHandler$Pointer, bar)},
	{"button", "Ljavax/swing/JButton;", nullptr, $PRIVATE, $field(XTextAreaPeer$JavaMouseEventHandler$Pointer, button)},
	{}
};

$MethodInfo _XTextAreaPeer$JavaMouseEventHandler$Pointer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(XTextAreaPeer$JavaMouseEventHandler$Pointer::*)()>(&XTextAreaPeer$JavaMouseEventHandler$Pointer::init$))},
	{"getBar", "()Ljavax/swing/JScrollBar;", nullptr, 0, $method(static_cast<$JScrollBar*(XTextAreaPeer$JavaMouseEventHandler$Pointer::*)()>(&XTextAreaPeer$JavaMouseEventHandler$Pointer::getBar))},
	{"getButton", "()Ljavax/swing/JButton;", nullptr, 0, $method(static_cast<$JButton*(XTextAreaPeer$JavaMouseEventHandler$Pointer::*)()>(&XTextAreaPeer$JavaMouseEventHandler$Pointer::getButton))},
	{"getType", "()Lsun/awt/X11/XTextAreaPeer$JavaMouseEventHandler$Pointer$Type;", nullptr, 0, $method(static_cast<$XTextAreaPeer$JavaMouseEventHandler$Pointer$Type*(XTextAreaPeer$JavaMouseEventHandler$Pointer::*)()>(&XTextAreaPeer$JavaMouseEventHandler$Pointer::getType))},
	{"isNone", "()Z", nullptr, 0, $method(static_cast<bool(XTextAreaPeer$JavaMouseEventHandler$Pointer::*)()>(&XTextAreaPeer$JavaMouseEventHandler$Pointer::isNone))},
	{"setBar", "(Ljavax/swing/JScrollBar;)V", nullptr, 0, $method(static_cast<void(XTextAreaPeer$JavaMouseEventHandler$Pointer::*)($JScrollBar*)>(&XTextAreaPeer$JavaMouseEventHandler$Pointer::setBar))},
	{"setButton", "(Ljavax/swing/JButton;)V", nullptr, 0, $method(static_cast<void(XTextAreaPeer$JavaMouseEventHandler$Pointer::*)($JButton*)>(&XTextAreaPeer$JavaMouseEventHandler$Pointer::setButton))},
	{"setNone", "()V", nullptr, 0, $method(static_cast<void(XTextAreaPeer$JavaMouseEventHandler$Pointer::*)()>(&XTextAreaPeer$JavaMouseEventHandler$Pointer::setNone))},
	{"setText", "()V", nullptr, 0, $method(static_cast<void(XTextAreaPeer$JavaMouseEventHandler$Pointer::*)()>(&XTextAreaPeer$JavaMouseEventHandler$Pointer::setText))},
	{}
};

$InnerClassInfo _XTextAreaPeer$JavaMouseEventHandler$Pointer_InnerClassesInfo_[] = {
	{"sun.awt.X11.XTextAreaPeer$JavaMouseEventHandler", "sun.awt.X11.XTextAreaPeer", "JavaMouseEventHandler", $PRIVATE | $STATIC | $FINAL},
	{"sun.awt.X11.XTextAreaPeer$JavaMouseEventHandler$Pointer", "sun.awt.X11.XTextAreaPeer$JavaMouseEventHandler", "Pointer", $PRIVATE | $STATIC | $FINAL},
	{"sun.awt.X11.XTextAreaPeer$JavaMouseEventHandler$Pointer$Type", "sun.awt.X11.XTextAreaPeer$JavaMouseEventHandler$Pointer", "Type", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _XTextAreaPeer$JavaMouseEventHandler$Pointer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.X11.XTextAreaPeer$JavaMouseEventHandler$Pointer",
	"java.lang.Object",
	nullptr,
	_XTextAreaPeer$JavaMouseEventHandler$Pointer_FieldInfo_,
	_XTextAreaPeer$JavaMouseEventHandler$Pointer_MethodInfo_,
	nullptr,
	nullptr,
	_XTextAreaPeer$JavaMouseEventHandler$Pointer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XTextAreaPeer"
};

$Object* allocate$XTextAreaPeer$JavaMouseEventHandler$Pointer($Class* clazz) {
	return $of($alloc(XTextAreaPeer$JavaMouseEventHandler$Pointer));
}

bool XTextAreaPeer$JavaMouseEventHandler$Pointer::$assertionsDisabled = false;

void XTextAreaPeer$JavaMouseEventHandler$Pointer::init$() {
}

$XTextAreaPeer$JavaMouseEventHandler$Pointer$Type* XTextAreaPeer$JavaMouseEventHandler$Pointer::getType() {
	return this->type;
}

bool XTextAreaPeer$JavaMouseEventHandler$Pointer::isNone() {
	$init($XTextAreaPeer$JavaMouseEventHandler$Pointer$Type);
	return this->type == $XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::NONE;
}

$JScrollBar* XTextAreaPeer$JavaMouseEventHandler$Pointer::getBar() {
	$init($XTextAreaPeer$JavaMouseEventHandler$Pointer$Type);
	bool ok = this->type == $XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::BAR || this->type == $XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::BUTTON;
	if (!XTextAreaPeer$JavaMouseEventHandler$Pointer::$assertionsDisabled && !ok) {
		$throwNew($AssertionError);
	}
	return ok ? this->bar : ($JScrollBar*)nullptr;
}

$JButton* XTextAreaPeer$JavaMouseEventHandler$Pointer::getButton() {
	$init($XTextAreaPeer$JavaMouseEventHandler$Pointer$Type);
	bool ok = this->type == $XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::BUTTON;
	if (!XTextAreaPeer$JavaMouseEventHandler$Pointer::$assertionsDisabled && !ok) {
		$throwNew($AssertionError);
	}
	return ok ? this->button : ($JButton*)nullptr;
}

void XTextAreaPeer$JavaMouseEventHandler$Pointer::setNone() {
	$init($XTextAreaPeer$JavaMouseEventHandler$Pointer$Type);
	$set(this, type, $XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::NONE);
}

void XTextAreaPeer$JavaMouseEventHandler$Pointer::setText() {
	$init($XTextAreaPeer$JavaMouseEventHandler$Pointer$Type);
	$set(this, type, $XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::TEXT);
}

void XTextAreaPeer$JavaMouseEventHandler$Pointer::setBar($JScrollBar* bar) {
	$set(this, bar, bar);
	$init($XTextAreaPeer$JavaMouseEventHandler$Pointer$Type);
	$set(this, type, $XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::BAR);
}

void XTextAreaPeer$JavaMouseEventHandler$Pointer::setButton($JButton* button) {
	$set(this, button, button);
	$init($XTextAreaPeer$JavaMouseEventHandler$Pointer$Type);
	$set(this, type, $XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::BUTTON);
}

void clinit$XTextAreaPeer$JavaMouseEventHandler$Pointer($Class* class$) {
	$load($XTextAreaPeer);
	XTextAreaPeer$JavaMouseEventHandler$Pointer::$assertionsDisabled = !$XTextAreaPeer::class$->desiredAssertionStatus();
}

XTextAreaPeer$JavaMouseEventHandler$Pointer::XTextAreaPeer$JavaMouseEventHandler$Pointer() {
}

$Class* XTextAreaPeer$JavaMouseEventHandler$Pointer::load$($String* name, bool initialize) {
	$loadClass(XTextAreaPeer$JavaMouseEventHandler$Pointer, name, initialize, &_XTextAreaPeer$JavaMouseEventHandler$Pointer_ClassInfo_, clinit$XTextAreaPeer$JavaMouseEventHandler$Pointer, allocate$XTextAreaPeer$JavaMouseEventHandler$Pointer);
	return class$;
}

$Class* XTextAreaPeer$JavaMouseEventHandler$Pointer::class$ = nullptr;

		} // X11
	} // awt
} // sun