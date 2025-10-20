#include <sun/awt/windows/WPopupMenuPeer.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Event.h>
#include <java/awt/Font.h>
#include <java/awt/Menu.h>
#include <java/awt/MenuComponent.h>
#include <java/awt/MenuContainer.h>
#include <java/awt/MenuItem.h>
#include <java/awt/Point.h>
#include <java/awt/PopupMenu.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/AWTAccessor$MenuComponentAccessor.h>
#include <sun/awt/AWTAccessor$PopupMenuAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/awt/windows/WMenuItemPeer.h>
#include <sun/awt/windows/WMenuPeer.h>
#include <sun/awt/windows/WObjectPeer.h>
#include <sun/awt/windows/WToolkit.h>
#include <jcpp.h>

#undef MOUSE_DOWN

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Event = ::java::awt::Event;
using $Font = ::java::awt::Font;
using $Menu = ::java::awt::Menu;
using $MenuComponent = ::java::awt::MenuComponent;
using $MenuContainer = ::java::awt::MenuContainer;
using $MenuItem = ::java::awt::MenuItem;
using $Point = ::java::awt::Point;
using $PopupMenu = ::java::awt::PopupMenu;
using $PopupMenuPeer = ::java::awt::peer::PopupMenuPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$MenuComponentAccessor = ::sun::awt::AWTAccessor$MenuComponentAccessor;
using $AWTAccessor$PopupMenuAccessor = ::sun::awt::AWTAccessor$PopupMenuAccessor;
using $SunToolkit = ::sun::awt::SunToolkit;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WMenuItemPeer = ::sun::awt::windows::WMenuItemPeer;
using $WMenuPeer = ::sun::awt::windows::WMenuPeer;
using $WObjectPeer = ::sun::awt::windows::WObjectPeer;
using $WToolkit = ::sun::awt::windows::WToolkit;

