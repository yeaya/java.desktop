#ifndef _com_sun_media_sound_SoftSynthesizer$2_h_
#define _com_sun_media_sound_SoftSynthesizer$2_h_
//$ class com.sun.media.sound.SoftSynthesizer$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class SoftSynthesizer;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftSynthesizer$2 : public ::java::security::PrivilegedAction {
	$class(SoftSynthesizer$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	SoftSynthesizer$2();
	void init$(::com::sun::media::sound::SoftSynthesizer* this$0);
	virtual $Object* run() override;
	::com::sun::media::sound::SoftSynthesizer* this$0 = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftSynthesizer$2_h_