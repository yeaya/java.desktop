#ifndef _javax_swing_text_AbstractDocument$UndoRedoDocumentEvent_h_
#define _javax_swing_text_AbstractDocument$UndoRedoDocumentEvent_h_
//$ class javax.swing.text.AbstractDocument$UndoRedoDocumentEvent
//$ extends javax.swing.event.DocumentEvent

#include <javax/swing/event/DocumentEvent.h>

namespace javax {
	namespace swing {
		namespace event {
			class DocumentEvent$ElementChange;
			class DocumentEvent$EventType;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AbstractDocument;
			class AbstractDocument$DefaultDocumentEvent;
			class Document;
			class Element;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export AbstractDocument$UndoRedoDocumentEvent : public ::javax::swing::event::DocumentEvent {
	$class(AbstractDocument$UndoRedoDocumentEvent, $NO_CLASS_INIT, ::javax::swing::event::DocumentEvent)
public:
	AbstractDocument$UndoRedoDocumentEvent();
	void init$(::javax::swing::text::AbstractDocument* this$0, ::javax::swing::text::AbstractDocument$DefaultDocumentEvent* src, bool isUndo);
	virtual ::javax::swing::event::DocumentEvent$ElementChange* getChange(::javax::swing::text::Element* elem) override;
	virtual ::javax::swing::text::Document* getDocument() override;
	virtual int32_t getLength() override;
	virtual int32_t getOffset() override;
	virtual ::javax::swing::text::AbstractDocument$DefaultDocumentEvent* getSource();
	virtual ::javax::swing::event::DocumentEvent$EventType* getType() override;
	::javax::swing::text::AbstractDocument* this$0 = nullptr;
	::javax::swing::text::AbstractDocument$DefaultDocumentEvent* src = nullptr;
	::javax::swing::event::DocumentEvent$EventType* type = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_AbstractDocument$UndoRedoDocumentEvent_h_