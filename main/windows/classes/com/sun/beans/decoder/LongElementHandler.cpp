#include <com/sun/beans/decoder/LongElementHandler.h>

#include <com/sun/beans/decoder/StringElementHandler.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $StringElementHandler = ::com::sun::beans::decoder::StringElementHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

$MethodInfo _LongElementHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(LongElementHandler::*)()>(&LongElementHandler::init$))},
	{"getValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LongElementHandler_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.beans.decoder.LongElementHandler",
	"com.sun.beans.decoder.StringElementHandler",
	nullptr,
	nullptr,
	_LongElementHandler_MethodInfo_
};

$Object* allocate$LongElementHandler($Class* clazz) {
	return $of($alloc(LongElementHandler));
}

void LongElementHandler::init$() {
	$StringElementHandler::init$();
}

$Object* LongElementHandler::getValue($String* argument) {
	return $of($Long::decode(argument));
}

LongElementHandler::LongElementHandler() {
}

$Class* LongElementHandler::load$($String* name, bool initialize) {
	$loadClass(LongElementHandler, name, initialize, &_LongElementHandler_ClassInfo_, allocate$LongElementHandler);
	return class$;
}

$Class* LongElementHandler::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com