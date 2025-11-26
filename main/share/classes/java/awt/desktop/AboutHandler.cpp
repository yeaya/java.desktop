#include <java/awt/desktop/AboutHandler.h>

#include <java/awt/desktop/AboutEvent.h>
#include <jcpp.h>

using $AboutEvent = ::java::awt::desktop::AboutEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace desktop {

$MethodInfo _AboutHandler_MethodInfo_[] = {
	{"handleAbout", "(Ljava/awt/desktop/AboutEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AboutHandler_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.desktop.AboutHandler",
	nullptr,
	nullptr,
	nullptr,
	_AboutHandler_MethodInfo_
};

$Object* allocate$AboutHandler($Class* clazz) {
	return $of($alloc(AboutHandler));
}

$Class* AboutHandler::load$($String* name, bool initialize) {
	$loadClass(AboutHandler, name, initialize, &_AboutHandler_ClassInfo_, allocate$AboutHandler);
	return class$;
}

$Class* AboutHandler::class$ = nullptr;

		} // desktop
	} // awt
} // java