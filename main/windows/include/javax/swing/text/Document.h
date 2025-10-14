#ifndef _javax_swing_text_Document_h_
#define _javax_swing_text_Document_h_
//$ interface javax.swing.text.Document
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class DocumentListener;
			class UndoableEditListener;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class Element;
			class Position;
			class Segment;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import Document : public ::java::lang::Object {
	$interface(Document, 0, ::java::lang::Object)
public:
	virtual void addDocumentListener(::javax::swing::event::DocumentListener* listener) {}
	virtual void addUndoableEditListener(::javax::swing::event::UndoableEditListener* listener) {}
	virtual ::javax::swing::text::Position* createPosition(int32_t offs) {return nullptr;}
	virtual ::javax::swing::text::Element* getDefaultRootElement() {return nullptr;}
	virtual ::javax::swing::text::Position* getEndPosition() {return nullptr;}
	virtual int32_t getLength() {return 0;}
	virtual $Object* getProperty(Object$* key) {return nullptr;}
	virtual $Array<::javax::swing::text::Element>* getRootElements() {return nullptr;}
	virtual ::javax::swing::text::Position* getStartPosition() {return nullptr;}
	virtual $String* getText(int32_t offset, int32_t length) {return nullptr;}
	virtual void getText(int32_t offset, int32_t length, ::javax::swing::text::Segment* txt) {}
	virtual void insertString(int32_t offset, $String* str, ::javax::swing::text::AttributeSet* a) {}
	virtual void putProperty(Object$* key, Object$* value) {}
	virtual void remove(int32_t offs, int32_t len) {}
	virtual void removeDocumentListener(::javax::swing::event::DocumentListener* listener) {}
	virtual void removeUndoableEditListener(::javax::swing::event::UndoableEditListener* listener) {}
	virtual void render(::java::lang::Runnable* r) {}
	static $String* StreamDescriptionProperty;
	static $String* TitleProperty;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_Document_h_