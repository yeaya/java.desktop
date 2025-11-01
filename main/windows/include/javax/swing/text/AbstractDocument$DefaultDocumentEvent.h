#ifndef _javax_swing_text_AbstractDocument$DefaultDocumentEvent_h_
#define _javax_swing_text_AbstractDocument$DefaultDocumentEvent_h_
//$ class javax.swing.text.AbstractDocument$DefaultDocumentEvent
//$ extends javax.swing.undo.CompoundEdit
//$ implements javax.swing.event.DocumentEvent

#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/undo/CompoundEdit.h>

namespace java {
	namespace util {
		class Hashtable;
	}
}
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
			class Document;
			class Element;
		}
	}
}
namespace javax {
	namespace swing {
		namespace undo {
			class UndoableEdit;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import AbstractDocument$DefaultDocumentEvent : public ::javax::swing::undo::CompoundEdit, public ::javax::swing::event::DocumentEvent {
	$class(AbstractDocument$DefaultDocumentEvent, $NO_CLASS_INIT, ::javax::swing::undo::CompoundEdit, ::javax::swing::event::DocumentEvent)
public:
	AbstractDocument$DefaultDocumentEvent();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::text::AbstractDocument* this$0, int32_t offs, int32_t len, ::javax::swing::event::DocumentEvent$EventType* type);
	virtual bool addEdit(::javax::swing::undo::UndoableEdit* anEdit) override;
	virtual ::javax::swing::event::DocumentEvent$ElementChange* getChange(::javax::swing::text::Element* elem) override;
	virtual ::javax::swing::text::Document* getDocument() override;
	virtual int32_t getLength() override;
	virtual int32_t getOffset() override;
	virtual $String* getPresentationName() override;
	virtual $String* getRedoPresentationName() override;
	virtual ::javax::swing::event::DocumentEvent$EventType* getType() override;
	virtual $String* getUndoPresentationName() override;
	virtual bool isSignificant() override;
	virtual void redo() override;
	virtual $String* toString() override;
	virtual void undo() override;
	::javax::swing::text::AbstractDocument* this$0 = nullptr;
	int32_t offset = 0;
	int32_t length = 0;
	::java::util::Hashtable* changeLookup = nullptr;
	::javax::swing::event::DocumentEvent$EventType* type = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_AbstractDocument$DefaultDocumentEvent_h_