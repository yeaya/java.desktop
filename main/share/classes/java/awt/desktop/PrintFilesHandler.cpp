#include <java/awt/desktop/PrintFilesHandler.h>

#include <java/awt/desktop/PrintFilesEvent.h>
#include <jcpp.h>

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