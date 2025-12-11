#include <com/sun/media/sound/MidiDeviceTransmitterEnvelope.h>

#include <javax/sound/midi/MidiDevice.h>
#include <javax/sound/midi/Receiver.h>
#include <javax/sound/midi/Transmitter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $MidiDevice = ::javax::sound::midi::MidiDevice;
using $Receiver = ::javax::sound::midi::Receiver;
using $Transmitter = ::javax::sound::midi::Transmitter;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _MidiDeviceTransmitterEnvelope_FieldInfo_[] = {
	{"device", "Ljavax/sound/midi/MidiDevice;", nullptr, $PRIVATE | $FINAL, $field(MidiDeviceTransmitterEnvelope, device)},
	{"transmitter", "Ljavax/sound/midi/Transmitter;", nullptr, $PRIVATE | $FINAL, $field(MidiDeviceTransmitterEnvelope, transmitter)},
	{}
};

$MethodInfo _MidiDeviceTransmitterEnvelope_MethodInfo_[] = {
	{"<init>", "(Ljavax/sound/midi/MidiDevice;Ljavax/sound/midi/Transmitter;)V", nullptr, $PUBLIC, $method(static_cast<void(MidiDeviceTransmitterEnvelope::*)($MidiDevice*,$Transmitter*)>(&MidiDeviceTransmitterEnvelope::init$))},
	{"close", "()V", nullptr, $PUBLIC},
	{"getMidiDevice", "()Ljavax/sound/midi/MidiDevice;", nullptr, $PUBLIC},
	{"getReceiver", "()Ljavax/sound/midi/Receiver;", nullptr, $PUBLIC},
	{"getTransmitter", "()Ljavax/sound/midi/Transmitter;", nullptr, $PUBLIC, $method(static_cast<$Transmitter*(MidiDeviceTransmitterEnvelope::*)()>(&MidiDeviceTransmitterEnvelope::getTransmitter))},
	{"setReceiver", "(Ljavax/sound/midi/Receiver;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MidiDeviceTransmitterEnvelope_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.MidiDeviceTransmitterEnvelope",
	"java.lang.Object",
	"javax.sound.midi.MidiDeviceTransmitter",
	_MidiDeviceTransmitterEnvelope_FieldInfo_,
	_MidiDeviceTransmitterEnvelope_MethodInfo_
};

$Object* allocate$MidiDeviceTransmitterEnvelope($Class* clazz) {
	return $of($alloc(MidiDeviceTransmitterEnvelope));
}

void MidiDeviceTransmitterEnvelope::init$($MidiDevice* device, $Transmitter* transmitter) {
	if (device == nullptr || transmitter == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, device, device);
	$set(this, transmitter, transmitter);
}

void MidiDeviceTransmitterEnvelope::setReceiver($Receiver* receiver) {
	$nc(this->transmitter)->setReceiver(receiver);
}

$Receiver* MidiDeviceTransmitterEnvelope::getReceiver() {
	return $nc(this->transmitter)->getReceiver();
}

void MidiDeviceTransmitterEnvelope::close() {
	$nc(this->transmitter)->close();
}

$MidiDevice* MidiDeviceTransmitterEnvelope::getMidiDevice() {
	return this->device;
}

$Transmitter* MidiDeviceTransmitterEnvelope::getTransmitter() {
	return this->transmitter;
}

MidiDeviceTransmitterEnvelope::MidiDeviceTransmitterEnvelope() {
}

$Class* MidiDeviceTransmitterEnvelope::load$($String* name, bool initialize) {
	$loadClass(MidiDeviceTransmitterEnvelope, name, initialize, &_MidiDeviceTransmitterEnvelope_ClassInfo_, allocate$MidiDeviceTransmitterEnvelope);
	return class$;
}

$Class* MidiDeviceTransmitterEnvelope::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com