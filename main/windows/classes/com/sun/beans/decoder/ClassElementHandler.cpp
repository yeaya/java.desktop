#include <com/sun/beans/decoder/ClassElementHandler.h>

#include <com/sun/beans/decoder/DocumentHandler.h>
#include <com/sun/beans/decoder/ElementHandler.h>
#include <com/sun/beans/decoder/StringElementHandler.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $DocumentHandler = ::com::sun::beans::decoder::DocumentHandler;
using $ElementHandler = ::com::sun::beans::decoder::ElementHandler;
using $StringElementHandler = ::com::sun::beans::decoder::StringElementHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

$MethodInfo _ClassElementHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ClassElementHandler::*)()>(&ClassElementHandler::init$))},
	{"getValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ClassElementHandler_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.beans.decoder.ClassElementHandler",
	"com.sun.beans.decoder.StringElementHandler",
	nullptr,
	nullptr,
	_ClassElementHandler_MethodInfo_
};

$Object* allocate$ClassElementHandler($Class* clazz) {
	return $of($alloc(ClassElementHandler));
}

void ClassElementHandler::init$() {
	$StringElementHandler::init$();
}

$Object* ClassElementHandler::getValue($String* argument) {
	return $of($nc($(getOwner()))->findClass(argument));
}

ClassElementHandler::ClassElementHandler() {
}

$Class* ClassElementHandler::load$($String* name, bool initialize) {
	$loadClass(ClassElementHandler, name, initialize, &_ClassElementHandler_ClassInfo_, allocate$ClassElementHandler);
	return class$;
}

$Class* ClassElementHandler::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com