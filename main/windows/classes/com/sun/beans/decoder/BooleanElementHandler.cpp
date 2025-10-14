#include <com/sun/beans/decoder/BooleanElementHandler.h>

#include <com/sun/beans/decoder/StringElementHandler.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef FALSE
#undef TRUE

using $StringElementHandler = ::com::sun::beans::decoder::StringElementHandler;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

$MethodInfo _BooleanElementHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(BooleanElementHandler::*)()>(&BooleanElementHandler::init$))},
	{"getValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BooleanElementHandler_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.beans.decoder.BooleanElementHandler",
	"com.sun.beans.decoder.StringElementHandler",
	nullptr,
	nullptr,
	_BooleanElementHandler_MethodInfo_
};

$Object* allocate$BooleanElementHandler($Class* clazz) {
	return $of($alloc(BooleanElementHandler));
}

void BooleanElementHandler::init$() {
	$StringElementHandler::init$();
}

$Object* BooleanElementHandler::getValue($String* argument) {
	$init($Boolean);
	if ($nc($($nc($Boolean::TRUE)->toString()))->equalsIgnoreCase(argument)) {
		return $of($Boolean::TRUE);
	}
	if ($nc($($nc($Boolean::FALSE)->toString()))->equalsIgnoreCase(argument)) {
		return $of($Boolean::FALSE);
	}
	$throwNew($IllegalArgumentException, $$str({"Unsupported boolean argument: "_s, argument}));
}

BooleanElementHandler::BooleanElementHandler() {
}

$Class* BooleanElementHandler::load$($String* name, bool initialize) {
	$loadClass(BooleanElementHandler, name, initialize, &_BooleanElementHandler_ClassInfo_, allocate$BooleanElementHandler);
	return class$;
}

$Class* BooleanElementHandler::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com