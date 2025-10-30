#include <com/sun/beans/decoder/TrueElementHandler.h>

#include <com/sun/beans/decoder/NullElementHandler.h>
#include <jcpp.h>

#undef TRUE

using $NullElementHandler = ::com::sun::beans::decoder::NullElementHandler;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

$MethodInfo _TrueElementHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TrueElementHandler::*)()>(&TrueElementHandler::init$))},
	{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TrueElementHandler_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.beans.decoder.TrueElementHandler",
	"com.sun.beans.decoder.NullElementHandler",
	nullptr,
	nullptr,
	_TrueElementHandler_MethodInfo_
};

$Object* allocate$TrueElementHandler($Class* clazz) {
	return $of($alloc(TrueElementHandler));
}

void TrueElementHandler::init$() {
	$NullElementHandler::init$();
}

$Object* TrueElementHandler::getValue() {
	$init($Boolean);
	return $of($Boolean::TRUE);
}

TrueElementHandler::TrueElementHandler() {
}

$Class* TrueElementHandler::load$($String* name, bool initialize) {
	$loadClass(TrueElementHandler, name, initialize, &_TrueElementHandler_ClassInfo_, allocate$TrueElementHandler);
	return class$;
}

$Class* TrueElementHandler::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com