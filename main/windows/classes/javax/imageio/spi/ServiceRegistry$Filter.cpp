#include <javax/imageio/spi/ServiceRegistry$Filter.h>

#include <javax/imageio/spi/ServiceRegistry.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ServiceRegistry = ::javax::imageio::spi::ServiceRegistry;

namespace javax {
	namespace imageio {
		namespace spi {

$MethodInfo _ServiceRegistry$Filter_MethodInfo_[] = {
	{"filter", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _ServiceRegistry$Filter_InnerClassesInfo_[] = {
	{"javax.imageio.spi.ServiceRegistry$Filter", "javax.imageio.spi.ServiceRegistry", "Filter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ServiceRegistry$Filter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.imageio.spi.ServiceRegistry$Filter",
	nullptr,
	nullptr,
	nullptr,
	_ServiceRegistry$Filter_MethodInfo_,
	nullptr,
	nullptr,
	_ServiceRegistry$Filter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.spi.ServiceRegistry"
};

$Object* allocate$ServiceRegistry$Filter($Class* clazz) {
	return $of($alloc(ServiceRegistry$Filter));
}

$Class* ServiceRegistry$Filter::load$($String* name, bool initialize) {
	$loadClass(ServiceRegistry$Filter, name, initialize, &_ServiceRegistry$Filter_ClassInfo_, allocate$ServiceRegistry$Filter);
	return class$;
}

$Class* ServiceRegistry$Filter::class$ = nullptr;

		} // spi
	} // imageio
} // javax