#include <javax/sound/midi/MetaEventListener.h>

#include <javax/sound/midi/MetaMessage.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $MetaMessage = ::javax::sound::midi::MetaMessage;

namespace javax {
	namespace sound {
		namespace midi {

$MethodInfo _MetaEventListener_MethodInfo_[] = {
	{"meta", "(Ljavax/sound/midi/MetaMessage;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _MetaEventListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.sound.midi.MetaEventListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_MetaEventListener_MethodInfo_
};

$Object* allocate$MetaEventListener($Class* clazz) {
	return $of($alloc(MetaEventListener));
}

$Class* MetaEventListener::load$($String* name, bool initialize) {
	$loadClass(MetaEventListener, name, initialize, &_MetaEventListener_ClassInfo_, allocate$MetaEventListener);
	return class$;
}

$Class* MetaEventListener::class$ = nullptr;

		} // midi
	} // sound
} // javax