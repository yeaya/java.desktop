#include <sun/lwawt/macosx/CMenuBar.h>

#include <java/awt/Font.h>
#include <java/awt/Menu.h>
#include <java/awt/MenuBar.h>
#include <java/awt/MenuComponent.h>
#include <java/awt/MenuItem.h>
#include <java/awt/peer/MenuComponentPeer.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <sun/awt/AWTAccessor$MenuComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/lwawt/macosx/CFRetainedResource$CFNativeAction.h>
#include <sun/lwawt/macosx/CFRetainedResource.h>
#include <sun/lwawt/macosx/CMenu.h>
#include <sun/lwawt/macosx/CMenuComponent.h>
#include <jcpp.h>

using $Font = ::java::awt::Font;
using $Menu = ::java::awt::Menu;
using $MenuBar = ::java::awt::MenuBar;
using $MenuComponent = ::java::awt::MenuComponent;
using $MenuItem = ::java::awt::MenuItem;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$MenuComponentAccessor = ::sun::awt::AWTAccessor$MenuComponentAccessor;
using $CFRetainedResource$CFNativeAction = ::sun::lwawt::macosx::CFRetainedResource$CFNativeAction;
using $CMenu = ::sun::lwawt::macosx::CMenu;
using $CMenuComponent = ::sun::lwawt::macosx::CMenuComponent;

