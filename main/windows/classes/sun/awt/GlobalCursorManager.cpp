#include <sun/awt/GlobalCursorManager.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Cursor.h>
#include <java/awt/IllegalComponentStateException.h>
#include <java/awt/Point.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/InvocationEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor$ContainerAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/GlobalCursorManager$NativeUpdater.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Cursor = ::java::awt::Cursor;
using $IllegalComponentStateException = ::java::awt::IllegalComponentStateException;
using $Point = ::java::awt::Point;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $InputEvent = ::java::awt::event::InputEvent;
using $InvocationEvent = ::java::awt::event::InvocationEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $AWTAccessor$ContainerAccessor = ::sun::awt::AWTAccessor$ContainerAccessor;
using $GlobalCursorManager$NativeUpdater = ::sun::awt::GlobalCursorManager$NativeUpdater;

namespace sun {
	namespace awt {

$FieldInfo _GlobalCursorManager_FieldInfo_[] = {
	{"nativeUpdater", "Lsun/awt/GlobalCursorManager$NativeUpdater;", nullptr, $PRIVATE | $FINAL, $field(GlobalCursorManager, nativeUpdater)},
	{"lastUpdateMillis", "J", nullptr, $PRIVATE, $field(GlobalCursorManager, lastUpdateMillis)},
	{"lastUpdateLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(GlobalCursorManager, lastUpdateLock)},
	{}
};

$MethodInfo _GlobalCursorManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(GlobalCursorManager::*)()>(&GlobalCursorManager::init$))},
	{"_updateCursor", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(GlobalCursorManager::*)(bool)>(&GlobalCursorManager::_updateCursor))},
	{"findHeavyweightUnderCursor", "(Z)Ljava/awt/Component;", nullptr, $PROTECTED | $ABSTRACT},
	{"getCursorPos", "(Ljava/awt/Point;)V", nullptr, $PROTECTED | $ABSTRACT},
	{"getLocationOnScreen", "(Ljava/awt/Component;)Ljava/awt/Point;", nullptr, $PROTECTED | $ABSTRACT},
	{"setCursor", "(Ljava/awt/Component;Ljava/awt/Cursor;Z)V", nullptr, $PROTECTED | $ABSTRACT},
	{"updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"updateCursorImmediately", "(Ljava/awt/event/InputEvent;)V", nullptr, $PUBLIC},
	{"updateCursorLater", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"updateCursorOutOfJava", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _GlobalCursorManager_InnerClassesInfo_[] = {
	{"sun.awt.GlobalCursorManager$NativeUpdater", "sun.awt.GlobalCursorManager", "NativeUpdater", 0},
	{}
};

$ClassInfo _GlobalCursorManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.awt.GlobalCursorManager",
	"java.lang.Object",
	nullptr,
	_GlobalCursorManager_FieldInfo_,
	_GlobalCursorManager_MethodInfo_,
	nullptr,
	nullptr,
	_GlobalCursorManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.GlobalCursorManager$NativeUpdater"
};

$Object* allocate$GlobalCursorManager($Class* clazz) {
	return $of($alloc(GlobalCursorManager));
}

void GlobalCursorManager::updateCursorImmediately() {
	$synchronized(this->nativeUpdater) {
		$nc(this->nativeUpdater)->pending = false;
	}
	_updateCursor(false);
}

void GlobalCursorManager::updateCursorImmediately($InputEvent* e) {
	bool shouldUpdate = false;
	$synchronized(this->lastUpdateLock) {
		shouldUpdate = ($nc(e)->getWhen() >= this->lastUpdateMillis);
	}
	if (shouldUpdate) {
		_updateCursor(true);
	}
}

void GlobalCursorManager::updateCursorLater($Component* heavy) {
	$useLocalCurrentObjectStackCache();
	$nc(this->nativeUpdater)->postIfNotPending(heavy, $$new($InvocationEvent, $($Toolkit::getDefaultToolkit()), this->nativeUpdater));
}

void GlobalCursorManager::init$() {
	$set(this, nativeUpdater, $new($GlobalCursorManager$NativeUpdater, this));
	$set(this, lastUpdateLock, $new($Object));
}

void GlobalCursorManager::_updateCursor(bool useCache) {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->lastUpdateLock) {
		this->lastUpdateMillis = $System::currentTimeMillis();
	}
	$var($Point, queryPos, nullptr);
	$var($Point, p, nullptr);
	$var($Component, comp, nullptr);
	try {
		$assign(comp, findHeavyweightUnderCursor(useCache));
		if (comp == nullptr) {
			updateCursorOutOfJava();
			return;
		}
		if ($instanceOf($Window, comp)) {
			$assign(p, $nc($($AWTAccessor::getComponentAccessor()))->getLocation(comp));
		} else if ($instanceOf($Container, comp)) {
			$assign(p, getLocationOnScreen(comp));
		}
		if (p != nullptr) {
			$assign(queryPos, $new($Point));
			getCursorPos(queryPos);
			$var($Component, c, $nc($($AWTAccessor::getContainerAccessor()))->findComponentAt($cast($Container, comp), queryPos->x - p->x, queryPos->y - p->y, false));
			if (c != nullptr) {
				$assign(comp, c);
			}
		}
		setCursor(comp, $($nc($($AWTAccessor::getComponentAccessor()))->getCursor(comp)), useCache);
	} catch ($IllegalComponentStateException&) {
		$catch();
	}
}

void GlobalCursorManager::updateCursorOutOfJava() {
}

GlobalCursorManager::GlobalCursorManager() {
}

$Class* GlobalCursorManager::load$($String* name, bool initialize) {
	$loadClass(GlobalCursorManager, name, initialize, &_GlobalCursorManager_ClassInfo_, allocate$GlobalCursorManager);
	return class$;
}

$Class* GlobalCursorManager::class$ = nullptr;

	} // awt
} // sun