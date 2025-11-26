#include <javax/swing/text/html/HTMLDocument$BlockElement.h>

#include <javax/swing/text/AbstractDocument$AbstractElement.h>
#include <javax/swing/text/AbstractDocument$BranchElement.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/DefaultStyledDocument.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AbstractDocument$AbstractElement = ::javax::swing::text::AbstractDocument$AbstractElement;
using $AbstractDocument$BranchElement = ::javax::swing::text::AbstractDocument$BranchElement;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $DefaultStyledDocument = ::javax::swing::text::DefaultStyledDocument;
using $Element = ::javax::swing::text::Element;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _HTMLDocument$BlockElement_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/html/HTMLDocument;", nullptr, $FINAL | $SYNTHETIC, $field(HTMLDocument$BlockElement, this$0)},
	{}
};

$MethodInfo _HTMLDocument$BlockElement_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/HTMLDocument;Ljavax/swing/text/Element;Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC, $method(static_cast<void(HTMLDocument$BlockElement::*)($HTMLDocument*,$Element*,$AttributeSet*)>(&HTMLDocument$BlockElement::init$))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getResolveParent", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HTMLDocument$BlockElement_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HTMLDocument$BlockElement", "javax.swing.text.html.HTMLDocument", "BlockElement", $PUBLIC},
	{"javax.swing.text.AbstractDocument$BranchElement", "javax.swing.text.AbstractDocument", "BranchElement", $PUBLIC},
	{}
};

$ClassInfo _HTMLDocument$BlockElement_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.HTMLDocument$BlockElement",
	"javax.swing.text.AbstractDocument$BranchElement",
	nullptr,
	_HTMLDocument$BlockElement_FieldInfo_,
	_HTMLDocument$BlockElement_MethodInfo_,
	nullptr,
	nullptr,
	_HTMLDocument$BlockElement_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.HTMLDocument"
};

$Object* allocate$HTMLDocument$BlockElement($Class* clazz) {
	return $of($alloc(HTMLDocument$BlockElement));
}

void HTMLDocument$BlockElement::init$($HTMLDocument* this$0, $Element* parent, $AttributeSet* a) {
	$set(this, this$0, this$0);
	$AbstractDocument$BranchElement::init$(this$0, parent, a);
}

$String* HTMLDocument$BlockElement::getName() {
	$init($StyleConstants);
	$var($Object, o, getAttribute($StyleConstants::NameAttribute));
	if (o != nullptr) {
		return $of(o)->toString();
	}
	return $AbstractDocument$BranchElement::getName();
}

$AttributeSet* HTMLDocument$BlockElement::getResolveParent() {
	return nullptr;
}

HTMLDocument$BlockElement::HTMLDocument$BlockElement() {
}

$Class* HTMLDocument$BlockElement::load$($String* name, bool initialize) {
	$loadClass(HTMLDocument$BlockElement, name, initialize, &_HTMLDocument$BlockElement_ClassInfo_, allocate$HTMLDocument$BlockElement);
	return class$;
}

$Class* HTMLDocument$BlockElement::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax