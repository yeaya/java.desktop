#include <sun/awt/windows/WScrollPanePeer$ScrollEvent.h>

#include <java/lang/Runnable.h>
#include <sun/awt/PeerEvent.h>
#include <sun/awt/windows/WScrollPanePeer.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef FINEST

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $PeerEvent = ::sun::awt::PeerEvent;
using $WScrollPanePeer = ::sun::awt::windows::WScrollPanePeer;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WScrollPanePeer$ScrollEvent_FieldInfo_[] = {
	{"this$0", "Lsun/awt/windows/WScrollPanePeer;", nullptr, $FINAL | $SYNTHETIC, $field(WScrollPanePeer$ScrollEvent, this$0)},
	{}
};

$MethodInfo _WScrollPanePeer$ScrollEvent_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/windows/WScrollPanePeer;Ljava/lang/Object;Ljava/lang/Runnable;)V", nullptr, 0, $method(static_cast<void(WScrollPanePeer$ScrollEvent::*)($WScrollPanePeer*,Object$*,$Runnable*)>(&WScrollPanePeer$ScrollEvent::init$))},
	{"coalesceEvents", "(Lsun/awt/PeerEvent;)Lsun/awt/PeerEvent;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WScrollPanePeer$ScrollEvent_InnerClassesInfo_[] = {
	{"sun.awt.windows.WScrollPanePeer$ScrollEvent", "sun.awt.windows.WScrollPanePeer", "ScrollEvent", 0},
	{}
};

$ClassInfo _WScrollPanePeer$ScrollEvent_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.windows.WScrollPanePeer$ScrollEvent",
	"sun.awt.PeerEvent",
	nullptr,
	_WScrollPanePeer$ScrollEvent_FieldInfo_,
	_WScrollPanePeer$ScrollEvent_MethodInfo_,
	nullptr,
	nullptr,
	_WScrollPanePeer$ScrollEvent_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.windows.WScrollPanePeer"
};

$Object* allocate$WScrollPanePeer$ScrollEvent($Class* clazz) {
	return $of($alloc(WScrollPanePeer$ScrollEvent));
}

void WScrollPanePeer$ScrollEvent::init$($WScrollPanePeer* this$0, Object$* source, $Runnable* runnable) {
	$set(this, this$0, this$0);
	$PeerEvent::init$(source, runnable, 0);
}

$PeerEvent* WScrollPanePeer$ScrollEvent::coalesceEvents($PeerEvent* newEvent) {
	$init($WScrollPanePeer);
	$init($PlatformLogger$Level);
	if ($nc($WScrollPanePeer::log)->isLoggable($PlatformLogger$Level::FINEST)) {
		$nc($WScrollPanePeer::log)->finest($$str({"ScrollEvent coalesced: "_s, newEvent}));
	}
	if ($instanceOf(WScrollPanePeer$ScrollEvent, newEvent)) {
		return newEvent;
	}
	return nullptr;
}

WScrollPanePeer$ScrollEvent::WScrollPanePeer$ScrollEvent() {
}

$Class* WScrollPanePeer$ScrollEvent::load$($String* name, bool initialize) {
	$loadClass(WScrollPanePeer$ScrollEvent, name, initialize, &_WScrollPanePeer$ScrollEvent_ClassInfo_, allocate$WScrollPanePeer$ScrollEvent);
	return class$;
}

$Class* WScrollPanePeer$ScrollEvent::class$ = nullptr;

		} // windows
	} // awt
} // sun