namespace sun {
	namespace lwawt {
		namespace macosx {

class CMenuBar$$Lambda$lambda$addHelpMenu$1 : public $CFRetainedResource$CFNativeAction {
	$class(CMenuBar$$Lambda$lambda$addHelpMenu$1, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(CMenuBar* inst, $CMenu* cMenu) {
		$set(this, inst$, inst);
		$set(this, cMenu, cMenu);
	}
	virtual void run(int64_t parentPtr) override {
		$nc(inst$)->lambda$addHelpMenu$1(cMenu, parentPtr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CMenuBar$$Lambda$lambda$addHelpMenu$1>());
	}
	CMenuBar* inst$ = nullptr;
	$CMenu* cMenu = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CMenuBar$$Lambda$lambda$addHelpMenu$1::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CMenuBar$$Lambda$lambda$addHelpMenu$1, inst$)},
	{"cMenu", "Lsun/lwawt/macosx/CMenu;", nullptr, $PUBLIC, $field(CMenuBar$$Lambda$lambda$addHelpMenu$1, cMenu)},
	{}
};
$MethodInfo CMenuBar$$Lambda$lambda$addHelpMenu$1::methodInfos[3] = {
	{"<init>", "(Lsun/lwawt/macosx/CMenuBar;Lsun/lwawt/macosx/CMenu;)V", nullptr, $PUBLIC, $method(static_cast<void(CMenuBar$$Lambda$lambda$addHelpMenu$1::*)(CMenuBar*,$CMenu*)>(&CMenuBar$$Lambda$lambda$addHelpMenu$1::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CMenuBar$$Lambda$lambda$addHelpMenu$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CMenuBar$$Lambda$lambda$addHelpMenu$1",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CMenuBar$$Lambda$lambda$addHelpMenu$1::load$($String* name, bool initialize) {
	$loadClass(CMenuBar$$Lambda$lambda$addHelpMenu$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CMenuBar$$Lambda$lambda$addHelpMenu$1::class$ = nullptr;

class CMenuBar$$Lambda$lambda$delMenu$2$1 : public $CFRetainedResource$CFNativeAction {
	$class(CMenuBar$$Lambda$lambda$delMenu$2$1, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(CMenuBar* inst, int32_t index) {
		$set(this, inst$, inst);
		this->index = index;
	}
	virtual void run(int64_t ptr) override {
		$nc(inst$)->lambda$delMenu$2(index, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CMenuBar$$Lambda$lambda$delMenu$2$1>());
	}
	CMenuBar* inst$ = nullptr;
	int32_t index = 0;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CMenuBar$$Lambda$lambda$delMenu$2$1::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CMenuBar$$Lambda$lambda$delMenu$2$1, inst$)},
	{"index", "I", nullptr, $PUBLIC, $field(CMenuBar$$Lambda$lambda$delMenu$2$1, index)},
	{}
};
$MethodInfo CMenuBar$$Lambda$lambda$delMenu$2$1::methodInfos[3] = {
	{"<init>", "(Lsun/lwawt/macosx/CMenuBar;I)V", nullptr, $PUBLIC, $method(static_cast<void(CMenuBar$$Lambda$lambda$delMenu$2$1::*)(CMenuBar*,int32_t)>(&CMenuBar$$Lambda$lambda$delMenu$2$1::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CMenuBar$$Lambda$lambda$delMenu$2$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CMenuBar$$Lambda$lambda$delMenu$2$1",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CMenuBar$$Lambda$lambda$delMenu$2$1::load$($String* name, bool initialize) {
	$loadClass(CMenuBar$$Lambda$lambda$delMenu$2$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CMenuBar$$Lambda$lambda$delMenu$2$1::class$ = nullptr;

class CMenuBar$$Lambda$lambda$addHelpMenu$0$2 : public $CFRetainedResource$CFNativeAction {
	$class(CMenuBar$$Lambda$lambda$addHelpMenu$0$2, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(CMenuBar* inst, int64_t parentPtr) {
		$set(this, inst$, inst);
		this->parentPtr = parentPtr;
	}
	virtual void run(int64_t menuPtr) override {
		$nc(inst$)->lambda$addHelpMenu$0(parentPtr, menuPtr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CMenuBar$$Lambda$lambda$addHelpMenu$0$2>());
	}
	CMenuBar* inst$ = nullptr;
	int64_t parentPtr = 0;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CMenuBar$$Lambda$lambda$addHelpMenu$0$2::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CMenuBar$$Lambda$lambda$addHelpMenu$0$2, inst$)},
	{"parentPtr", "J", nullptr, $PUBLIC, $field(CMenuBar$$Lambda$lambda$addHelpMenu$0$2, parentPtr)},
	{}
};
$MethodInfo CMenuBar$$Lambda$lambda$addHelpMenu$0$2::methodInfos[3] = {
	{"<init>", "(Lsun/lwawt/macosx/CMenuBar;J)V", nullptr, $PUBLIC, $method(static_cast<void(CMenuBar$$Lambda$lambda$addHelpMenu$0$2::*)(CMenuBar*,int64_t)>(&CMenuBar$$Lambda$lambda$addHelpMenu$0$2::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CMenuBar$$Lambda$lambda$addHelpMenu$0$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CMenuBar$$Lambda$lambda$addHelpMenu$0$2",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CMenuBar$$Lambda$lambda$addHelpMenu$0$2::load$($String* name, bool initialize) {
	$loadClass(CMenuBar$$Lambda$lambda$addHelpMenu$0$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CMenuBar$$Lambda$lambda$addHelpMenu$0$2::class$ = nullptr;

$FieldInfo _CMenuBar_FieldInfo_[] = {
	{"nextInsertionIndex", "I", nullptr, $PRIVATE, $field(CMenuBar, nextInsertionIndex)},
	{}
};

$MethodInfo _CMenuBar_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*dispose", "()V", nullptr, $PUBLIC | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/MenuBar;)V", nullptr, $PUBLIC, $method(static_cast<void(CMenuBar::*)($MenuBar*)>(&CMenuBar::init$))},
	{"addHelpMenu", "(Ljava/awt/Menu;)V", nullptr, $PUBLIC},
	{"addMenu", "(Ljava/awt/Menu;)V", nullptr, $PUBLIC},
	{"createModel", "()J", nullptr, 0},
	{"delMenu", "(I)V", nullptr, $PUBLIC},
	{"getNextInsertionIndex", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(CMenuBar::*)()>(&CMenuBar::getNextInsertionIndex))},
	{"lambda$addHelpMenu$0", "(JJ)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(CMenuBar::*)(int64_t,int64_t)>(&CMenuBar::lambda$addHelpMenu$0))},
	{"lambda$addHelpMenu$1", "(Lsun/lwawt/macosx/CMenu;J)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(CMenuBar::*)($CMenu*,int64_t)>(&CMenuBar::lambda$addHelpMenu$1))},
	{"lambda$delMenu$2", "(IJ)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(CMenuBar::*)(int32_t,int64_t)>(&CMenuBar::lambda$delMenu$2))},
	{"nativeCreateMenuBar", "()J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(CMenuBar::*)()>(&CMenuBar::nativeCreateMenuBar))},
	{"nativeDelMenu", "(JI)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(CMenuBar::*)(int64_t,int32_t)>(&CMenuBar::nativeDelMenu))},
	{"nativeSetHelpMenu", "(JJ)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(CMenuBar::*)(int64_t,int64_t)>(&CMenuBar::nativeSetHelpMenu))},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC | $FINAL},
	{"setNextInsertionIndex", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(CMenuBar::*)(int32_t)>(&CMenuBar::setNextInsertionIndex))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_nativeCreateMenuBar 14
#define _METHOD_INDEX_nativeDelMenu 15
#define _METHOD_INDEX_nativeSetHelpMenu 16

$ClassInfo _CMenuBar_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.lwawt.macosx.CMenuBar",
	"sun.lwawt.macosx.CMenuComponent",
	"java.awt.peer.MenuBarPeer",
	_CMenuBar_FieldInfo_,
	_CMenuBar_MethodInfo_
};

$Object* allocate$CMenuBar($Class* clazz) {
	return $of($alloc(CMenuBar));
}

void CMenuBar::dispose() {
	this->$CMenuComponent::dispose();
}

void CMenuBar::setFont($Font* f) {
	this->$CMenuComponent::setFont(f);
}

void CMenuBar::finalize() {
	this->$CMenuComponent::finalize();
}

int32_t CMenuBar::hashCode() {
	 return this->$CMenuComponent::hashCode();
}

bool CMenuBar::equals(Object$* arg0) {
	 return this->$CMenuComponent::equals(arg0);
}

$Object* CMenuBar::clone() {
	 return this->$CMenuComponent::clone();
}

$String* CMenuBar::toString() {
	 return this->$CMenuComponent::toString();
}

void CMenuBar::init$($MenuBar* target) {
	$CMenuComponent::init$(target);
	this->nextInsertionIndex = -1;
}

int64_t CMenuBar::createModel() {
	return nativeCreateMenuBar();
}

void CMenuBar::addHelpMenu($Menu* m) {
	$useLocalCurrentObjectStackCache();
	$var($CMenu, cMenu, $cast($CMenu, $nc($($AWTAccessor::getMenuComponentAccessor()))->getPeer(m)));
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CMenuBar$$Lambda$lambda$addHelpMenu$1, this, cMenu)));
}

int32_t CMenuBar::getNextInsertionIndex() {
	return this->nextInsertionIndex;
}

void CMenuBar::setNextInsertionIndex(int32_t index) {
	this->nextInsertionIndex = index;
}

void CMenuBar::addMenu($Menu* m) {
}

void CMenuBar::delMenu(int32_t index) {
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CMenuBar$$Lambda$lambda$delMenu$2$1, this, index)));
}

int64_t CMenuBar::nativeCreateMenuBar() {
	int64_t $ret = 0;
	$prepareNative(CMenuBar, nativeCreateMenuBar, int64_t);
	$ret = $invokeNative();
	$finishNative();
	return $ret;
}

void CMenuBar::nativeSetHelpMenu(int64_t menuBarPtr, int64_t menuPtr) {
	$prepareNative(CMenuBar, nativeSetHelpMenu, void, int64_t menuBarPtr, int64_t menuPtr);
	$invokeNative(menuBarPtr, menuPtr);
	$finishNative();
}

void CMenuBar::nativeDelMenu(int64_t menuBarPtr, int32_t index) {
	$prepareNative(CMenuBar, nativeDelMenu, void, int64_t menuBarPtr, int32_t index);
	$invokeNative(menuBarPtr, index);
	$finishNative();
}

void CMenuBar::lambda$delMenu$2(int32_t index, int64_t ptr) {
	nativeDelMenu(ptr, index);
}

void CMenuBar::lambda$addHelpMenu$1($CMenu* cMenu, int64_t parentPtr) {
	$nc(cMenu)->execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CMenuBar$$Lambda$lambda$addHelpMenu$0$2, this, parentPtr)));
}

void CMenuBar::lambda$addHelpMenu$0(int64_t parentPtr, int64_t menuPtr) {
	nativeSetHelpMenu(parentPtr, menuPtr);
}

CMenuBar::CMenuBar() {
}

$Class* CMenuBar::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CMenuBar$$Lambda$lambda$addHelpMenu$1::classInfo$.name)) {
			return CMenuBar$$Lambda$lambda$addHelpMenu$1::load$(name, initialize);
		}
		if (name->equals(CMenuBar$$Lambda$lambda$delMenu$2$1::classInfo$.name)) {
			return CMenuBar$$Lambda$lambda$delMenu$2$1::load$(name, initialize);
		}
		if (name->equals(CMenuBar$$Lambda$lambda$addHelpMenu$0$2::classInfo$.name)) {
			return CMenuBar$$Lambda$lambda$addHelpMenu$0$2::load$(name, initialize);
		}
	}
	$loadClass(CMenuBar, name, initialize, &_CMenuBar_ClassInfo_, allocate$CMenuBar);
	return class$;
}

$Class* CMenuBar::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun