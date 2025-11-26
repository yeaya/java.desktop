#include <com/sun/beans/decoder/FalseElementHandler.h>

#include <com/sun/beans/decoder/NullElementHandler.h>
#include <jcpp.h>

#undef FALSE

using $NullElementHandler = ::com::sun::beans::decoder::NullElementHandler;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

$MethodInfo _FalseElementHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FalseElementHandler::*)()>(&FalseElementHandler::init$))},
	{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _FalseElementHandler_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.beans.decoder.FalseElementHandler",
	"com.sun.beans.decoder.NullElementHandler",
	nullptr,
	nullptr,
	_FalseElementHandler_MethodInfo_
};

$Object* allocate$FalseElementHandler($Class* clazz) {
	return $of($alloc(FalseElementHandler));
}

void FalseElementHandler::init$() {
	$NullElementHandler::init$();
}

$Object* FalseElementHandler::getValue() {
	$init($Boolean);
	return $of($Boolean::FALSE);
}

FalseElementHandler::FalseElementHandler() {
}

$Class* FalseElementHandler::load$($String* name, bool initialize) {
	$loadClass(FalseElementHandler, name, initialize, &_FalseElementHandler_ClassInfo_, allocate$FalseElementHandler);
	return class$;
}

$Class* FalseElementHandler::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com