#include <com/sun/media/sound/EventDispatcher$ClipInfo.h>

#include <com/sun/media/sound/AutoClosingClip.h>
#include <com/sun/media/sound/EventDispatcher.h>
#include <jcpp.h>

using $AutoClosingClip = ::com::sun::media::sound::AutoClosingClip;
using $EventDispatcher = ::com::sun::media::sound::EventDispatcher;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _EventDispatcher$ClipInfo_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/EventDispatcher;", nullptr, $FINAL | $SYNTHETIC, $field(EventDispatcher$ClipInfo, this$0)},
	{"clip", "Lcom/sun/media/sound/AutoClosingClip;", nullptr, $PRIVATE | $FINAL, $field(EventDispatcher$ClipInfo, clip)},
	{"expiration", "J", nullptr, $PRIVATE | $FINAL, $field(EventDispatcher$ClipInfo, expiration)},
	{}
};

$MethodInfo _EventDispatcher$ClipInfo_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/EventDispatcher;Lcom/sun/media/sound/AutoClosingClip;)V", nullptr, 0, $method(static_cast<void(EventDispatcher$ClipInfo::*)($EventDispatcher*,$AutoClosingClip*)>(&EventDispatcher$ClipInfo::init$))},
	{"getClip", "()Lcom/sun/media/sound/AutoClosingClip;", nullptr, 0},
	{"isExpired", "(J)Z", nullptr, 0},
	{}
};

$InnerClassInfo _EventDispatcher$ClipInfo_InnerClassesInfo_[] = {
	{"com.sun.media.sound.EventDispatcher$ClipInfo", "com.sun.media.sound.EventDispatcher", "ClipInfo", $PRIVATE},
	{}
};

$ClassInfo _EventDispatcher$ClipInfo_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.EventDispatcher$ClipInfo",
	"java.lang.Object",
	nullptr,
	_EventDispatcher$ClipInfo_FieldInfo_,
	_EventDispatcher$ClipInfo_MethodInfo_,
	nullptr,
	nullptr,
	_EventDispatcher$ClipInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.EventDispatcher"
};

$Object* allocate$EventDispatcher$ClipInfo($Class* clazz) {
	return $of($alloc(EventDispatcher$ClipInfo));
}

void EventDispatcher$ClipInfo::init$($EventDispatcher* this$0, $AutoClosingClip* clip) {
	$set(this, this$0, this$0);
	$set(this, clip, clip);
	this->expiration = $System::currentTimeMillis() + 5000;
}

$AutoClosingClip* EventDispatcher$ClipInfo::getClip() {
	return this->clip;
}

bool EventDispatcher$ClipInfo::isExpired(int64_t currTime) {
	return currTime > this->expiration;
}

EventDispatcher$ClipInfo::EventDispatcher$ClipInfo() {
}

$Class* EventDispatcher$ClipInfo::load$($String* name, bool initialize) {
	$loadClass(EventDispatcher$ClipInfo, name, initialize, &_EventDispatcher$ClipInfo_ClassInfo_, allocate$EventDispatcher$ClipInfo);
	return class$;
}

$Class* EventDispatcher$ClipInfo::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com