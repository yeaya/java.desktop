#include <javax/imageio/IIOParamController.h>

#include <javax/imageio/IIOParam.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace imageio {

$MethodInfo _IIOParamController_MethodInfo_[] = {
	{"activate", "(Ljavax/imageio/IIOParam;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _IIOParamController_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.imageio.IIOParamController",
	nullptr,
	nullptr,
	nullptr,
	_IIOParamController_MethodInfo_
};

$Object* allocate$IIOParamController($Class* clazz) {
	return $of($alloc(IIOParamController));
}

$Class* IIOParamController::load$($String* name, bool initialize) {
	$loadClass(IIOParamController, name, initialize, &_IIOParamController_ClassInfo_, allocate$IIOParamController);
	return class$;
}

$Class* IIOParamController::class$ = nullptr;

	} // imageio
} // javax