#include <javax/sound/sampled/LineListener.h>

#include <javax/sound/sampled/LineEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $LineEvent = ::javax::sound::sampled::LineEvent;

namespace javax {
	namespace sound {
		namespace sampled {

$MethodInfo _LineListener_MethodInfo_[] = {
	{"update", "(Ljavax/sound/sampled/LineEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _LineListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.sound.sampled.LineListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_LineListener_MethodInfo_
};

$Object* allocate$LineListener($Class* clazz) {
	return $of($alloc(LineListener));
}

$Class* LineListener::load$($String* name, bool initialize) {
	$loadClass(LineListener, name, initialize, &_LineListener_ClassInfo_, allocate$LineListener);
	return class$;
}

$Class* LineListener::class$ = nullptr;

		} // sampled
	} // sound
} // javax