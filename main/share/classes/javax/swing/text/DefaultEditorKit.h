#ifndef _javax_swing_text_DefaultEditorKit_h_
#define _javax_swing_text_DefaultEditorKit_h_
//$ class javax.swing.text.DefaultEditorKit
//$ extends javax.swing.text.EditorKit

#include <java/lang/Array.h>
#include <javax/swing/text/EditorKit.h>

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
		class Reader;
		class Writer;
	}
}
namespace javax {
	namespace swing {
		class Action;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Caret;
			class Document;
			class MutableAttributeSet;
			class ViewFactory;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export DefaultEditorKit : public ::javax::swing::text::EditorKit {
	$class(DefaultEditorKit, 0, ::javax::swing::text::EditorKit)
public:
	DefaultEditorKit();
	void init$();
	virtual ::javax::swing::text::Caret* createCaret() override;
	virtual ::javax::swing::text::Document* createDefaultDocument() override;
	virtual $Array<::javax::swing::Action>* getActions() override;
	virtual $String* getContentType() override;
	virtual ::javax::swing::text::MutableAttributeSet* getInputAttributes();
	virtual ::javax::swing::text::ViewFactory* getViewFactory() override;
	virtual void read(::java::io::InputStream* in, ::javax::swing::text::Document* doc, int32_t pos) override;
	virtual void read(::java::io::Reader* in, ::javax::swing::text::Document* doc, int32_t pos) override;
	virtual void write(::java::io::OutputStream* out, ::javax::swing::text::Document* doc, int32_t pos, int32_t len) override;
	virtual void write(::java::io::Writer* out, ::javax::swing::text::Document* doc, int32_t pos, int32_t len) override;
	static $String* EndOfLineStringProperty;
	static $String* insertContentAction;
	static $String* insertBreakAction;
	static $String* insertTabAction;
	static $String* deletePrevCharAction;
	static $String* deleteNextCharAction;
	static $String* deleteNextWordAction;
	static $String* deletePrevWordAction;
	static $String* readOnlyAction;
	static $String* writableAction;
	static $String* cutAction;
	static $String* copyAction;
	static $String* pasteAction;
	static $String* beepAction;
	static $String* pageUpAction;
	static $String* pageDownAction;
	static $String* selectionPageUpAction;
	static $String* selectionPageDownAction;
	static $String* selectionPageLeftAction;
	static $String* selectionPageRightAction;
	static $String* forwardAction;
	static $String* backwardAction;
	static $String* selectionForwardAction;
	static $String* selectionBackwardAction;
	static $String* upAction;
	static $String* downAction;
	static $String* selectionUpAction;
	static $String* selectionDownAction;
	static $String* beginWordAction;
	static $String* endWordAction;
	static $String* selectionBeginWordAction;
	static $String* selectionEndWordAction;
	static $String* previousWordAction;
	static $String* nextWordAction;
	static $String* selectionPreviousWordAction;
	static $String* selectionNextWordAction;
	static $String* beginLineAction;
	static $String* endLineAction;
	static $String* selectionBeginLineAction;
	static $String* selectionEndLineAction;
	static $String* beginParagraphAction;
	static $String* endParagraphAction;
	static $String* selectionBeginParagraphAction;
	static $String* selectionEndParagraphAction;
	static $String* beginAction;
	static $String* endAction;
	static $String* selectionBeginAction;
	static $String* selectionEndAction;
	static $String* selectWordAction;
	static $String* selectLineAction;
	static $String* selectParagraphAction;
	static $String* selectAllAction;
	static $String* unselectAction;
	static $String* toggleComponentOrientationAction;
	static $String* defaultKeyTypedAction;
	static $Array<::javax::swing::Action>* defaultActions;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_DefaultEditorKit_h_