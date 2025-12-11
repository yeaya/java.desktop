#include <javax/swing/text/html/HTMLDocument$RunElement.h>

#include <javax/swing/text/AbstractDocument$AbstractElement.h>
#include <javax/swing/text/AbstractDocument$LeafElement.h>
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
using $AbstractDocument$LeafElement = ::javax::swing::text::AbstractDocument$LeafElement;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $DefaultStyledDocument = ::javax::swing::text::DefaultStyledDocument;
using $Element = ::javax::swing::text::Element;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _HTMLDocument$RunElement_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/html/HTMLDocument;", nullptr, $FINAL | $SYNTHETIC, $field(HTMLDocument$RunElement, this$0)},
	{}
};

$MethodInfo _HTMLDocument$RunElement_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/HTMLDocument;Ljavax/swing/text/Element;Ljavax/swing/text/AttributeSet;II)V", nullptr, $PUBLIC, $method(static_cast<void(HTMLDocument$RunElement::*)($HTMLDocument*,$Element*,$AttributeSet*,int32_t,int32_t)>(&HTMLDocument$RunElement::init$))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getResolveParent", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HTMLDocument$RunElement_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HTMLDocument$RunElement", "javax.swing.text.html.HTMLDocument", "RunElement", $PUBLIC},
	{"javax.swing.text.AbstractDocument$LeafElement", "javax.swing.text.AbstractDocument", "LeafElement", $PUBLIC},
	{}
};

$ClassInfo _HTMLDocument$RunElement_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.HTMLDocument$RunElement",
	"javax.swing.text.AbstractDocument$LeafElement",
	nullptr,
	_HTMLDocument$RunElement_FieldInfo_,
	_HTMLDocument$RunElement_MethodInfo_,
	nullptr,
	nullptr,
	_HTMLDocument$RunElement_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.HTMLDocument"
};

$Object* allocate$HTMLDocument$RunElement($Class* clazz) {
	return $of($alloc(HTMLDocument$RunElement));
}

void HTMLDocument$RunElement::init$($HTMLDocument* this$0, $Element* parent, $AttributeSet* a, int32_t offs0, int32_t offs1) {
	$set(this, this$0, this$0);
	$AbstractDocument$LeafElement::init$(this$0, parent, a, offs0, offs1);
}

$String* HTMLDocument$RunElement::getName() {
	$init($StyleConstants);
	$var($Object, o, getAttribute($StyleConstants::NameAttribute));
	if (o != nullptr) {
		return $of(o)->toString();
	}
	return $AbstractDocument$LeafElement::getName();
}

$AttributeSet* HTMLDocument$RunElement::getResolveParent() {
	return nullptr;
}

HTMLDocument$RunElement::HTMLDocument$RunElement() {
}

$Class* HTMLDocument$RunElement::load$($String* name, bool initialize) {
	$loadClass(HTMLDocument$RunElement, name, initialize, &_HTMLDocument$RunElement_ClassInfo_, allocate$HTMLDocument$RunElement);
	return class$;
}

$Class* HTMLDocument$RunElement::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax