#include <java/awt/desktop/SystemEventListener.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EventListener = ::java::util::EventListener;

namespace java {
	namespace awt {
		namespace desktop {

$ClassInfo _SystemEventListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.desktop.SystemEventListener",
	nullptr,
	"java.util.EventListener"
};

$Object* allocate$SystemEventListener($Class* clazz) {
	return $of($alloc(SystemEventListener));
}

$Class* SystemEventListener::load$($String* name, bool initialize) {
	$loadClass(SystemEventListener, name, initialize, &_SystemEventListener_ClassInfo_, allocate$SystemEventListener);
	return class$;
}

$Class* SystemEventListener::class$ = nullptr;

		} // desktop
	} // awt
} // java