#include <com/sun/beans/decoder/VoidElementHandler.h>

#include <com/sun/beans/decoder/ObjectElementHandler.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ObjectElementHandler = ::com::sun::beans::decoder::ObjectElementHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

$MethodInfo _VoidElementHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(VoidElementHandler::*)()>(&VoidElementHandler::init$))},
	{"isArgument", "()Z", nullptr, $PROTECTED},
	{}
};

$ClassInfo _VoidElementHandler_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.beans.decoder.VoidElementHandler",
	"com.sun.beans.decoder.ObjectElementHandler",
	nullptr,
	nullptr,
	_VoidElementHandler_MethodInfo_
};

$Object* allocate$VoidElementHandler($Class* clazz) {
	return $of($alloc(VoidElementHandler));
}

void VoidElementHandler::init$() {
	$ObjectElementHandler::init$();
}

bool VoidElementHandler::isArgument() {
	return false;
}

VoidElementHandler::VoidElementHandler() {
}

$Class* VoidElementHandler::load$($String* name, bool initialize) {
	$loadClass(VoidElementHandler, name, initialize, &_VoidElementHandler_ClassInfo_, allocate$VoidElementHandler);
	return class$;
}

$Class* VoidElementHandler::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com