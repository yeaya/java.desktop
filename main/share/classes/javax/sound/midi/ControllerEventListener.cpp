#include <javax/sound/midi/ControllerEventListener.h>

#include <javax/sound/midi/ShortMessage.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace sound {
		namespace midi {

$MethodInfo _ControllerEventListener_MethodInfo_[] = {
	{"controlChange", "(Ljavax/sound/midi/ShortMessage;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ControllerEventListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.sound.midi.ControllerEventListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_ControllerEventListener_MethodInfo_
};

$Object* allocate$ControllerEventListener($Class* clazz) {
	return $of($alloc(ControllerEventListener));
}

$Class* ControllerEventListener::load$($String* name, bool initialize) {
	$loadClass(ControllerEventListener, name, initialize, &_ControllerEventListener_ClassInfo_, allocate$ControllerEventListener);
	return class$;
}

$Class* ControllerEventListener::class$ = nullptr;

		} // midi
	} // sound
} // javax