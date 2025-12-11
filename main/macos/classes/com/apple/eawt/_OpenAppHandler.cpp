#include <com/apple/eawt/_OpenAppHandler.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {

$MethodInfo __OpenAppHandler_MethodInfo_[] = {
	{"handleOpenApp", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo __OpenAppHandler_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.apple.eawt._OpenAppHandler",
	nullptr,
	nullptr,
	nullptr,
	__OpenAppHandler_MethodInfo_
};

$Object* allocate$_OpenAppHandler($Class* clazz) {
	return $of($alloc(_OpenAppHandler));
}

$Class* _OpenAppHandler::load$($String* name, bool initialize) {
	$loadClass(_OpenAppHandler, name, initialize, &__OpenAppHandler_ClassInfo_, allocate$_OpenAppHandler);
	return class$;
}

$Class* _OpenAppHandler::class$ = nullptr;

		} // eawt
	} // apple
} // com