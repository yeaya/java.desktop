#ifndef _javax_sound_sampled_spi_FormatConversionProvider_h_
#define _javax_sound_sampled_spi_FormatConversionProvider_h_
//$ class javax.sound.sampled.spi.FormatConversionProvider
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace sound {
		namespace sampled {
			class AudioFormat;
			class AudioFormat$Encoding;
			class AudioInputStream;
		}
	}
}

namespace javax {
	namespace sound {
		namespace sampled {
			namespace spi {

class $export FormatConversionProvider : public ::java::lang::Object {
	$class(FormatConversionProvider, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FormatConversionProvider();
	void init$();
	virtual ::javax::sound::sampled::AudioInputStream* getAudioInputStream(::javax::sound::sampled::AudioFormat$Encoding* targetEncoding, ::javax::sound::sampled::AudioInputStream* sourceStream) {return nullptr;}
	virtual ::javax::sound::sampled::AudioInputStream* getAudioInputStream(::javax::sound::sampled::AudioFormat* targetFormat, ::javax::sound::sampled::AudioInputStream* sourceStream) {return nullptr;}
	virtual $Array<::javax::sound::sampled::AudioFormat$Encoding>* getSourceEncodings() {return nullptr;}
	virtual $Array<::javax::sound::sampled::AudioFormat$Encoding>* getTargetEncodings() {return nullptr;}
	virtual $Array<::javax::sound::sampled::AudioFormat$Encoding>* getTargetEncodings(::javax::sound::sampled::AudioFormat* sourceFormat) {return nullptr;}
	virtual $Array<::javax::sound::sampled::AudioFormat>* getTargetFormats(::javax::sound::sampled::AudioFormat$Encoding* targetEncoding, ::javax::sound::sampled::AudioFormat* sourceFormat) {return nullptr;}
	virtual bool isConversionSupported(::javax::sound::sampled::AudioFormat$Encoding* targetEncoding, ::javax::sound::sampled::AudioFormat* sourceFormat);
	virtual bool isConversionSupported(::javax::sound::sampled::AudioFormat* targetFormat, ::javax::sound::sampled::AudioFormat* sourceFormat);
	virtual bool isSourceEncodingSupported(::javax::sound::sampled::AudioFormat$Encoding* sourceEncoding);
	virtual bool isTargetEncodingSupported(::javax::sound::sampled::AudioFormat$Encoding* targetEncoding);
};

			} // spi
		} // sampled
	} // sound
} // javax

#endif // _javax_sound_sampled_spi_FormatConversionProvider_h_