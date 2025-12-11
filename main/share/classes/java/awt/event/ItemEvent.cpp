#include <java/awt/event/ItemEvent.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/ItemSelectable.h>
#include <java/util/EventObject.h>
#include <jcpp.h>

#undef DESELECTED
#undef ITEM_FIRST
#undef ITEM_LAST
#undef ITEM_STATE_CHANGED
#undef SELECTED

using $AWTEvent = ::java::awt::AWTEvent;
using $ItemSelectable = ::java::awt::ItemSelectable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

$FieldInfo _ItemEvent_FieldInfo_[] = {
	{"ITEM_FIRST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ItemEvent, ITEM_FIRST)},
	{"ITEM_LAST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ItemEvent, ITEM_LAST)},
	{"ITEM_STATE_CHANGED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ItemEvent, ITEM_STATE_CHANGED)},
	{"SELECTED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ItemEvent, SELECTED)},
	{"DESELECTED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ItemEvent, DESELECTED)},
	{"item", "Ljava/lang/Object;", nullptr, 0, $field(ItemEvent, item)},
	{"stateChange", "I", nullptr, 0, $field(ItemEvent, stateChange)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ItemEvent, serialVersionUID)},
	{}
};

$MethodInfo _ItemEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/ItemSelectable;ILjava/lang/Object;I)V", nullptr, $PUBLIC, $method(static_cast<void(ItemEvent::*)($ItemSelectable*,int32_t,Object$*,int32_t)>(&ItemEvent::init$))},
	{"getItem", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getItemSelectable", "()Ljava/awt/ItemSelectable;", nullptr, $PUBLIC},
	{"getStateChange", "()I", nullptr, $PUBLIC},
	{"paramString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ItemEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.event.ItemEvent",
	"java.awt.AWTEvent",
	nullptr,
	_ItemEvent_FieldInfo_,
	_ItemEvent_MethodInfo_
};

$Object* allocate$ItemEvent($Class* clazz) {
	return $of($alloc(ItemEvent));
}

void ItemEvent::init$($ItemSelectable* source, int32_t id, Object$* item, int32_t stateChange) {
	$AWTEvent::init$(source, id);
	$set(this, item, item);
	this->stateChange = stateChange;
}

$ItemSelectable* ItemEvent::getItemSelectable() {
	return $cast($ItemSelectable, this->source);
}

$Object* ItemEvent::getItem() {
	return $of(this->item);
}

int32_t ItemEvent::getStateChange() {
	return this->stateChange;
}

$String* ItemEvent::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, typeStr, nullptr);
	switch (this->id) {
	case ItemEvent::ITEM_STATE_CHANGED:
		{
			$assign(typeStr, "ITEM_STATE_CHANGED"_s);
			break;
		}
	default:
		{
			$assign(typeStr, "unknown type"_s);
		}
	}
	$var($String, stateStr, nullptr);
	switch (this->stateChange) {
	case ItemEvent::SELECTED:
		{
			$assign(stateStr, "SELECTED"_s);
			break;
		}
	case ItemEvent::DESELECTED:
		{
			$assign(stateStr, "DESELECTED"_s);
			break;
		}
	default:
		{
			$assign(stateStr, "unknown type"_s);
		}
	}
	return $str({typeStr, ",item="_s, this->item, ",stateChange="_s, stateStr});
}

ItemEvent::ItemEvent() {
}

$Class* ItemEvent::load$($String* name, bool initialize) {
	$loadClass(ItemEvent, name, initialize, &_ItemEvent_ClassInfo_, allocate$ItemEvent);
	return class$;
}

$Class* ItemEvent::class$ = nullptr;

		} // event
	} // awt
} // java