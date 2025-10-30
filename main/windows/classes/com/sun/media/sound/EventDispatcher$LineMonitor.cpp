#include <com/sun/media/sound/EventDispatcher$LineMonitor.h>

#include <com/sun/media/sound/EventDispatcher.h>
#include <jcpp.h>

using $EventDispatcher = ::com::sun::media::sound::EventDispatcher;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _EventDispatcher$LineMonitor_MethodInfo_[] = {
	{"checkLine", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _EventDispatcher$LineMonitor_InnerClassesInfo_[] = {
	{"com.sun.media.sound.EventDispatcher$LineMonitor", "com.sun.media.sound.EventDispatcher", "LineMonitor", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _EventDispatcher$LineMonitor_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.sun.media.sound.EventDispatcher$LineMonitor",
	nullptr,
	nullptr,
	nullptr,
	_EventDispatcher$LineMonitor_MethodInfo_,
	nullptr,
	nullptr,
	_EventDispatcher$LineMonitor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.EventDispatcher"
};

$Object* allocate$EventDispatcher$LineMonitor($Class* clazz) {
	return $of($alloc(EventDispatcher$LineMonitor));
}

$Class* EventDispatcher$LineMonitor::load$($String* name, bool initialize) {
	$loadClass(EventDispatcher$LineMonitor, name, initialize, &_EventDispatcher$LineMonitor_ClassInfo_, allocate$EventDispatcher$LineMonitor);
	return class$;
}

$Class* EventDispatcher$LineMonitor::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com