#ifndef _com_sun_media_sound_AudioFloatFormatConverter_h_
#define _com_sun_media_sound_AudioFloatFormatConverter_h_
//$ class com.sun.media.sound.AudioFloatFormatConverter
//$ extends javax.sound.sampled.spi.FormatConversionProvider

#include <java/lang/Array.h>
#include <javax/sound/sampled/spi/FormatConversionProvider.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class AudioFloatInputStream;
			}
		}
	}
}
namespace javax {
	namespace sound {
		namespace sampled {
			class AudioFormat;
			class AudioFormat$Encoding;
			class AudioInputStream;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class AudioFloatFormatConverter : public ::javax::sound::sampled::spi::FormatConversionProvider {
	$class(AudioFloatFormatConverter, $NO_CLASS_INIT, ::javax::sound::sampled::spi::FormatConversionProvider)
public:
	AudioFloatFormatConverter();
	void init$();
	virtual ::javax::sound::sampled::AudioInputStream* getAudioInputStream(::javax::sound::sampled::AudioFormat$Encoding* targetEncoding, ::javax::sound::sampled::AudioInputStream* sourceStream) override;
	virtual ::javax::sound::sampled::AudioInputStream* getAudioInputStream(::javax::sound::sampled::AudioFormat* targetFormat, ::javax::sound::sampled::AudioInputStream* sourceStream) override;
	::javax::sound::sampled::AudioInputStream* getAudioInputStream(::javax::sound::sampled::AudioFormat* targetFormat, ::com::sun::media::sound::AudioFloatInputStream* sourceStream);
	virtual $Array<::javax::sound::sampled::AudioFormat$Encoding>* getSourceEncodings() override;
	virtual $Array<::javax::sound::sampled::AudioFormat$Encoding>* getTargetEncodings() override;
	virtual $Array<::javax::sound::sampled::AudioFormat$Encoding>* getTargetEncodings(::javax::sound::sampled::AudioFormat* sourceFormat) override;
	virtual $Array<::javax::sound::sampled::AudioFormat>* getTargetFormats(::javax::sound::sampled::AudioFormat$Encoding* targetEncoding, ::javax::sound::sampled::AudioFormat* sourceFormat) override;
	virtual bool isConversionSupported(::javax::sound::sampled::AudioFormat* targetFormat, ::javax::sound::sampled::AudioFormat* sourceFormat) override;
	virtual bool isConversionSupported(::javax::sound::sampled::AudioFormat$Encoding* targetEncoding, ::javax::sound::sampled::AudioFormat* sourceFormat) override;
	$Array<::javax::sound::sampled::AudioFormat$Encoding>* formats = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_AudioFloatFormatConverter_h_