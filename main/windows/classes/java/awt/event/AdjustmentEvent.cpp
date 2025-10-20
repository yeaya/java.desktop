#include <java/awt/event/AdjustmentEvent.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Adjustable.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef ADJUSTMENT_FIRST
#undef ADJUSTMENT_LAST
#undef ADJUSTMENT_VALUE_CHANGED
#undef BLOCK_DECREMENT
#undef BLOCK_INCREMENT
#undef TRACK
#undef UNIT_DECREMENT
#undef UNIT_INCREMENT

using $AWTEvent = ::java::awt::AWTEvent;
using $Adjustable = ::java::awt::Adjustable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

$FieldInfo _AdjustmentEvent_FieldInfo_[] = {
	{"ADJUSTMENT_FIRST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AdjustmentEvent, ADJUSTMENT_FIRST)},
	{"ADJUSTMENT_LAST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AdjustmentEvent, ADJUSTMENT_LAST)},
	{"ADJUSTMENT_VALUE_CHANGED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AdjustmentEvent, ADJUSTMENT_VALUE_CHANGED)},
	{"UNIT_INCREMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AdjustmentEvent, UNIT_INCREMENT)},
	{"UNIT_DECREMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AdjustmentEvent, UNIT_DECREMENT)},
	{"BLOCK_DECREMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AdjustmentEvent, BLOCK_DECREMENT)},
	{"BLOCK_INCREMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AdjustmentEvent, BLOCK_INCREMENT)},
	{"TRACK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AdjustmentEvent, TRACK)},
	{"adjustable", "Ljava/awt/Adjustable;", nullptr, 0, $field(AdjustmentEvent, adjustable)},
	{"value", "I", nullptr, 0, $field(AdjustmentEvent, value)},
	{"adjustmentType", "I", nullptr, 0, $field(AdjustmentEvent, adjustmentType)},
	{"isAdjusting", "Z", nullptr, 0, $field(AdjustmentEvent, isAdjusting)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AdjustmentEvent, serialVersionUID)},
	{}
};

$MethodInfo _AdjustmentEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Adjustable;III)V", nullptr, $PUBLIC, $method(static_cast<void(AdjustmentEvent::*)($Adjustable*,int32_t,int32_t,int32_t)>(&AdjustmentEvent::init$))},
	{"<init>", "(Ljava/awt/Adjustable;IIIZ)V", nullptr, $PUBLIC, $method(static_cast<void(AdjustmentEvent::*)($Adjustable*,int32_t,int32_t,int32_t,bool)>(&AdjustmentEvent::init$))},
	{"getAdjustable", "()Ljava/awt/Adjustable;", nullptr, $PUBLIC},
	{"getAdjustmentType", "()I", nullptr, $PUBLIC},
	{"getValue", "()I", nullptr, $PUBLIC},
	{"getValueIsAdjusting", "()Z", nullptr, $PUBLIC},
	{"paramString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AdjustmentEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.event.AdjustmentEvent",
	"java.awt.AWTEvent",
	nullptr,
	_AdjustmentEvent_FieldInfo_,
	_AdjustmentEvent_MethodInfo_
};

$Object* allocate$AdjustmentEvent($Class* clazz) {
	return $of($alloc(AdjustmentEvent));
}

void AdjustmentEvent::init$($Adjustable* source, int32_t id, int32_t type, int32_t value) {
	AdjustmentEvent::init$(source, id, type, value, false);
}

void AdjustmentEvent::init$($Adjustable* source, int32_t id, int32_t type, int32_t value, bool isAdjusting) {
	$AWTEvent::init$(source, id);
	$set(this, adjustable, source);
	this->adjustmentType = type;
	this->value = value;
	this->isAdjusting = isAdjusting;
}

$Adjustable* AdjustmentEvent::getAdjustable() {
	return this->adjustable;
}

int32_t AdjustmentEvent::getValue() {
	return this->value;
}

int32_t AdjustmentEvent::getAdjustmentType() {
	return this->adjustmentType;
}

bool AdjustmentEvent::getValueIsAdjusting() {
	return this->isAdjusting;
}

$String* AdjustmentEvent::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, typeStr, nullptr);
	switch (this->id) {
	case AdjustmentEvent::ADJUSTMENT_VALUE_CHANGED:
		{
			$assign(typeStr, "ADJUSTMENT_VALUE_CHANGED"_s);
			break;
		}
	default:
		{
			$assign(typeStr, "unknown type"_s);
		}
	}
	$var($String, adjTypeStr, nullptr);
	switch (this->adjustmentType) {
	case AdjustmentEvent::UNIT_INCREMENT:
		{
			$assign(adjTypeStr, "UNIT_INCREMENT"_s);
			break;
		}
	case AdjustmentEvent::UNIT_DECREMENT:
		{
			$assign(adjTypeStr, "UNIT_DECREMENT"_s);
			break;
		}
	case AdjustmentEvent::BLOCK_INCREMENT:
		{
			$assign(adjTypeStr, "BLOCK_INCREMENT"_s);
			break;
		}
	case AdjustmentEvent::BLOCK_DECREMENT:
		{
			$assign(adjTypeStr, "BLOCK_DECREMENT"_s);
			break;
		}
	case AdjustmentEvent::TRACK:
		{
			$assign(adjTypeStr, "TRACK"_s);
			break;
		}
	default:
		{
			$assign(adjTypeStr, "unknown type"_s);
		}
	}
	return $str({typeStr, ",adjType="_s, adjTypeStr, ",value="_s, $$str(this->value), ",isAdjusting="_s, $$str(this->isAdjusting)});
}

AdjustmentEvent::AdjustmentEvent() {
}

$Class* AdjustmentEvent::load$($String* name, bool initialize) {
	$loadClass(AdjustmentEvent, name, initialize, &_AdjustmentEvent_ClassInfo_, allocate$AdjustmentEvent);
	return class$;
}

$Class* AdjustmentEvent::class$ = nullptr;

		} // event
	} // awt
} // java