#include <java/awt/desktop/PrintFilesHandler.h>

#include <java/awt/desktop/PrintFilesEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PrintFilesEvent = ::java::awt::desktop::PrintFilesEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace desktop {

$MethodInfo _PrintFilesHandler_MethodInfo_[] = {
	{"printFiles", "(Ljava/awt/desktop/PrintFilesEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _PrintFilesHandler_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.desktop.PrintFilesHandler",
	nullptr,
	nullptr,
	nullptr,
	_PrintFilesHandler_MethodInfo_
};

$Object* allocate$PrintFilesHandler($Class* clazz) {
	return $of($alloc(PrintFilesHandler));
}

$Class* PrintFilesHandler::load$($String* name, bool initialize) {
	$loadClass(PrintFilesHandler, name, initialize, &_PrintFilesHandler_ClassInfo_, allocate$PrintFilesHandler);
	return class$;
}

$Class* PrintFilesHandler::class$ = nullptr;

		} // desktop
	} // awt
} // java