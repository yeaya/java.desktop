#include <com/sun/beans/decoder/ByteElementHandler.h>

#include <com/sun/beans/decoder/StringElementHandler.h>
#include <jcpp.h>

using $StringElementHandler = ::com::sun::beans::decoder::StringElementHandler;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

$MethodInfo _ByteElementHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ByteElementHandler::*)()>(&ByteElementHandler::init$))},
	{"getValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ByteElementHandler_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.beans.decoder.ByteElementHandler",
	"com.sun.beans.decoder.StringElementHandler",
	nullptr,
	nullptr,
	_ByteElementHandler_MethodInfo_
};

$Object* allocate$ByteElementHandler($Class* clazz) {
	return $of($alloc(ByteElementHandler));
}

void ByteElementHandler::init$() {
	$StringElementHandler::init$();
}

$Object* ByteElementHandler::getValue($String* argument) {
	return $of($Byte::decode(argument));
}

ByteElementHandler::ByteElementHandler() {
}

$Class* ByteElementHandler::load$($String* name, bool initialize) {
	$loadClass(ByteElementHandler, name, initialize, &_ByteElementHandler_ClassInfo_, allocate$ByteElementHandler);
	return class$;
}

$Class* ByteElementHandler::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com