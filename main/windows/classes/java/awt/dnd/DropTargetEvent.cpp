#include <java/awt/dnd/DropTargetEvent.h>

#include <java/awt/dnd/DropTarget.h>
#include <java/awt/dnd/DropTargetContext.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <jcpp.h>

using $DropTarget = ::java::awt::dnd::DropTarget;
using $DropTargetContext = ::java::awt::dnd::DropTargetContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;

namespace java {
	namespace awt {
		namespace dnd {

$FieldInfo _DropTargetEvent_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DropTargetEvent, serialVersionUID)},
	{"context", "Ljava/awt/dnd/DropTargetContext;", nullptr, $PROTECTED, $field(DropTargetEvent, context)},
	{}
};

$MethodInfo _DropTargetEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/dnd/DropTargetContext;)V", nullptr, $PUBLIC, $method(static_cast<void(DropTargetEvent::*)($DropTargetContext*)>(&DropTargetEvent::init$))},
	{"getDropTargetContext", "()Ljava/awt/dnd/DropTargetContext;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DropTargetEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.dnd.DropTargetEvent",
	"java.util.EventObject",
	nullptr,
	_DropTargetEvent_FieldInfo_,
	_DropTargetEvent_MethodInfo_
};

$Object* allocate$DropTargetEvent($Class* clazz) {
	return $of($alloc(DropTargetEvent));
}

void DropTargetEvent::init$($DropTargetContext* dtc) {
	$EventObject::init$($($nc(dtc)->getDropTarget()));
	$set(this, context, dtc);
}

$DropTargetContext* DropTargetEvent::getDropTargetContext() {
	return this->context;
}

DropTargetEvent::DropTargetEvent() {
}

$Class* DropTargetEvent::load$($String* name, bool initialize) {
	$loadClass(DropTargetEvent, name, initialize, &_DropTargetEvent_ClassInfo_, allocate$DropTargetEvent);
	return class$;
}

$Class* DropTargetEvent::class$ = nullptr;

		} // dnd
	} // awt
} // java