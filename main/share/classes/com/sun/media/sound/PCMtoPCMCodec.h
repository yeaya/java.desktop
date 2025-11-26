#ifndef _com_sun_media_sound_PCMtoPCMCodec_h_
#define _com_sun_media_sound_PCMtoPCMCodec_h_
//$ class com.sun.media.sound.PCMtoPCMCodec
//$ extends javax.sound.sampled.spi.FormatConversionProvider

#include <java/lang/Array.h>
#include <javax/sound/sampled/spi/FormatConversionProvider.h>

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

class PCMtoPCMCodec : public ::javax::sound::sampled::spi::FormatConversionProvider {
	$class(PCMtoPCMCodec, $NO_CLASS_INIT, ::javax::sound::sampled::spi::FormatConversionProvider)
public:
	PCMtoPCMCodec();
	void init$();
	virtual ::javax::sound::sampled::AudioInputStream* getAudioInputStream(::javax::sound::sampled::AudioFormat$Encoding* targetEncoding, ::javax::sound::sampled::AudioInputStream* sourceStream) override;
	virtual ::javax::sound::sampled::AudioInputStream* getAudioInputStream(::javax::sound::sampled::AudioFormat* targetFormat, ::javax::sound::sampled::AudioInputStream* sourceStream) override;
	::javax::sound::sampled::AudioInputStream* getConvertedStream(::javax::sound::sampled::AudioFormat* outputFormat, ::javax::sound::sampled::AudioInputStream* stream);
	$Array<::javax::sound::sampled::AudioFormat>* getOutputFormats(::javax::sound::sampled::AudioFormat* inputFormat);
	virtual $Array<::javax::sound::sampled::AudioFormat$Encoding>* getSourceEncodings() override;
	virtual $Array<::javax::sound::sampled::AudioFormat$Encoding>* getTargetEncodings() override;
	virtual $Array<::javax::sound::sampled::AudioFormat$Encoding>* getTargetEncodings(::javax::sound::sampled::AudioFormat* sourceFormat) override;
	virtual $Array<::javax::sound::sampled::AudioFormat>* getTargetFormats(::javax::sound::sampled::AudioFormat$Encoding* targetEncoding, ::javax::sound::sampled::AudioFormat* sourceFormat) override;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_PCMtoPCMCodec_h_