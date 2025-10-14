#include <sun/awt/datatransfer/ToolkitThreadBlockedHandler.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace datatransfer {

$MethodInfo _ToolkitThreadBlockedHandler_MethodInfo_[] = {
	{"enter", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"exit", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"lock", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"unlock", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ToolkitThreadBlockedHandler_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.datatransfer.ToolkitThreadBlockedHandler",
	nullptr,
	nullptr,
	nullptr,
	_ToolkitThreadBlockedHandler_MethodInfo_
};

$Object* allocate$ToolkitThreadBlockedHandler($Class* clazz) {
	return $of($alloc(ToolkitThreadBlockedHandler));
}

$Class* ToolkitThreadBlockedHandler::load$($String* name, bool initialize) {
	$loadClass(ToolkitThreadBlockedHandler, name, initialize, &_ToolkitThreadBlockedHandler_ClassInfo_, allocate$ToolkitThreadBlockedHandler);
	return class$;
}

$Class* ToolkitThreadBlockedHandler::class$ = nullptr;

		} // datatransfer
	} // awt
} // sun