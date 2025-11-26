#ifndef _com_sun_media_sound_SoftSynthesizer$3_h_
#define _com_sun_media_sound_SoftSynthesizer$3_h_
//$ class com.sun.media.sound.SoftSynthesizer$3
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

class SoftSynthesizer$3 : public ::java::security::PrivilegedAction {
	$class(SoftSynthesizer$3, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	SoftSynthesizer$3();
	void init$(::com::sun::media::sound::SoftSynthesizer* this$0);
	virtual $Object* run() override;
	::com::sun::media::sound::SoftSynthesizer* this$0 = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftSynthesizer$3_h_