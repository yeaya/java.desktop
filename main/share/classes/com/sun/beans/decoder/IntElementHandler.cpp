#include <com/sun/beans/decoder/IntElementHandler.h>

#include <com/sun/beans/decoder/StringElementHandler.h>
#include <jcpp.h>

using $StringElementHandler = ::com::sun::beans::decoder::StringElementHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

$MethodInfo _IntElementHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(IntElementHandler::*)()>(&IntElementHandler::init$))},
	{"getValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _IntElementHandler_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.beans.decoder.IntElementHandler",
	"com.sun.beans.decoder.StringElementHandler",
	nullptr,
	nullptr,
	_IntElementHandler_MethodInfo_
};

$Object* allocate$IntElementHandler($Class* clazz) {
	return $of($alloc(IntElementHandler));
}

void IntElementHandler::init$() {
	$StringElementHandler::init$();
}

$Object* IntElementHandler::getValue($String* argument) {
	return $of($Integer::decode(argument));
}

IntElementHandler::IntElementHandler() {
}

$Class* IntElementHandler::load$($String* name, bool initialize) {
	$loadClass(IntElementHandler, name, initialize, &_IntElementHandler_ClassInfo_, allocate$IntElementHandler);
	return class$;
}

$Class* IntElementHandler::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com