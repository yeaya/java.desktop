#ifndef _javax_sound_sampled_DataLine$Info_h_
#define _javax_sound_sampled_DataLine$Info_h_
//$ class javax.sound.sampled.DataLine$Info
//$ extends javax.sound.sampled.Line$Info

#include <java/lang/Array.h>
#include <javax/sound/sampled/Line$Info.h>

namespace javax {
	namespace sound {
		namespace sampled {
			class AudioFormat;
		}
	}
}

namespace javax {
	namespace sound {
		namespace sampled {

class $import DataLine$Info : public ::javax::sound::sampled::Line$Info {
	$class(DataLine$Info, $NO_CLASS_INIT, ::javax::sound::sampled::Line$Info)
public:
	DataLine$Info();
	void init$($Class* lineClass, $Array<::javax::sound::sampled::AudioFormat>* formats, int32_t minBufferSize, int32_t maxBufferSize);
	void init$($Class* lineClass, ::javax::sound::sampled::AudioFormat* format, int32_t bufferSize);
	void init$($Class* lineClass, ::javax::sound::sampled::AudioFormat* format);
	virtual $Array<::javax::sound::sampled::AudioFormat>* getFormats();
	virtual int32_t getMaxBufferSize();
	virtual int32_t getMinBufferSize();
	virtual bool isFormatSupported(::javax::sound::sampled::AudioFormat* format);
	virtual bool matches(::javax::sound::sampled::Line$Info* info) override;
	virtual $String* toString() override;
	$Array<::javax::sound::sampled::AudioFormat>* formats = nullptr;
	int32_t minBufferSize = 0;
	int32_t maxBufferSize = 0;
};

		} // sampled
	} // sound
} // javax

#endif // _javax_sound_sampled_DataLine$Info_h_