#include <java/awt/event/TextEvent.h>

#include <java/awt/AWTEvent.h>
#include <jcpp.h>

#undef TEXT_FIRST
#undef TEXT_LAST
#undef TEXT_VALUE_CHANGED

using $AWTEvent = ::java::awt::AWTEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

$FieldInfo _TextEvent_FieldInfo_[] = {
	{"TEXT_FIRST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TextEvent, TEXT_FIRST)},
	{"TEXT_LAST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TextEvent, TEXT_LAST)},
	{"TEXT_VALUE_CHANGED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TextEvent, TEXT_VALUE_CHANGED)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TextEvent, serialVersionUID)},
	{}
};

$MethodInfo _TextEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;I)V", nullptr, $PUBLIC, $method(static_cast<void(TextEvent::*)(Object$*,int32_t)>(&TextEvent::init$))},
	{"paramString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TextEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.event.TextEvent",
	"java.awt.AWTEvent",
	nullptr,
	_TextEvent_FieldInfo_,
	_TextEvent_MethodInfo_
};

$Object* allocate$TextEvent($Class* clazz) {
	return $of($alloc(TextEvent));
}

void TextEvent::init$(Object$* source, int32_t id) {
	$AWTEvent::init$(source, id);
}

$String* TextEvent::paramString() {
	$var($String, typeStr, nullptr);
	switch (this->id) {
	case TextEvent::TEXT_VALUE_CHANGED:
		{
			$assign(typeStr, "TEXT_VALUE_CHANGED"_s);
			break;
		}
	default:
		{
			$assign(typeStr, "unknown type"_s);
		}
	}
	return typeStr;
}

TextEvent::TextEvent() {
}

$Class* TextEvent::load$($String* name, bool initialize) {
	$loadClass(TextEvent, name, initialize, &_TextEvent_ClassInfo_, allocate$TextEvent);
	return class$;
}

$Class* TextEvent::class$ = nullptr;

		} // event
	} // awt
} // java