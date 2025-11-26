#ifndef _com_sun_media_sound_EventDispatcher$ClipInfo_h_
#define _com_sun_media_sound_EventDispatcher$ClipInfo_h_
//$ class com.sun.media.sound.EventDispatcher$ClipInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class AutoClosingClip;
				class EventDispatcher;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class EventDispatcher$ClipInfo : public ::java::lang::Object {
	$class(EventDispatcher$ClipInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	EventDispatcher$ClipInfo();
	void init$(::com::sun::media::sound::EventDispatcher* this$0, ::com::sun::media::sound::AutoClosingClip* clip);
	virtual ::com::sun::media::sound::AutoClosingClip* getClip();
	virtual bool isExpired(int64_t currTime);
	::com::sun::media::sound::EventDispatcher* this$0 = nullptr;
	::com::sun::media::sound::AutoClosingClip* clip = nullptr;
	int64_t expiration = 0;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_EventDispatcher$ClipInfo_h_