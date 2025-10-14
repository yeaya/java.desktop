#ifndef _javax_swing_text_AbstractDocument$LeafElement_h_
#define _javax_swing_text_AbstractDocument$LeafElement_h_
//$ class javax.swing.text.AbstractDocument$LeafElement
//$ extends javax.swing.text.AbstractDocument$AbstractElement

#include <javax/swing/text/AbstractDocument$AbstractElement.h>

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class Enumeration;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AbstractDocument;
			class AttributeSet;
			class Element;
			class Position;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import AbstractDocument$LeafElement : public ::javax::swing::text::AbstractDocument$AbstractElement {
	$class(AbstractDocument$LeafElement, $NO_CLASS_INIT, ::javax::swing::text::AbstractDocument$AbstractElement)
public:
	AbstractDocument$LeafElement();
	void init$(::javax::swing::text::AbstractDocument* this$0, ::javax::swing::text::Element* parent, ::javax::swing::text::AttributeSet* a, int32_t offs0, int32_t offs1);
	virtual ::java::util::Enumeration* children() override;
	virtual bool getAllowsChildren() override;
	virtual ::javax::swing::text::Element* getElement(int32_t index) override;
	virtual int32_t getElementCount() override;
	virtual int32_t getElementIndex(int32_t pos) override;
	virtual int32_t getEndOffset() override;
	virtual $String* getName() override;
	virtual int32_t getStartOffset() override;
	virtual bool isLeaf() override;
	void readObject(::java::io::ObjectInputStream* s);
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	::javax::swing::text::AbstractDocument* this$0 = nullptr;
	::javax::swing::text::Position* p0 = nullptr;
	::javax::swing::text::Position* p1 = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_AbstractDocument$LeafElement_h_