#include <javax/swing/text/html/parser/TagElement.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTML$UnknownTag.h>
#include <javax/swing/text/html/HTML.h>
#include <javax/swing/text/html/parser/Element.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HTML = ::javax::swing::text::html::HTML;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTML$UnknownTag = ::javax::swing::text::html::HTML$UnknownTag;
using $Element = ::javax::swing::text::html::parser::Element;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				namespace parser {

$FieldInfo _TagElement_FieldInfo_[] = {
	{"elem", "Ljavax/swing/text/html/parser/Element;", nullptr, 0, $field(TagElement, elem)},
	{"htmlTag", "Ljavax/swing/text/html/HTML$Tag;", nullptr, 0, $field(TagElement, htmlTag)},
	{"insertedByErrorRecovery", "Z", nullptr, 0, $field(TagElement, insertedByErrorRecovery)},
	{}
};

$MethodInfo _TagElement_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/parser/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(TagElement::*)($Element*)>(&TagElement::init$))},
	{"<init>", "(Ljavax/swing/text/html/parser/Element;Z)V", nullptr, $PUBLIC, $method(static_cast<void(TagElement::*)($Element*,bool)>(&TagElement::init$))},
	{"breaksFlow", "()Z", nullptr, $PUBLIC},
	{"fictional", "()Z", nullptr, $PUBLIC},
	{"getElement", "()Ljavax/swing/text/html/parser/Element;", nullptr, $PUBLIC},
	{"getHTMLTag", "()Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC},
	{"isPreformatted", "()Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TagElement_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.parser.TagElement",
	"java.lang.Object",
	nullptr,
	_TagElement_FieldInfo_,
	_TagElement_MethodInfo_
};

$Object* allocate$TagElement($Class* clazz) {
	return $of($alloc(TagElement));
}

void TagElement::init$($Element* elem) {
	TagElement::init$(elem, false);
}

void TagElement::init$($Element* elem, bool fictional) {
	$set(this, elem, elem);
	$set(this, htmlTag, $HTML::getTag($($nc(elem)->getName())));
	if (this->htmlTag == nullptr) {
		$set(this, htmlTag, $new($HTML$UnknownTag, $($nc(elem)->getName())));
	}
	this->insertedByErrorRecovery = fictional;
}

bool TagElement::breaksFlow() {
	return $nc(this->htmlTag)->breaksFlow();
}

bool TagElement::isPreformatted() {
	return $nc(this->htmlTag)->isPreformatted();
}

$Element* TagElement::getElement() {
	return this->elem;
}

$HTML$Tag* TagElement::getHTMLTag() {
	return this->htmlTag;
}

bool TagElement::fictional() {
	return this->insertedByErrorRecovery;
}

TagElement::TagElement() {
}

$Class* TagElement::load$($String* name, bool initialize) {
	$loadClass(TagElement, name, initialize, &_TagElement_ClassInfo_, allocate$TagElement);
	return class$;
}

$Class* TagElement::class$ = nullptr;

				} // parser
			} // html
		} // text
	} // swing
} // javax