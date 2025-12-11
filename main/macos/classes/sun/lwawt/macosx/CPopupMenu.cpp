#include <sun/lwawt/macosx/CPopupMenu.h>

#include <java/awt/Component.h>
#include <java/awt/Event.h>
#include <java/awt/Font.h>
#include <java/awt/Menu.h>
#include <java/awt/MenuItem.h>
#include <java/awt/Point.h>
#include <java/awt/PopupMenu.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <sun/lwawt/macosx/CFRetainedResource$CFNativeAction.h>
#include <sun/lwawt/macosx/CFRetainedResource.h>
#include <sun/lwawt/macosx/CMenu.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Event = ::java::awt::Event;
using $Font = ::java::awt::Font;
using $Menu = ::java::awt::Menu;
using $MenuItem = ::java::awt::MenuItem;
using $Point = ::java::awt::Point;
using $PopupMenu = ::java::awt::PopupMenu;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $CFRetainedResource$CFNativeAction = ::sun::lwawt::macosx::CFRetainedResource$CFNativeAction;
using $CMenu = ::sun::lwawt::macosx::CMenu;

namespace sun {
	namespace lwawt {
		namespace macosx {

class CPopupMenu$$Lambda$lambda$show$0 : public $CFRetainedResource$CFNativeAction {
	$class(CPopupMenu$$Lambda$lambda$show$0, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(CPopupMenu* inst, $Event* e) {
		$set(this, inst$, inst);
		$set(this, e, e);
	}
	virtual void run(int64_t ptr) override {
		$nc(inst$)->lambda$show$0(e, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPopupMenu$$Lambda$lambda$show$0>());
	}
	CPopupMenu* inst$ = nullptr;
	$Event* e = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CPopupMenu$$Lambda$lambda$show$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CPopupMenu$$Lambda$lambda$show$0, inst$)},
	{"e", "Ljava/awt/Event;", nullptr, $PUBLIC, $field(CPopupMenu$$Lambda$lambda$show$0, e)},
	{}
};
$MethodInfo CPopupMenu$$Lambda$lambda$show$0::methodInfos[3] = {
	{"<init>", "(Lsun/lwawt/macosx/CPopupMenu;Ljava/awt/Event;)V", nullptr, $PUBLIC, $method(static_cast<void(CPopupMenu$$Lambda$lambda$show$0::*)(CPopupMenu*,$Event*)>(&CPopupMenu$$Lambda$lambda$show$0::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPopupMenu$$Lambda$lambda$show$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPopupMenu$$Lambda$lambda$show$0",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CPopupMenu$$Lambda$lambda$show$0::load$($String* name, bool initialize) {
	$loadClass(CPopupMenu$$Lambda$lambda$show$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPopupMenu$$Lambda$lambda$show$0::class$ = nullptr;

$MethodInfo _CPopupMenu_MethodInfo_[] = {
	{"*addItem", "(Ljava/awt/MenuItem;)V", nullptr, $PUBLIC | $FINAL},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*delItem", "(I)V", nullptr, $PUBLIC | $FINAL},
	{"*dispose", "()V", nullptr, $PUBLIC | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/PopupMenu;)V", nullptr, 0, $method(static_cast<void(CPopupMenu::*)($PopupMenu*)>(&CPopupMenu::init$))},
	{"createModel", "()J", nullptr, 0},
	{"lambda$show$0", "(Ljava/awt/Event;J)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(CPopupMenu::*)($Event*,int64_t)>(&CPopupMenu::lambda$show$0))},
	{"nativeCreatePopupMenu", "()J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(CPopupMenu::*)()>(&CPopupMenu::nativeCreatePopupMenu))},
	{"nativeShowPopupMenu", "(JII)J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(CPopupMenu::*)(int64_t,int32_t,int32_t)>(&CPopupMenu::nativeShowPopupMenu))},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC | $FINAL},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC | $FINAL},
	{"*setLabel", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL},
	{"show", "(Ljava/awt/Event;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_nativeCreatePopupMenu 10
#define _METHOD_INDEX_nativeShowPopupMenu 11

$ClassInfo _CPopupMenu_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.lwawt.macosx.CPopupMenu",
	"sun.lwawt.macosx.CMenu",
	"java.awt.peer.PopupMenuPeer",
	nullptr,
	_CPopupMenu_MethodInfo_
};

$Object* allocate$CPopupMenu($Class* clazz) {
	return $of($alloc(CPopupMenu));
}

void CPopupMenu::setEnabled(bool b) {
	this->$CMenu::setEnabled(b);
}

void CPopupMenu::addItem($MenuItem* item) {
	this->$CMenu::addItem(item);
}

void CPopupMenu::delItem(int32_t index) {
	this->$CMenu::delItem(index);
}

void CPopupMenu::setLabel($String* label) {
	this->$CMenu::setLabel(label);
}

void CPopupMenu::dispose() {
	this->$CMenu::dispose();
}

void CPopupMenu::setFont($Font* f) {
	this->$CMenu::setFont(f);
}

void CPopupMenu::finalize() {
	this->$CMenu::finalize();
}

int32_t CPopupMenu::hashCode() {
	 return this->$CMenu::hashCode();
}

bool CPopupMenu::equals(Object$* arg0) {
	 return this->$CMenu::equals(arg0);
}

$Object* CPopupMenu::clone() {
	 return this->$CMenu::clone();
}

$String* CPopupMenu::toString() {
	 return this->$CMenu::toString();
}

void CPopupMenu::init$($PopupMenu* target) {
	$CMenu::init$(target);
}

int64_t CPopupMenu::createModel() {
	return nativeCreatePopupMenu();
}

int64_t CPopupMenu::nativeCreatePopupMenu() {
	int64_t $ret = 0;
	$prepareNative(CPopupMenu, nativeCreatePopupMenu, int64_t);
	$ret = $invokeNative();
	$finishNative();
	return $ret;
}

int64_t CPopupMenu::nativeShowPopupMenu(int64_t modelPtr, int32_t x, int32_t y) {
	int64_t $ret = 0;
	$prepareNative(CPopupMenu, nativeShowPopupMenu, int64_t, int64_t modelPtr, int32_t x, int32_t y);
	$ret = $invokeNative(modelPtr, x, y);
	$finishNative();
	return $ret;
}

void CPopupMenu::show($Event* e) {
	$useLocalCurrentObjectStackCache();
	$var($Component, origin, $cast($Component, $nc(e)->target));
	if (origin != nullptr) {
		$var($Point, loc, origin->getLocationOnScreen());
		e->x += $nc(loc)->x;
		e->y += loc->y;
		execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPopupMenu$$Lambda$lambda$show$0, this, e)));
	}
}

void CPopupMenu::lambda$show$0($Event* e, int64_t ptr) {
	nativeShowPopupMenu(ptr, $nc(e)->x, e->y);
}

CPopupMenu::CPopupMenu() {
}

$Class* CPopupMenu::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CPopupMenu$$Lambda$lambda$show$0::classInfo$.name)) {
			return CPopupMenu$$Lambda$lambda$show$0::load$(name, initialize);
		}
	}
	$loadClass(CPopupMenu, name, initialize, &_CPopupMenu_ClassInfo_, allocate$CPopupMenu);
	return class$;
}

$Class* CPopupMenu::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun