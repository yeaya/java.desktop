#include <java/awt/dnd/DragSourceDropEvent.h>

#include <java/awt/dnd/DnDConstants.h>
#include <java/awt/dnd/DragSourceContext.h>
#include <java/awt/dnd/DragSourceEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef ACTION_NONE

using $DnDConstants = ::java::awt::dnd::DnDConstants;
using $DragSourceContext = ::java::awt::dnd::DragSourceContext;
using $DragSourceEvent = ::java::awt::dnd::DragSourceEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace dnd {

$FieldInfo _DragSourceDropEvent_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DragSourceDropEvent, serialVersionUID)},
	{"dropSuccess", "Z", nullptr, $PRIVATE, $field(DragSourceDropEvent, dropSuccess)},
	{"dropAction", "I", nullptr, $PRIVATE, $field(DragSourceDropEvent, dropAction)},
	{}
};

$MethodInfo _DragSourceDropEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/dnd/DragSourceContext;IZ)V", nullptr, $PUBLIC, $method(static_cast<void(DragSourceDropEvent::*)($DragSourceContext*,int32_t,bool)>(&DragSourceDropEvent::init$))},
	{"<init>", "(Ljava/awt/dnd/DragSourceContext;IZII)V", nullptr, $PUBLIC, $method(static_cast<void(DragSourceDropEvent::*)($DragSourceContext*,int32_t,bool,int32_t,int32_t)>(&DragSourceDropEvent::init$))},
	{"<init>", "(Ljava/awt/dnd/DragSourceContext;)V", nullptr, $PUBLIC, $method(static_cast<void(DragSourceDropEvent::*)($DragSourceContext*)>(&DragSourceDropEvent::init$))},
	{"getDropAction", "()I", nullptr, $PUBLIC},
	{"getDropSuccess", "()Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DragSourceDropEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.dnd.DragSourceDropEvent",
	"java.awt.dnd.DragSourceEvent",
	nullptr,
	_DragSourceDropEvent_FieldInfo_,
	_DragSourceDropEvent_MethodInfo_
};

$Object* allocate$DragSourceDropEvent($Class* clazz) {
	return $of($alloc(DragSourceDropEvent));
}

void DragSourceDropEvent::init$($DragSourceContext* dsc, int32_t action, bool success) {
	$DragSourceEvent::init$(dsc);
	this->dropAction = $DnDConstants::ACTION_NONE;
	this->dropSuccess = success;
	this->dropAction = action;
}

void DragSourceDropEvent::init$($DragSourceContext* dsc, int32_t action, bool success, int32_t x, int32_t y) {
	$DragSourceEvent::init$(dsc, x, y);
	this->dropAction = $DnDConstants::ACTION_NONE;
	this->dropSuccess = success;
	this->dropAction = action;
}

void DragSourceDropEvent::init$($DragSourceContext* dsc) {
	$DragSourceEvent::init$(dsc);
	this->dropAction = $DnDConstants::ACTION_NONE;
	this->dropSuccess = false;
}

bool DragSourceDropEvent::getDropSuccess() {
	return this->dropSuccess;
}

int32_t DragSourceDropEvent::getDropAction() {
	return this->dropAction;
}

DragSourceDropEvent::DragSourceDropEvent() {
}

$Class* DragSourceDropEvent::load$($String* name, bool initialize) {
	$loadClass(DragSourceDropEvent, name, initialize, &_DragSourceDropEvent_ClassInfo_, allocate$DragSourceDropEvent);
	return class$;
}

$Class* DragSourceDropEvent::class$ = nullptr;

		} // dnd
	} // awt
} // java