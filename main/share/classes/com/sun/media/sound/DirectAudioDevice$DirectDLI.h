#ifndef _com_sun_media_sound_DirectAudioDevice$DirectDLI_h_
#define _com_sun_media_sound_DirectAudioDevice$DirectDLI_h_
//$ class com.sun.media.sound.DirectAudioDevice$DirectDLI
//$ extends javax.sound.sampled.DataLine$Info

#include <java/lang/Array.h>
#include <javax/sound/sampled/DataLine$Info.h>

namespace javax {
	namespace sound {
		namespace sampled {
			class AudioFormat;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class DirectAudioDevice$DirectDLI : public ::javax::sound::sampled::DataLine$Info {
	$class(DirectAudioDevice$DirectDLI, $NO_CLASS_INIT, ::javax::sound::sampled::DataLine$Info)
public:
	DirectAudioDevice$DirectDLI();
	void init$($Class* clazz, $Array<::javax::sound::sampled::AudioFormat>* formatArray, $Array<::javax::sound::sampled::AudioFormat>* hardwareFormatArray, int32_t minBuffer, int32_t maxBuffer);
	$Array<::javax::sound::sampled::AudioFormat>* getHardwareFormats();
	bool isFormatSupportedInHardware(::javax::sound::sampled::AudioFormat* format);
	$Array<::javax::sound::sampled::AudioFormat>* hardwareFormats = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_DirectAudioDevice$DirectDLI_h_