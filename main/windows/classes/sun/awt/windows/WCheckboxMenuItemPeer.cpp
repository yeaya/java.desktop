#include <sun/awt/windows/WCheckboxMenuItemPeer.h>

#include <java/awt/CheckboxMenuItem.h>
#include <java/awt/Font.h>
#include <java/awt/MenuItem.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/windows/WCheckboxMenuItemPeer$1.h>
#include <sun/awt/windows/WMenuItemPeer.h>
#include <sun/awt/windows/WObjectPeer.h>
#include <sun/awt/windows/WToolkit.h>
#include <jcpp.h>

using $CheckboxMenuItem = ::java::awt::CheckboxMenuItem;
using $Font = ::java::awt::Font;
using $MenuItem = ::java::awt::MenuItem;
using $CheckboxMenuItemPeer = ::java::awt::peer::CheckboxMenuItemPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SunToolkit = ::sun::awt::SunToolkit;
using $WCheckboxMenuItemPeer$1 = ::sun::awt::windows::WCheckboxMenuItemPeer$1;
using $WMenuItemPeer = ::sun::awt::windows::WMenuItemPeer;
using $WObjectPeer = ::sun::awt::windows::WObjectPeer;
using $WToolkit = ::sun::awt::windows::WToolkit;

namespace sun {
	namespace awt {
		namespace windows {

$MethodInfo _WCheckboxMenuItemPeer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*dispose", "()V", nullptr, $PUBLIC | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/CheckboxMenuItem;)V", nullptr, 0, $method(static_cast<void(WCheckboxMenuItemPeer::*)($CheckboxMenuItem*)>(&WCheckboxMenuItemPeer::init$))},
	{"handleAction", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(WCheckboxMenuItemPeer::*)(bool)>(&WCheckboxMenuItemPeer::handleAction))},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"*setLabel", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setState", "(Z)V", nullptr, $PUBLIC | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_setState 10

$InnerClassInfo _WCheckboxMenuItemPeer_InnerClassesInfo_[] = {
	{"sun.awt.windows.WCheckboxMenuItemPeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WCheckboxMenuItemPeer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.windows.WCheckboxMenuItemPeer",
	"sun.awt.windows.WMenuItemPeer",
	"java.awt.peer.CheckboxMenuItemPeer",
	nullptr,
	_WCheckboxMenuItemPeer_MethodInfo_,
	nullptr,
	nullptr,
	_WCheckboxMenuItemPeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.windows.WCheckboxMenuItemPeer$1"
};

$Object* allocate$WCheckboxMenuItemPeer($Class* clazz) {
	return $of($alloc(WCheckboxMenuItemPeer));
}

void WCheckboxMenuItemPeer::setEnabled(bool b) {
	this->$WMenuItemPeer::setEnabled(b);
}

void WCheckboxMenuItemPeer::setLabel($String* label) {
	this->$WMenuItemPeer::setLabel(label);
}

void WCheckboxMenuItemPeer::setFont($Font* f) {
	this->$WMenuItemPeer::setFont(f);
}

void WCheckboxMenuItemPeer::dispose() {
	this->$WMenuItemPeer::dispose();
}

int32_t WCheckboxMenuItemPeer::hashCode() {
	 return this->$WMenuItemPeer::hashCode();
}

bool WCheckboxMenuItemPeer::equals(Object$* arg0) {
	 return this->$WMenuItemPeer::equals(arg0);
}

$Object* WCheckboxMenuItemPeer::clone() {
	 return this->$WMenuItemPeer::clone();
}

$String* WCheckboxMenuItemPeer::toString() {
	 return this->$WMenuItemPeer::toString();
}

void WCheckboxMenuItemPeer::finalize() {
	this->$WMenuItemPeer::finalize();
}

void WCheckboxMenuItemPeer::setState(bool t) {
	$prepareNative(WCheckboxMenuItemPeer, setState, void, bool t);
	$invokeNative(WCheckboxMenuItemPeer, setState, t);
	$finishNative();
}

void WCheckboxMenuItemPeer::init$($CheckboxMenuItem* target) {
	$WMenuItemPeer::init$(target, true);
	setState($nc(target)->getState());
}

void WCheckboxMenuItemPeer::handleAction(bool state) {
	$var($CheckboxMenuItem, target, $cast($CheckboxMenuItem, this->target));
	$WToolkit::executeOnEventHandlerThread(target, $$new($WCheckboxMenuItemPeer$1, this, target, state));
}

WCheckboxMenuItemPeer::WCheckboxMenuItemPeer() {
}

$Class* WCheckboxMenuItemPeer::load$($String* name, bool initialize) {
	$loadClass(WCheckboxMenuItemPeer, name, initialize, &_WCheckboxMenuItemPeer_ClassInfo_, allocate$WCheckboxMenuItemPeer);
	return class$;
}

$Class* WCheckboxMenuItemPeer::class$ = nullptr;

		} // windows
	} // awt
} // sun