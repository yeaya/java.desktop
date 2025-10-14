#ifndef _javax_swing_text_AbstractDocument$AbstractElement_h_
#define _javax_swing_text_AbstractDocument$AbstractElement_h_
//$ class javax.swing.text.AbstractDocument$AbstractElement
//$ extends javax.swing.text.Element
//$ implements javax.swing.text.MutableAttributeSet,java.io.Serializable,javax.swing.tree.TreeNode

#include <java/io/Serializable.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/tree/TreeNode.h>

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
		class PrintStream;
		class PrintWriter;
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
			class Document;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import AbstractDocument$AbstractElement : public ::javax::swing::text::Element, public ::javax::swing::text::MutableAttributeSet, public ::java::io::Serializable, public ::javax::swing::tree::TreeNode {
	$class(AbstractDocument$AbstractElement, $NO_CLASS_INIT, ::javax::swing::text::Element, ::javax::swing::text::MutableAttributeSet, ::java::io::Serializable, ::javax::swing::tree::TreeNode)
public:
	AbstractDocument$AbstractElement();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual ::java::util::Enumeration* children() override {return nullptr;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual bool getAllowsChildren() override {return false;}
	virtual ::javax::swing::text::Element* getElement(int32_t index) override {return nullptr;}
	virtual int32_t getElementCount() override {return 0;}
	virtual int32_t getElementIndex(int32_t offset) override {return 0;}
	virtual int32_t getEndOffset() override {return 0;}
	virtual int32_t getStartOffset() override {return 0;}
	virtual int32_t hashCode() override;
	void init$(::javax::swing::text::AbstractDocument* this$0, ::javax::swing::text::Element* parent, ::javax::swing::text::AttributeSet* a);
	virtual void addAttribute(Object$* name, Object$* value) override;
	virtual void addAttributes(::javax::swing::text::AttributeSet* attr) override;
	void checkForIllegalCast();
	virtual bool containsAttribute(Object$* name, Object$* value) override;
	virtual bool containsAttributes(::javax::swing::text::AttributeSet* attrs) override;
	virtual ::javax::swing::text::AttributeSet* copyAttributes() override;
	virtual void dump(::java::io::PrintStream* psOut, int32_t indentAmount);
	virtual $Object* getAttribute(Object$* attrName) override;
	virtual int32_t getAttributeCount() override;
	virtual ::java::util::Enumeration* getAttributeNames() override;
	virtual ::javax::swing::text::AttributeSet* getAttributes() override;
	virtual ::javax::swing::tree::TreeNode* getChildAt(int32_t childIndex) override;
	virtual int32_t getChildCount() override;
	virtual ::javax::swing::text::Document* getDocument() override;
	virtual int32_t getIndex(::javax::swing::tree::TreeNode* node) override;
	virtual $String* getName() override;
	virtual ::javax::swing::tree::TreeNode* getParent() override;
	virtual ::javax::swing::text::Element* getParentElement() override;
	virtual ::javax::swing::text::AttributeSet* getResolveParent() override;
	void indent(::java::io::PrintWriter* out, int32_t n);
	virtual bool isDefined(Object$* attrName) override;
	virtual bool isEqual(::javax::swing::text::AttributeSet* attr) override;
	virtual bool isLeaf() override {return false;}
	void readObject(::java::io::ObjectInputStream* s);
	virtual void removeAttribute(Object$* name) override;
	virtual void removeAttributes(::java::util::Enumeration* names) override;
	virtual void removeAttributes(::javax::swing::text::AttributeSet* attrs) override;
	virtual void setResolveParent(::javax::swing::text::AttributeSet* parent) override;
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	::javax::swing::text::AbstractDocument* this$0 = nullptr;
	::javax::swing::text::Element* parent = nullptr;
	::javax::swing::text::AttributeSet* attributes = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_AbstractDocument$AbstractElement_h_