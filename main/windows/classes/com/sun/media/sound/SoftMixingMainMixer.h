#ifndef _com_sun_media_sound_SoftMixingMainMixer_h_
#define _com_sun_media_sound_SoftMixingMainMixer_h_
//$ class com.sun.media.sound.SoftMixingMainMixer
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CHANNEL_CHANNELMIXER_LEFT")
#undef CHANNEL_CHANNELMIXER_LEFT
#pragma push_macro("CHANNEL_CHANNELMIXER_RIGHT")
#undef CHANNEL_CHANNELMIXER_RIGHT
#pragma push_macro("CHANNEL_EFFECT1")
#undef CHANNEL_EFFECT1
#pragma push_macro("CHANNEL_EFFECT2")
#undef CHANNEL_EFFECT2
#pragma push_macro("CHANNEL_EFFECT3")
#undef CHANNEL_EFFECT3
#pragma push_macro("CHANNEL_EFFECT4")
#undef CHANNEL_EFFECT4
#pragma push_macro("CHANNEL_LEFT")
#undef CHANNEL_LEFT
#pragma push_macro("CHANNEL_LEFT_DRY")
#undef CHANNEL_LEFT_DRY
#pragma push_macro("CHANNEL_RIGHT")
#undef CHANNEL_RIGHT
#pragma push_macro("CHANNEL_RIGHT_DRY")
#undef CHANNEL_RIGHT_DRY
#pragma push_macro("CHANNEL_SCRATCH1")
#undef CHANNEL_SCRATCH1
#pragma push_macro("CHANNEL_SCRATCH2")
#undef CHANNEL_SCRATCH2

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class SoftAudioBuffer;
				class SoftAudioProcessor;
				class SoftMixingDataLine;
				class SoftMixingMixer;
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace sound {
		namespace sampled {
			class AudioInputStream;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftMixingMainMixer : public ::java::lang::Object {
	$class(SoftMixingMainMixer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SoftMixingMainMixer();
	void init$(::com::sun::media::sound::SoftMixingMixer* mixer);
	void close();
	void closeLine(::com::sun::media::sound::SoftMixingDataLine* line);
	::javax::sound::sampled::AudioInputStream* getInputStream();
	$Array<::com::sun::media::sound::SoftMixingDataLine>* getOpenLines();
	void openLine(::com::sun::media::sound::SoftMixingDataLine* line);
	void processAudioBuffers();
	static const int32_t CHANNEL_LEFT = 0;
	static const int32_t CHANNEL_RIGHT = 1;
	static const int32_t CHANNEL_EFFECT1 = 2;
	static const int32_t CHANNEL_EFFECT2 = 3;
	static const int32_t CHANNEL_EFFECT3 = 4;
	static const int32_t CHANNEL_EFFECT4 = 5;
	static const int32_t CHANNEL_LEFT_DRY = 10;
	static const int32_t CHANNEL_RIGHT_DRY = 11;
	static const int32_t CHANNEL_SCRATCH1 = 12;
	static const int32_t CHANNEL_SCRATCH2 = 13;
	static const int32_t CHANNEL_CHANNELMIXER_LEFT = 14;
	static const int32_t CHANNEL_CHANNELMIXER_RIGHT = 15;
	::com::sun::media::sound::SoftMixingMixer* mixer = nullptr;
	::javax::sound::sampled::AudioInputStream* ais = nullptr;
	$Array<::com::sun::media::sound::SoftAudioBuffer>* buffers = nullptr;
	::com::sun::media::sound::SoftAudioProcessor* reverb = nullptr;
	::com::sun::media::sound::SoftAudioProcessor* chorus = nullptr;
	::com::sun::media::sound::SoftAudioProcessor* agc = nullptr;
	int32_t nrofchannels = 0;
	$Object* control_mutex = nullptr;
	::java::util::List* openLinesList = nullptr;
	$Array<::com::sun::media::sound::SoftMixingDataLine>* openLines = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#pragma pop_macro("CHANNEL_CHANNELMIXER_LEFT")
#pragma pop_macro("CHANNEL_CHANNELMIXER_RIGHT")
#pragma pop_macro("CHANNEL_EFFECT1")
#pragma pop_macro("CHANNEL_EFFECT2")
#pragma pop_macro("CHANNEL_EFFECT3")
#pragma pop_macro("CHANNEL_EFFECT4")
#pragma pop_macro("CHANNEL_LEFT")
#pragma pop_macro("CHANNEL_LEFT_DRY")
#pragma pop_macro("CHANNEL_RIGHT")
#pragma pop_macro("CHANNEL_RIGHT_DRY")
#pragma pop_macro("CHANNEL_SCRATCH1")
#pragma pop_macro("CHANNEL_SCRATCH2")

#endif // _com_sun_media_sound_SoftMixingMainMixer_h_