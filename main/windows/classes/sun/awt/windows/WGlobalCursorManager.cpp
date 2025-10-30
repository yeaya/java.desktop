#include <sun/awt/windows/WGlobalCursorManager.h>

#include <java/awt/Component.h>
#include <java/awt/Cursor.h>
#include <java/awt/Point.h>
#include <sun/awt/GlobalCursorManager.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Cursor = ::java::awt::Cursor;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GlobalCursorManager = ::sun::awt::GlobalCursorManager;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WGlobalCursorManager_FieldInfo_[] = {
	{"manager", "Lsun/awt/windows/WGlobalCursorManager;", nullptr, $PRIVATE | $STATIC, $staticField(WGlobalCursorManager, manager)},
	{}
};

$MethodInfo _WGlobalCursorManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(WGlobalCursorManager::*)()>(&WGlobalCursorManager::init$))},
	{"findHeavyweightUnderCursor", "(Z)Ljava/awt/Component;", nullptr, $PROTECTED | $NATIVE},
	{"getCursorManager", "()Lsun/awt/GlobalCursorManager;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$GlobalCursorManager*(*)()>(&WGlobalCursorManager::getCursorManager))},
	{"getCursorPos", "(Ljava/awt/Point;)V", nullptr, $PROTECTED | $NATIVE},
	{"getLocationOnScreen", "(Ljava/awt/Component;)Ljava/awt/Point;", nullptr, $PROTECTED | $NATIVE},
	{"nativeUpdateCursor", "(Ljava/awt/Component;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Component*)>(&WGlobalCursorManager::nativeUpdateCursor))},
	{"setCursor", "(Ljava/awt/Component;Ljava/awt/Cursor;Z)V", nullptr, $PROTECTED | $NATIVE},
	{}
};

#define _METHOD_INDEX_findHeavyweightUnderCursor 1
#define _METHOD_INDEX_getCursorPos 3
#define _METHOD_INDEX_getLocationOnScreen 4
#define _METHOD_INDEX_setCursor 6

$ClassInfo _WGlobalCursorManager_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.windows.WGlobalCursorManager",
	"sun.awt.GlobalCursorManager",
	nullptr,
	_WGlobalCursorManager_FieldInfo_,
	_WGlobalCursorManager_MethodInfo_
};

$Object* allocate$WGlobalCursorManager($Class* clazz) {
	return $of($alloc(WGlobalCursorManager));
}

WGlobalCursorManager* WGlobalCursorManager::manager = nullptr;

void WGlobalCursorManager::init$() {
	$GlobalCursorManager::init$();
}

$GlobalCursorManager* WGlobalCursorManager::getCursorManager() {
	$init(WGlobalCursorManager);
	if (WGlobalCursorManager::manager == nullptr) {
		$assignStatic(WGlobalCursorManager::manager, $new(WGlobalCursorManager));
	}
	return WGlobalCursorManager::manager;
}

void WGlobalCursorManager::nativeUpdateCursor($Component* heavy) {
	$init(WGlobalCursorManager);
	$nc($(WGlobalCursorManager::getCursorManager()))->updateCursorLater(heavy);
}

void WGlobalCursorManager::setCursor($Component* comp, $Cursor* cursor, bool u) {
	$prepareNative(WGlobalCursorManager, setCursor, void, $Component* comp, $Cursor* cursor, bool u);
	$invokeNative(WGlobalCursorManager, setCursor, comp, cursor, u);
	$finishNative();
}

void WGlobalCursorManager::getCursorPos($Point* p) {
	$prepareNative(WGlobalCursorManager, getCursorPos, void, $Point* p);
	$invokeNative(WGlobalCursorManager, getCursorPos, p);
	$finishNative();
}

$Component* WGlobalCursorManager::findHeavyweightUnderCursor(bool useCache) {
	$var($Component, $ret, nullptr);
	$prepareNative(WGlobalCursorManager, findHeavyweightUnderCursor, $Component*, bool useCache);
	$assign($ret, $invokeNative(WGlobalCursorManager, findHeavyweightUnderCursor, useCache));
	$finishNative();
	return $ret;
}

$Point* WGlobalCursorManager::getLocationOnScreen($Component* com) {
	$var($Point, $ret, nullptr);
	$prepareNative(WGlobalCursorManager, getLocationOnScreen, $Point*, $Component* com);
	$assign($ret, $invokeNative(WGlobalCursorManager, getLocationOnScreen, com));
	$finishNative();
	return $ret;
}

WGlobalCursorManager::WGlobalCursorManager() {
}

$Class* WGlobalCursorManager::load$($String* name, bool initialize) {
	$loadClass(WGlobalCursorManager, name, initialize, &_WGlobalCursorManager_ClassInfo_, allocate$WGlobalCursorManager);
	return class$;
}

$Class* WGlobalCursorManager::class$ = nullptr;

		} // windows
	} // awt
} // sun