#include <sun/awt/PaintEventDispatcher.h>

#include <java/awt/Component.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/PaintEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef PAINT

using $Component = ::java::awt::Component;
using $Rectangle = ::java::awt::Rectangle;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

namespace sun {
	namespace awt {

$FieldInfo _PaintEventDispatcher_FieldInfo_[] = {
	{"dispatcher", "Lsun/awt/PaintEventDispatcher;", nullptr, $PRIVATE | $STATIC, $staticField(PaintEventDispatcher, dispatcher)},
	{}
};

$MethodInfo _PaintEventDispatcher_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PaintEventDispatcher::*)()>(&PaintEventDispatcher::init$))},
	{"createPaintEvent", "(Ljava/awt/Component;IIII)Ljava/awt/event/PaintEvent;", nullptr, $PUBLIC},
	{"getPaintEventDispatcher", "()Lsun/awt/PaintEventDispatcher;", nullptr, $PUBLIC | $STATIC, $method(static_cast<PaintEventDispatcher*(*)()>(&PaintEventDispatcher::getPaintEventDispatcher))},
	{"queueSurfaceDataReplacing", "(Ljava/awt/Component;Ljava/lang/Runnable;)Z", nullptr, $PUBLIC},
	{"setPaintEventDispatcher", "(Lsun/awt/PaintEventDispatcher;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(PaintEventDispatcher*)>(&PaintEventDispatcher::setPaintEventDispatcher))},
	{"shouldDoNativeBackgroundErase", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PaintEventDispatcher_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.PaintEventDispatcher",
	"java.lang.Object",
	nullptr,
	_PaintEventDispatcher_FieldInfo_,
	_PaintEventDispatcher_MethodInfo_
};

$Object* allocate$PaintEventDispatcher($Class* clazz) {
	return $of($alloc(PaintEventDispatcher));
}


PaintEventDispatcher* PaintEventDispatcher::dispatcher = nullptr;

void PaintEventDispatcher::init$() {
}

void PaintEventDispatcher::setPaintEventDispatcher(PaintEventDispatcher* dispatcher) {
	$load(PaintEventDispatcher);
	$synchronized(PaintEventDispatcher::class$) {
		$init(PaintEventDispatcher);
		$assignStatic(PaintEventDispatcher::dispatcher, dispatcher);
	}
}

PaintEventDispatcher* PaintEventDispatcher::getPaintEventDispatcher() {
	$load(PaintEventDispatcher);
	$synchronized(PaintEventDispatcher::class$) {
		$init(PaintEventDispatcher);
		if (PaintEventDispatcher::dispatcher == nullptr) {
			$assignStatic(PaintEventDispatcher::dispatcher, $new(PaintEventDispatcher));
		}
		return PaintEventDispatcher::dispatcher;
	}
}

$PaintEvent* PaintEventDispatcher::createPaintEvent($Component* target, int32_t x, int32_t y, int32_t w, int32_t h) {
	return $new($PaintEvent, target, $PaintEvent::PAINT, $$new($Rectangle, x, y, w, h));
}

bool PaintEventDispatcher::shouldDoNativeBackgroundErase($Component* c) {
	return true;
}

bool PaintEventDispatcher::queueSurfaceDataReplacing($Component* c, $Runnable* r) {
	return false;
}

PaintEventDispatcher::PaintEventDispatcher() {
}

$Class* PaintEventDispatcher::load$($String* name, bool initialize) {
	$loadClass(PaintEventDispatcher, name, initialize, &_PaintEventDispatcher_ClassInfo_, allocate$PaintEventDispatcher);
	return class$;
}

$Class* PaintEventDispatcher::class$ = nullptr;

	} // awt
} // sun