#ifndef _javax_sound_sampled_AudioFormat_h_
#define _javax_sound_sampled_AudioFormat_h_
//$ class javax.sound.sampled.AudioFormat
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class HashMap;
		class Map;
	}
}
namespace javax {
	namespace sound {
		namespace sampled {
			class AudioFormat$Encoding;
		}
	}
}

namespace javax {
	namespace sound {
		namespace sampled {

class $import AudioFormat : public ::java::lang::Object {
	$class(AudioFormat, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AudioFormat();
	void init$(::javax::sound::sampled::AudioFormat$Encoding* encoding, float sampleRate, int32_t sampleSizeInBits, int32_t channels, int32_t frameSize, float frameRate, bool bigEndian);
	void init$(::javax::sound::sampled::AudioFormat$Encoding* encoding, float sampleRate, int32_t sampleSizeInBits, int32_t channels, int32_t frameSize, float frameRate, bool bigEndian, ::java::util::Map* properties);
	void init$(float sampleRate, int32_t sampleSizeInBits, int32_t channels, bool signed$, bool bigEndian);
	virtual int32_t getChannels();
	virtual ::javax::sound::sampled::AudioFormat$Encoding* getEncoding();
	virtual float getFrameRate();
	virtual int32_t getFrameSize();
	virtual $Object* getProperty($String* key);
	virtual float getSampleRate();
	virtual int32_t getSampleSizeInBits();
	virtual bool isBigEndian();
	virtual bool matches(::javax::sound::sampled::AudioFormat* format);
	virtual ::java::util::Map* properties();
	virtual $String* toString() override;
	::javax::sound::sampled::AudioFormat$Encoding* encoding = nullptr;
	float sampleRate = 0.0;
	int32_t sampleSizeInBits = 0;
	int32_t channels = 0;
	int32_t frameSize = 0;
	float frameRate = 0.0;
	bool bigEndian = false;
	::java::util::HashMap* properties$ = nullptr;
};

		} // sampled
	} // sound
} // javax

#endif // _javax_sound_sampled_AudioFormat_h_