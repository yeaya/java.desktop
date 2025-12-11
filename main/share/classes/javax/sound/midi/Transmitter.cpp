#include <javax/sound/midi/Transmitter.h>

#include <javax/sound/midi/Receiver.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace sound {
		namespace midi {

$MethodInfo _Transmitter_MethodInfo_[] = {
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"getReceiver", "()Ljavax/sound/midi/Receiver;", nullptr, $PUBLIC | $ABSTRACT},
	{"setReceiver", "(Ljavax/sound/midi/Receiver;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Transmitter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.sound.midi.Transmitter",
	nullptr,
	"java.lang.AutoCloseable",
	nullptr,
	_Transmitter_MethodInfo_
};

$Object* allocate$Transmitter($Class* clazz) {
	return $of($alloc(Transmitter));
}

$Class* Transmitter::load$($String* name, bool initialize) {
	$loadClass(Transmitter, name, initialize, &_Transmitter_ClassInfo_, allocate$Transmitter);
	return class$;
}

$Class* Transmitter::class$ = nullptr;

		} // midi
	} // sound
} // javax