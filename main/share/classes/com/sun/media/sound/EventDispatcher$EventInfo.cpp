#include <com/sun/media/sound/EventDispatcher$EventInfo.h>

#include <com/sun/media/sound/EventDispatcher.h>
#include <java/util/List.h>
#include <jcpp.h>

using $EventDispatcher = ::com::sun::media::sound::EventDispatcher;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _EventDispatcher$EventInfo_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/EventDispatcher;", nullptr, $FINAL | $SYNTHETIC, $field(EventDispatcher$EventInfo, this$0)},
	{"event", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(EventDispatcher$EventInfo, event)},
	{"listeners", "[Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(EventDispatcher$EventInfo, listeners)},
	{}
};

$MethodInfo _EventDispatcher$EventInfo_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/EventDispatcher;Ljava/lang/Object;Ljava/util/List;)V", "(Ljava/lang/Object;Ljava/util/List<Ljava/lang/Object;>;)V", 0, $method(static_cast<void(EventDispatcher$EventInfo::*)($EventDispatcher*,Object$*,$List*)>(&EventDispatcher$EventInfo::init$))},
	{"getEvent", "()Ljava/lang/Object;", nullptr, 0},
	{"getListener", "(I)Ljava/lang/Object;", nullptr, 0},
	{"getListenerCount", "()I", nullptr, 0},
	{}
};

$InnerClassInfo _EventDispatcher$EventInfo_InnerClassesInfo_[] = {
	{"com.sun.media.sound.EventDispatcher$EventInfo", "com.sun.media.sound.EventDispatcher", "EventInfo", $PRIVATE},
	{}
};

$ClassInfo _EventDispatcher$EventInfo_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.EventDispatcher$EventInfo",
	"java.lang.Object",
	nullptr,
	_EventDispatcher$EventInfo_FieldInfo_,
	_EventDispatcher$EventInfo_MethodInfo_,
	nullptr,
	nullptr,
	_EventDispatcher$EventInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.EventDispatcher"
};

$Object* allocate$EventDispatcher$EventInfo($Class* clazz) {
	return $of($alloc(EventDispatcher$EventInfo));
}

void EventDispatcher$EventInfo::init$($EventDispatcher* this$0, Object$* event, $List* listeners) {
	$set(this, this$0, this$0);
	$set(this, event, event);
	$set(this, listeners, $nc(listeners)->toArray());
}

$Object* EventDispatcher$EventInfo::getEvent() {
	return $of(this->event);
}

int32_t EventDispatcher$EventInfo::getListenerCount() {
	return $nc(this->listeners)->length;
}

$Object* EventDispatcher$EventInfo::getListener(int32_t index) {
	return $of($nc(this->listeners)->get(index));
}

EventDispatcher$EventInfo::EventDispatcher$EventInfo() {
}

$Class* EventDispatcher$EventInfo::load$($String* name, bool initialize) {
	$loadClass(EventDispatcher$EventInfo, name, initialize, &_EventDispatcher$EventInfo_ClassInfo_, allocate$EventDispatcher$EventInfo);
	return class$;
}

$Class* EventDispatcher$EventInfo::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com