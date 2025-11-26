#ifndef _com_sun_media_sound_UlawCodec_h_
#define _com_sun_media_sound_UlawCodec_h_
//$ class com.sun.media.sound.UlawCodec
//$ extends javax.sound.sampled.spi.FormatConversionProvider

#include <java/lang/Array.h>
#include <javax/sound/sampled/spi/FormatConversionProvider.h>

#pragma push_macro("ULAW_TABH")
#undef ULAW_TABH
#pragma push_macro("ULAW_TABL")
#undef ULAW_TABL

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

class UlawCodec : public ::javax::sound::sampled::spi::FormatConversionProvider {
	$class(UlawCodec, 0, ::javax::sound::sampled::spi::FormatConversionProvider)
public:
	UlawCodec();
	void init$();
	virtual ::javax::sound::sampled::AudioInputStream* getAudioInputStream(::javax::sound::sampled::AudioFormat$Encoding* targetEncoding, ::javax::sound::sampled::AudioInputStream* sourceStream) override;
	virtual ::javax::sound::sampled::AudioInputStream* getAudioInputStream(::javax::sound::sampled::AudioFormat* targetFormat, ::javax::sound::sampled::AudioInputStream* sourceStream) override;
	::javax::sound::sampled::AudioInputStream* getConvertedStream(::javax::sound::sampled::AudioFormat* outputFormat, ::javax::sound::sampled::AudioInputStream* stream);
	$Array<::javax::sound::sampled::AudioFormat>* getOutputFormats(::javax::sound::sampled::AudioFormat* inputFormat);
	virtual $Array<::javax::sound::sampled::AudioFormat$Encoding>* getSourceEncodings() override;
	virtual $Array<::javax::sound::sampled::AudioFormat$Encoding>* getTargetEncodings() override;
	virtual $Array<::javax::sound::sampled::AudioFormat$Encoding>* getTargetEncodings(::javax::sound::sampled::AudioFormat* sourceFormat) override;
	virtual $Array<::javax::sound::sampled::AudioFormat>* getTargetFormats(::javax::sound::sampled::AudioFormat$Encoding* targetEncoding, ::javax::sound::sampled::AudioFormat* sourceFormat) override;
	static $bytes* ULAW_TABH;
	static $bytes* ULAW_TABL;
	static $shorts* seg_end;
};

			} // sound
		} // media
	} // sun
} // com

#pragma pop_macro("ULAW_TABH")
#pragma pop_macro("ULAW_TABL")

#endif // _com_sun_media_sound_UlawCodec_h_