#ifndef _javax_sound_sampled_AudioFileFormat_h_
#define _javax_sound_sampled_AudioFileFormat_h_
//$ class javax.sound.sampled.AudioFileFormat
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
			class AudioFileFormat$Type;
			class AudioFormat;
		}
	}
}

namespace javax {
	namespace sound {
		namespace sampled {

class $export AudioFileFormat : public ::java::lang::Object {
	$class(AudioFileFormat, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AudioFileFormat();
	void init$(::javax::sound::sampled::AudioFileFormat$Type* type, int32_t byteLength, ::javax::sound::sampled::AudioFormat* format, int32_t frameLength);
	void init$(::javax::sound::sampled::AudioFileFormat$Type* type, ::javax::sound::sampled::AudioFormat* format, int32_t frameLength);
	void init$(::javax::sound::sampled::AudioFileFormat$Type* type, ::javax::sound::sampled::AudioFormat* format, int32_t frameLength, ::java::util::Map* properties);
	virtual int32_t getByteLength();
	virtual ::javax::sound::sampled::AudioFormat* getFormat();
	virtual int32_t getFrameLength();
	virtual $Object* getProperty($String* key);
	virtual ::javax::sound::sampled::AudioFileFormat$Type* getType();
	virtual ::java::util::Map* properties();
	virtual $String* toString() override;
	::javax::sound::sampled::AudioFileFormat$Type* type = nullptr;
	int32_t byteLength = 0;
	::javax::sound::sampled::AudioFormat* format = nullptr;
	int32_t frameLength = 0;
	::java::util::HashMap* properties$ = nullptr;
};

		} // sampled
	} // sound
} // javax

#endif // _javax_sound_sampled_AudioFileFormat_h_