#include <javax/print/event/PrintJobAttributeEvent.h>

#include <java/util/EventObject.h>
#include <javax/print/DocPrintJob.h>
#include <javax/print/attribute/AttributeSetUtilities.h>
#include <javax/print/attribute/PrintJobAttributeSet.h>
#include <javax/print/event/PrintEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DocPrintJob = ::javax::print::DocPrintJob;
using $AttributeSetUtilities = ::javax::print::attribute::AttributeSetUtilities;
using $PrintJobAttributeSet = ::javax::print::attribute::PrintJobAttributeSet;
using $PrintEvent = ::javax::print::event::PrintEvent;

namespace javax {
	namespace print {
		namespace event {

$FieldInfo _PrintJobAttributeEvent_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrintJobAttributeEvent, serialVersionUID)},
	{"attributes", "Ljavax/print/attribute/PrintJobAttributeSet;", nullptr, $PRIVATE, $field(PrintJobAttributeEvent, attributes)},
	{}
};

$MethodInfo _PrintJobAttributeEvent_MethodInfo_[] = {
	{"<init>", "(Ljavax/print/DocPrintJob;Ljavax/print/attribute/PrintJobAttributeSet;)V", nullptr, $PUBLIC, $method(static_cast<void(PrintJobAttributeEvent::*)($DocPrintJob*,$PrintJobAttributeSet*)>(&PrintJobAttributeEvent::init$))},
	{"getAttributes", "()Ljavax/print/attribute/PrintJobAttributeSet;", nullptr, $PUBLIC},
	{"getPrintJob", "()Ljavax/print/DocPrintJob;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PrintJobAttributeEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.print.event.PrintJobAttributeEvent",
	"javax.print.event.PrintEvent",
	nullptr,
	_PrintJobAttributeEvent_FieldInfo_,
	_PrintJobAttributeEvent_MethodInfo_
};

$Object* allocate$PrintJobAttributeEvent($Class* clazz) {
	return $of($alloc(PrintJobAttributeEvent));
}

void PrintJobAttributeEvent::init$($DocPrintJob* source, $PrintJobAttributeSet* attributes) {
	$PrintEvent::init$(source);
	$set(this, attributes, $AttributeSetUtilities::unmodifiableView(attributes));
}

$DocPrintJob* PrintJobAttributeEvent::getPrintJob() {
	return $cast($DocPrintJob, getSource());
}

$PrintJobAttributeSet* PrintJobAttributeEvent::getAttributes() {
	return this->attributes;
}

PrintJobAttributeEvent::PrintJobAttributeEvent() {
}

$Class* PrintJobAttributeEvent::load$($String* name, bool initialize) {
	$loadClass(PrintJobAttributeEvent, name, initialize, &_PrintJobAttributeEvent_ClassInfo_, allocate$PrintJobAttributeEvent);
	return class$;
}

$Class* PrintJobAttributeEvent::class$ = nullptr;

		} // event
	} // print
} // javax