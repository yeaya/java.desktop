#include <javax/sound/midi/Receiver.h>

#include <javax/sound/midi/MidiMessage.h>
#include <jcpp.h>

using $AutoCloseable = ::java::lang::AutoCloseable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MidiMessage = ::javax::sound::midi::MidiMessage;

namespace javax {
	namespace sound {
		namespace midi {

$MethodInfo _Receiver_MethodInfo_[] = {
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"send", "(Ljavax/sound/midi/MidiMessage;J)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Receiver_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.sound.midi.Receiver",
	nullptr,
	"java.lang.AutoCloseable",
	nullptr,
	_Receiver_MethodInfo_
};

$Object* allocate$Receiver($Class* clazz) {
	return $of($alloc(Receiver));
}

$Class* Receiver::load$($String* name, bool initialize) {
	$loadClass(Receiver, name, initialize, &_Receiver_ClassInfo_, allocate$Receiver);
	return class$;
}

$Class* Receiver::class$ = nullptr;

		} // midi
	} // sound
} // javax