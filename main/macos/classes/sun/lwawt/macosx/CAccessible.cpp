#include <sun/lwawt/macosx/CAccessible.h>

#include <java/awt/Component.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <sun/awt/AWTAccessor$AccessibleContextAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/lwawt/macosx/CAccessible$AXChangeNotifier.h>
#include <sun/lwawt/macosx/CFRetainedResource.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$AccessibleContextAccessor = ::sun::awt::AWTAccessor$AccessibleContextAccessor;
using $CAccessible$AXChangeNotifier = ::sun::lwawt::macosx::CAccessible$AXChangeNotifier;
using $CFRetainedResource = ::sun::lwawt::macosx::CFRetainedResource;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CAccessible_FieldInfo_[] = {
	{"accessible", "Ljavax/accessibility/Accessible;", nullptr, $PRIVATE, $field(CAccessible, accessible)},
	{"activeDescendant", "Ljavax/accessibility/AccessibleContext;", nullptr, $PRIVATE, $field(CAccessible, activeDescendant)},
	{}
};

$MethodInfo _CAccessible_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/accessibility/Accessible;)V", nullptr, $PRIVATE, $method(static_cast<void(CAccessible::*)($Accessible*)>(&CAccessible::init$))},
	{"addNotificationListeners", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"dispose", "()V", nullptr, $PROTECTED | $SYNCHRONIZED},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC},
	{"getActiveDescendant", "(Ljavax/accessibility/Accessible;)Ljavax/accessibility/AccessibleContext;", nullptr, $STATIC, $method(static_cast<$AccessibleContext*(*)($Accessible*)>(&CAccessible::getActiveDescendant))},
	{"getCAccessible", "(Ljavax/accessibility/Accessible;)Lsun/lwawt/macosx/CAccessible;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CAccessible*(*)($Accessible*)>(&CAccessible::getCAccessible))},
	{"getSwingAccessible", "(Ljavax/accessibility/Accessible;)Ljavax/accessibility/Accessible;", nullptr, $STATIC, $method(static_cast<$Accessible*(*)($Accessible*)>(&CAccessible::getSwingAccessible))},
	{"menuClosed", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&CAccessible::menuClosed))},
	{"menuItemSelected", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&CAccessible::menuItemSelected))},
	{"menuOpened", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&CAccessible::menuOpened))},
	{"selectedTextChanged", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&CAccessible::selectedTextChanged))},
	{"selectionChanged", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&CAccessible::selectionChanged))},
	{"titleChanged", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&CAccessible::titleChanged))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unregisterFromCocoaAXSystem", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&CAccessible::unregisterFromCocoaAXSystem))},
	{"valueChanged", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&CAccessible::valueChanged))},
	{}
};

#define _METHOD_INDEX_menuClosed 11
#define _METHOD_INDEX_menuItemSelected 12
#define _METHOD_INDEX_menuOpened 13
#define _METHOD_INDEX_selectedTextChanged 14
#define _METHOD_INDEX_selectionChanged 15
#define _METHOD_INDEX_titleChanged 16
#define _METHOD_INDEX_unregisterFromCocoaAXSystem 18
#define _METHOD_INDEX_valueChanged 19

$InnerClassInfo _CAccessible_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessible$AXChangeNotifier", "sun.lwawt.macosx.CAccessible", "AXChangeNotifier", $PRIVATE},
	{}
};

$ClassInfo _CAccessible_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessible",
	"sun.lwawt.macosx.CFRetainedResource",
	"javax.accessibility.Accessible",
	_CAccessible_FieldInfo_,
	_CAccessible_MethodInfo_,
	nullptr,
	nullptr,
	_CAccessible_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessible$AXChangeNotifier"
};

$Object* allocate$CAccessible($Class* clazz) {
	return $of($alloc(CAccessible));
}

void CAccessible::finalize() {
	this->$CFRetainedResource::finalize();
}

int32_t CAccessible::hashCode() {
	 return this->$CFRetainedResource::hashCode();
}

bool CAccessible::equals(Object$* arg0) {
	 return this->$CFRetainedResource::equals(arg0);
}

$Object* CAccessible::clone() {
	 return this->$CFRetainedResource::clone();
}

$String* CAccessible::toString() {
	 return this->$CFRetainedResource::toString();
}

