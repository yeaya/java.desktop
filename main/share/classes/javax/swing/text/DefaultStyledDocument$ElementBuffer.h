#ifndef _javax_swing_text_DefaultStyledDocument$ElementBuffer_h_
#define _javax_swing_text_DefaultStyledDocument$ElementBuffer_h_
//$ class javax.swing.text.DefaultStyledDocument$ElementBuffer
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Stack;
		class Vector;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AbstractDocument$DefaultDocumentEvent;
			class DefaultStyledDocument;
			class DefaultStyledDocument$ElementBuffer$ElemChanges;
			class DefaultStyledDocument$ElementSpec;
			class Element;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export DefaultStyledDocument$ElementBuffer : public ::java::io::Serializable {
	$class(DefaultStyledDocument$ElementBuffer, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	DefaultStyledDocument$ElementBuffer();
	using ::java::io::Serializable::clone;
	void init$(::javax::swing::text::DefaultStyledDocument* this$0, ::javax::swing::text::Element* root);
	virtual void advance(int32_t n);
	virtual void beginEdits(int32_t offset, int32_t length);
	virtual bool canJoin(::javax::swing::text::Element* e0, ::javax::swing::text::Element* e1);
	virtual void change(int32_t offset, int32_t length, ::javax::swing::text::AbstractDocument$DefaultDocumentEvent* de);
	virtual void changeUpdate();
	virtual ::javax::swing::text::Element* clone(::javax::swing::text::Element* parent, ::javax::swing::text::Element* clonee);
	virtual ::javax::swing::text::Element* cloneAsNecessary(::javax::swing::text::Element* parent, ::javax::swing::text::Element* clonee, int32_t rmOffs0, int32_t rmOffs1);
	virtual void create(int32_t length, $Array<::javax::swing::text::DefaultStyledDocument$ElementSpec>* data, ::javax::swing::text::AbstractDocument$DefaultDocumentEvent* de);
	virtual void endEdits(::javax::swing::text::AbstractDocument$DefaultDocumentEvent* de);
	virtual void fracture(int32_t depth);
	virtual void fractureDeepestLeaf($Array<::javax::swing::text::DefaultStyledDocument$ElementSpec>* specs);
	virtual void fractureFrom($Array<::javax::swing::text::DefaultStyledDocument$ElementBuffer$ElemChanges>* changed, int32_t startIndex, int32_t endFractureIndex);
	virtual ::javax::swing::text::Element* getRootElement();
	virtual void insert(int32_t offset, int32_t length, $Array<::javax::swing::text::DefaultStyledDocument$ElementSpec>* data, ::javax::swing::text::AbstractDocument$DefaultDocumentEvent* de);
	virtual void insertElement(::javax::swing::text::DefaultStyledDocument$ElementSpec* es);
	virtual void insertFirstContent($Array<::javax::swing::text::DefaultStyledDocument$ElementSpec>* specs);
	virtual void insertUpdate($Array<::javax::swing::text::DefaultStyledDocument$ElementSpec>* data);
	virtual ::javax::swing::text::Element* join(::javax::swing::text::Element* p, ::javax::swing::text::Element* left, ::javax::swing::text::Element* right, int32_t rmOffs0, int32_t rmOffs1);
	virtual void pop();
	virtual void push(::javax::swing::text::Element* e, int32_t index, bool isFracture);
	virtual void push(::javax::swing::text::Element* e, int32_t index);
	virtual ::javax::swing::text::Element* recreateFracturedElement(::javax::swing::text::Element* parent, ::javax::swing::text::Element* toDuplicate);
	virtual void remove(int32_t offset, int32_t length, ::javax::swing::text::AbstractDocument$DefaultDocumentEvent* de);
	virtual bool removeElements(::javax::swing::text::Element* elem, int32_t rmOffs0, int32_t rmOffs1);
	virtual void removeUpdate();
	virtual bool split(int32_t offs, int32_t len);
	::javax::swing::text::DefaultStyledDocument* this$0 = nullptr;
	::javax::swing::text::Element* root = nullptr;
	int32_t pos = 0;
	int32_t offset = 0;
	int32_t length = 0;
	int32_t endOffset = 0;
	::java::util::Vector* changes = nullptr;
	::java::util::Stack* path = nullptr;
	bool insertOp = false;
	bool recreateLeafs = false;
	$Array<::javax::swing::text::DefaultStyledDocument$ElementBuffer$ElemChanges>* insertPath = nullptr;
	bool createdFracture = false;
	::javax::swing::text::Element* fracturedParent = nullptr;
	::javax::swing::text::Element* fracturedChild = nullptr;
	bool offsetLastIndex = false;
	bool offsetLastIndexOnReplace = false;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_DefaultStyledDocument$ElementBuffer_h_