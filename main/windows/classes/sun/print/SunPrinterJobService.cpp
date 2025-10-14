#include <sun/print/SunPrinterJobService.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace print {

$MethodInfo _SunPrinterJobService_MethodInfo_[] = {
	{"usesClass", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SunPrinterJobService_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.print.SunPrinterJobService",
	nullptr,
	nullptr,
	nullptr,
	_SunPrinterJobService_MethodInfo_
};

$Object* allocate$SunPrinterJobService($Class* clazz) {
	return $of($alloc(SunPrinterJobService));
}

$Class* SunPrinterJobService::load$($String* name, bool initialize) {
	$loadClass(SunPrinterJobService, name, initialize, &_SunPrinterJobService_ClassInfo_, allocate$SunPrinterJobService);
	return class$;
}

$Class* SunPrinterJobService::class$ = nullptr;

	} // print
} // sun