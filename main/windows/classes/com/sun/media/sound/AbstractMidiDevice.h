#ifndef _com_sun_media_sound_AbstractMidiDevice_h_
#define _com_sun_media_sound_AbstractMidiDevice_h_
//$ class com.sun.media.sound.AbstractMidiDevice
//$ extends javax.sound.midi.MidiDevice
//$ implements com.sun.media.sound.ReferenceCountingDevice

#include <com/sun/media/sound/ReferenceCountingDevice.h>
#include <javax/sound/midi/MidiDevice.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class AbstractMidiDevice$TransmitterList;
			}
		}
	}
}
namespace java {
	namespace util {
		class ArrayList;
		class List;
	}
}
namespace javax {
	namespace sound {
		namespace midi {
			class MidiDevice$Info;
			class Receiver;
			class Transmitter;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class AbstractMidiDevice : public ::javax::sound::midi::MidiDevice, public ::com::sun::media::sound::ReferenceCountingDevice {
	$class(AbstractMidiDevice, $HAS_FINALIZE | $NO_CLASS_INIT, ::javax::sound::midi::MidiDevice, ::com::sun::media::sound::ReferenceCountingDevice)
public:
	AbstractMidiDevice();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual int32_t hashCode() override;
	void init$(::javax::sound::midi::MidiDevice$Info* info);
	virtual void close() override;
	void closeInternal(Object$* object);
	virtual ::javax::sound::midi::Receiver* createReceiver();
	virtual ::javax::sound::midi::Transmitter* createTransmitter();
	void doClose();
	void doOpen();
	virtual void finalize() override;
	virtual ::javax::sound::midi::MidiDevice$Info* getDeviceInfo() override;
	int64_t getId();
	virtual int32_t getMaxReceivers() override;
	virtual int32_t getMaxTransmitters() override;
	virtual int64_t getMicrosecondPosition() override;
	::java::util::List* getOpenKeepingObjects();
	virtual ::javax::sound::midi::Receiver* getReceiver() override;
	::java::util::List* getReceiverList();
	virtual ::javax::sound::midi::Receiver* getReceiverReferenceCounting() override;
	virtual ::java::util::List* getReceivers() override;
	virtual ::javax::sound::midi::Transmitter* getTransmitter() override;
	::com::sun::media::sound::AbstractMidiDevice$TransmitterList* getTransmitterList();
	virtual ::javax::sound::midi::Transmitter* getTransmitterReferenceCounting() override;
	virtual ::java::util::List* getTransmitters() override;
	virtual bool hasReceivers();
	virtual bool hasTransmitters();
	virtual void implClose();
	virtual void implOpen() {}
	virtual bool isOpen() override;
	virtual void open() override;
	void openInternal(Object$* object);
	virtual $String* toString() override;
	::java::util::ArrayList* receiverList = nullptr;
	::com::sun::media::sound::AbstractMidiDevice$TransmitterList* transmitterList = nullptr;
	$Object* traRecLock = nullptr;
	::javax::sound::midi::MidiDevice$Info* info = nullptr;
	$volatile(bool) open$ = false;
	int32_t openRefCount = 0;
	::java::util::List* openKeepingObjects = nullptr;
	$volatile(int64_t) id = 0;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_AbstractMidiDevice_h_