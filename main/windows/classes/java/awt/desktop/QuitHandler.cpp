#include <java/awt/desktop/QuitHandler.h>

#include <java/awt/desktop/QuitEvent.h>
#include <java/awt/desktop/QuitResponse.h>
#include <jcpp.h>

using $QuitEvent = ::java::awt::desktop::QuitEvent;
using $QuitResponse = ::java::awt::desktop::QuitResponse;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace desktop {

$MethodInfo _QuitHandler_MethodInfo_[] = {
	{"handleQuitRequestWith", "(Ljava/awt/desktop/QuitEvent;Ljava/awt/desktop/QuitResponse;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _QuitHandler_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.desktop.QuitHandler",
	nullptr,
	nullptr,
	nullptr,
	_QuitHandler_MethodInfo_
};

$Object* allocate$QuitHandler($Class* clazz) {
	return $of($alloc(QuitHandler));
}

$Class* QuitHandler::load$($String* name, bool initialize) {
	$loadClass(QuitHandler, name, initialize, &_QuitHandler_ClassInfo_, allocate$QuitHandler);
	return class$;
}

$Class* QuitHandler::class$ = nullptr;

		} // desktop
	} // awt
} // java