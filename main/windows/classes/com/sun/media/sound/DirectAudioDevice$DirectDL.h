#ifndef _com_sun_media_sound_DirectAudioDevice$DirectDL_h_
#define _com_sun_media_sound_DirectAudioDevice$DirectDL_h_
//$ class com.sun.media.sound.DirectAudioDevice$DirectDL
//$ extends com.sun.media.sound.AbstractDataLine
//$ implements com.sun.media.sound.EventDispatcher$LineMonitor

#include <com/sun/media/sound/AbstractDataLine.h>
#include <com/sun/media/sound/EventDispatcher$LineMonitor.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class DirectAudioDevice;
				class DirectAudioDevice$DirectDL$Balance;
				class DirectAudioDevice$DirectDL$Gain;
				class DirectAudioDevice$DirectDL$Mute;
				class DirectAudioDevice$DirectDL$Pan;
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

class DirectAudioDevice$DirectDL : public ::com::sun::media::sound::AbstractDataLine, public ::com::sun::media::sound::EventDispatcher$LineMonitor {
	$class(DirectAudioDevice$DirectDL, $NO_CLASS_INIT, ::com::sun::media::sound::AbstractDataLine, ::com::sun::media::sound::EventDispatcher$LineMonitor)
public:
	DirectAudioDevice$DirectDL();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::sound::sampled::DataLine$Info* info, ::com::sun::media::sound::DirectAudioDevice* mixer, ::javax::sound::sampled::AudioFormat* format, int32_t bufferSize, int32_t mixerIndex, int32_t deviceID, bool isSource);
	virtual int32_t available() override;
	void calcVolume();
	virtual void checkLine() override;
	virtual void drain() override;
	virtual void flush() override;
	virtual int64_t getLongFramePosition() override;
	virtual void implClose() override;
	virtual void implOpen(::javax::sound::sampled::AudioFormat* format, int32_t bufferSize) override;
	virtual void implStart() override;
	virtual void implStop() override;
	virtual bool requiresServicing();
	virtual $String* toString() override;
	virtual int32_t write($bytes* b, int32_t off, int32_t len);
	int32_t mixerIndex = 0;
	int32_t deviceID = 0;
	int64_t id = 0;
	int32_t waitTime = 0;
	$volatile(bool) flushing = false;
	bool isSource = false;
	$volatile(int64_t) bytePosition = 0;
	$volatile(bool) doIO = false;
	$volatile(bool) stoppedWritten = false;
	$volatile(bool) drained = false;
	bool monitoring = false;
	int32_t softwareConversionSize = 0;
	::javax::sound::sampled::AudioFormat* hardwareFormat = nullptr;
	::com::sun::media::sound::DirectAudioDevice$DirectDL$Gain* gainControl = nullptr;
	::com::sun::media::sound::DirectAudioDevice$DirectDL$Mute* muteControl = nullptr;
	::com::sun::media::sound::DirectAudioDevice$DirectDL$Balance* balanceControl = nullptr;
	::com::sun::media::sound::DirectAudioDevice$DirectDL$Pan* panControl = nullptr;
	float leftGain = 0.0;
	float rightGain = 0.0;
	$volatile(bool) noService = false;
	$Object* lockNative = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_DirectAudioDevice$DirectDL_h_