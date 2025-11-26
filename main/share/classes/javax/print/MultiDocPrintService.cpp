#include <javax/print/MultiDocPrintService.h>

#include <javax/print/MultiDocPrintJob.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MultiDocPrintJob = ::javax::print::MultiDocPrintJob;
using $PrintService = ::javax::print::PrintService;

namespace javax {
	namespace print {

$MethodInfo _MultiDocPrintService_MethodInfo_[] = {
	{"createMultiDocPrintJob", "()Ljavax/print/MultiDocPrintJob;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _MultiDocPrintService_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.print.MultiDocPrintService",
	nullptr,
	"javax.print.PrintService",
	nullptr,
	_MultiDocPrintService_MethodInfo_
};

$Object* allocate$MultiDocPrintService($Class* clazz) {
	return $of($alloc(MultiDocPrintService));
}

$Class* MultiDocPrintService::load$($String* name, bool initialize) {
	$loadClass(MultiDocPrintService, name, initialize, &_MultiDocPrintService_ClassInfo_, allocate$MultiDocPrintService);
	return class$;
}

$Class* MultiDocPrintService::class$ = nullptr;

	} // print
} // javax