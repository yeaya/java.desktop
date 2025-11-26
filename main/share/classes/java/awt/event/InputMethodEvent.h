#ifndef _java_awt_event_InputMethodEvent_h_
#define _java_awt_event_InputMethodEvent_h_
//$ class java.awt.event.InputMethodEvent
//$ extends java.awt.AWTEvent

#include <java/awt/AWTEvent.h>

#pragma push_macro("CARET_POSITION_CHANGED")
#undef CARET_POSITION_CHANGED
#pragma push_macro("INPUT_METHOD_FIRST")
#undef INPUT_METHOD_FIRST
#pragma push_macro("INPUT_METHOD_LAST")
#undef INPUT_METHOD_LAST
#pragma push_macro("INPUT_METHOD_TEXT_CHANGED")
#undef INPUT_METHOD_TEXT_CHANGED

namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace awt {
		namespace font {
			class TextHitInfo;
		}
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace text {
		class AttributedCharacterIterator;
	}
}

namespace java {
	namespace awt {
		namespace event {

class $export InputMethodEvent : public ::java::awt::AWTEvent {
	$class(InputMethodEvent, $NO_CLASS_INIT, ::java::awt::AWTEvent)
public:
	InputMethodEvent();
	void init$(::java::awt::Component* source, int32_t id, int64_t when, ::java::text::AttributedCharacterIterator* text, int32_t committedCharacterCount, ::java::awt::font::TextHitInfo* caret, ::java::awt::font::TextHitInfo* visiblePosition);
	void init$(::java::awt::Component* source, int32_t id, ::java::text::AttributedCharacterIterator* text, int32_t committedCharacterCount, ::java::awt::font::TextHitInfo* caret, ::java::awt::font::TextHitInfo* visiblePosition);
	void init$(::java::awt::Component* source, int32_t id, ::java::awt::font::TextHitInfo* caret, ::java::awt::font::TextHitInfo* visiblePosition);
	virtual void consume() override;
	virtual ::java::awt::font::TextHitInfo* getCaret();
	virtual int32_t getCommittedCharacterCount();
	static int64_t getMostRecentEventTimeForSource(Object$* source);
	virtual ::java::text::AttributedCharacterIterator* getText();
	virtual ::java::awt::font::TextHitInfo* getVisiblePosition();
	virtual int64_t getWhen();
	virtual bool isConsumed() override;
	virtual $String* paramString() override;
	void readObject(::java::io::ObjectInputStream* s);
	static const int64_t serialVersionUID = (int64_t)0x419A5B0E0CAA6EA5;
	static const int32_t INPUT_METHOD_FIRST = 1100;
	static const int32_t INPUT_METHOD_TEXT_CHANGED = INPUT_METHOD_FIRST;
	static const int32_t CARET_POSITION_CHANGED = 1101; // INPUT_METHOD_FIRST + 1
	static const int32_t INPUT_METHOD_LAST = 1101; // INPUT_METHOD_FIRST + 1
	int64_t when = 0;
	::java::text::AttributedCharacterIterator* text = nullptr;
	int32_t committedCharacterCount = 0;
	::java::awt::font::TextHitInfo* caret = nullptr;
	::java::awt::font::TextHitInfo* visiblePosition = nullptr;
};

		} // event
	} // awt
} // java

#pragma pop_macro("CARET_POSITION_CHANGED")
#pragma pop_macro("INPUT_METHOD_FIRST")
#pragma pop_macro("INPUT_METHOD_LAST")
#pragma pop_macro("INPUT_METHOD_TEXT_CHANGED")

#endif // _java_awt_event_InputMethodEvent_h_