CAccessible* CAccessible::getCAccessible($Accessible* a) {
	$init(CAccessible);
	$useLocalCurrentObjectStackCache();
	if (a == nullptr) {
		return nullptr;
	}
	$var($AccessibleContext, context, $nc(a)->getAccessibleContext());
	$var($AWTAccessor$AccessibleContextAccessor, accessor, $AWTAccessor::getAccessibleContextAccessor());
	$var(CAccessible, cachedCAX, $cast(CAccessible, $nc(accessor)->getNativeAXResource(context)));
	if (cachedCAX != nullptr) {
		return cachedCAX;
	}
	$var(CAccessible, newCAX, $new(CAccessible, a));
	accessor->setNativeAXResource(context, newCAX);
	return newCAX;
}

void CAccessible::unregisterFromCocoaAXSystem(int64_t ptr) {
	$init(CAccessible);
	$prepareNativeStatic(CAccessible, unregisterFromCocoaAXSystem, void, int64_t ptr);
	$invokeNativeStatic(ptr);
	$finishNativeStatic();
}

void CAccessible::valueChanged(int64_t ptr) {
	$init(CAccessible);
	$prepareNativeStatic(CAccessible, valueChanged, void, int64_t ptr);
	$invokeNativeStatic(ptr);
	$finishNativeStatic();
}

void CAccessible::selectedTextChanged(int64_t ptr) {
	$init(CAccessible);
	$prepareNativeStatic(CAccessible, selectedTextChanged, void, int64_t ptr);
	$invokeNativeStatic(ptr);
	$finishNativeStatic();
}

void CAccessible::selectionChanged(int64_t ptr) {
	$init(CAccessible);
	$prepareNativeStatic(CAccessible, selectionChanged, void, int64_t ptr);
	$invokeNativeStatic(ptr);
	$finishNativeStatic();
}

void CAccessible::titleChanged(int64_t ptr) {
	$init(CAccessible);
	$prepareNativeStatic(CAccessible, titleChanged, void, int64_t ptr);
	$invokeNativeStatic(ptr);
	$finishNativeStatic();
}

void CAccessible::menuOpened(int64_t ptr) {
	$init(CAccessible);
	$prepareNativeStatic(CAccessible, menuOpened, void, int64_t ptr);
	$invokeNativeStatic(ptr);
	$finishNativeStatic();
}

void CAccessible::menuClosed(int64_t ptr) {
	$init(CAccessible);
	$prepareNativeStatic(CAccessible, menuClosed, void, int64_t ptr);
	$invokeNativeStatic(ptr);
	$finishNativeStatic();
}

void CAccessible::menuItemSelected(int64_t ptr) {
	$init(CAccessible);
	$prepareNativeStatic(CAccessible, menuItemSelected, void, int64_t ptr);
	$invokeNativeStatic(ptr);
	$finishNativeStatic();
}

void CAccessible::init$($Accessible* accessible) {
	$CFRetainedResource::init$(0, true);
	if (accessible == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, accessible, accessible);
	if ($instanceOf($Component, accessible)) {
		addNotificationListeners($cast($Component, accessible));
	}
}

void CAccessible::dispose() {
	$synchronized(this) {
		if (this->ptr != 0) {
			unregisterFromCocoaAXSystem(this->ptr);
		}
		$CFRetainedResource::dispose();
	}
}

$AccessibleContext* CAccessible::getAccessibleContext() {
	return $nc(this->accessible)->getAccessibleContext();
}

void CAccessible::addNotificationListeners($Component* c) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($Accessible, c)) {
		$var($AccessibleContext, ac, $nc(($cast($Accessible, c)))->getAccessibleContext());
		$nc(ac)->addPropertyChangeListener($$new($CAccessible$AXChangeNotifier, this));
	}
}

$Accessible* CAccessible::getSwingAccessible($Accessible* a) {
	$init(CAccessible);
	return ($instanceOf(CAccessible, a)) ? $nc(($cast(CAccessible, a)))->accessible : a;
}

$AccessibleContext* CAccessible::getActiveDescendant($Accessible* a) {
	$init(CAccessible);
	return ($instanceOf(CAccessible, a)) ? $nc(($cast(CAccessible, a)))->activeDescendant : ($AccessibleContext*)nullptr;
}

CAccessible::CAccessible() {
}

$Class* CAccessible::load$($String* name, bool initialize) {
	$loadClass(CAccessible, name, initialize, &_CAccessible_ClassInfo_, allocate$CAccessible);
	return class$;
}

$Class* CAccessible::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun