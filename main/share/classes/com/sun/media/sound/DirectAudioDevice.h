#ifndef _com_sun_media_sound_DirectAudioDevice_h_
#define _com_sun_media_sound_DirectAudioDevice_h_
//$ class com.sun.media.sound.DirectAudioDevice
//$ extends com.sun.media.sound.AbstractMixer

#include <com/sun/media/sound/AbstractMixer.h>
#include <java/lang/Array.h>

#pragma push_macro("CLIP_BUFFER_TIME")
#undef CLIP_BUFFER_TIME
#pragma push_macro("DEFAULT_LINE_BUFFER_TIME")
#undef DEFAULT_LINE_BUFFER_TIME

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class DirectAudioDevice$DirectDLI;
				class DirectAudioDeviceProvider$DirectAudioDeviceInfo;
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
			class AudioFormat;
			class Line;
			class Line$Info;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class DirectAudioDevice : public ::com::sun::media::sound::AbstractMixer {
	$class(DirectAudioDevice, $NO_CLASS_INIT, ::com::sun::media::sound::AbstractMixer)
public:
	DirectAudioDevice();
	using ::com::sun::media::sound::AbstractMixer::getLineInfo;
	void init$(::com::sun::media::sound::DirectAudioDeviceProvider$DirectAudioDeviceInfo* portMixerInfo);
	static void addFormat(::java::util::Vector* v, int32_t bits, int32_t frameSizeInBytes, int32_t channels, float sampleRate, int32_t encoding, bool signed$, bool bigEndian);
	::com::sun::media::sound::DirectAudioDevice$DirectDLI* createDataLineInfo(bool isSource);
	int32_t getDeviceID();
	virtual ::javax::sound::sampled::Line* getLine(::javax::sound::sampled::Line$Info* info) override;
	virtual int32_t getMaxLines(::javax::sound::sampled::Line$Info* info) override;
	int32_t getMaxSimulLines();
	int32_t getMixerIndex();
	static ::javax::sound::sampled::AudioFormat* getSignOrEndianChangedFormat(::javax::sound::sampled::AudioFormat* format);
	virtual void implClose() override;
	virtual void implOpen() override;
	virtual void implStart() override;
	virtual void implStop() override;
	static int32_t nAvailable(int64_t id, bool isSource);
	static void nClose(int64_t id, bool isSource);
	static void nFlush(int64_t id, bool isSource);
	static int32_t nGetBufferSize(int64_t id, bool isSource);
	static int64_t nGetBytePosition(int64_t id, bool isSource, int64_t javaPos);
	static void nGetFormats(int32_t mixerIndex, int32_t deviceID, bool isSource, ::java::util::Vector* formats);
	static bool nIsStillDraining(int64_t id, bool isSource);
	static int64_t nOpen(int32_t mixerIndex, int32_t deviceID, bool isSource, int32_t encoding, float sampleRate, int32_t sampleSizeInBits, int32_t frameSize, int32_t channels, bool signed$, bool bigEndian, int32_t bufferSize);
	static int32_t nRead(int64_t id, $bytes* b, int32_t off, int32_t len, int32_t conversionSize);
	static bool nRequiresServicing(int64_t id, bool isSource);
	static void nService(int64_t id, bool isSource);
	static void nSetBytePosition(int64_t id, bool isSource, int64_t pos);
	static void nStart(int64_t id, bool isSource);
	static void nStop(int64_t id, bool isSource);
	static int32_t nWrite(int64_t id, $bytes* b, int32_t off, int32_t len, int32_t conversionSize, float volLeft, float volRight);
	static const int32_t CLIP_BUFFER_TIME = 1000;
	static const int32_t DEFAULT_LINE_BUFFER_TIME = 500;
};

			} // sound
		} // media
	} // sun
} // com

#pragma pop_macro("CLIP_BUFFER_TIME")
#pragma pop_macro("DEFAULT_LINE_BUFFER_TIME")

#endif // _com_sun_media_sound_DirectAudioDevice_h_