#include <com/sun/media/sound/ReferenceCountingDevice.h>

#include <javax/sound/midi/Receiver.h>
#include <javax/sound/midi/Transmitter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _ReferenceCountingDevice_MethodInfo_[] = {
	{"getReceiverReferenceCounting", "()Ljavax/sound/midi/Receiver;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.sound.midi.MidiUnavailableException"},
	{"getTransmitterReferenceCounting", "()Ljavax/sound/midi/Transmitter;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.sound.midi.MidiUnavailableException"},
	{}
};

$ClassInfo _ReferenceCountingDevice_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.media.sound.ReferenceCountingDevice",
	nullptr,
	nullptr,
	nullptr,
	_ReferenceCountingDevice_MethodInfo_
};

$Object* allocate$ReferenceCountingDevice($Class* clazz) {
	return $of($alloc(ReferenceCountingDevice));
}

$Class* ReferenceCountingDevice::load$($String* name, bool initialize) {
	$loadClass(ReferenceCountingDevice, name, initialize, &_ReferenceCountingDevice_ClassInfo_, allocate$ReferenceCountingDevice);
	return class$;
}

$Class* ReferenceCountingDevice::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com