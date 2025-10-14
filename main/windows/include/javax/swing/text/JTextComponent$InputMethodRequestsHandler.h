#ifndef _javax_swing_text_JTextComponent$InputMethodRequestsHandler_h_
#define _javax_swing_text_JTextComponent$InputMethodRequestsHandler_h_
//$ class javax.swing.text.JTextComponent$InputMethodRequestsHandler
//$ extends java.awt.im.InputMethodRequests
//$ implements javax.swing.event.DocumentListener

#include <java/awt/im/InputMethodRequests.h>
#include <java/lang/Array.h>
#include <javax/swing/event/DocumentListener.h>

namespace java {
	namespace awt {
		class Rectangle;
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
	namespace text {
		class AttributedCharacterIterator;
		class AttributedCharacterIterator$Attribute;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class DocumentEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class JTextComponent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import JTextComponent$InputMethodRequestsHandler : public ::java::awt::im::InputMethodRequests, public ::javax::swing::event::DocumentListener {
	$class(JTextComponent$InputMethodRequestsHandler, $NO_CLASS_INIT, ::java::awt::im::InputMethodRequests, ::javax::swing::event::DocumentListener)
public:
	JTextComponent$InputMethodRequestsHandler();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::text::JTextComponent* this$0);
	virtual ::java::text::AttributedCharacterIterator* cancelLatestCommittedText($Array<::java::text::AttributedCharacterIterator$Attribute>* attributes) override;
	virtual void changedUpdate(::javax::swing::event::DocumentEvent* e) override;
	virtual ::java::text::AttributedCharacterIterator* getCommittedText(int32_t beginIndex, int32_t endIndex, $Array<::java::text::AttributedCharacterIterator$Attribute>* attributes) override;
	virtual int32_t getCommittedTextLength() override;
	virtual int32_t getInsertPositionOffset() override;
	virtual ::java::awt::font::TextHitInfo* getLocationOffset(int32_t x, int32_t y) override;
	virtual ::java::text::AttributedCharacterIterator* getSelectedText($Array<::java::text::AttributedCharacterIterator$Attribute>* attributes) override;
	virtual ::java::awt::Rectangle* getTextLocation(::java::awt::font::TextHitInfo* offset) override;
	virtual void insertUpdate(::javax::swing::event::DocumentEvent* e) override;
	virtual void removeUpdate(::javax::swing::event::DocumentEvent* e) override;
	virtual $String* toString() override;
	::javax::swing::text::JTextComponent* this$0 = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_JTextComponent$InputMethodRequestsHandler_h_