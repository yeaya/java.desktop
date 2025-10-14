#ifndef _com_sun_media_sound_SoftMixingClip_h_
#define _com_sun_media_sound_SoftMixingClip_h_
//$ class com.sun.media.sound.SoftMixingClip
//$ extends com.sun.media.sound.SoftMixingDataLine
//$ implements javax.sound.sampled.Clip

#include <com/sun/media/sound/SoftMixingDataLine.h>
#include <java/lang/Array.h>
#include <javax/sound/sampled/Clip.h>

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
namespace java {
	namespace io {
		class InputStream;
	}
}
namespace javax {
	namespace sound {
		namespace sampled {
			class AudioFormat;
			class AudioInputStream;
			class DataLine$Info;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftMixingClip : public ::com::sun::media::sound::SoftMixingDataLine, public ::javax::sound::sampled::Clip {
	$class(SoftMixingClip, $NO_CLASS_INIT, ::com::sun::media::sound::SoftMixingDataLine, ::javax::sound::sampled::Clip)
public:
	SoftMixingClip();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
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
	virtual int32_t getFrameLength() override;
	virtual int32_t getFramePosition() override;
	virtual float getLevel() override;
	virtual int64_t getLongFramePosition() override;
	virtual int64_t getMicrosecondLength() override;
	virtual int64_t getMicrosecondPosition() override;
	virtual bool isActive() override;
	virtual bool isControlSupported(::javax::sound::sampled::Control$Type* control) override;
	virtual bool isOpen() override;
	virtual bool isRunning() override;
	virtual void loop(int32_t count) override;
	virtual void open(::javax::sound::sampled::AudioInputStream* stream) override;
	virtual void open(::javax::sound::sampled::AudioFormat* format, $bytes* data, int32_t offset, int32_t bufferSize) override;
	virtual void open() override;
	virtual void processAudioLogic($Array<::com::sun::media::sound::SoftAudioBuffer>* buffers) override;
	virtual void processControlLogic() override;
	virtual void removeLineListener(::javax::sound::sampled::LineListener* listener) override;
	virtual void setFramePosition(int32_t frames) override;
	virtual void setLoopPoints(int32_t start, int32_t end) override;
	virtual void setMicrosecondPosition(int64_t microseconds) override;
	virtual void start() override;
	virtual void stop() override;
	virtual $String* toString() override;
	::javax::sound::sampled::AudioFormat* format = nullptr;
	int32_t framesize = 0;
	$bytes* data = nullptr;
	::java::io::InputStream* datastream = nullptr;
	int32_t offset = 0;
	int32_t bufferSize = 0;
	$floats* readbuffer = nullptr;
	bool open$ = false;
	::javax::sound::sampled::AudioFormat* outputformat = nullptr;
	int32_t out_nrofchannels = 0;
	int32_t in_nrofchannels = 0;
	int32_t frameposition = 0;
	bool frameposition_sg = false;
	bool active_sg = false;
	int32_t loopstart = 0;
	int32_t loopend = 0;
	bool active = false;
	int32_t loopcount = 0;
	bool _active = false;
	int32_t _frameposition = 0;
	bool loop_sg = false;
	int32_t _loopcount = 0;
	int32_t _loopstart = 0;
	int32_t _loopend = 0;
	float _rightgain = 0.0;
	float _leftgain = 0.0;
	float _eff1gain = 0.0;
	float _eff2gain = 0.0;
	::com::sun::media::sound::AudioFloatInputStream* afis = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftMixingClip_h_