namespace sun {
	namespace awt {
		namespace windows {

$MethodInfo _WPopupMenuPeer_MethodInfo_[] = {
	{"*addItem", "(Ljava/awt/MenuItem;)V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*delItem", "(I)V", nullptr, $PUBLIC | $NATIVE},
	{"*dispose", "()V", nullptr, $PUBLIC | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/PopupMenu;)V", nullptr, 0, $method(static_cast<void(WPopupMenuPeer::*)($PopupMenu*)>(&WPopupMenuPeer::init$))},
	{"_show", "(Ljava/awt/Event;)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WPopupMenuPeer::*)($Event*)>(&WPopupMenuPeer::_show))},
	{"createMenu", "(Lsun/awt/windows/WComponentPeer;)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WPopupMenuPeer::*)($WComponentPeer*)>(&WPopupMenuPeer::createMenu))},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"*setLabel", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"show", "(Ljava/awt/Event;)V", nullptr, $PUBLIC},
	{"show", "(Ljava/awt/Component;Ljava/awt/Point;)V", nullptr, 0, $method(static_cast<void(WPopupMenuPeer::*)($Component*,$Point*)>(&WPopupMenuPeer::show))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX__show 8
#define _METHOD_INDEX_createMenu 9

$ClassInfo _WPopupMenuPeer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.windows.WPopupMenuPeer",
	"sun.awt.windows.WMenuPeer",
	"java.awt.peer.PopupMenuPeer",
	nullptr,
	_WPopupMenuPeer_MethodInfo_
};

$Object* allocate$WPopupMenuPeer($Class* clazz) {
	return $of($alloc(WPopupMenuPeer));
}

void WPopupMenuPeer::addItem($MenuItem* item) {
	this->$WMenuPeer::addItem(item);
}

void WPopupMenuPeer::delItem(int32_t index) {
	this->$WMenuPeer::delItem(index);
}

void WPopupMenuPeer::setEnabled(bool b) {
	this->$WMenuPeer::setEnabled(b);
}

void WPopupMenuPeer::setLabel($String* label) {
	this->$WMenuPeer::setLabel(label);
}

void WPopupMenuPeer::setFont($Font* f) {
	this->$WMenuPeer::setFont(f);
}

void WPopupMenuPeer::dispose() {
	this->$WMenuPeer::dispose();
}

int32_t WPopupMenuPeer::hashCode() {
	 return this->$WMenuPeer::hashCode();
}

bool WPopupMenuPeer::equals(Object$* arg0) {
	 return this->$WMenuPeer::equals(arg0);
}

$Object* WPopupMenuPeer::clone() {
	 return this->$WMenuPeer::clone();
}

$String* WPopupMenuPeer::toString() {
	 return this->$WMenuPeer::toString();
}

void WPopupMenuPeer::finalize() {
	this->$WMenuPeer::finalize();
}

void WPopupMenuPeer::init$($PopupMenu* target) {
	$useLocalCurrentObjectStackCache();
	$WMenuPeer::init$();
	$set(this, target, target);
	$var($MenuContainer, parent, nullptr);
	bool isTrayIconPopup = $nc($($AWTAccessor::getPopupMenuAccessor()))->isTrayIconPopup(target);
	if (isTrayIconPopup) {
		$assign(parent, $nc($($AWTAccessor::getMenuComponentAccessor()))->getParent(target));
	} else {
		$assign(parent, $nc(target)->getParent());
	}
	if ($instanceOf($Component, parent)) {
		$var($WComponentPeer, parentPeer, $cast($WComponentPeer, $WToolkit::targetToPeer(parent)));
		if (parentPeer == nullptr) {
			$assign(parent, $WToolkit::getNativeContainer($cast($Component, parent)));
			$assign(parentPeer, $cast($WComponentPeer, $WToolkit::targetToPeer(parent)));
		}
		$nc(parentPeer)->addChildPeer(this);
		createMenu(parentPeer);
		checkMenuCreation();
	} else {
		$throwNew($IllegalArgumentException, "illegal popup menu container class"_s);
	}
}

void WPopupMenuPeer::createMenu($WComponentPeer* parent) {
	$prepareNative(WPopupMenuPeer, createMenu, void, $WComponentPeer* parent);
	$invokeNative(WPopupMenuPeer, createMenu, parent);
	$finishNative();
}

void WPopupMenuPeer::show($Event* e) {
	$useLocalCurrentObjectStackCache();
	$var($Component, origin, $cast($Component, $nc(e)->target));
	$var($WComponentPeer, peer, $cast($WComponentPeer, $WToolkit::targetToPeer(origin)));
	if (peer == nullptr) {
		$var($Component, nativeOrigin, $WToolkit::getNativeContainer(origin));
		$set(e, target, nativeOrigin);
		{
			$var($Component, c, origin);
			for (; c != nativeOrigin; $assign(c, $nc(c)->getParent())) {
				$var($Point, p, c->getLocation());
				e->x += $nc(p)->x;
				e->y += p->y;
			}
		}
	}
	_show(e);
}

void WPopupMenuPeer::show($Component* origin, $Point* p) {
	$useLocalCurrentObjectStackCache();
	$var($WComponentPeer, peer, $cast($WComponentPeer, $WToolkit::targetToPeer(origin)));
	$var($Event, e, $new($Event, origin, 0, $Event::MOUSE_DOWN, $nc(p)->x, p->y, 0, 0));
	if (peer == nullptr) {
		$var($Component, nativeOrigin, $WToolkit::getNativeContainer(origin));
		$set(e, target, nativeOrigin);
	}
	e->x = $nc(p)->x;
	e->y = p->y;
	_show(e);
}

void WPopupMenuPeer::_show($Event* e) {
	$prepareNative(WPopupMenuPeer, _show, void, $Event* e);
	$invokeNative(WPopupMenuPeer, _show, e);
	$finishNative();
}

WPopupMenuPeer::WPopupMenuPeer() {
}

$Class* WPopupMenuPeer::load$($String* name, bool initialize) {
	$loadClass(WPopupMenuPeer, name, initialize, &_WPopupMenuPeer_ClassInfo_, allocate$WPopupMenuPeer);
	return class$;
}

$Class* WPopupMenuPeer::class$ = nullptr;

		} // windows
	} // awt
} // sun