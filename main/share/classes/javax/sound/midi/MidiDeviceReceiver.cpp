#include <javax/sound/midi/MidiDeviceReceiver.h>

#include <javax/sound/midi/MidiDevice.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace sound {
		namespace midi {

$MethodInfo _MidiDeviceReceiver_MethodInfo_[] = {
	{"getMidiDevice", "()Ljavax/sound/midi/MidiDevice;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _MidiDeviceReceiver_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.sound.midi.MidiDeviceReceiver",
	nullptr,
	"javax.sound.midi.Receiver",
	nullptr,
	_MidiDeviceReceiver_MethodInfo_
};

$Object* allocate$MidiDeviceReceiver($Class* clazz) {
	return $of($alloc(MidiDeviceReceiver));
}

$Class* MidiDeviceReceiver::load$($String* name, bool initialize) {
	$loadClass(MidiDeviceReceiver, name, initialize, &_MidiDeviceReceiver_ClassInfo_, allocate$MidiDeviceReceiver);
	return class$;
}

$Class* MidiDeviceReceiver::class$ = nullptr;

		} // midi
	} // sound
} // javax