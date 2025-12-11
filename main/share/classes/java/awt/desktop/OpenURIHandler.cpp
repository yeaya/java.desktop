#include <java/awt/desktop/OpenURIHandler.h>

#include <java/awt/desktop/OpenURIEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace desktop {

$MethodInfo _OpenURIHandler_MethodInfo_[] = {
	{"openURI", "(Ljava/awt/desktop/OpenURIEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _OpenURIHandler_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.desktop.OpenURIHandler",
	nullptr,
	nullptr,
	nullptr,
	_OpenURIHandler_MethodInfo_
};

$Object* allocate$OpenURIHandler($Class* clazz) {
	return $of($alloc(OpenURIHandler));
}

$Class* OpenURIHandler::load$($String* name, bool initialize) {
	$loadClass(OpenURIHandler, name, initialize, &_OpenURIHandler_ClassInfo_, allocate$OpenURIHandler);
	return class$;
}

$Class* OpenURIHandler::class$ = nullptr;

		} // desktop
	} // awt
} // java