#include <com/sun/beans/decoder/FloatElementHandler.h>

#include <com/sun/beans/decoder/StringElementHandler.h>
#include <jcpp.h>

using $StringElementHandler = ::com::sun::beans::decoder::StringElementHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

$MethodInfo _FloatElementHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FloatElementHandler::*)()>(&FloatElementHandler::init$))},
	{"getValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _FloatElementHandler_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.beans.decoder.FloatElementHandler",
	"com.sun.beans.decoder.StringElementHandler",
	nullptr,
	nullptr,
	_FloatElementHandler_MethodInfo_
};

$Object* allocate$FloatElementHandler($Class* clazz) {
	return $of($alloc(FloatElementHandler));
}

void FloatElementHandler::init$() {
	$StringElementHandler::init$();
}

$Object* FloatElementHandler::getValue($String* argument) {
	return $of($Float::valueOf(argument));
}

FloatElementHandler::FloatElementHandler() {
}

$Class* FloatElementHandler::load$($String* name, bool initialize) {
	$loadClass(FloatElementHandler, name, initialize, &_FloatElementHandler_ClassInfo_, allocate$FloatElementHandler);
	return class$;
}

$Class* FloatElementHandler::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com