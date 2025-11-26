#ifndef _javax_swing_text_DefaultStyledDocument_h_
#define _javax_swing_text_DefaultStyledDocument_h_
//$ class javax.swing.text.DefaultStyledDocument
//$ extends javax.swing.text.AbstractDocument
//$ implements javax.swing.text.StyledDocument

#include <java/lang/Array.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/StyledDocument.h>

#pragma push_macro("BUFFER_SIZE_DEFAULT")
#undef BUFFER_SIZE_DEFAULT

namespace java {
	namespace awt {
		class Color;
		class Font;
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace util {
		class Enumeration;
		class Vector;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeListener;
			class DocumentListener;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AbstractDocument$AbstractElement;
			class AbstractDocument$Content;
			class AbstractDocument$DefaultDocumentEvent;
			class AttributeSet;
			class DefaultStyledDocument$ChangeUpdateRunnable;
			class DefaultStyledDocument$ElementBuffer;
			class DefaultStyledDocument$ElementSpec;
			class Element;
			class Style;
			class StyleContext;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export DefaultStyledDocument : public ::javax::swing::text::AbstractDocument, public ::javax::swing::text::StyledDocument {
	$class(DefaultStyledDocument, $NO_CLASS_INIT, ::javax::swing::text::AbstractDocument, ::javax::swing::text::StyledDocument)
public:
	DefaultStyledDocument();
	virtual void addUndoableEditListener(::javax::swing::event::UndoableEditListener* listener) override;
	virtual $Object* clone() override;
	virtual ::javax::swing::text::Position* createPosition(int32_t offs) override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::javax::swing::text::Position* getEndPosition() override;
	virtual int32_t getLength() override;
	virtual $Object* getProperty(Object$* key) override;
	virtual $Array<::javax::swing::text::Element>* getRootElements() override;
	virtual ::javax::swing::text::Position* getStartPosition() override;
	virtual $String* getText(int32_t offset, int32_t length) override;
	virtual void getText(int32_t offset, int32_t length, ::javax::swing::text::Segment* txt) override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::text::AbstractDocument$Content* c, ::javax::swing::text::StyleContext* styles);
	void init$(::javax::swing::text::StyleContext* styles);
	void init$();
	virtual void addDocumentListener(::javax::swing::event::DocumentListener* listener) override;
	virtual ::javax::swing::text::Style* addStyle($String* nm, ::javax::swing::text::Style* parent) override;
	virtual void create($Array<::javax::swing::text::DefaultStyledDocument$ElementSpec>* data);
	virtual ::javax::swing::text::AbstractDocument$AbstractElement* createDefaultRoot();
	virtual int16_t createSpecsForInsertAfterNewline(::javax::swing::text::Element* paragraph, ::javax::swing::text::Element* pParagraph, ::javax::swing::text::AttributeSet* pattr, ::java::util::Vector* parseBuffer, int32_t offset, int32_t endOffset);
	virtual ::javax::swing::event::ChangeListener* createStyleChangeListener();
	virtual ::javax::swing::event::ChangeListener* createStyleContextChangeListener();
	virtual ::java::awt::Color* getBackground(::javax::swing::text::AttributeSet* attr) override;
	virtual ::javax::swing::text::Element* getCharacterElement(int32_t pos) override;
	virtual ::javax::swing::text::Element* getDefaultRootElement() override;
	virtual ::java::awt::Font* getFont(::javax::swing::text::AttributeSet* attr) override;
	virtual ::java::awt::Color* getForeground(::javax::swing::text::AttributeSet* attr) override;
	virtual ::javax::swing::text::Style* getLogicalStyle(int32_t p) override;
	virtual ::javax::swing::text::Element* getParagraphElement(int32_t pos) override;
	virtual ::javax::swing::text::Style* getStyle($String* nm) override;
	virtual ::java::util::Enumeration* getStyleNames();
	virtual void insert(int32_t offset, $Array<::javax::swing::text::DefaultStyledDocument$ElementSpec>* data);
	virtual void insertString(int32_t offs, $String* str, ::javax::swing::text::AttributeSet* a) override;
	virtual void insertUpdate(::javax::swing::text::AbstractDocument$DefaultDocumentEvent* chng, ::javax::swing::text::AttributeSet* attr) override;
	virtual void putProperty(Object$* key, Object$* value) override;
	void readObject(::java::io::ObjectInputStream* s);
	virtual void remove(int32_t offs, int32_t len) override;
	virtual void removeDocumentListener(::javax::swing::event::DocumentListener* listener) override;
	virtual void removeElement(::javax::swing::text::Element* elem);
	void removeElementImpl(::javax::swing::text::Element* elem);
	virtual void removeStyle($String* nm) override;
	virtual void removeUndoableEditListener(::javax::swing::event::UndoableEditListener* listener) override;
	virtual void removeUpdate(::javax::swing::text::AbstractDocument$DefaultDocumentEvent* chng) override;
	virtual void render(::java::lang::Runnable* r) override;
	virtual void setCharacterAttributes(int32_t offset, int32_t length, ::javax::swing::text::AttributeSet* s, bool replace) override;
	virtual void setLogicalStyle(int32_t pos, ::javax::swing::text::Style* s) override;
	virtual void setParagraphAttributes(int32_t offset, int32_t length, ::javax::swing::text::AttributeSet* s, bool replace) override;
	virtual void styleChanged(::javax::swing::text::Style* style);
	virtual $String* toString() override;
	virtual void updateStylesListeningTo();
	static const int32_t BUFFER_SIZE_DEFAULT = 4096;
	::javax::swing::text::DefaultStyledDocument$ElementBuffer* buffer = nullptr;
	::java::util::Vector* listeningStyles = nullptr;
	::javax::swing::event::ChangeListener* styleChangeListener = nullptr;
	::javax::swing::event::ChangeListener* styleContextChangeListener = nullptr;
	::javax::swing::text::DefaultStyledDocument$ChangeUpdateRunnable* updateRunnable = nullptr;
};

		} // text
	} // swing
} // javax

#pragma pop_macro("BUFFER_SIZE_DEFAULT")

#endif // _javax_swing_text_DefaultStyledDocument_h_