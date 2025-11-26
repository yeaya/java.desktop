#ifndef _com_sun_media_sound_StandardFileFormat_h_
#define _com_sun_media_sound_StandardFileFormat_h_
//$ class com.sun.media.sound.StandardFileFormat
//$ extends javax.sound.sampled.AudioFileFormat

#include <javax/sound/sampled/AudioFileFormat.h>

namespace javax {
	namespace sound {
		namespace sampled {
			class AudioFileFormat$Type;
			class AudioFormat;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class StandardFileFormat : public ::javax::sound::sampled::AudioFileFormat {
	$class(StandardFileFormat, $NO_CLASS_INIT, ::javax::sound::sampled::AudioFileFormat)
public:
	StandardFileFormat();
	void init$(::javax::sound::sampled::AudioFileFormat$Type* type, ::javax::sound::sampled::AudioFormat* format, int64_t frameLength);
	void init$(::javax::sound::sampled::AudioFileFormat$Type* type, int64_t byteLength, ::javax::sound::sampled::AudioFormat* format, int64_t frameLength);
	static int32_t clip(int64_t value);
	int64_t getLongByteLength();
	int64_t getLongFrameLength();
	int64_t byteLength = 0;
	int64_t frameLength = 0;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_StandardFileFormat_h_