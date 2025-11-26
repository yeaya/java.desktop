#include <java/awt/event/TextListener.h>

#include <java/awt/event/TextEvent.h>
#include <jcpp.h>

using $TextEvent = ::java::awt::event::TextEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;

namespace java {
	namespace awt {
		namespace event {

$MethodInfo _TextListener_MethodInfo_[] = {
	{"textValueChanged", "(Ljava/awt/event/TextEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TextListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.event.TextListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_TextListener_MethodInfo_
};

$Object* allocate$TextListener($Class* clazz) {
	return $of($alloc(TextListener));
}

$Class* TextListener::load$($String* name, bool initialize) {
	$loadClass(TextListener, name, initialize, &_TextListener_ClassInfo_, allocate$TextListener);
	return class$;
}

$Class* TextListener::class$ = nullptr;

		} // event
	} // awt
} // java