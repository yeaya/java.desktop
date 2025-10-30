#include <javax/swing/text/Element.h>

#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Document.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $Document = ::javax::swing::text::Document;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _Element_MethodInfo_[] = {
	{"getAttributes", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDocument", "()Ljavax/swing/text/Document;", nullptr, $PUBLIC | $ABSTRACT},
	{"getElement", "(I)Ljavax/swing/text/Element;", nullptr, $PUBLIC | $ABSTRACT},
	{"getElementCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getElementIndex", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getEndOffset", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getParentElement", "()Ljavax/swing/text/Element;", nullptr, $PUBLIC | $ABSTRACT},
	{"getStartOffset", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"isLeaf", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Element_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.text.Element",
	nullptr,
	nullptr,
	nullptr,
	_Element_MethodInfo_
};

$Object* allocate$Element($Class* clazz) {
	return $of($alloc(Element));
}

$Class* Element::load$($String* name, bool initialize) {
	$loadClass(Element, name, initialize, &_Element_ClassInfo_, allocate$Element);
	return class$;
}

$Class* Element::class$ = nullptr;

		} // text
	} // swing
} // javax