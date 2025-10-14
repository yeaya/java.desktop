#ifndef _javax_swing_text_AbstractDocument$DefaultDocumentEventUndoableWrapper_h_
#define _javax_swing_text_AbstractDocument$DefaultDocumentEventUndoableWrapper_h_
//$ class javax.swing.text.AbstractDocument$DefaultDocumentEventUndoableWrapper
//$ extends javax.swing.text.AbstractDocument$DefaultDocumentEvent
//$ implements sun.swing.text.UndoableEditLockSupport

#include <javax/swing/text/AbstractDocument$DefaultDocumentEvent.h>
#include <sun/swing/text/UndoableEditLockSupport.h>

namespace javax {
	namespace swing {
		namespace text {
			class AbstractDocument;
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

class $export AbstractDocument$DefaultDocumentEventUndoableWrapper : public ::javax::swing::text::AbstractDocument$DefaultDocumentEvent, public ::sun::swing::text::UndoableEditLockSupport {
	$class(AbstractDocument$DefaultDocumentEventUndoableWrapper, $NO_CLASS_INIT, ::javax::swing::text::AbstractDocument$DefaultDocumentEvent, ::sun::swing::text::UndoableEditLockSupport)
public:
	AbstractDocument$DefaultDocumentEventUndoableWrapper();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::text::AbstractDocument* this$0, ::javax::swing::text::AbstractDocument$DefaultDocumentEvent* dde);
	virtual bool addEdit(::javax::swing::undo::UndoableEdit* anEdit) override;
	virtual bool canRedo() override;
	virtual bool canUndo() override;
	virtual void die() override;
	virtual $String* getPresentationName() override;
	virtual $String* getRedoPresentationName() override;
	virtual $String* getUndoPresentationName() override;
	virtual bool isSignificant() override;
	virtual void lockEdit() override;
	virtual void redo() override;
	virtual bool replaceEdit(::javax::swing::undo::UndoableEdit* anEdit) override;
	virtual $String* toString() override;
	virtual void undo() override;
	virtual void unlockEdit() override;
	::javax::swing::text::AbstractDocument* this$0 = nullptr;
	::javax::swing::text::AbstractDocument$DefaultDocumentEvent* dde = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_AbstractDocument$DefaultDocumentEventUndoableWrapper_h_