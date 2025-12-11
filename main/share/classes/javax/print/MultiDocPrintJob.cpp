#include <javax/print/MultiDocPrintJob.h>

#include <javax/print/MultiDoc.h>
#include <javax/print/attribute/PrintRequestAttributeSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace print {

$MethodInfo _MultiDocPrintJob_MethodInfo_[] = {
	{"print", "(Ljavax/print/MultiDoc;Ljavax/print/attribute/PrintRequestAttributeSet;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.print.PrintException"},
	{}
};

$ClassInfo _MultiDocPrintJob_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.print.MultiDocPrintJob",
	nullptr,
	"javax.print.DocPrintJob",
	nullptr,
	_MultiDocPrintJob_MethodInfo_
};

$Object* allocate$MultiDocPrintJob($Class* clazz) {
	return $of($alloc(MultiDocPrintJob));
}

$Class* MultiDocPrintJob::load$($String* name, bool initialize) {
	$loadClass(MultiDocPrintJob, name, initialize, &_MultiDocPrintJob_ClassInfo_, allocate$MultiDocPrintJob);
	return class$;
}

$Class* MultiDocPrintJob::class$ = nullptr;

	} // print
} // javax