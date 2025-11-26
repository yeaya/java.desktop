#ifndef _com_sun_media_sound_DirectAudioDevice$DirectTDL_h_
#define _com_sun_media_sound_DirectAudioDevice$DirectTDL_h_
//$ class com.sun.media.sound.DirectAudioDevice$DirectTDL
//$ extends com.sun.media.sound.DirectAudioDevice$DirectDL
//$ implements javax.sound.sampled.TargetDataLine

#include <com/sun/media/sound/DirectAudioDevice$DirectDL.h>
#include <java/lang/Array.h>
#include <javax/sound/sampled/TargetDataLine.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class DirectAudioDevice;
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

class DirectAudioDevice$DirectTDL : public ::com::sun::media::sound::DirectAudioDevice$DirectDL, public ::javax::sound::sampled::TargetDataLine {
	$class(DirectAudioDevice$DirectTDL, $NO_CLASS_INIT, ::com::sun::media::sound::DirectAudioDevice$DirectDL, ::javax::sound::sampled::TargetDataLine)
public:
	DirectAudioDevice$DirectTDL();
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
	virtual int64_t getLongFramePosition() override;
	virtual int64_t getMicrosecondPosition() override;
	virtual int32_t hashCode() override;
	void init$(::javax::sound::sampled::DataLine$Info* info, ::javax::sound::sampled::AudioFormat* format, int32_t bufferSize, ::com::sun::media::sound::DirectAudioDevice* mixer);
	virtual bool isActive() override;
	virtual bool isControlSupported(::javax::sound::sampled::Control$Type* controlType) override;
	virtual bool isOpen() override;
	virtual bool isRunning() override;
	virtual void open(::javax::sound::sampled::AudioFormat* format, int32_t bufferSize) override;
	virtual void open(::javax::sound::sampled::AudioFormat* format) override;
	virtual void open() override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	virtual void removeLineListener(::javax::sound::sampled::LineListener* listener) override;
	virtual void start() override;
	virtual void stop() override;
	virtual $String* toString() override;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_DirectAudioDevice$DirectTDL_h_