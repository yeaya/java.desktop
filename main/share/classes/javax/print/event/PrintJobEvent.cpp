#include <javax/print/event/PrintJobEvent.h>

#include <java/util/EventObject.h>
#include <javax/print/DocPrintJob.h>
#include <javax/print/event/PrintEvent.h>
#include <jcpp.h>

#undef DATA_TRANSFER_COMPLETE
#undef JOB_CANCELED
#undef JOB_COMPLETE
#undef JOB_FAILED
#undef NO_MORE_EVENTS
#undef REQUIRES_ATTENTION

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DocPrintJob = ::javax::print::DocPrintJob;
using $PrintEvent = ::javax::print::event::PrintEvent;

namespace javax {
	namespace print {
		namespace event {

$FieldInfo _PrintJobEvent_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrintJobEvent, serialVersionUID)},
	{"reason", "I", nullptr, $PRIVATE, $field(PrintJobEvent, reason)},
	{"JOB_CANCELED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PrintJobEvent, JOB_CANCELED)},
	{"JOB_COMPLETE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PrintJobEvent, JOB_COMPLETE)},
	{"JOB_FAILED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PrintJobEvent, JOB_FAILED)},
	{"REQUIRES_ATTENTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PrintJobEvent, REQUIRES_ATTENTION)},
	{"NO_MORE_EVENTS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PrintJobEvent, NO_MORE_EVENTS)},
	{"DATA_TRANSFER_COMPLETE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PrintJobEvent, DATA_TRANSFER_COMPLETE)},
	{}
};

$MethodInfo _PrintJobEvent_MethodInfo_[] = {
	{"<init>", "(Ljavax/print/DocPrintJob;I)V", nullptr, $PUBLIC, $method(static_cast<void(PrintJobEvent::*)($DocPrintJob*,int32_t)>(&PrintJobEvent::init$))},
	{"getPrintEventType", "()I", nullptr, $PUBLIC},
	{"getPrintJob", "()Ljavax/print/DocPrintJob;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PrintJobEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.print.event.PrintJobEvent",
	"javax.print.event.PrintEvent",
	nullptr,
	_PrintJobEvent_FieldInfo_,
	_PrintJobEvent_MethodInfo_
};

$Object* allocate$PrintJobEvent($Class* clazz) {
	return $of($alloc(PrintJobEvent));
}

void PrintJobEvent::init$($DocPrintJob* source, int32_t reason) {
	$PrintEvent::init$(source);
	this->reason = reason;
}

int32_t PrintJobEvent::getPrintEventType() {
	return this->reason;
}

$DocPrintJob* PrintJobEvent::getPrintJob() {
	return $cast($DocPrintJob, getSource());
}

PrintJobEvent::PrintJobEvent() {
}

$Class* PrintJobEvent::load$($String* name, bool initialize) {
	$loadClass(PrintJobEvent, name, initialize, &_PrintJobEvent_ClassInfo_, allocate$PrintJobEvent);
	return class$;
}

$Class* PrintJobEvent::class$ = nullptr;

		} // event
	} // print
} // javax