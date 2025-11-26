#include <sun/awt/X11/XCheckboxMenuItemPeer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/CheckboxMenuItem.h>
#include <java/awt/Font.h>
#include <java/awt/ItemSelectable.h>
#include <java/awt/MenuItem.h>
#include <java/awt/event/ItemEvent.h>
#include <java/lang/Runnable.h>
#include <sun/awt/AWTAccessor$CheckboxMenuItemAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/XCheckboxMenuItemPeer$1.h>
#include <sun/awt/X11/XMenuItemPeer.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XWindow.h>
#include <jcpp.h>

#undef DESELECTED
#undef ITEM_STATE_CHANGED
#undef SELECTED

using $AWTEvent = ::java::awt::AWTEvent;
using $CheckboxMenuItem = ::java::awt::CheckboxMenuItem;
using $Font = ::java::awt::Font;
using $ItemSelectable = ::java::awt::ItemSelectable;
using $MenuItem = ::java::awt::MenuItem;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $CheckboxMenuItemPeer = ::java::awt::peer::CheckboxMenuItemPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$CheckboxMenuItemAccessor = ::sun::awt::AWTAccessor$CheckboxMenuItemAccessor;
using $SunToolkit = ::sun::awt::SunToolkit;
using $XCheckboxMenuItemPeer$1 = ::sun::awt::X11::XCheckboxMenuItemPeer$1;
using $XMenuItemPeer = ::sun::awt::X11::XMenuItemPeer;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XWindow = ::sun::awt::X11::XWindow;

namespace sun {
	namespace awt {
		namespace X11 {

$MethodInfo _XCheckboxMenuItemPeer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*dispose", "()V", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/CheckboxMenuItem;)V", nullptr, 0, $method(static_cast<void(XCheckboxMenuItemPeer::*)($CheckboxMenuItem*)>(&XCheckboxMenuItemPeer::init$))},
	{"action", "(JI)V", nullptr, 0},
	{"doToggleState", "(J)V", nullptr, $PRIVATE, $method(static_cast<void(XCheckboxMenuItemPeer::*)(int64_t)>(&XCheckboxMenuItemPeer::doToggleState))},
	{"getTargetState", "()Z", nullptr, 0, $method(static_cast<bool(XCheckboxMenuItemPeer::*)()>(&XCheckboxMenuItemPeer::getTargetState))},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"*setLabel", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setState", "(Z)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XCheckboxMenuItemPeer_InnerClassesInfo_[] = {
	{"sun.awt.X11.XCheckboxMenuItemPeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XCheckboxMenuItemPeer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.X11.XCheckboxMenuItemPeer",
	"sun.awt.X11.XMenuItemPeer",
	"java.awt.peer.CheckboxMenuItemPeer",
	nullptr,
	_XCheckboxMenuItemPeer_MethodInfo_,
	nullptr,
	nullptr,
	_XCheckboxMenuItemPeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11.XCheckboxMenuItemPeer$1"
};

$Object* allocate$XCheckboxMenuItemPeer($Class* clazz) {
	return $of($alloc(XCheckboxMenuItemPeer));
}

void XCheckboxMenuItemPeer::dispose() {
	this->$XMenuItemPeer::dispose();
}

void XCheckboxMenuItemPeer::setFont($Font* font) {
	this->$XMenuItemPeer::setFont(font);
}

void XCheckboxMenuItemPeer::setLabel($String* label) {
	this->$XMenuItemPeer::setLabel(label);
}

void XCheckboxMenuItemPeer::setEnabled(bool enabled) {
	this->$XMenuItemPeer::setEnabled(enabled);
}

int32_t XCheckboxMenuItemPeer::hashCode() {
	 return this->$XMenuItemPeer::hashCode();
}

bool XCheckboxMenuItemPeer::equals(Object$* arg0) {
	 return this->$XMenuItemPeer::equals(arg0);
}

$Object* XCheckboxMenuItemPeer::clone() {
	 return this->$XMenuItemPeer::clone();
}

$String* XCheckboxMenuItemPeer::toString() {
	 return this->$XMenuItemPeer::toString();
}

void XCheckboxMenuItemPeer::finalize() {
	this->$XMenuItemPeer::finalize();
}

void XCheckboxMenuItemPeer::init$($CheckboxMenuItem* target) {
	$XMenuItemPeer::init$(target);
}

void XCheckboxMenuItemPeer::setState(bool t) {
	repaintIfShowing();
}

bool XCheckboxMenuItemPeer::getTargetState() {
	$useLocalCurrentObjectStackCache();
	return $nc($($AWTAccessor::getCheckboxMenuItemAccessor()))->getState($cast($CheckboxMenuItem, $(getTarget())));
}

void XCheckboxMenuItemPeer::action(int64_t when, int32_t modifiers) {
	$useLocalCurrentObjectStackCache();
	$var($Object, var$0, $cast($CheckboxMenuItem, getTarget()));
	$XToolkit::executeOnEventHandlerThread(var$0, $$new($XCheckboxMenuItemPeer$1, this, when));
}

void XCheckboxMenuItemPeer::doToggleState(int64_t when) {
	$useLocalCurrentObjectStackCache();
	$var($CheckboxMenuItem, cb, $cast($CheckboxMenuItem, getTarget()));
	bool newState = !getTargetState();
	$nc(cb)->setState(newState);
	$var($ItemSelectable, var$0, static_cast<$ItemSelectable*>(cb));
	$var($Object, var$1, $of(getTargetLabel()));
	$var($ItemEvent, e, $new($ItemEvent, var$0, $ItemEvent::ITEM_STATE_CHANGED, var$1, getTargetState() ? $ItemEvent::SELECTED : $ItemEvent::DESELECTED));
	$XWindow::postEventStatic(e);
}

XCheckboxMenuItemPeer::XCheckboxMenuItemPeer() {
}

$Class* XCheckboxMenuItemPeer::load$($String* name, bool initialize) {
	$loadClass(XCheckboxMenuItemPeer, name, initialize, &_XCheckboxMenuItemPeer_ClassInfo_, allocate$XCheckboxMenuItemPeer);
	return class$;
}

$Class* XCheckboxMenuItemPeer::class$ = nullptr;

		} // X11
	} // awt
} // sun