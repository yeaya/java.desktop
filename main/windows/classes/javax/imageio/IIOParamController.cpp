#include <javax/imageio/IIOParamController.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/IIOParam.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IIOParam = ::javax::imageio::IIOParam;

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