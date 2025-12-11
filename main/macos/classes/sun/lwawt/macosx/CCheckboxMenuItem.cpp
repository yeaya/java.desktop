#include <sun/lwawt/macosx/CCheckboxMenuItem.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/CheckboxMenuItem.h>
#include <java/awt/Font.h>
#include <java/awt/ItemSelectable.h>
#include <java/awt/MenuComponent.h>
#include <java/awt/MenuItem.h>
#include <java/awt/event/ItemEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <sun/lwawt/macosx/CCheckboxMenuItem$1.h>
#include <sun/lwawt/macosx/CFRetainedResource$CFNativeAction.h>
#include <sun/lwawt/macosx/CFRetainedResource.h>
#include <sun/lwawt/macosx/CMenuComponent.h>
#include <sun/lwawt/macosx/CMenuItem.h>
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
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $SunToolkit = ::sun::awt::SunToolkit;
using $CCheckboxMenuItem$1 = ::sun::lwawt::macosx::CCheckboxMenuItem$1;
using $CFRetainedResource$CFNativeAction = ::sun::lwawt::macosx::CFRetainedResource$CFNativeAction;
using $CMenuItem = ::sun::lwawt::macosx::CMenuItem;

namespace sun {
	namespace lwawt {
		namespace macosx {

class CCheckboxMenuItem$$Lambda$nativeSetIsCheckbox : public $CFRetainedResource$CFNativeAction {
	$class(CCheckboxMenuItem$$Lambda$nativeSetIsCheckbox, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(CCheckboxMenuItem* inst) {
		$set(this, inst$, inst);
	}
	virtual void run(int64_t modelPtr) override {
		$nc(inst$)->nativeSetIsCheckbox(modelPtr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CCheckboxMenuItem$$Lambda$nativeSetIsCheckbox>());
	}
	CCheckboxMenuItem* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CCheckboxMenuItem$$Lambda$nativeSetIsCheckbox::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CCheckboxMenuItem$$Lambda$nativeSetIsCheckbox, inst$)},
	{}
};
$MethodInfo CCheckboxMenuItem$$Lambda$nativeSetIsCheckbox::methodInfos[3] = {
	{"<init>", "(Lsun/lwawt/macosx/CCheckboxMenuItem;)V", nullptr, $PUBLIC, $method(static_cast<void(CCheckboxMenuItem$$Lambda$nativeSetIsCheckbox::*)(CCheckboxMenuItem*)>(&CCheckboxMenuItem$$Lambda$nativeSetIsCheckbox::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CCheckboxMenuItem$$Lambda$nativeSetIsCheckbox::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CCheckboxMenuItem$$Lambda$nativeSetIsCheckbox",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CCheckboxMenuItem$$Lambda$nativeSetIsCheckbox::load$($String* name, bool initialize) {
	$loadClass(CCheckboxMenuItem$$Lambda$nativeSetIsCheckbox, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CCheckboxMenuItem$$Lambda$nativeSetIsCheckbox::class$ = nullptr;

class CCheckboxMenuItem$$Lambda$lambda$setState$0$1 : public $CFRetainedResource$CFNativeAction {
	$class(CCheckboxMenuItem$$Lambda$lambda$setState$0$1, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(CCheckboxMenuItem* inst, bool state) {
		$set(this, inst$, inst);
		this->state = state;
	}
	virtual void run(int64_t ptr) override {
		$nc(inst$)->lambda$setState$0(state, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CCheckboxMenuItem$$Lambda$lambda$setState$0$1>());
	}
	CCheckboxMenuItem* inst$ = nullptr;
	bool state = false;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CCheckboxMenuItem$$Lambda$lambda$setState$0$1::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CCheckboxMenuItem$$Lambda$lambda$setState$0$1, inst$)},
	{"state", "Z", nullptr, $PUBLIC, $field(CCheckboxMenuItem$$Lambda$lambda$setState$0$1, state)},
	{}
};
$MethodInfo CCheckboxMenuItem$$Lambda$lambda$setState$0$1::methodInfos[3] = {
	{"<init>", "(Lsun/lwawt/macosx/CCheckboxMenuItem;Z)V", nullptr, $PUBLIC, $method(static_cast<void(CCheckboxMenuItem$$Lambda$lambda$setState$0$1::*)(CCheckboxMenuItem*,bool)>(&CCheckboxMenuItem$$Lambda$lambda$setState$0$1::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CCheckboxMenuItem$$Lambda$lambda$setState$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CCheckboxMenuItem$$Lambda$lambda$setState$0$1",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CCheckboxMenuItem$$Lambda$lambda$setState$0$1::load$($String* name, bool initialize) {
	$loadClass(CCheckboxMenuItem$$Lambda$lambda$setState$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CCheckboxMenuItem$$Lambda$lambda$setState$0$1::class$ = nullptr;

$FieldInfo _CCheckboxMenuItem_FieldInfo_[] = {
	{"fAutoToggle", "Z", nullptr, $VOLATILE, $field(CCheckboxMenuItem, fAutoToggle)},
	{"fIsIndeterminate", "Z", nullptr, $VOLATILE, $field(CCheckboxMenuItem, fIsIndeterminate)},
	{}
};

$MethodInfo _CCheckboxMenuItem_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*dispose", "()V", nullptr, $PUBLIC | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/CheckboxMenuItem;)V", nullptr, 0, $method(static_cast<void(CCheckboxMenuItem::*)($CheckboxMenuItem*)>(&CCheckboxMenuItem::init$))},
	{"handleAction", "(Z)V", nullptr, $PUBLIC},
	{"isAutoToggle", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(CCheckboxMenuItem::*)()>(&CCheckboxMenuItem::isAutoToggle))},
	{"lambda$setState$0", "(ZJ)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(CCheckboxMenuItem::*)(bool,int64_t)>(&CCheckboxMenuItem::lambda$setState$0))},
	{"nativeSetIsCheckbox", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(CCheckboxMenuItem::*)(int64_t)>(&CCheckboxMenuItem::nativeSetIsCheckbox))},
	{"nativeSetState", "(JZ)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(CCheckboxMenuItem::*)(int64_t,bool)>(&CCheckboxMenuItem::nativeSetState))},
	{"setAutoToggle", "(Z)V", nullptr, $PUBLIC},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC | $FINAL},
	{"setIsIndeterminate", "(Z)V", nullptr, $PUBLIC},
	{"*setLabel", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setState", "(Z)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_nativeSetIsCheckbox 9
#define _METHOD_INDEX_nativeSetState 10

$InnerClassInfo _CCheckboxMenuItem_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CCheckboxMenuItem$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CCheckboxMenuItem_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.lwawt.macosx.CCheckboxMenuItem",
	"sun.lwawt.macosx.CMenuItem",
	"java.awt.peer.CheckboxMenuItemPeer",
	_CCheckboxMenuItem_FieldInfo_,
	_CCheckboxMenuItem_MethodInfo_,
	nullptr,
	nullptr,
	_CCheckboxMenuItem_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CCheckboxMenuItem$1"
};

$Object* allocate$CCheckboxMenuItem($Class* clazz) {
	return $of($alloc(CCheckboxMenuItem));
}

void CCheckboxMenuItem::setLabel($String* label) {
	this->$CMenuItem::setLabel(label);
}

void CCheckboxMenuItem::setEnabled(bool b) {
	this->$CMenuItem::setEnabled(b);
}

void CCheckboxMenuItem::dispose() {
	this->$CMenuItem::dispose();
}

void CCheckboxMenuItem::setFont($Font* f) {
	this->$CMenuItem::setFont(f);
}

void CCheckboxMenuItem::finalize() {
	this->$CMenuItem::finalize();
}

int32_t CCheckboxMenuItem::hashCode() {
	 return this->$CMenuItem::hashCode();
}

bool CCheckboxMenuItem::equals(Object$* arg0) {
	 return this->$CMenuItem::equals(arg0);
}

$Object* CCheckboxMenuItem::clone() {
	 return this->$CMenuItem::clone();
}

$String* CCheckboxMenuItem::toString() {
	 return this->$CMenuItem::toString();
}

void CCheckboxMenuItem::nativeSetState(int64_t modelPtr, bool state) {
	$prepareNative(CCheckboxMenuItem, nativeSetState, void, int64_t modelPtr, bool state);
	$invokeNative(modelPtr, state);
	$finishNative();
}

void CCheckboxMenuItem::nativeSetIsCheckbox(int64_t modelPtr) {
	$prepareNative(CCheckboxMenuItem, nativeSetIsCheckbox, void, int64_t modelPtr);
	$invokeNative(modelPtr);
	$finishNative();
}

void CCheckboxMenuItem::init$($CheckboxMenuItem* target) {
	$CMenuItem::init$(target);
	this->fAutoToggle = true;
	this->fIsIndeterminate = false;
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CCheckboxMenuItem$$Lambda$nativeSetIsCheckbox, this)));
	setState($nc(target)->getState());
}

void CCheckboxMenuItem::setState(bool state) {
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CCheckboxMenuItem$$Lambda$lambda$setState$0$1, this, state)));
}

void CCheckboxMenuItem::handleAction(bool state) {
	$useLocalCurrentObjectStackCache();
	$var($CheckboxMenuItem, target, $cast($CheckboxMenuItem, getTarget()));
	$SunToolkit::executeOnEventHandlerThread(target, $$new($CCheckboxMenuItem$1, this, target, state));
	$var($ItemEvent, event, $new($ItemEvent, target, $ItemEvent::ITEM_STATE_CHANGED, $($nc(target)->getLabel()), state ? $ItemEvent::SELECTED : $ItemEvent::DESELECTED));
	$SunToolkit::postEvent($($SunToolkit::targetToAppContext($(getTarget()))), event);
}

void CCheckboxMenuItem::setIsIndeterminate(bool indeterminate) {
	this->fIsIndeterminate = indeterminate;
}

bool CCheckboxMenuItem::isAutoToggle() {
	return this->fAutoToggle;
}

void CCheckboxMenuItem::setAutoToggle(bool b) {
	this->fAutoToggle = b;
}

void CCheckboxMenuItem::lambda$setState$0(bool state, int64_t ptr) {
	nativeSetState(ptr, state);
}

CCheckboxMenuItem::CCheckboxMenuItem() {
}

$Class* CCheckboxMenuItem::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CCheckboxMenuItem$$Lambda$nativeSetIsCheckbox::classInfo$.name)) {
			return CCheckboxMenuItem$$Lambda$nativeSetIsCheckbox::load$(name, initialize);
		}
		if (name->equals(CCheckboxMenuItem$$Lambda$lambda$setState$0$1::classInfo$.name)) {
			return CCheckboxMenuItem$$Lambda$lambda$setState$0$1::load$(name, initialize);
		}
	}
	$loadClass(CCheckboxMenuItem, name, initialize, &_CCheckboxMenuItem_ClassInfo_, allocate$CCheckboxMenuItem);
	return class$;
}

$Class* CCheckboxMenuItem::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun