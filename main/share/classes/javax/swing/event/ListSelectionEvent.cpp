#include <javax/swing/event/ListSelectionEvent.h>

#include <java/util/EventObject.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;

namespace javax {
	namespace swing {
		namespace event {

$FieldInfo _ListSelectionEvent_FieldInfo_[] = {
	{"firstIndex", "I", nullptr, $PRIVATE, $field(ListSelectionEvent, firstIndex)},
	{"lastIndex", "I", nullptr, $PRIVATE, $field(ListSelectionEvent, lastIndex)},
	{"isAdjusting", "Z", nullptr, $PRIVATE, $field(ListSelectionEvent, isAdjusting)},
	{}
};

$MethodInfo _ListSelectionEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;IIZ)V", nullptr, $PUBLIC, $method(static_cast<void(ListSelectionEvent::*)(Object$*,int32_t,int32_t,bool)>(&ListSelectionEvent::init$))},
	{"getFirstIndex", "()I", nullptr, $PUBLIC},
	{"getLastIndex", "()I", nullptr, $PUBLIC},
	{"getValueIsAdjusting", "()Z", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ListSelectionEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.event.ListSelectionEvent",
	"java.util.EventObject",
	nullptr,
	_ListSelectionEvent_FieldInfo_,
	_ListSelectionEvent_MethodInfo_
};

$Object* allocate$ListSelectionEvent($Class* clazz) {
	return $of($alloc(ListSelectionEvent));
}

void ListSelectionEvent::init$(Object$* source, int32_t firstIndex, int32_t lastIndex, bool isAdjusting) {
	$EventObject::init$(source);
	this->firstIndex = firstIndex;
	this->lastIndex = lastIndex;
	this->isAdjusting = isAdjusting;
}

int32_t ListSelectionEvent::getFirstIndex() {
	return this->firstIndex;
}

int32_t ListSelectionEvent::getLastIndex() {
	return this->lastIndex;
}

bool ListSelectionEvent::getValueIsAdjusting() {
	return this->isAdjusting;
}

$String* ListSelectionEvent::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, properties, $str({" source="_s, $(getSource()), " firstIndex= "_s, $$str(this->firstIndex), " lastIndex= "_s, $$str(this->lastIndex), " isAdjusting= "_s, $$str(this->isAdjusting), " "_s}));
	return $str({$($of(this)->getClass()->getName()), "["_s, properties, "]"_s});
}

ListSelectionEvent::ListSelectionEvent() {
}

$Class* ListSelectionEvent::load$($String* name, bool initialize) {
	$loadClass(ListSelectionEvent, name, initialize, &_ListSelectionEvent_ClassInfo_, allocate$ListSelectionEvent);
	return class$;
}

$Class* ListSelectionEvent::class$ = nullptr;

		} // event
	} // swing
} // javax