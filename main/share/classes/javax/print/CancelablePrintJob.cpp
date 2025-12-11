#include <javax/print/CancelablePrintJob.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace print {

$MethodInfo _CancelablePrintJob_MethodInfo_[] = {
	{"cancel", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.print.PrintException"},
	{}
};

$ClassInfo _CancelablePrintJob_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.print.CancelablePrintJob",
	nullptr,
	"javax.print.DocPrintJob",
	nullptr,
	_CancelablePrintJob_MethodInfo_
};

$Object* allocate$CancelablePrintJob($Class* clazz) {
	return $of($alloc(CancelablePrintJob));
}

$Class* CancelablePrintJob::load$($String* name, bool initialize) {
	$loadClass(CancelablePrintJob, name, initialize, &_CancelablePrintJob_ClassInfo_, allocate$CancelablePrintJob);
	return class$;
}

$Class* CancelablePrintJob::class$ = nullptr;

	} // print
} // javax