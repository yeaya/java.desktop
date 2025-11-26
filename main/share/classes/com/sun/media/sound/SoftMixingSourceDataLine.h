#ifndef _com_sun_media_sound_SoftMixingSourceDataLine_h_
#define _com_sun_media_sound_SoftMixingSourceDataLine_h_
//$ class com.sun.media.sound.SoftMixingSourceDataLine
//$ extends com.sun.media.sound.SoftMixingDataLine
//$ implements javax.sound.sampled.SourceDataLine

#include <com/sun/media/sound/SoftMixingDataLine.h>
#include <java/lang/Array.h>
#include <javax/sound/sampled/SourceDataLine.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class AudioFloatInputStream;
				class SoftAudioBuffer;
				class SoftMixingMixer;
			}
		}
	}
}
namespace javax {
	namespace sound {
		namespace sampled {
			class AudioFormat;
			class DataLine$Info;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftMixingSourceDataLine : public ::com::sun::media::sound::SoftMixingDataLine, public ::javax::sound::sampled::SourceDataLine {
	$class(SoftMixingSourceDataLine, $NO_CLASS_INIT, ::com::sun::media::sound::SoftMixingDataLine, ::javax::sound::sampled::SourceDataLine)
public:
	SoftMixingSourceDataLine();
	virtual void addLineListener(::javax::sound::sampled::LineListener* listener) override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::javax::sound::sampled::Control* getControl(::javax::sound::sampled::Control$Type* control) override;
	virtual $Array<::javax::sound::sampled::Control>* getControls() override;
	virtual ::javax::sound::sampled::Line$Info* getLineInfo() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::media::sound::SoftMixingMixer* mixer, ::javax::sound::sampled::DataLine$Info* info);
	virtual int32_t available() override;
	virtual void close() override;
	virtual void drain() override;
	virtual void flush() override;
	virtual int32_t getBufferSize() override;
	virtual ::javax::sound::sampled::AudioFormat* getFormat() override;
	virtual int32_t getFramePosition() override;
	virtual float getLevel() override;
	virtual int64_t getLongFramePosition() override;
	virtual int64_t getMicrosecondPosition() override;
	virtual bool isActive() override;
	virtual bool isControlSupported(::javax::sound::sampled::Control$Type* control) override;
	virtual bool isOpen() override;
	virtual bool isRunning() override;
	virtual void open() override;
	virtual void open(::javax::sound::sampled::AudioFormat* format) override;
	virtual void open(::javax::sound::sampled::AudioFormat* format, int32_t bufferSize) override;
	virtual void processAudioLogic($Array<::com::sun::media::sound::SoftAudioBuffer>* buffers) override;
	virtual void processControlLogic() override;
	virtual void removeLineListener(::javax::sound::sampled::LineListener* listener) override;
	virtual void start() override;
	virtual void stop() override;
	virtual $String* toString() override;
	virtual int32_t write($bytes* b, int32_t off, int32_t len) override;
	bool open$ = false;
	::javax::sound::sampled::AudioFormat* format = nullptr;
	int32_t framesize = 0;
	int32_t bufferSize = 0;
	$floats* readbuffer = nullptr;
	bool active = false;
	$bytes* cycling_buffer = nullptr;
	int32_t cycling_read_pos = 0;
	int32_t cycling_write_pos = 0;
	int32_t cycling_avail = 0;
	int64_t cycling_framepos = 0;
	::com::sun::media::sound::AudioFloatInputStream* afis = nullptr;
	bool _active = false;
	::javax::sound::sampled::AudioFormat* outputformat = nullptr;
	int32_t out_nrofchannels = 0;
	int32_t in_nrofchannels = 0;
	float _rightgain = 0.0;
	float _leftgain = 0.0;
	float _eff1gain = 0.0;
	float _eff2gain = 0.0;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftMixingSourceDataLine_h_