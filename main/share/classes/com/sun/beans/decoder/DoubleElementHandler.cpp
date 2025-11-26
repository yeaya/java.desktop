#include <com/sun/beans/decoder/DoubleElementHandler.h>

#include <com/sun/beans/decoder/StringElementHandler.h>
#include <jcpp.h>

using $StringElementHandler = ::com::sun::beans::decoder::StringElementHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

$MethodInfo _DoubleElementHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DoubleElementHandler::*)()>(&DoubleElementHandler::init$))},
	{"getValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DoubleElementHandler_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.beans.decoder.DoubleElementHandler",
	"com.sun.beans.decoder.StringElementHandler",
	nullptr,
	nullptr,
	_DoubleElementHandler_MethodInfo_
};

$Object* allocate$DoubleElementHandler($Class* clazz) {
	return $of($alloc(DoubleElementHandler));
}

void DoubleElementHandler::init$() {
	$StringElementHandler::init$();
}

$Object* DoubleElementHandler::getValue($String* argument) {
	return $of($Double::valueOf(argument));
}

DoubleElementHandler::DoubleElementHandler() {
}

$Class* DoubleElementHandler::load$($String* name, bool initialize) {
	$loadClass(DoubleElementHandler, name, initialize, &_DoubleElementHandler_ClassInfo_, allocate$DoubleElementHandler);
	return class$;
}

$Class* DoubleElementHandler::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com