#ifndef _com_sun_media_sound_DirectAudioDevice$DirectClip_h_
#define _com_sun_media_sound_DirectAudioDevice$DirectClip_h_
//$ class com.sun.media.sound.DirectAudioDevice$DirectClip
//$ extends com.sun.media.sound.DirectAudioDevice$DirectDL
//$ implements java.lang.Runnable,com.sun.media.sound.AutoClosingClip

#include <com/sun/media/sound/AutoClosingClip.h>
#include <com/sun/media/sound/DirectAudioDevice$DirectDL.h>
#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class DirectAudioDevice;
			}
		}
	}
}
namespace java {
	namespace lang {
		class Thread;
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

class DirectAudioDevice$DirectClip : public ::com::sun::media::sound::DirectAudioDevice$DirectDL, public ::java::lang::Runnable, public ::com::sun::media::sound::AutoClosingClip {
	$class(DirectAudioDevice$DirectClip, $NO_CLASS_INIT, ::com::sun::media::sound::DirectAudioDevice$DirectDL, ::java::lang::Runnable, ::com::sun::media::sound::AutoClosingClip)
public:
	DirectAudioDevice$DirectClip();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual void addLineListener(::javax::sound::sampled::LineListener* listener) override;
	virtual int32_t available() override;
	virtual $Object* clone() override;
	virtual void close() override;
	virtual void drain() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual void flush() override;
	virtual int32_t getBufferSize() override;
	virtual ::javax::sound::sampled::Control* getControl(::javax::sound::sampled::Control$Type* controlType) override;
	virtual $Array<::javax::sound::sampled::Control>* getControls() override;
	virtual ::javax::sound::sampled::AudioFormat* getFormat() override;
	virtual int32_t getFramePosition() override;
	virtual float getLevel() override;
	virtual ::javax::sound::sampled::Line$Info* getLineInfo() override;
	virtual int64_t getMicrosecondPosition() override;
	virtual int32_t hashCode() override;
	void init$(::javax::sound::sampled::DataLine$Info* info, ::javax::sound::sampled::AudioFormat* format, int32_t bufferSize, ::com::sun::media::sound::DirectAudioDevice* mixer);
	virtual int32_t getFrameLength() override;
	virtual int64_t getLongFramePosition() override;
	virtual int64_t getMicrosecondLength() override;
	virtual void implClose() override;
	virtual void implOpen(::javax::sound::sampled::AudioFormat* format, int32_t bufferSize) override;
	virtual void implStart() override;
	virtual void implStop() override;
	virtual bool isActive() override;
	virtual bool isAutoClosing() override;
	virtual bool isControlSupported(::javax::sound::sampled::Control$Type* controlType) override;
	virtual bool isOpen() override;
	virtual bool isRunning() override;
	virtual void loop(int32_t count) override;
	using ::com::sun::media::sound::DirectAudioDevice$DirectDL::open;
	virtual void open() override;
	virtual void open(::javax::sound::sampled::AudioFormat* format, $bytes* data, int32_t offset, int32_t bufferSize) override;
	void open(::javax::sound::sampled::AudioFormat* format, $bytes* data, int32_t frameLength);
	virtual void open(::javax::sound::sampled::AudioInputStream* stream) override;
	virtual void removeLineListener(::javax::sound::sampled::LineListener* listener) override;
	virtual bool requiresServicing() override;
	virtual void run() override;
	virtual void setAutoClosing(bool value) override;
	virtual void setFramePosition(int32_t frames) override;
	virtual void setLoopPoints(int32_t start, int32_t end) override;
	virtual void setMicrosecondPosition(int64_t microseconds) override;
	virtual void start() override;
	virtual void stop() override;
	virtual $String* toString() override;
	$volatile($Thread*) thread = nullptr;
	$volatile($bytes*) audioData = nullptr;
	$volatile(int32_t) frameSize = 0;
	$volatile(int32_t) m_lengthInFrames = 0;
	$volatile(int32_t) loopCount = 0;
	$volatile(int32_t) clipBytePosition = 0;
	$volatile(int32_t) newFramePosition = 0;
	$volatile(int32_t) loopStartFrame = 0;
	$volatile(int32_t) loopEndFrame = 0;
	bool autoclosing = false;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_DirectAudioDevice$DirectClip_h_