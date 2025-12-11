#include <javax/imageio/spi/RegisterableService.h>

#include <javax/imageio/spi/ServiceRegistry.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace imageio {
		namespace spi {

$MethodInfo _RegisterableService_MethodInfo_[] = {
	{"onDeregistration", "(Ljavax/imageio/spi/ServiceRegistry;Ljava/lang/Class;)V", "(Ljavax/imageio/spi/ServiceRegistry;Ljava/lang/Class<*>;)V", $PUBLIC | $ABSTRACT},
	{"onRegistration", "(Ljavax/imageio/spi/ServiceRegistry;Ljava/lang/Class;)V", "(Ljavax/imageio/spi/ServiceRegistry;Ljava/lang/Class<*>;)V", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _RegisterableService_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.imageio.spi.RegisterableService",
	nullptr,
	nullptr,
	nullptr,
	_RegisterableService_MethodInfo_
};

$Object* allocate$RegisterableService($Class* clazz) {
	return $of($alloc(RegisterableService));
}

$Class* RegisterableService::load$($String* name, bool initialize) {
	$loadClass(RegisterableService, name, initialize, &_RegisterableService_ClassInfo_, allocate$RegisterableService);
	return class$;
}

$Class* RegisterableService::class$ = nullptr;

		} // spi
	} // imageio
} // javax