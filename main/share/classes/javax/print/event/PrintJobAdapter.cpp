#include <javax/print/event/PrintJobAdapter.h>

#include <javax/print/event/PrintJobEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrintJobEvent = ::javax::print::event::PrintJobEvent;

namespace javax {
	namespace print {
		namespace event {

$MethodInfo _PrintJobAdapter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(PrintJobAdapter::*)()>(&PrintJobAdapter::init$))},
	{"printDataTransferCompleted", "(Ljavax/print/event/PrintJobEvent;)V", nullptr, $PUBLIC},
	{"printJobCanceled", "(Ljavax/print/event/PrintJobEvent;)V", nullptr, $PUBLIC},
	{"printJobCompleted", "(Ljavax/print/event/PrintJobEvent;)V", nullptr, $PUBLIC},
	{"printJobFailed", "(Ljavax/print/event/PrintJobEvent;)V", nullptr, $PUBLIC},
	{"printJobNoMoreEvents", "(Ljavax/print/event/PrintJobEvent;)V", nullptr, $PUBLIC},
	{"printJobRequiresAttention", "(Ljavax/print/event/PrintJobEvent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PrintJobAdapter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.print.event.PrintJobAdapter",
	"java.lang.Object",
	"javax.print.event.PrintJobListener",
	nullptr,
	_PrintJobAdapter_MethodInfo_
};

$Object* allocate$PrintJobAdapter($Class* clazz) {
	return $of($alloc(PrintJobAdapter));
}

void PrintJobAdapter::init$() {
}

void PrintJobAdapter::printDataTransferCompleted($PrintJobEvent* pje) {
}

void PrintJobAdapter::printJobCompleted($PrintJobEvent* pje) {
}

void PrintJobAdapter::printJobFailed($PrintJobEvent* pje) {
}

void PrintJobAdapter::printJobCanceled($PrintJobEvent* pje) {
}

void PrintJobAdapter::printJobNoMoreEvents($PrintJobEvent* pje) {
}

void PrintJobAdapter::printJobRequiresAttention($PrintJobEvent* pje) {
}

PrintJobAdapter::PrintJobAdapter() {
}

$Class* PrintJobAdapter::load$($String* name, bool initialize) {
	$loadClass(PrintJobAdapter, name, initialize, &_PrintJobAdapter_ClassInfo_, allocate$PrintJobAdapter);
	return class$;
}

$Class* PrintJobAdapter::class$ = nullptr;

		} // event
	} // print
} // javax