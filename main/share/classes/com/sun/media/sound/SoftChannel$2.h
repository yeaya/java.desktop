#ifndef _com_sun_media_sound_SoftChannel$2_h_
#define _com_sun_media_sound_SoftChannel$2_h_
//$ class com.sun.media.sound.SoftChannel$2
//$ extends com.sun.media.sound.SoftControl

#include <com/sun/media/sound/SoftControl.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class SoftChannel;
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftChannel$2 : public ::com::sun::media::sound::SoftControl {
	$class(SoftChannel$2, $NO_CLASS_INIT, ::com::sun::media::sound::SoftControl)
public:
	SoftChannel$2();
	void init$(::com::sun::media::sound::SoftChannel* this$0);
	virtual $doubles* get(int32_t instance, $String* name) override;
	::com::sun::media::sound::SoftChannel* this$0 = nullptr;
	::java::util::Map* rpn = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftChannel$2_h_