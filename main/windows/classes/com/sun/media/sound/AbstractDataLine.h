#ifndef _com_sun_media_sound_AbstractDataLine_h_
#define _com_sun_media_sound_AbstractDataLine_h_
//$ class com.sun.media.sound.AbstractDataLine
//$ extends com.sun.media.sound.AbstractLine
//$ implements javax.sound.sampled.DataLine

#include <com/sun/media/sound/AbstractLine.h>
#include <java/lang/Array.h>
#include <javax/sound/sampled/DataLine.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class AbstractMixer;
			}
		}
	}
}
namespace javax {
	namespace sound {
		namespace sampled {
			class AudioFormat;
			class Control;
			class DataLine$Info;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class AbstractDataLine : public ::com::sun::media::sound::AbstractLine, public ::javax::sound::sampled::DataLine {
	$class(AbstractDataLine, $NO_CLASS_INIT, ::com::sun::media::sound::AbstractLine, ::javax::sound::sampled::DataLine)
public:
	AbstractDataLine();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual void addLineListener(::javax::sound::sampled::LineListener* listener) override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::javax::sound::sampled::Control* getControl(::javax::sound::sampled::Control$Type* controlType) override;
	virtual $Array<::javax::sound::sampled::Control>* getControls() override;
	virtual int32_t getFramePosition() override;
	virtual ::javax::sound::sampled::Line$Info* getLineInfo() override;
	virtual int64_t getLongFramePosition() override;
	virtual int32_t hashCode() override;
	void init$(::javax::sound::sampled::DataLine$Info* info, ::com::sun::media::sound::AbstractMixer* mixer, $Array<::javax::sound::sampled::Control>* controls);
	void init$(::javax::sound::sampled::DataLine$Info* info, ::com::sun::media::sound::AbstractMixer* mixer, $Array<::javax::sound::sampled::Control>* controls, ::javax::sound::sampled::AudioFormat* format, int32_t bufferSize);
	virtual int32_t available() override;
	virtual void close() override;
	virtual void drain() override;
	virtual void flush() override;
	virtual int32_t getBufferSize() override;
	virtual ::javax::sound::sampled::AudioFormat* getFormat() override;
	virtual float getLevel() override;
	virtual int64_t getMicrosecondPosition() override;
	virtual void implClose() {}
	virtual void implOpen(::javax::sound::sampled::AudioFormat* format, int32_t bufferSize) {}
	virtual void implStart() {}
	virtual void implStop() {}
	virtual bool isActive() override;
	virtual bool isControlSupported(::javax::sound::sampled::Control$Type* controlType) override;
	virtual bool isOpen() override;
	virtual bool isRunning() override;
	bool isStartedRunning();
	void open(::javax::sound::sampled::AudioFormat* format, int32_t bufferSize);
	void open(::javax::sound::sampled::AudioFormat* format);
	virtual void open() override;
	virtual void removeLineListener(::javax::sound::sampled::LineListener* listener) override;
	void setActive(bool active);
	int32_t setBufferSize(int32_t newSize);
	void setEOM();
	void setStarted(bool started);
	virtual void start() override;
	virtual void stop() override;
	virtual $String* toString() override;
	::javax::sound::sampled::AudioFormat* defaultFormat = nullptr;
	int32_t defaultBufferSize = 0;
	$Object* lock = nullptr;
	::javax::sound::sampled::AudioFormat* format = nullptr;
	int32_t bufferSize = 0;
	$volatile(bool) running = false;
	$volatile(bool) started = false;
	$volatile(bool) active = false;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_AbstractDataLine_h_