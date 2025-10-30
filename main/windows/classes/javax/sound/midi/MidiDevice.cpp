#include <javax/sound/midi/MidiDevice.h>

#include <java/util/List.h>
#include <javax/sound/midi/MidiDevice$Info.h>
#include <javax/sound/midi/Receiver.h>
#include <javax/sound/midi/Transmitter.h>
#include <jcpp.h>

using $AutoCloseable = ::java::lang::AutoCloseable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $MidiDevice$Info = ::javax::sound::midi::MidiDevice$Info;
using $Receiver = ::javax::sound::midi::Receiver;
using $Transmitter = ::javax::sound::midi::Transmitter;

namespace javax {
	namespace sound {
		namespace midi {

$MethodInfo _MidiDevice_MethodInfo_[] = {
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"getDeviceInfo", "()Ljavax/sound/midi/MidiDevice$Info;", nullptr, $PUBLIC | $ABSTRACT},
	{"getMaxReceivers", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getMaxTransmitters", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getMicrosecondPosition", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getReceiver", "()Ljavax/sound/midi/Receiver;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.sound.midi.MidiUnavailableException"},
	{"getReceivers", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/sound/midi/Receiver;>;", $PUBLIC | $ABSTRACT},
	{"getTransmitter", "()Ljavax/sound/midi/Transmitter;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.sound.midi.MidiUnavailableException"},
	{"getTransmitters", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/sound/midi/Transmitter;>;", $PUBLIC | $ABSTRACT},
	{"isOpen", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"open", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.sound.midi.MidiUnavailableException"},
	{}
};

$InnerClassInfo _MidiDevice_InnerClassesInfo_[] = {
	{"javax.sound.midi.MidiDevice$Info", "javax.sound.midi.MidiDevice", "Info", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MidiDevice_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.sound.midi.MidiDevice",
	nullptr,
	"java.lang.AutoCloseable",
	nullptr,
	_MidiDevice_MethodInfo_,
	nullptr,
	nullptr,
	_MidiDevice_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.sound.midi.MidiDevice$Info"
};

$Object* allocate$MidiDevice($Class* clazz) {
	return $of($alloc(MidiDevice));
}

$Class* MidiDevice::load$($String* name, bool initialize) {
	$loadClass(MidiDevice, name, initialize, &_MidiDevice_ClassInfo_, allocate$MidiDevice);
	return class$;
}

$Class* MidiDevice::class$ = nullptr;

		} // midi
	} // sound
} // javax