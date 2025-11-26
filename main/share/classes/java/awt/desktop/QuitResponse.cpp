#include <java/awt/desktop/QuitResponse.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace desktop {

$MethodInfo _QuitResponse_MethodInfo_[] = {
	{"cancelQuit", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"performQuit", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _QuitResponse_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.desktop.QuitResponse",
	nullptr,
	nullptr,
	nullptr,
	_QuitResponse_MethodInfo_
};

$Object* allocate$QuitResponse($Class* clazz) {
	return $of($alloc(QuitResponse));
}

$Class* QuitResponse::load$($String* name, bool initialize) {
	$loadClass(QuitResponse, name, initialize, &_QuitResponse_ClassInfo_, allocate$QuitResponse);
	return class$;
}

$Class* QuitResponse::class$ = nullptr;

		} // desktop
	} // awt
} // java