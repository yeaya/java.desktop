#include <sun/lwawt/macosx/CCursorManager.h>

#include <java/awt/Cursor.h>
#include <java/awt/Point.h>
#include <java/awt/geom/Point2D.h>
#include <sun/lwawt/LWCursorManager.h>
#include <sun/lwawt/macosx/CCustomCursor.h>
#include <jcpp.h>

#undef CUSTOM_CURSOR
#undef DEFAULT_CURSOR
#undef NAMED_CURSOR

using $Cursor = ::java::awt::Cursor;
using $Point = ::java::awt::Point;
using $Point2D = ::java::awt::geom::Point2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $LWCursorManager = ::sun::lwawt::LWCursorManager;
using $CCustomCursor = ::sun::lwawt::macosx::CCustomCursor;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CCursorManager_FieldInfo_[] = {
	{"NAMED_CURSOR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CCursorManager, NAMED_CURSOR)},
	{"theInstance", "Lsun/lwawt/macosx/CCursorManager;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CCursorManager, theInstance)},
	{"currentCursor", "Ljava/awt/Cursor;", nullptr, $PRIVATE | $VOLATILE, $field(CCursorManager, currentCursor)},
	{}
};

$MethodInfo _CCursorManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CCursorManager::*)()>(&CCursorManager::init$))},
	{"getCursorPosition", "()Ljava/awt/Point;", nullptr, $PROTECTED},
	{"getInstance", "()Lsun/lwawt/macosx/CCursorManager;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CCursorManager*(*)()>(&CCursorManager::getInstance))},
	{"nativeGetCursorPosition", "()Ljava/awt/geom/Point2D;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$Point2D*(*)()>(&CCursorManager::nativeGetCursorPosition))},
	{"nativeSetAllowsCursorSetInBackground", "(Z)V", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<void(*)(bool)>(&CCursorManager::nativeSetAllowsCursorSetInBackground))},
	{"nativeSetBuiltInCursor", "(ILjava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t,$String*)>(&CCursorManager::nativeSetBuiltInCursor))},
	{"nativeSetCustomCursor", "(JDD)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,double,double)>(&CCursorManager::nativeSetCustomCursor))},
	{"setCursor", "(Ljava/awt/Cursor;)V", nullptr, $PROTECTED},
	{}
};

#define _METHOD_INDEX_nativeGetCursorPosition 3
#define _METHOD_INDEX_nativeSetAllowsCursorSetInBackground 4
#define _METHOD_INDEX_nativeSetBuiltInCursor 5
#define _METHOD_INDEX_nativeSetCustomCursor 6

$ClassInfo _CCursorManager_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.lwawt.macosx.CCursorManager",
	"sun.lwawt.LWCursorManager",
	nullptr,
	_CCursorManager_FieldInfo_,
	_CCursorManager_MethodInfo_
};

$Object* allocate$CCursorManager($Class* clazz) {
	return $of($alloc(CCursorManager));
}

CCursorManager* CCursorManager::theInstance = nullptr;

$Point2D* CCursorManager::nativeGetCursorPosition() {
	$init(CCursorManager);
	$var($Point2D, $ret, nullptr);
	$prepareNativeStatic(CCursorManager, nativeGetCursorPosition, $Point2D*);
	$assign($ret, $invokeNativeStaticObject());
	$finishNativeStatic();
	return $ret;
}

void CCursorManager::nativeSetBuiltInCursor(int32_t type, $String* name) {
	$init(CCursorManager);
	$prepareNativeStatic(CCursorManager, nativeSetBuiltInCursor, void, int32_t type, $String* name);
	$invokeNativeStatic(type, name);
	$finishNativeStatic();
}

void CCursorManager::nativeSetCustomCursor(int64_t imgPtr, double x, double y) {
	$init(CCursorManager);
	$prepareNativeStatic(CCursorManager, nativeSetCustomCursor, void, int64_t imgPtr, double x, double y);
	$invokeNativeStatic(imgPtr, x, y);
	$finishNativeStatic();
}

void CCursorManager::nativeSetAllowsCursorSetInBackground(bool allows) {
	$init(CCursorManager);
	$prepareNativeStatic(CCursorManager, nativeSetAllowsCursorSetInBackground, void, bool allows);
	$invokeNativeStatic(allows);
	$finishNativeStatic();
}

CCursorManager* CCursorManager::getInstance() {
	$init(CCursorManager);
	return CCursorManager::theInstance;
}

void CCursorManager::init$() {
	$LWCursorManager::init$();
}

$Point* CCursorManager::getCursorPosition() {
	$var($Point2D, nativePosition, nativeGetCursorPosition());
	int32_t var$0 = $cast(int32_t, $nc(nativePosition)->getX());
	return $new($Point, var$0, $cast(int32_t, nativePosition->getY()));
}

void CCursorManager::setCursor($Cursor* cursor) {
	$useLocalCurrentObjectStackCache();
	if (cursor == this->currentCursor) {
		return;
	}
	$set(this, currentCursor, cursor);
	if (cursor == nullptr) {
		nativeSetBuiltInCursor($Cursor::DEFAULT_CURSOR, nullptr);
		return;
	}
	if ($instanceOf($CCustomCursor, cursor)) {
		$var($CCustomCursor, customCursor, $cast($CCustomCursor, cursor));
		int64_t imagePtr = $nc(customCursor)->getImageData();
		if (imagePtr != (int64_t)0) {
			$var($Point, hotSpot, customCursor->getHotSpot());
			nativeSetCustomCursor(imagePtr, (double)$nc(hotSpot)->x, (double)hotSpot->y);
		}
		return;
	}
	int32_t type = $nc(cursor)->getType();
	if (type != $Cursor::CUSTOM_CURSOR) {
		nativeSetBuiltInCursor(type, nullptr);
		return;
	}
	$var($String, name, cursor->getName());
	if (name != nullptr) {
		nativeSetBuiltInCursor(CCursorManager::NAMED_CURSOR, name);
		return;
	}
	$throwNew($RuntimeException, "Unimplemented"_s);
}

void clinit$CCursorManager($Class* class$) {
	$assignStatic(CCursorManager::theInstance, $new(CCursorManager));
}

CCursorManager::CCursorManager() {
}

$Class* CCursorManager::load$($String* name, bool initialize) {
	$loadClass(CCursorManager, name, initialize, &_CCursorManager_ClassInfo_, clinit$CCursorManager, allocate$CCursorManager);
	return class$;
}

$Class* CCursorManager::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun