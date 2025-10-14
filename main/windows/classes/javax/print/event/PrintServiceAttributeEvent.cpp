#include <javax/print/event/PrintServiceAttributeEvent.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <javax/print/PrintService.h>
#include <javax/print/attribute/AttributeSetUtilities.h>
#include <javax/print/attribute/PrintServiceAttributeSet.h>
#include <javax/print/event/PrintEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $PrintService = ::javax::print::PrintService;
using $AttributeSetUtilities = ::javax::print::attribute::AttributeSetUtilities;
using $PrintServiceAttributeSet = ::javax::print::attribute::PrintServiceAttributeSet;
using $PrintEvent = ::javax::print::event::PrintEvent;

namespace javax {
	namespace print {
		namespace event {

$FieldInfo _PrintServiceAttributeEvent_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrintServiceAttributeEvent, serialVersionUID)},
	{"attributes", "Ljavax/print/attribute/PrintServiceAttributeSet;", nullptr, $PRIVATE, $field(PrintServiceAttributeEvent, attributes)},
	{}
};

$MethodInfo _PrintServiceAttributeEvent_MethodInfo_[] = {
	{"<init>", "(Ljavax/print/PrintService;Ljavax/print/attribute/PrintServiceAttributeSet;)V", nullptr, $PUBLIC, $method(static_cast<void(PrintServiceAttributeEvent::*)($PrintService*,$PrintServiceAttributeSet*)>(&PrintServiceAttributeEvent::init$))},
	{"getAttributes", "()Ljavax/print/attribute/PrintServiceAttributeSet;", nullptr, $PUBLIC},
	{"getPrintService", "()Ljavax/print/PrintService;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PrintServiceAttributeEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.print.event.PrintServiceAttributeEvent",
	"javax.print.event.PrintEvent",
	nullptr,
	_PrintServiceAttributeEvent_FieldInfo_,
	_PrintServiceAttributeEvent_MethodInfo_
};

$Object* allocate$PrintServiceAttributeEvent($Class* clazz) {
	return $of($alloc(PrintServiceAttributeEvent));
}

void PrintServiceAttributeEvent::init$($PrintService* source, $PrintServiceAttributeSet* attributes) {
	$PrintEvent::init$(source);
	$set(this, attributes, $AttributeSetUtilities::unmodifiableView(attributes));
}

$PrintService* PrintServiceAttributeEvent::getPrintService() {
	return $cast($PrintService, getSource());
}

$PrintServiceAttributeSet* PrintServiceAttributeEvent::getAttributes() {
	return this->attributes;
}

PrintServiceAttributeEvent::PrintServiceAttributeEvent() {
}

$Class* PrintServiceAttributeEvent::load$($String* name, bool initialize) {
	$loadClass(PrintServiceAttributeEvent, name, initialize, &_PrintServiceAttributeEvent_ClassInfo_, allocate$PrintServiceAttributeEvent);
	return class$;
}

$Class* PrintServiceAttributeEvent::class$ = nullptr;

		} // event
	} // print
} // javax