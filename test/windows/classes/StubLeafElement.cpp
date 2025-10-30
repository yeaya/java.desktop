#include <StubLeafElement.h>

#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/DefaultStyledDocument.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $DefaultStyledDocument = ::javax::swing::text::DefaultStyledDocument;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;

$FieldInfo _StubLeafElement_FieldInfo_[] = {
	{"document", "Ljavax/swing/text/Document;", nullptr, 0, $field(StubLeafElement, document)},
	{"context", "Ljava/lang/String;", nullptr, 0, $field(StubLeafElement, context)},
	{"parent", "Ljavax/swing/text/Element;", nullptr, 0, $field(StubLeafElement, parent)},
	{"position", "I", nullptr, 0, $field(StubLeafElement, position)},
	{}
};

$MethodInfo _StubLeafElement_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljavax/swing/text/Element;I)V", nullptr, $PUBLIC, $method(static_cast<void(StubLeafElement::*)($String*,$Element*,int32_t)>(&StubLeafElement::init$))},
	{"getAttributes", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"getDocument", "()Ljavax/swing/text/Document;", nullptr, $PUBLIC},
	{"getElement", "(I)Ljavax/swing/text/Element;", nullptr, $PUBLIC},
	{"getElementCount", "()I", nullptr, $PUBLIC},
	{"getElementIndex", "(I)I", nullptr, $PUBLIC},
	{"getEndOffset", "()I", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getParentElement", "()Ljavax/swing/text/Element;", nullptr, $PUBLIC},
	{"getStartOffset", "()I", nullptr, $PUBLIC},
	{"isLeaf", "()Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _StubLeafElement_ClassInfo_ = {
	$ACC_SUPER,
	"StubLeafElement",
	"java.lang.Object",
	"javax.swing.text.Element",
	_StubLeafElement_FieldInfo_,
	_StubLeafElement_MethodInfo_
};

$Object* allocate$StubLeafElement($Class* clazz) {
	return $of($alloc(StubLeafElement));
}

void StubLeafElement::init$($String* context, $Element* parent, int32_t position) {
	$set(this, document, static_cast<$Document*>(static_cast<$AbstractDocument*>($new($DefaultStyledDocument))));
	$set(this, context, context);
	$set(this, parent, parent);
	this->position = position;
	try {
		$nc(this->document)->insertString(0, context, $$new($SimpleAttributeSet));
	} catch ($BadLocationException& e) {
	}
}

$Document* StubLeafElement::getDocument() {
	return this->document;
}

$Element* StubLeafElement::getParentElement() {
	return this->parent;
}

$String* StubLeafElement::getName() {
	return "StubLeafElement"_s;
}

$AttributeSet* StubLeafElement::getAttributes() {
	return $new($SimpleAttributeSet);
}

int32_t StubLeafElement::getStartOffset() {
	return this->position;
}

int32_t StubLeafElement::getEndOffset() {
	return this->position + $nc(this->document)->getLength();
}

int32_t StubLeafElement::getElementIndex(int32_t offset) {
	return 0;
}

int32_t StubLeafElement::getElementCount() {
	return 0;
}

$Element* StubLeafElement::getElement(int32_t index) {
	return this;
}

bool StubLeafElement::isLeaf() {
	return true;
}

StubLeafElement::StubLeafElement() {
}

$Class* StubLeafElement::load$($String* name, bool initialize) {
	$loadClass(StubLeafElement, name, initialize, &_StubLeafElement_ClassInfo_, allocate$StubLeafElement);
	return class$;
}

$Class* StubLeafElement::class$ = nullptr;