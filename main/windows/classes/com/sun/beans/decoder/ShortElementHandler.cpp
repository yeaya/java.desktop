#include <com/sun/beans/decoder/ShortElementHandler.h>

#include <com/sun/beans/decoder/StringElementHandler.h>
#include <jcpp.h>

using $StringElementHandler = ::com::sun::beans::decoder::StringElementHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

$MethodInfo _ShortElementHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ShortElementHandler::*)()>(&ShortElementHandler::init$))},
	{"getValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ShortElementHandler_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.beans.decoder.ShortElementHandler",
	"com.sun.beans.decoder.StringElementHandler",
	nullptr,
	nullptr,
	_ShortElementHandler_MethodInfo_
};

$Object* allocate$ShortElementHandler($Class* clazz) {
	return $of($alloc(ShortElementHandler));
}

void ShortElementHandler::init$() {
	$StringElementHandler::init$();
}

$Object* ShortElementHandler::getValue($String* argument) {
	return $of($Short::decode(argument));
}

ShortElementHandler::ShortElementHandler() {
}

$Class* ShortElementHandler::load$($String* name, bool initialize) {
	$loadClass(ShortElementHandler, name, initialize, &_ShortElementHandler_ClassInfo_, allocate$ShortElementHandler);
	return class$;
}

$Class* ShortElementHandler::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com