#include <java/awt/event/InputMethodEvent.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/EventQueue.h>
#include <java/awt/font/TextHitInfo.h>
#include <java/io/ObjectInputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/AttributedCharacterIterator.h>
#include <java/text/CharacterIterator.h>
#include <sun/awt/AWTAccessor$EventQueueAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

#undef CARET_POSITION_CHANGED
#undef DONE
#undef INPUT_METHOD_FIRST
#undef INPUT_METHOD_LAST
#undef INPUT_METHOD_TEXT_CHANGED

using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $EventQueue = ::java::awt::EventQueue;
using $TextHitInfo = ::java::awt::font::TextHitInfo;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;
using $CharacterIterator = ::java::text::CharacterIterator;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$EventQueueAccessor = ::sun::awt::AWTAccessor$EventQueueAccessor;
using $AppContext = ::sun::awt::AppContext;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace java {
	namespace awt {
		namespace event {

$FieldInfo _InputMethodEvent_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InputMethodEvent, serialVersionUID)},
	{"INPUT_METHOD_FIRST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(InputMethodEvent, INPUT_METHOD_FIRST)},
	{"INPUT_METHOD_TEXT_CHANGED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(InputMethodEvent, INPUT_METHOD_TEXT_CHANGED)},
	{"CARET_POSITION_CHANGED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(InputMethodEvent, CARET_POSITION_CHANGED)},
	{"INPUT_METHOD_LAST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(InputMethodEvent, INPUT_METHOD_LAST)},
	{"when", "J", nullptr, 0, $field(InputMethodEvent, when)},
	{"text", "Ljava/text/AttributedCharacterIterator;", nullptr, $PRIVATE | $TRANSIENT, $field(InputMethodEvent, text)},
	{"committedCharacterCount", "I", nullptr, $PRIVATE | $TRANSIENT, $field(InputMethodEvent, committedCharacterCount)},
	{"caret", "Ljava/awt/font/TextHitInfo;", nullptr, $PRIVATE | $TRANSIENT, $field(InputMethodEvent, caret)},
	{"visiblePosition", "Ljava/awt/font/TextHitInfo;", nullptr, $PRIVATE | $TRANSIENT, $field(InputMethodEvent, visiblePosition)},
	{}
};

$MethodInfo _InputMethodEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Component;IJLjava/text/AttributedCharacterIterator;ILjava/awt/font/TextHitInfo;Ljava/awt/font/TextHitInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(InputMethodEvent::*)($Component*,int32_t,int64_t,$AttributedCharacterIterator*,int32_t,$TextHitInfo*,$TextHitInfo*)>(&InputMethodEvent::init$))},
	{"<init>", "(Ljava/awt/Component;ILjava/text/AttributedCharacterIterator;ILjava/awt/font/TextHitInfo;Ljava/awt/font/TextHitInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(InputMethodEvent::*)($Component*,int32_t,$AttributedCharacterIterator*,int32_t,$TextHitInfo*,$TextHitInfo*)>(&InputMethodEvent::init$))},
	{"<init>", "(Ljava/awt/Component;ILjava/awt/font/TextHitInfo;Ljava/awt/font/TextHitInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(InputMethodEvent::*)($Component*,int32_t,$TextHitInfo*,$TextHitInfo*)>(&InputMethodEvent::init$))},
	{"consume", "()V", nullptr, $PUBLIC},
	{"getCaret", "()Ljava/awt/font/TextHitInfo;", nullptr, $PUBLIC},
	{"getCommittedCharacterCount", "()I", nullptr, $PUBLIC},
	{"getMostRecentEventTimeForSource", "(Ljava/lang/Object;)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(Object$*)>(&InputMethodEvent::getMostRecentEventTimeForSource))},
	{"getText", "()Ljava/text/AttributedCharacterIterator;", nullptr, $PUBLIC},
	{"getVisiblePosition", "()Ljava/awt/font/TextHitInfo;", nullptr, $PUBLIC},
	{"getWhen", "()J", nullptr, $PUBLIC},
	{"isConsumed", "()Z", nullptr, $PUBLIC},
	{"paramString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(InputMethodEvent::*)($ObjectInputStream*)>(&InputMethodEvent::readObject)), "java.lang.ClassNotFoundException,java.io.IOException"},
	{}
};

$ClassInfo _InputMethodEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.event.InputMethodEvent",
	"java.awt.AWTEvent",
	nullptr,
	_InputMethodEvent_FieldInfo_,
	_InputMethodEvent_MethodInfo_
};

$Object* allocate$InputMethodEvent($Class* clazz) {
	return $of($alloc(InputMethodEvent));
}

void InputMethodEvent::init$($Component* source, int32_t id, int64_t when, $AttributedCharacterIterator* text, int32_t committedCharacterCount, $TextHitInfo* caret, $TextHitInfo* visiblePosition) {
	$AWTEvent::init$(source, id);
	if (id < InputMethodEvent::INPUT_METHOD_FIRST || id > InputMethodEvent::INPUT_METHOD_LAST) {
		$throwNew($IllegalArgumentException, "id outside of valid range"_s);
	}
	if (id == InputMethodEvent::CARET_POSITION_CHANGED && text != nullptr) {
		$throwNew($IllegalArgumentException, "text must be null for CARET_POSITION_CHANGED"_s);
	}
	this->when = when;
	$set(this, text, text);
	int32_t textLength = 0;
	if (text != nullptr) {
		int32_t var$0 = text->getEndIndex();
		textLength = var$0 - text->getBeginIndex();
	}
	if (committedCharacterCount < 0 || committedCharacterCount > textLength) {
		$throwNew($IllegalArgumentException, "committedCharacterCount outside of valid range"_s);
	}
	this->committedCharacterCount = committedCharacterCount;
	$set(this, caret, caret);
	$set(this, visiblePosition, visiblePosition);
}

void InputMethodEvent::init$($Component* source, int32_t id, $AttributedCharacterIterator* text, int32_t committedCharacterCount, $TextHitInfo* caret, $TextHitInfo* visiblePosition) {
	InputMethodEvent::init$(source, id, getMostRecentEventTimeForSource(source), text, committedCharacterCount, caret, visiblePosition);
}

void InputMethodEvent::init$($Component* source, int32_t id, $TextHitInfo* caret, $TextHitInfo* visiblePosition) {
	InputMethodEvent::init$(source, id, getMostRecentEventTimeForSource(source), nullptr, 0, caret, visiblePosition);
}

$AttributedCharacterIterator* InputMethodEvent::getText() {
	return this->text;
}

int32_t InputMethodEvent::getCommittedCharacterCount() {
	return this->committedCharacterCount;
}

$TextHitInfo* InputMethodEvent::getCaret() {
	return this->caret;
}

$TextHitInfo* InputMethodEvent::getVisiblePosition() {
	return this->visiblePosition;
}

void InputMethodEvent::consume() {
	this->consumed = true;
}

bool InputMethodEvent::isConsumed() {
	return this->consumed;
}

int64_t InputMethodEvent::getWhen() {
	return this->when;
}

$String* InputMethodEvent::paramString() {
	$var($String, typeStr, nullptr);
	switch (this->id) {
	case InputMethodEvent::INPUT_METHOD_TEXT_CHANGED:
		{
			$assign(typeStr, "INPUT_METHOD_TEXT_CHANGED"_s);
			break;
		}
	case InputMethodEvent::CARET_POSITION_CHANGED:
		{
			$assign(typeStr, "CARET_POSITION_CHANGED"_s);
			break;
		}
	default:
		{
			$assign(typeStr, "unknown type"_s);
		}
	}
	$var($String, textString, nullptr);
	if (this->text == nullptr) {
		$assign(textString, "no text"_s);
	} else {
		$var($StringBuilder, textBuffer, $new($StringBuilder, "\""_s));
		int32_t committedCharacterCount = this->committedCharacterCount;
		char16_t c = $nc(this->text)->first();
		while (committedCharacterCount-- > 0) {
			textBuffer->append(c);
			c = $nc(this->text)->next();
		}
		textBuffer->append("\" + \""_s);
		while (c != $CharacterIterator::DONE) {
			textBuffer->append(c);
			c = $nc(this->text)->next();
		}
		textBuffer->append("\""_s);
		$assign(textString, textBuffer->toString());
	}
	$var($String, countString, $str({$$str(this->committedCharacterCount), " characters committed"_s}));
	$var($String, caretString, nullptr);
	if (this->caret == nullptr) {
		$assign(caretString, "no caret"_s);
	} else {
		$assign(caretString, $str({"caret: "_s, $($nc(this->caret)->toString())}));
	}
	$var($String, visiblePositionString, nullptr);
	if (this->visiblePosition == nullptr) {
		$assign(visiblePositionString, "no visible position"_s);
	} else {
		$assign(visiblePositionString, $str({"visible position: "_s, $($nc(this->visiblePosition)->toString())}));
	}
	return $str({typeStr, ", "_s, textString, ", "_s, countString, ", "_s, caretString, ", "_s, visiblePositionString});
}

void InputMethodEvent::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	if (this->when == 0) {
		this->when = $EventQueue::getMostRecentEventTime();
	}
}

int64_t InputMethodEvent::getMostRecentEventTimeForSource(Object$* source) {
	$init(InputMethodEvent);
	if (source == nullptr) {
		$throwNew($IllegalArgumentException, "null source"_s);
	}
	$var($AppContext, appContext, $SunToolkit::targetToAppContext(source));
	$var($EventQueue, eventQueue, $SunToolkit::getSystemEventQueueImplPP(appContext));
	return $nc($($AWTAccessor::getEventQueueAccessor()))->getMostRecentEventTime(eventQueue);
}

InputMethodEvent::InputMethodEvent() {
}

$Class* InputMethodEvent::load$($String* name, bool initialize) {
	$loadClass(InputMethodEvent, name, initialize, &_InputMethodEvent_ClassInfo_, allocate$InputMethodEvent);
	return class$;
}

$Class* InputMethodEvent::class$ = nullptr;

		} // event
	} // awt
} // java