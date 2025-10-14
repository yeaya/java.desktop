#ifndef _sun_awt_im_CompositionAreaHandler_h_
#define _sun_awt_im_CompositionAreaHandler_h_
//$ class sun.awt.im.CompositionAreaHandler
//$ extends java.awt.event.InputMethodListener
//$ implements java.awt.im.InputMethodRequests

#include <java/awt/event/InputMethodListener.h>
#include <java/awt/im/InputMethodRequests.h>
#include <java/lang/Array.h>

#pragma push_macro("EMPTY_TEXT")
#undef EMPTY_TEXT
#pragma push_macro("IM_ATTRIBUTES")
#undef IM_ATTRIBUTES

namespace java {
	namespace awt {
		class Component;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class InputMethodEvent;
		}
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
	namespace lang {
		namespace ref {
			class WeakReference;
		}
	}
}
namespace java {
	namespace text {
		class AttributedCharacterIterator;
		class AttributedCharacterIterator$Attribute;
	}
}
namespace sun {
	namespace awt {
		namespace im {
			class CompositionArea;
			class InputMethodContext;
		}
	}
}

namespace sun {
	namespace awt {
		namespace im {

class CompositionAreaHandler : public ::java::awt::event::InputMethodListener, public ::java::awt::im::InputMethodRequests {
	$class(CompositionAreaHandler, 0, ::java::awt::event::InputMethodListener, ::java::awt::im::InputMethodRequests)
public:
	CompositionAreaHandler();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::awt::im::InputMethodContext* context);
	virtual ::java::text::AttributedCharacterIterator* cancelLatestCommittedText($Array<::java::text::AttributedCharacterIterator$Attribute>* attributes) override;
	virtual void caretPositionChanged(::java::awt::event::InputMethodEvent* event) override;
	static void closeCompositionArea();
	void createCompositionArea();
	virtual ::java::awt::im::InputMethodRequests* getClientInputMethodRequests();
	virtual ::java::text::AttributedCharacterIterator* getCommittedText(int32_t beginIndex, int32_t endIndex, $Array<::java::text::AttributedCharacterIterator$Attribute>* attributes) override;
	virtual int32_t getCommittedTextLength() override;
	virtual int32_t getInsertPositionOffset() override;
	virtual ::java::awt::font::TextHitInfo* getLocationOffset(int32_t x, int32_t y) override;
	virtual ::java::text::AttributedCharacterIterator* getSelectedText($Array<::java::text::AttributedCharacterIterator$Attribute>* attributes) override;
	virtual ::java::awt::Rectangle* getTextLocation(::java::awt::font::TextHitInfo* offset) override;
	virtual void grabCompositionArea(bool doUpdate);
	virtual void inputMethodTextChanged(::java::awt::event::InputMethodEvent* event) override;
	virtual bool isCompositionAreaVisible();
	virtual void processInputMethodEvent(::java::awt::event::InputMethodEvent* event);
	virtual void releaseCompositionArea();
	virtual void setClientComponent(::java::awt::Component* clientComponent);
	virtual void setCompositionAreaUndecorated(bool undecorated);
	virtual void setCompositionAreaVisible(bool visible);
	virtual $String* toString() override;
	static ::sun::awt::im::CompositionArea* compositionArea;
	static $Object* compositionAreaLock;
	static ::sun::awt::im::CompositionAreaHandler* compositionAreaOwner;
	::java::text::AttributedCharacterIterator* composedText = nullptr;
	::java::awt::font::TextHitInfo* caret = nullptr;
	::java::lang::ref::WeakReference* clientComponent = nullptr;
	::sun::awt::im::InputMethodContext* inputMethodContext = nullptr;
	static $Array<::java::text::AttributedCharacterIterator$Attribute>* IM_ATTRIBUTES;
	static ::java::text::AttributedCharacterIterator* EMPTY_TEXT;
};

		} // im
	} // awt
} // sun

#pragma pop_macro("EMPTY_TEXT")
#pragma pop_macro("IM_ATTRIBUTES")

#endif // _sun_awt_im_CompositionAreaHandler_h_