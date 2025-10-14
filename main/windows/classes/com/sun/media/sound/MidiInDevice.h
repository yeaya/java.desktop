#ifndef _com_sun_media_sound_MidiInDevice_h_
#define _com_sun_media_sound_MidiInDevice_h_
//$ class com.sun.media.sound.MidiInDevice
//$ extends com.sun.media.sound.AbstractMidiDevice
//$ implements java.lang.Runnable

#include <com/sun/media/sound/AbstractMidiDevice.h>
#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class AbstractMidiDeviceProvider$Info;
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
		namespace midi {
			class Transmitter;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class MidiInDevice : public ::com::sun::media::sound::AbstractMidiDevice, public ::java::lang::Runnable {
	$class(MidiInDevice, $NO_CLASS_INIT, ::com::sun::media::sound::AbstractMidiDevice, ::java::lang::Runnable)
public:
	MidiInDevice();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::media::sound::AbstractMidiDeviceProvider$Info* info);
	void callbackLongMessage($bytes* data, int64_t timeStamp);
	void callbackShortMessage(int32_t packedMsg, int64_t timeStamp);
	virtual ::javax::sound::midi::Transmitter* createTransmitter() override;
	virtual int64_t getMicrosecondPosition() override;
	virtual bool hasTransmitters() override;
	virtual void implClose() override;
	virtual void implOpen() override;
	void nClose(int64_t id);
	void nGetMessages(int64_t id);
	int64_t nGetTimeStamp(int64_t id);
	int64_t nOpen(int32_t index);
	void nStart(int64_t id);
	void nStop(int64_t id);
	virtual void run() override;
	virtual $String* toString() override;
	$volatile($Thread*) midiInThread = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_MidiInDevice_h_