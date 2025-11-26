#ifndef _com_sun_media_sound_AiffFileWriter_h_
#define _com_sun_media_sound_AiffFileWriter_h_
//$ class com.sun.media.sound.AiffFileWriter
//$ extends com.sun.media.sound.SunFileWriter

#include <com/sun/media/sound/SunFileWriter.h>
#include <java/lang/Array.h>

#pragma push_macro("DOUBLE_EXPONENT_LENGTH")
#undef DOUBLE_EXPONENT_LENGTH
#pragma push_macro("DOUBLE_EXPONENT_MASK")
#undef DOUBLE_EXPONENT_MASK
#pragma push_macro("DOUBLE_EXPONENT_OFFSET")
#undef DOUBLE_EXPONENT_OFFSET
#pragma push_macro("DOUBLE_MANTISSA_LENGTH")
#undef DOUBLE_MANTISSA_LENGTH
#pragma push_macro("DOUBLE_MANTISSA_MASK")
#undef DOUBLE_MANTISSA_MASK
#pragma push_macro("DOUBLE_SIGN_MASK")
#undef DOUBLE_SIGN_MASK
#pragma push_macro("EXTENDED_EXPONENT_LENGTH")
#undef EXTENDED_EXPONENT_LENGTH
#pragma push_macro("EXTENDED_EXPONENT_OFFSET")
#undef EXTENDED_EXPONENT_OFFSET
#pragma push_macro("EXTENDED_INTEGER_MASK")
#undef EXTENDED_INTEGER_MASK
#pragma push_macro("EXTENDED_MANTISSA_LENGTH")
#undef EXTENDED_MANTISSA_LENGTH

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class AiffFileFormat;
			}
		}
	}
}
namespace java {
	namespace io {
		class DataOutputStream;
		class File;
		class InputStream;
		class OutputStream;
	}
}
namespace javax {
	namespace sound {
		namespace sampled {
			class AudioFileFormat;
			class AudioFileFormat$Type;
			class AudioInputStream;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class AiffFileWriter : public ::com::sun::media::sound::SunFileWriter {
	$class(AiffFileWriter, $NO_CLASS_INIT, ::com::sun::media::sound::SunFileWriter)
public:
	AiffFileWriter();
	using ::com::sun::media::sound::SunFileWriter::getAudioFileTypes;
	void init$();
	::javax::sound::sampled::AudioFileFormat* getAudioFileFormat(::javax::sound::sampled::AudioFileFormat$Type* type, ::javax::sound::sampled::AudioInputStream* stream);
	virtual $Array<::javax::sound::sampled::AudioFileFormat$Type>* getAudioFileTypes(::javax::sound::sampled::AudioInputStream* stream) override;
	::java::io::InputStream* getFileStream(::com::sun::media::sound::AiffFileFormat* aiffFileFormat, ::java::io::InputStream* audioStream);
	virtual int32_t write(::javax::sound::sampled::AudioInputStream* stream, ::javax::sound::sampled::AudioFileFormat$Type* fileType, ::java::io::OutputStream* out) override;
	virtual int32_t write(::javax::sound::sampled::AudioInputStream* stream, ::javax::sound::sampled::AudioFileFormat$Type* fileType, ::java::io::File* out) override;
	int32_t writeAiffFile(::java::io::InputStream* in, ::com::sun::media::sound::AiffFileFormat* aiffFileFormat, ::java::io::OutputStream* out);
	void write_ieee_extended(::java::io::DataOutputStream* dos, float f);
	static const int32_t DOUBLE_MANTISSA_LENGTH = 52;
	static const int32_t DOUBLE_EXPONENT_LENGTH = 11;
	static const int64_t DOUBLE_SIGN_MASK = (int64_t)0x8000000000000000;
	static const int64_t DOUBLE_EXPONENT_MASK = (int64_t)0x7FF0000000000000;
	static const int64_t DOUBLE_MANTISSA_MASK = (int64_t)0x000FFFFFFFFFFFFF;
	static const int32_t DOUBLE_EXPONENT_OFFSET = 1023;
	static const int32_t EXTENDED_EXPONENT_OFFSET = 16383;
	static const int32_t EXTENDED_MANTISSA_LENGTH = 63;
	static const int32_t EXTENDED_EXPONENT_LENGTH = 15;
	static const int64_t EXTENDED_INTEGER_MASK = (int64_t)0x8000000000000000;
};

			} // sound
		} // media
	} // sun
} // com

#pragma pop_macro("DOUBLE_EXPONENT_LENGTH")
#pragma pop_macro("DOUBLE_EXPONENT_MASK")
#pragma pop_macro("DOUBLE_EXPONENT_OFFSET")
#pragma pop_macro("DOUBLE_MANTISSA_LENGTH")
#pragma pop_macro("DOUBLE_MANTISSA_MASK")
#pragma pop_macro("DOUBLE_SIGN_MASK")
#pragma pop_macro("EXTENDED_EXPONENT_LENGTH")
#pragma pop_macro("EXTENDED_EXPONENT_OFFSET")
#pragma pop_macro("EXTENDED_INTEGER_MASK")
#pragma pop_macro("EXTENDED_MANTISSA_LENGTH")

#endif // _com_sun_media_sound_AiffFileWriter_h_