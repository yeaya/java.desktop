#include <javax/sound/midi/MidiDeviceTransmitter.h>

#include <javax/sound/midi/MidiDevice.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MidiDevice = ::javax::sound::midi::MidiDevice;
using $Transmitter = ::javax::sound::midi::Transmitter;

namespace javax {
	namespace sound {
		namespace midi {

$MethodInfo _MidiDeviceTransmitter_MethodInfo_[] = {
	{"getMidiDevice", "()Ljavax/sound/midi/MidiDevice;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _MidiDeviceTransmitter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.sound.midi.MidiDeviceTransmitter",
	nullptr,
	"javax.sound.midi.Transmitter",
	nullptr,
	_MidiDeviceTransmitter_MethodInfo_
};

$Object* allocate$MidiDeviceTransmitter($Class* clazz) {
	return $of($alloc(MidiDeviceTransmitter));
}

$Class* MidiDeviceTransmitter::load$($String* name, bool initialize) {
	$loadClass(MidiDeviceTransmitter, name, initialize, &_MidiDeviceTransmitter_ClassInfo_, allocate$MidiDeviceTransmitter);
	return class$;
}

$Class* MidiDeviceTransmitter::class$ = nullptr;

		} // midi
	} // sound
} // javax