#include <javax/swing/text/AbstractDocument$LeafElement.h>

#include <java/io/IOException.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/util/Enumeration.h>
#include <javax/swing/text/AbstractDocument$AbstractElement.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/Position.h>
#include <javax/swing/text/StateInvariantError.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AbstractDocument$AbstractElement = ::javax::swing::text::AbstractDocument$AbstractElement;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Element = ::javax::swing::text::Element;
using $Position = ::javax::swing::text::Position;
using $StateInvariantError = ::javax::swing::text::StateInvariantError;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _AbstractDocument$LeafElement_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/AbstractDocument;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractDocument$LeafElement, this$0)},
	{"p0", "Ljavax/swing/text/Position;", nullptr, $PRIVATE | $TRANSIENT, $field(AbstractDocument$LeafElement, p0)},
	{"p1", "Ljavax/swing/text/Position;", nullptr, $PRIVATE | $TRANSIENT, $field(AbstractDocument$LeafElement, p1)},
	{}
};

$MethodInfo _AbstractDocument$LeafElement_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/AbstractDocument;Ljavax/swing/text/Element;Ljavax/swing/text/AttributeSet;II)V", nullptr, $PUBLIC, $method(static_cast<void(AbstractDocument$LeafElement::*)($AbstractDocument*,$Element*,$AttributeSet*,int32_t,int32_t)>(&AbstractDocument$LeafElement::init$))},
	{"children", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljavax/swing/tree/TreeNode;>;", $PUBLIC},
	{"getAllowsChildren", "()Z", nullptr, $PUBLIC},
	{"getElement", "(I)Ljavax/swing/text/Element;", nullptr, $PUBLIC},
	{"getElementCount", "()I", nullptr, $PUBLIC},
	{"getElementIndex", "(I)I", nullptr, $PUBLIC},
	{"getEndOffset", "()I", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getStartOffset", "()I", nullptr, $PUBLIC},
	{"isLeaf", "()Z", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(AbstractDocument$LeafElement::*)($ObjectInputStream*)>(&AbstractDocument$LeafElement::readObject)), "java.lang.ClassNotFoundException,java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(AbstractDocument$LeafElement::*)($ObjectOutputStream*)>(&AbstractDocument$LeafElement::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _AbstractDocument$LeafElement_InnerClassesInfo_[] = {
	{"javax.swing.text.AbstractDocument$LeafElement", "javax.swing.text.AbstractDocument", "LeafElement", $PUBLIC},
	{"javax.swing.text.AbstractDocument$AbstractElement", "javax.swing.text.AbstractDocument", "AbstractElement", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AbstractDocument$LeafElement_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.AbstractDocument$LeafElement",
	"javax.swing.text.AbstractDocument$AbstractElement",
	nullptr,
	_AbstractDocument$LeafElement_FieldInfo_,
	_AbstractDocument$LeafElement_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractDocument$LeafElement_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.AbstractDocument"
};

$Object* allocate$AbstractDocument$LeafElement($Class* clazz) {
	return $of($alloc(AbstractDocument$LeafElement));
}

void AbstractDocument$LeafElement::init$($AbstractDocument* this$0, $Element* parent, $AttributeSet* a, int32_t offs0, int32_t offs1) {
	$set(this, this$0, this$0);
	$AbstractDocument$AbstractElement::init$(this$0, parent, a);
	try {
		$set(this, p0, this$0->createPosition(offs0));
		$set(this, p1, this$0->createPosition(offs1));
	} catch ($BadLocationException& e) {
		$set(this, p0, nullptr);
		$set(this, p1, nullptr);
		$throwNew($StateInvariantError, "Can\'t create Position references"_s);
	}
}

$String* AbstractDocument$LeafElement::toString() {
	return $str({"LeafElement("_s, $(getName()), ") "_s, this->p0, ","_s, this->p1, "\n"_s});
}

int32_t AbstractDocument$LeafElement::getStartOffset() {
	return $nc(this->p0)->getOffset();
}

int32_t AbstractDocument$LeafElement::getEndOffset() {
	return $nc(this->p1)->getOffset();
}

$String* AbstractDocument$LeafElement::getName() {
	$var($String, nm, $AbstractDocument$AbstractElement::getName());
	if (nm == nullptr) {
		$assign(nm, "content"_s);
	}
	return nm;
}

int32_t AbstractDocument$LeafElement::getElementIndex(int32_t pos) {
	return -1;
}

$Element* AbstractDocument$LeafElement::getElement(int32_t index) {
	return nullptr;
}

int32_t AbstractDocument$LeafElement::getElementCount() {
	return 0;
}

bool AbstractDocument$LeafElement::isLeaf() {
	return true;
}

bool AbstractDocument$LeafElement::getAllowsChildren() {
	return false;
}

$Enumeration* AbstractDocument$LeafElement::children() {
	return nullptr;
}

void AbstractDocument$LeafElement::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	s->writeInt($nc(this->p0)->getOffset());
	s->writeInt($nc(this->p1)->getOffset());
}

void AbstractDocument$LeafElement::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	int32_t off0 = s->readInt();
	int32_t off1 = s->readInt();
	try {
		$set(this, p0, this->this$0->createPosition(off0));
		$set(this, p1, this->this$0->createPosition(off1));
	} catch ($BadLocationException& e) {
		$set(this, p0, nullptr);
		$set(this, p1, nullptr);
		$throwNew($IOException, "Can\'t restore Position references"_s);
	}
}

AbstractDocument$LeafElement::AbstractDocument$LeafElement() {
}

$Class* AbstractDocument$LeafElement::load$($String* name, bool initialize) {
	$loadClass(AbstractDocument$LeafElement, name, initialize, &_AbstractDocument$LeafElement_ClassInfo_, allocate$AbstractDocument$LeafElement);
	return class$;
}

$Class* AbstractDocument$LeafElement::class$ = nullptr;

		} // text
	} // swing
} // javax