#ifndef _javax_sound_sampled_AudioSystem_h_
#define _javax_sound_sampled_AudioSystem_h_
//$ class javax.sound.sampled.AudioSystem
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("NOT_SPECIFIED")
#undef NOT_SPECIFIED

namespace java {
	namespace io {
		class File;
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace sound {
		namespace sampled {
			class AudioFileFormat;
			class AudioFileFormat$Type;
			class AudioFormat;
			class AudioFormat$Encoding;
			class AudioInputStream;
			class Clip;
			class Line;
			class Line$Info;
			class Mixer;
			class Mixer$Info;
			class SourceDataLine;
			class TargetDataLine;
		}
	}
}
namespace javax {
	namespace sound {
		namespace sampled {
			namespace spi {
				class MixerProvider;
			}
		}
	}
}

namespace javax {
	namespace sound {
		namespace sampled {

class $export AudioSystem : public ::java::lang::Object {
	$class(AudioSystem, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AudioSystem();
	void init$();
	static ::javax::sound::sampled::AudioFileFormat* getAudioFileFormat(::java::io::InputStream* stream);
	static ::javax::sound::sampled::AudioFileFormat* getAudioFileFormat(::java::net::URL* url);
	static ::javax::sound::sampled::AudioFileFormat* getAudioFileFormat(::java::io::File* file);
	static ::java::util::List* getAudioFileReaders();
	static $Array<::javax::sound::sampled::AudioFileFormat$Type>* getAudioFileTypes();
	static $Array<::javax::sound::sampled::AudioFileFormat$Type>* getAudioFileTypes(::javax::sound::sampled::AudioInputStream* stream);
	static ::java::util::List* getAudioFileWriters();
	static ::javax::sound::sampled::AudioInputStream* getAudioInputStream(::javax::sound::sampled::AudioFormat$Encoding* targetEncoding, ::javax::sound::sampled::AudioInputStream* sourceStream);
	static ::javax::sound::sampled::AudioInputStream* getAudioInputStream(::javax::sound::sampled::AudioFormat* targetFormat, ::javax::sound::sampled::AudioInputStream* sourceStream);
	static ::javax::sound::sampled::AudioInputStream* getAudioInputStream(::java::io::InputStream* stream);
	static ::javax::sound::sampled::AudioInputStream* getAudioInputStream(::java::net::URL* url);
	static ::javax::sound::sampled::AudioInputStream* getAudioInputStream(::java::io::File* file);
	static ::javax::sound::sampled::Clip* getClip();
	static ::javax::sound::sampled::Clip* getClip(::javax::sound::sampled::Mixer$Info* mixerInfo);
	static ::javax::sound::sampled::Mixer* getDefaultMixer(::java::util::List* providers, ::javax::sound::sampled::Line$Info* info);
	static ::javax::sound::sampled::Mixer* getFirstMixer(::javax::sound::sampled::spi::MixerProvider* provider, ::javax::sound::sampled::Line$Info* info, bool isMixingRequired);
	static ::java::util::List* getFormatConversionProviders();
	static ::javax::sound::sampled::Line* getLine(::javax::sound::sampled::Line$Info* info);
	static ::javax::sound::sampled::Mixer* getMixer(::javax::sound::sampled::Mixer$Info* info);
	static $Array<::javax::sound::sampled::Mixer$Info>* getMixerInfo();
	static ::java::util::List* getMixerInfoList();
	static ::java::util::List* getMixerInfoList(::java::util::List* providers);
	static ::java::util::List* getMixerProviders();
	static ::javax::sound::sampled::Mixer* getNamedMixer($String* mixerName, ::javax::sound::sampled::spi::MixerProvider* provider, ::javax::sound::sampled::Line$Info* info);
	static ::javax::sound::sampled::Mixer* getNamedMixer($String* mixerName, ::java::util::List* providers, ::javax::sound::sampled::Line$Info* info);
	static ::javax::sound::sampled::spi::MixerProvider* getNamedProvider($String* providerClassName, ::java::util::List* providers);
	static ::java::util::List* getProviders($Class* providerClass);
	static ::javax::sound::sampled::SourceDataLine* getSourceDataLine(::javax::sound::sampled::AudioFormat* format);
	static ::javax::sound::sampled::SourceDataLine* getSourceDataLine(::javax::sound::sampled::AudioFormat* format, ::javax::sound::sampled::Mixer$Info* mixerinfo);
	static $Array<::javax::sound::sampled::Line$Info>* getSourceLineInfo(::javax::sound::sampled::Line$Info* info);
	static ::javax::sound::sampled::TargetDataLine* getTargetDataLine(::javax::sound::sampled::AudioFormat* format);
	static ::javax::sound::sampled::TargetDataLine* getTargetDataLine(::javax::sound::sampled::AudioFormat* format, ::javax::sound::sampled::Mixer$Info* mixerinfo);
	static $Array<::javax::sound::sampled::AudioFormat$Encoding>* getTargetEncodings(::javax::sound::sampled::AudioFormat$Encoding* sourceEncoding);
	static $Array<::javax::sound::sampled::AudioFormat$Encoding>* getTargetEncodings(::javax::sound::sampled::AudioFormat* sourceFormat);
	static $Array<::javax::sound::sampled::AudioFormat>* getTargetFormats(::javax::sound::sampled::AudioFormat$Encoding* targetEncoding, ::javax::sound::sampled::AudioFormat* sourceFormat);
	static $Array<::javax::sound::sampled::Line$Info>* getTargetLineInfo(::javax::sound::sampled::Line$Info* info);
	static bool isAppropriateMixer(::javax::sound::sampled::Mixer* mixer, ::javax::sound::sampled::Line$Info* lineInfo, bool isMixingRequired);
	static bool isConversionSupported(::javax::sound::sampled::AudioFormat$Encoding* targetEncoding, ::javax::sound::sampled::AudioFormat* sourceFormat);
	static bool isConversionSupported(::javax::sound::sampled::AudioFormat* targetFormat, ::javax::sound::sampled::AudioFormat* sourceFormat);
	static bool isFileTypeSupported(::javax::sound::sampled::AudioFileFormat$Type* fileType);
	static bool isFileTypeSupported(::javax::sound::sampled::AudioFileFormat$Type* fileType, ::javax::sound::sampled::AudioInputStream* stream);
	static bool isLineSupported(::javax::sound::sampled::Line$Info* info);
	static int32_t write(::javax::sound::sampled::AudioInputStream* stream, ::javax::sound::sampled::AudioFileFormat$Type* fileType, ::java::io::OutputStream* out);
	static int32_t write(::javax::sound::sampled::AudioInputStream* stream, ::javax::sound::sampled::AudioFileFormat$Type* fileType, ::java::io::File* out);
	static const int32_t NOT_SPECIFIED = (-1);
};

		} // sampled
	} // sound
} // javax

#pragma pop_macro("NOT_SPECIFIED")

#endif // _javax_sound_sampled_AudioSystem_h_