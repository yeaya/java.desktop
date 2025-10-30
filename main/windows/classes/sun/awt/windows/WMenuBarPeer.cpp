#include <sun/awt/windows/WMenuBarPeer.h>

#include <java/awt/Font.h>
#include <java/awt/Menu.h>
#include <java/awt/MenuBar.h>
#include <java/awt/MenuContainer.h>
#include <sun/awt/windows/WFramePeer.h>
#include <sun/awt/windows/WMenuItemPeer.h>
#include <sun/awt/windows/WMenuPeer.h>
#include <sun/awt/windows/WObjectPeer.h>
#include <sun/awt/windows/WToolkit.h>
#include <jcpp.h>

using $Font = ::java::awt::Font;
using $Menu = ::java::awt::Menu;
using $MenuBar = ::java::awt::MenuBar;
using $MenuComponent = ::java::awt::MenuComponent;
using $MenuContainer = ::java::awt::MenuContainer;
using $MenuBarPeer = ::java::awt::peer::MenuBarPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WFramePeer = ::sun::awt::windows::WFramePeer;
using $WMenuItemPeer = ::sun::awt::windows::WMenuItemPeer;
using $WMenuPeer = ::sun::awt::windows::WMenuPeer;
using $WObjectPeer = ::sun::awt::windows::WObjectPeer;
using $WToolkit = ::sun::awt::windows::WToolkit;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WMenuBarPeer_FieldInfo_[] = {
	{"framePeer", "Lsun/awt/windows/WFramePeer;", nullptr, $FINAL, $field(WMenuBarPeer, framePeer)},
	{}
};

$MethodInfo _WMenuBarPeer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*dispose", "()V", nullptr, $PUBLIC | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/MenuBar;)V", nullptr, 0, $method(static_cast<void(WMenuBarPeer::*)($MenuBar*)>(&WMenuBarPeer::init$))},
	{"addHelpMenu", "(Ljava/awt/Menu;)V", nullptr, $PUBLIC},
	{"addMenu", "(Ljava/awt/Menu;)V", nullptr, $PUBLIC | $NATIVE},
	{"create", "(Lsun/awt/windows/WFramePeer;)V", nullptr, $NATIVE, $method(static_cast<void(WMenuBarPeer::*)($WFramePeer*)>(&WMenuBarPeer::create))},
	{"delMenu", "(I)V", nullptr, $PUBLIC | $NATIVE},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_addMenu 7
#define _METHOD_INDEX_create 8
#define _METHOD_INDEX_delMenu 9

$ClassInfo _WMenuBarPeer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.windows.WMenuBarPeer",
	"sun.awt.windows.WMenuPeer",
	"java.awt.peer.MenuBarPeer",
	_WMenuBarPeer_FieldInfo_,
	_WMenuBarPeer_MethodInfo_
};

$Object* allocate$WMenuBarPeer($Class* clazz) {
	return $of($alloc(WMenuBarPeer));
}

void WMenuBarPeer::setFont($Font* f) {
	this->$WMenuPeer::setFont(f);
}

void WMenuBarPeer::dispose() {
	this->$WMenuPeer::dispose();
}

int32_t WMenuBarPeer::hashCode() {
	 return this->$WMenuPeer::hashCode();
}

bool WMenuBarPeer::equals(Object$* arg0) {
	 return this->$WMenuPeer::equals(arg0);
}

$Object* WMenuBarPeer::clone() {
	 return this->$WMenuPeer::clone();
}

$String* WMenuBarPeer::toString() {
	 return this->$WMenuPeer::toString();
}

void WMenuBarPeer::finalize() {
	this->$WMenuPeer::finalize();
}

void WMenuBarPeer::addMenu($Menu* m) {
	$prepareNative(WMenuBarPeer, addMenu, void, $Menu* m);
	$invokeNative(WMenuBarPeer, addMenu, m);
	$finishNative();
}

void WMenuBarPeer::delMenu(int32_t index) {
	$prepareNative(WMenuBarPeer, delMenu, void, int32_t index);
	$invokeNative(WMenuBarPeer, delMenu, index);
	$finishNative();
}

void WMenuBarPeer::addHelpMenu($Menu* m) {
	addMenu(m);
}

void WMenuBarPeer::init$($MenuBar* target) {
	$WMenuPeer::init$();
	$set(this, target, target);
	$set(this, framePeer, $cast($WFramePeer, $WToolkit::targetToPeer($($nc(target)->getParent()))));
	if (this->framePeer != nullptr) {
		$nc(this->framePeer)->addChildPeer(this);
	}
	create(this->framePeer);
	checkMenuCreation();
}

void WMenuBarPeer::create($WFramePeer* f) {
	$prepareNative(WMenuBarPeer, create, void, $WFramePeer* f);
	$invokeNative(WMenuBarPeer, create, f);
	$finishNative();
}

WMenuBarPeer::WMenuBarPeer() {
}

$Class* WMenuBarPeer::load$($String* name, bool initialize) {
	$loadClass(WMenuBarPeer, name, initialize, &_WMenuBarPeer_ClassInfo_, allocate$WMenuBarPeer);
	return class$;
}

$Class* WMenuBarPeer::class$ = nullptr;

		} // windows
	} // awt
} // sun