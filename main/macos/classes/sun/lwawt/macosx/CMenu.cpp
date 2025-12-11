#include <sun/lwawt/macosx/CMenu.h>

#include <java/awt/Font.h>
#include <java/awt/Menu.h>
#include <java/awt/MenuBar.h>
#include <java/awt/MenuComponent.h>
#include <java/awt/MenuContainer.h>
#include <java/awt/MenuItem.h>
#include <java/awt/peer/MenuItemPeer.h>
#include <java/io/Serializable.h>
#include <java/lang/InternalError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <sun/lwawt/macosx/CFRetainedResource$CFNativeAction.h>
#include <sun/lwawt/macosx/CFRetainedResource$CFNativeActionGet.h>
#include <sun/lwawt/macosx/CMenuBar.h>
#include <sun/lwawt/macosx/CMenuComponent.h>
#include <sun/lwawt/macosx/CMenuItem.h>
#include <sun/lwawt/macosx/LWCToolkit.h>
#include <jcpp.h>

using $Font = ::java::awt::Font;
using $Menu = ::java::awt::Menu;
using $MenuBar = ::java::awt::MenuBar;
using $MenuComponent = ::java::awt::MenuComponent;
using $MenuItem = ::java::awt::MenuItem;
using $MenuItemPeer = ::java::awt::peer::MenuItemPeer;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $CFRetainedResource$CFNativeAction = ::sun::lwawt::macosx::CFRetainedResource$CFNativeAction;
using $CFRetainedResource$CFNativeActionGet = ::sun::lwawt::macosx::CFRetainedResource$CFNativeActionGet;
using $CMenuBar = ::sun::lwawt::macosx::CMenuBar;
using $CMenuComponent = ::sun::lwawt::macosx::CMenuComponent;
using $CMenuItem = ::sun::lwawt::macosx::CMenuItem;
using $LWCToolkit = ::sun::lwawt::macosx::LWCToolkit;

