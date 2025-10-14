#ifndef _com_sun_media_sound_PortMixer_h_
#define _com_sun_media_sound_PortMixer_h_
//$ class com.sun.media.sound.PortMixer
//$ extends com.sun.media.sound.AbstractMixer

#include <com/sun/media/sound/AbstractMixer.h>
#include <java/lang/Array.h>

#pragma push_macro("DST_HEADPHONE")
#undef DST_HEADPHONE
#pragma push_macro("DST_LINE_OUT")
#undef DST_LINE_OUT
#pragma push_macro("DST_MASK")
#undef DST_MASK
#pragma push_macro("DST_SPEAKER")
#undef DST_SPEAKER
#pragma push_macro("DST_UNKNOWN")
#undef DST_UNKNOWN
#pragma push_macro("SRC_COMPACT_DISC")
#undef SRC_COMPACT_DISC
#pragma push_macro("SRC_LINE_IN")
#undef SRC_LINE_IN
#pragma push_macro("SRC_MASK")
#undef SRC_MASK
#pragma push_macro("SRC_MICROPHONE")
#undef SRC_MICROPHONE
#pragma push_macro("SRC_UNKNOWN")
#undef SRC_UNKNOWN

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class PortMixer$PortMixerPort;
				class PortMixerProvider$PortMixerInfo;
			}
		}
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}
namespace javax {
	namespace sound {
		namespace sampled {
			class Line;
			class Line$Info;
			class Port;
			class Port$Info;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class PortMixer : public ::com::sun::media::sound::AbstractMixer {
	$class(PortMixer, $NO_CLASS_INIT, ::com::sun::media::sound::AbstractMixer)
public:
	PortMixer();
	using ::com::sun::media::sound::AbstractMixer::getLineInfo;
	void init$(::com::sun::media::sound::PortMixerProvider$PortMixerInfo* portMixerInfo);
	int64_t getID();
	virtual ::javax::sound::sampled::Line* getLine(::javax::sound::sampled::Line$Info* info) override;
	virtual int32_t getMaxLines(::javax::sound::sampled::Line$Info* info) override;
	int32_t getMixerIndex();
	::javax::sound::sampled::Port* getPort(int32_t index);
	::javax::sound::sampled::Port$Info* getPortInfo(int32_t portIndex, int32_t type);
	virtual void implClose() override;
	virtual void implOpen() override;
	virtual void implStart() override;
	virtual void implStop() override;
	static void nClose(int64_t id);
	static float nControlGetFloatValue(int64_t controlID);
	static int32_t nControlGetIntValue(int64_t controlID);
	static void nControlSetFloatValue(int64_t controlID, float value);
	static void nControlSetIntValue(int64_t controlID, int32_t value);
	static void nGetControls(int64_t id, int32_t portIndex, ::java::util::Vector* vector);
	static int32_t nGetPortCount(int64_t id);
	static $String* nGetPortName(int64_t id, int32_t portIndex);
	static int32_t nGetPortType(int64_t id, int32_t portIndex);
	static int64_t nOpen(int32_t mixerIndex);
	static const int32_t SRC_UNKNOWN = 1;
	static const int32_t SRC_MICROPHONE = 2;
	static const int32_t SRC_LINE_IN = 3;
	static const int32_t SRC_COMPACT_DISC = 4;
	static const int32_t SRC_MASK = 255;
	static const int32_t DST_UNKNOWN = 256;
	static const int32_t DST_SPEAKER = 512;
	static const int32_t DST_HEADPHONE = 768;
	static const int32_t DST_LINE_OUT = 1024;
	static const int32_t DST_MASK = 0x0000FF00;
	$Array<::javax::sound::sampled::Port$Info>* portInfos = nullptr;
	$Array<::com::sun::media::sound::PortMixer$PortMixerPort>* ports = nullptr;
	int64_t id = 0;
};

			} // sound
		} // media
	} // sun
} // com

#pragma pop_macro("DST_HEADPHONE")
#pragma pop_macro("DST_LINE_OUT")
#pragma pop_macro("DST_MASK")
#pragma pop_macro("DST_SPEAKER")
#pragma pop_macro("DST_UNKNOWN")
#pragma pop_macro("SRC_COMPACT_DISC")
#pragma pop_macro("SRC_LINE_IN")
#pragma pop_macro("SRC_MASK")
#pragma pop_macro("SRC_MICROPHONE")
#pragma pop_macro("SRC_UNKNOWN")

#endif // _com_sun_media_sound_PortMixer_h_