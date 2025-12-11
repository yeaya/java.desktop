#include <javax/print/DocPrintJob.h>

#include <javax/print/Doc.h>
#include <javax/print/PrintService.h>
#include <javax/print/attribute/PrintJobAttributeSet.h>
#include <javax/print/attribute/PrintRequestAttributeSet.h>
#include <javax/print/event/PrintJobAttributeListener.h>
#include <javax/print/event/PrintJobListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace print {

$MethodInfo _DocPrintJob_MethodInfo_[] = {
	{"addPrintJobAttributeListener", "(Ljavax/print/event/PrintJobAttributeListener;Ljavax/print/attribute/PrintJobAttributeSet;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"addPrintJobListener", "(Ljavax/print/event/PrintJobListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getAttributes", "()Ljavax/print/attribute/PrintJobAttributeSet;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPrintService", "()Ljavax/print/PrintService;", nullptr, $PUBLIC | $ABSTRACT},
	{"print", "(Ljavax/print/Doc;Ljavax/print/attribute/PrintRequestAttributeSet;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.print.PrintException"},
	{"removePrintJobAttributeListener", "(Ljavax/print/event/PrintJobAttributeListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"removePrintJobListener", "(Ljavax/print/event/PrintJobListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DocPrintJob_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.print.DocPrintJob",
	nullptr,
	nullptr,
	nullptr,
	_DocPrintJob_MethodInfo_
};

$Object* allocate$DocPrintJob($Class* clazz) {
	return $of($alloc(DocPrintJob));
}

$Class* DocPrintJob::load$($String* name, bool initialize) {
	$loadClass(DocPrintJob, name, initialize, &_DocPrintJob_ClassInfo_, allocate$DocPrintJob);
	return class$;
}

$Class* DocPrintJob::class$ = nullptr;

	} // print
} // javax