namespace sun {
	namespace lwawt {
		namespace macosx {

class CMenu$$Lambda$nativeCreateSubMenu : public $CFRetainedResource$CFNativeActionGet {
	$class(CMenu$$Lambda$nativeCreateSubMenu, $NO_CLASS_INIT, $CFRetainedResource$CFNativeActionGet)
public:
	void init$(CMenu* inst) {
		$set(this, inst$, inst);
	}
	virtual int64_t run(int64_t parentMenuPtr) override {
		 return $nc(inst$)->nativeCreateSubMenu(parentMenuPtr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CMenu$$Lambda$nativeCreateSubMenu>());
	}
	CMenu* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CMenu$$Lambda$nativeCreateSubMenu::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CMenu$$Lambda$nativeCreateSubMenu, inst$)},
	{}
};
$MethodInfo CMenu$$Lambda$nativeCreateSubMenu::methodInfos[3] = {
	{"<init>", "(Lsun/lwawt/macosx/CMenu;)V", nullptr, $PUBLIC, $method(static_cast<void(CMenu$$Lambda$nativeCreateSubMenu::*)(CMenu*)>(&CMenu$$Lambda$nativeCreateSubMenu::init$))},
	{"run", "(J)J", nullptr, $PUBLIC},
	{}
};
$ClassInfo CMenu$$Lambda$nativeCreateSubMenu::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CMenu$$Lambda$nativeCreateSubMenu",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeActionGet",
	fieldInfos,
	methodInfos
};
$Class* CMenu$$Lambda$nativeCreateSubMenu::load$($String* name, bool initialize) {
	$loadClass(CMenu$$Lambda$nativeCreateSubMenu, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CMenu$$Lambda$nativeCreateSubMenu::class$ = nullptr;

class CMenu$$Lambda$lambda$createModel$0$1 : public $CFRetainedResource$CFNativeActionGet {
	$class(CMenu$$Lambda$lambda$createModel$0$1, $NO_CLASS_INIT, $CFRetainedResource$CFNativeActionGet)
public:
	void init$(CMenu* inst, bool isHelpMenu, int32_t insertionLocation) {
		$set(this, inst$, inst);
		this->isHelpMenu = isHelpMenu;
		this->insertionLocation = insertionLocation;
	}
	virtual int64_t run(int64_t ptr) override {
		 return $nc(inst$)->lambda$createModel$0(isHelpMenu, insertionLocation, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CMenu$$Lambda$lambda$createModel$0$1>());
	}
	CMenu* inst$ = nullptr;
	bool isHelpMenu = false;
	int32_t insertionLocation = 0;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CMenu$$Lambda$lambda$createModel$0$1::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CMenu$$Lambda$lambda$createModel$0$1, inst$)},
	{"isHelpMenu", "Z", nullptr, $PUBLIC, $field(CMenu$$Lambda$lambda$createModel$0$1, isHelpMenu)},
	{"insertionLocation", "I", nullptr, $PUBLIC, $field(CMenu$$Lambda$lambda$createModel$0$1, insertionLocation)},
	{}
};
$MethodInfo CMenu$$Lambda$lambda$createModel$0$1::methodInfos[3] = {
	{"<init>", "(Lsun/lwawt/macosx/CMenu;ZI)V", nullptr, $PUBLIC, $method(static_cast<void(CMenu$$Lambda$lambda$createModel$0$1::*)(CMenu*,bool,int32_t)>(&CMenu$$Lambda$lambda$createModel$0$1::init$))},
	{"run", "(J)J", nullptr, $PUBLIC},
	{}
};
$ClassInfo CMenu$$Lambda$lambda$createModel$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CMenu$$Lambda$lambda$createModel$0$1",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeActionGet",
	fieldInfos,
	methodInfos
};
$Class* CMenu$$Lambda$lambda$createModel$0$1::load$($String* name, bool initialize) {
	$loadClass(CMenu$$Lambda$lambda$createModel$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CMenu$$Lambda$lambda$createModel$0$1::class$ = nullptr;

class CMenu$$Lambda$lambda$delItem$1$2 : public $CFRetainedResource$CFNativeAction {
	$class(CMenu$$Lambda$lambda$delItem$1$2, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(CMenu* inst, int32_t index) {
		$set(this, inst$, inst);
		this->index = index;
	}
	virtual void run(int64_t ptr) override {
		$nc(inst$)->lambda$delItem$1(index, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CMenu$$Lambda$lambda$delItem$1$2>());
	}
	CMenu* inst$ = nullptr;
	int32_t index = 0;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CMenu$$Lambda$lambda$delItem$1$2::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CMenu$$Lambda$lambda$delItem$1$2, inst$)},
	{"index", "I", nullptr, $PUBLIC, $field(CMenu$$Lambda$lambda$delItem$1$2, index)},
	{}
};
$MethodInfo CMenu$$Lambda$lambda$delItem$1$2::methodInfos[3] = {
	{"<init>", "(Lsun/lwawt/macosx/CMenu;I)V", nullptr, $PUBLIC, $method(static_cast<void(CMenu$$Lambda$lambda$delItem$1$2::*)(CMenu*,int32_t)>(&CMenu$$Lambda$lambda$delItem$1$2::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CMenu$$Lambda$lambda$delItem$1$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CMenu$$Lambda$lambda$delItem$1$2",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CMenu$$Lambda$lambda$delItem$1$2::load$($String* name, bool initialize) {
	$loadClass(CMenu$$Lambda$lambda$delItem$1$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CMenu$$Lambda$lambda$delItem$1$2::class$ = nullptr;

class CMenu$$Lambda$lambda$setLabel$2$3 : public $CFRetainedResource$CFNativeAction {
	$class(CMenu$$Lambda$lambda$setLabel$2$3, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(CMenu* inst, $String* label) {
		$set(this, inst$, inst);
		$set(this, label, label);
	}
	virtual void run(int64_t ptr) override {
		$nc(inst$)->lambda$setLabel$2(label, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CMenu$$Lambda$lambda$setLabel$2$3>());
	}
	CMenu* inst$ = nullptr;
	$String* label = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CMenu$$Lambda$lambda$setLabel$2$3::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CMenu$$Lambda$lambda$setLabel$2$3, inst$)},
	{"label", "Ljava/lang/String;", nullptr, $PUBLIC, $field(CMenu$$Lambda$lambda$setLabel$2$3, label)},
	{}
};
$MethodInfo CMenu$$Lambda$lambda$setLabel$2$3::methodInfos[3] = {
	{"<init>", "(Lsun/lwawt/macosx/CMenu;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CMenu$$Lambda$lambda$setLabel$2$3::*)(CMenu*,$String*)>(&CMenu$$Lambda$lambda$setLabel$2$3::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CMenu$$Lambda$lambda$setLabel$2$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CMenu$$Lambda$lambda$setLabel$2$3",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CMenu$$Lambda$lambda$setLabel$2$3::load$($String* name, bool initialize) {
	$loadClass(CMenu$$Lambda$lambda$setLabel$2$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CMenu$$Lambda$lambda$setLabel$2$3::class$ = nullptr;

class CMenu$$Lambda$nativeGetNSMenu$4 : public $CFRetainedResource$CFNativeActionGet {
	$class(CMenu$$Lambda$nativeGetNSMenu$4, $NO_CLASS_INIT, $CFRetainedResource$CFNativeActionGet)
public:
	void init$(CMenu* inst) {
		$set(this, inst$, inst);
	}
	virtual int64_t run(int64_t menuPtr) override {
		 return $nc(inst$)->nativeGetNSMenu(menuPtr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CMenu$$Lambda$nativeGetNSMenu$4>());
	}
	CMenu* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CMenu$$Lambda$nativeGetNSMenu$4::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CMenu$$Lambda$nativeGetNSMenu$4, inst$)},
	{}
};
$MethodInfo CMenu$$Lambda$nativeGetNSMenu$4::methodInfos[3] = {
	{"<init>", "(Lsun/lwawt/macosx/CMenu;)V", nullptr, $PUBLIC, $method(static_cast<void(CMenu$$Lambda$nativeGetNSMenu$4::*)(CMenu*)>(&CMenu$$Lambda$nativeGetNSMenu$4::init$))},
	{"run", "(J)J", nullptr, $PUBLIC},
	{}
};
$ClassInfo CMenu$$Lambda$nativeGetNSMenu$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CMenu$$Lambda$nativeGetNSMenu$4",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeActionGet",
	fieldInfos,
	methodInfos
};
$Class* CMenu$$Lambda$nativeGetNSMenu$4::load$($String* name, bool initialize) {
	$loadClass(CMenu$$Lambda$nativeGetNSMenu$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CMenu$$Lambda$nativeGetNSMenu$4::class$ = nullptr;

$MethodInfo _CMenu_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*dispose", "()V", nullptr, $PUBLIC | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Menu;)V", nullptr, $PUBLIC, $method(static_cast<void(CMenu::*)($Menu*)>(&CMenu::init$))},
	{"addItem", "(Ljava/awt/MenuItem;)V", nullptr, $PUBLIC | $FINAL},
	{"createModel", "()J", nullptr, 0},
	{"delItem", "(I)V", nullptr, $PUBLIC | $FINAL},
	{"getNativeMenu", "()J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(CMenu::*)()>(&CMenu::getNativeMenu))},
	{"initialize", "(Ljava/awt/MenuItem;)V", nullptr, $PROTECTED | $FINAL},
	{"lambda$createModel$0", "(ZIJ)J", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<int64_t(CMenu::*)(bool,int32_t,int64_t)>(&CMenu::lambda$createModel$0))},
	{"lambda$delItem$1", "(IJ)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(CMenu::*)(int32_t,int64_t)>(&CMenu::lambda$delItem$1))},
	{"lambda$setLabel$2", "(Ljava/lang/String;J)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(CMenu::*)($String*,int64_t)>(&CMenu::lambda$setLabel$2))},
	{"nativeCreateMenu", "(JZI)J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(CMenu::*)(int64_t,bool,int32_t)>(&CMenu::nativeCreateMenu))},
	{"nativeCreateSubMenu", "(J)J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(CMenu::*)(int64_t)>(&CMenu::nativeCreateSubMenu))},
	{"nativeDeleteItem", "(JI)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(CMenu::*)(int64_t,int32_t)>(&CMenu::nativeDeleteItem))},
	{"nativeGetNSMenu", "(J)J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(CMenu::*)(int64_t)>(&CMenu::nativeGetNSMenu))},
	{"nativeSetMenuTitle", "(JLjava/lang/String;)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(CMenu::*)(int64_t,$String*)>(&CMenu::nativeSetMenuTitle))},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC | $FINAL},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC | $FINAL},
	{"setLabel", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_nativeCreateMenu 14
#define _METHOD_INDEX_nativeCreateSubMenu 15
#define _METHOD_INDEX_nativeDeleteItem 16
#define _METHOD_INDEX_nativeGetNSMenu 17
#define _METHOD_INDEX_nativeSetMenuTitle 18

$ClassInfo _CMenu_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.lwawt.macosx.CMenu",
	"sun.lwawt.macosx.CMenuItem",
	"java.awt.peer.MenuPeer",
	nullptr,
	_CMenu_MethodInfo_
};

$Object* allocate$CMenu($Class* clazz) {
	return $of($alloc(CMenu));
}

void CMenu::dispose() {
	this->$CMenuItem::dispose();
}

void CMenu::setFont($Font* f) {
	this->$CMenuItem::setFont(f);
}

void CMenu::finalize() {
	this->$CMenuItem::finalize();
}

int32_t CMenu::hashCode() {
	 return this->$CMenuItem::hashCode();
}

bool CMenu::equals(Object$* arg0) {
	 return this->$CMenuItem::equals(arg0);
}

$Object* CMenu::clone() {
	 return this->$CMenuItem::clone();
}

$String* CMenu::toString() {
	 return this->$CMenuItem::toString();
}

void CMenu::init$($Menu* target) {
	$CMenuItem::init$(target);
}

void CMenu::initialize($MenuItem* target) {
	setLabel($($nc(target)->getLabel()));
	setEnabled($nc(target)->isEnabled());
}

void CMenu::setEnabled(bool b) {
	$useLocalCurrentObjectStackCache();
	$CMenuItem::setEnabled(b);
	$var($Menu, target, $cast($Menu, getTarget()));
	int32_t count = $nc(target)->getItemCount();
	for (int32_t i = 0; i < count; ++i) {
		$var($MenuItem, item, target->getItem(i));
		$var($MenuItemPeer, p, $cast($MenuItemPeer, $LWCToolkit::targetToPeer(item)));
		if (p != nullptr) {
			p->setEnabled(b && $nc(item)->isEnabled());
		}
	}
}

int64_t CMenu::createModel() {
	$useLocalCurrentObjectStackCache();
	$var($CMenuComponent, parent, $cast($CMenuComponent, $LWCToolkit::targetToPeer($($nc($(getTarget()))->getParent()))));
	if ($instanceOf(CMenu, parent)) {
		return $nc(parent)->executeGet(static_cast<$CFRetainedResource$CFNativeActionGet*>($$new(CMenu$$Lambda$nativeCreateSubMenu, this)));
	}
	if ($instanceOf($CMenuBar, parent)) {
		$var($MenuBar, parentContainer, $cast($MenuBar, $nc($(getTarget()))->getParent()));
		bool isHelpMenu = $equals($nc(parentContainer)->getHelpMenu(), getTarget());
		int32_t insertionLocation = $nc(($cast($CMenuBar, parent)))->getNextInsertionIndex();
		return $nc(parent)->executeGet(static_cast<$CFRetainedResource$CFNativeActionGet*>($$new(CMenu$$Lambda$lambda$createModel$0$1, this, isHelpMenu, insertionLocation)));
	}
	$throwNew($InternalError, "Parent must be CMenu or CMenuBar"_s);
}

void CMenu::addItem($MenuItem* item) {
}

void CMenu::delItem(int32_t index) {
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CMenu$$Lambda$lambda$delItem$1$2, this, index)));
}

void CMenu::setLabel($String* label) {
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CMenu$$Lambda$lambda$setLabel$2$3, this, label)));
	$CMenuItem::setLabel(label);
}

int64_t CMenu::getNativeMenu() {
	return executeGet(static_cast<$CFRetainedResource$CFNativeActionGet*>($$new(CMenu$$Lambda$nativeGetNSMenu$4, this)));
}

int64_t CMenu::nativeCreateMenu(int64_t parentMenuPtr, bool isHelpMenu, int32_t insertionLocation) {
	int64_t $ret = 0;
	$prepareNative(CMenu, nativeCreateMenu, int64_t, int64_t parentMenuPtr, bool isHelpMenu, int32_t insertionLocation);
	$ret = $invokeNative(parentMenuPtr, isHelpMenu, insertionLocation);
	$finishNative();
	return $ret;
}

int64_t CMenu::nativeCreateSubMenu(int64_t parentMenuPtr) {
	int64_t $ret = 0;
	$prepareNative(CMenu, nativeCreateSubMenu, int64_t, int64_t parentMenuPtr);
	$ret = $invokeNative(parentMenuPtr);
	$finishNative();
	return $ret;
}

void CMenu::nativeSetMenuTitle(int64_t menuPtr, $String* title) {
	$prepareNative(CMenu, nativeSetMenuTitle, void, int64_t menuPtr, $String* title);
	$invokeNative(menuPtr, title);
	$finishNative();
}

void CMenu::nativeDeleteItem(int64_t menuPtr, int32_t index) {
	$prepareNative(CMenu, nativeDeleteItem, void, int64_t menuPtr, int32_t index);
	$invokeNative(menuPtr, index);
	$finishNative();
}

int64_t CMenu::nativeGetNSMenu(int64_t menuPtr) {
	int64_t $ret = 0;
	$prepareNative(CMenu, nativeGetNSMenu, int64_t, int64_t menuPtr);
	$ret = $invokeNative(menuPtr);
	$finishNative();
	return $ret;
}

void CMenu::lambda$setLabel$2($String* label, int64_t ptr) {
	nativeSetMenuTitle(ptr, label);
}

void CMenu::lambda$delItem$1(int32_t index, int64_t ptr) {
	nativeDeleteItem(ptr, index);
}

int64_t CMenu::lambda$createModel$0(bool isHelpMenu, int32_t insertionLocation, int64_t ptr) {
	return nativeCreateMenu(ptr, isHelpMenu, insertionLocation);
}

CMenu::CMenu() {
}

$Class* CMenu::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CMenu$$Lambda$nativeCreateSubMenu::classInfo$.name)) {
			return CMenu$$Lambda$nativeCreateSubMenu::load$(name, initialize);
		}
		if (name->equals(CMenu$$Lambda$lambda$createModel$0$1::classInfo$.name)) {
			return CMenu$$Lambda$lambda$createModel$0$1::load$(name, initialize);
		}
		if (name->equals(CMenu$$Lambda$lambda$delItem$1$2::classInfo$.name)) {
			return CMenu$$Lambda$lambda$delItem$1$2::load$(name, initialize);
		}
		if (name->equals(CMenu$$Lambda$lambda$setLabel$2$3::classInfo$.name)) {
			return CMenu$$Lambda$lambda$setLabel$2$3::load$(name, initialize);
		}
		if (name->equals(CMenu$$Lambda$nativeGetNSMenu$4::classInfo$.name)) {
			return CMenu$$Lambda$nativeGetNSMenu$4::load$(name, initialize);
		}
	}
	$loadClass(CMenu, name, initialize, &_CMenu_ClassInfo_, allocate$CMenu);
	return class$;
}

$Class* CMenu::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun