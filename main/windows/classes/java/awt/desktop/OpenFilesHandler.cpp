#include <java/awt/desktop/OpenFilesHandler.h>

#include <java/awt/desktop/OpenFilesEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $OpenFilesEvent = ::java::awt::desktop::OpenFilesEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace desktop {

$MethodInfo _OpenFilesHandler_MethodInfo_[] = {
	{"openFiles", "(Ljava/awt/desktop/OpenFilesEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _OpenFilesHandler_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.desktop.OpenFilesHandler",
	nullptr,
	nullptr,
	nullptr,
	_OpenFilesHandler_MethodInfo_
};

$Object* allocate$OpenFilesHandler($Class* clazz) {
	return $of($alloc(OpenFilesHandler));
}

$Class* OpenFilesHandler::load$($String* name, bool initialize) {
	$loadClass(OpenFilesHandler, name, initialize, &_OpenFilesHandler_ClassInfo_, allocate$OpenFilesHandler);
	return class$;
}

$Class* OpenFilesHandler::class$ = nullptr;

		} // desktop
	} // awt
} // java