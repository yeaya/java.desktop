#ifndef _javax_swing_text_AbstractDocument$ElementEdit_h_
#define _javax_swing_text_AbstractDocument$ElementEdit_h_
//$ class javax.swing.text.AbstractDocument$ElementEdit
//$ extends javax.swing.undo.AbstractUndoableEdit
//$ implements javax.swing.event.DocumentEvent$ElementChange

#include <java/lang/Array.h>
#include <javax/swing/event/DocumentEvent$ElementChange.h>
#include <javax/swing/undo/AbstractUndoableEdit.h>

namespace javax {
	namespace swing {
		namespace text {
			class Element;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export AbstractDocument$ElementEdit : public ::javax::swing::undo::AbstractUndoableEdit, public ::javax::swing::event::DocumentEvent$ElementChange {
	$class(AbstractDocument$ElementEdit, $NO_CLASS_INIT, ::javax::swing::undo::AbstractUndoableEdit, ::javax::swing::event::DocumentEvent$ElementChange)
public:
	AbstractDocument$ElementEdit();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::text::Element* e, int32_t index, $Array<::javax::swing::text::Element>* removed, $Array<::javax::swing::text::Element>* added);
	virtual $Array<::javax::swing::text::Element>* getChildrenAdded() override;
	virtual $Array<::javax::swing::text::Element>* getChildrenRemoved() override;
	virtual ::javax::swing::text::Element* getElement() override;
	virtual int32_t getIndex() override;
	virtual void redo() override;
	virtual $String* toString() override;
	virtual void undo() override;
	::javax::swing::text::Element* e = nullptr;
	int32_t index = 0;
	$Array<::javax::swing::text::Element>* removed = nullptr;
	$Array<::javax::swing::text::Element>* added = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_AbstractDocument$ElementEdit_h_