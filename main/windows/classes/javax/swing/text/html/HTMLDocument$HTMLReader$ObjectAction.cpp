#include <javax/swing/text/html/HTMLDocument$HTMLReader$ObjectAction.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Vector.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/DefaultStyledDocument$ElementSpec.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$SpecialAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$TagAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader.h>
#include <jcpp.h>

#undef NAME
#undef PARAM
#undef VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $DefaultStyledDocument$ElementSpec = ::javax::swing::text::DefaultStyledDocument$ElementSpec;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLDocument$HTMLReader = ::javax::swing::text::html::HTMLDocument$HTMLReader;
using $HTMLDocument$HTMLReader$SpecialAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$SpecialAction;
using $HTMLDocument$HTMLReader$TagAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$TagAction;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _HTMLDocument$HTMLReader$ObjectAction_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/text/html/HTMLDocument$HTMLReader;", nullptr, $FINAL | $SYNTHETIC, $field(HTMLDocument$HTMLReader$ObjectAction, this$1)},
	{}
};

$MethodInfo _HTMLDocument$HTMLReader$ObjectAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/HTMLDocument$HTMLReader;)V", nullptr, 0, $method(static_cast<void(HTMLDocument$HTMLReader$ObjectAction::*)($HTMLDocument$HTMLReader*)>(&HTMLDocument$HTMLReader$ObjectAction::init$))},
	{"addParameter", "(Ljavax/swing/text/AttributeSet;)V", nullptr, 0},
	{"end", "(Ljavax/swing/text/html/HTML$Tag;)V", nullptr, $PUBLIC},
	{"start", "(Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/MutableAttributeSet;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HTMLDocument$HTMLReader$ObjectAction_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HTMLDocument$HTMLReader", "javax.swing.text.html.HTMLDocument", "HTMLReader", $PUBLIC},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$ObjectAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "ObjectAction", 0},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$SpecialAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "SpecialAction", $PUBLIC},
	{}
};

$ClassInfo _HTMLDocument$HTMLReader$ObjectAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.HTMLDocument$HTMLReader$ObjectAction",
	"javax.swing.text.html.HTMLDocument$HTMLReader$SpecialAction",
	nullptr,
	_HTMLDocument$HTMLReader$ObjectAction_FieldInfo_,
	_HTMLDocument$HTMLReader$ObjectAction_MethodInfo_,
	nullptr,
	nullptr,
	_HTMLDocument$HTMLReader$ObjectAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.HTMLDocument"
};

$Object* allocate$HTMLDocument$HTMLReader$ObjectAction($Class* clazz) {
	return $of($alloc(HTMLDocument$HTMLReader$ObjectAction));
}

void HTMLDocument$HTMLReader$ObjectAction::init$($HTMLDocument$HTMLReader* this$1) {
	$set(this, this$1, this$1);
	$HTMLDocument$HTMLReader$SpecialAction::init$(this$1);
}

void HTMLDocument$HTMLReader$ObjectAction::start($HTML$Tag* t, $MutableAttributeSet* a) {
	$init($HTML$Tag);
	if (t == $HTML$Tag::PARAM) {
		addParameter(a);
	} else {
		$HTMLDocument$HTMLReader$SpecialAction::start(t, a);
	}
}

void HTMLDocument$HTMLReader$ObjectAction::end($HTML$Tag* t) {
	$init($HTML$Tag);
	if (t != $HTML$Tag::PARAM) {
		$HTMLDocument$HTMLReader$SpecialAction::end(t);
	}
}

void HTMLDocument$HTMLReader$ObjectAction::addParameter($AttributeSet* a) {
	$init($HTML$Attribute);
	$var($String, name, $cast($String, $nc(a)->getAttribute($HTML$Attribute::NAME)));
	$var($String, value, $cast($String, a->getAttribute($HTML$Attribute::VALUE)));
	if ((name != nullptr) && (value != nullptr)) {
		$var($DefaultStyledDocument$ElementSpec, objSpec, $cast($DefaultStyledDocument$ElementSpec, $nc(this->this$1->parseBuffer)->lastElement()));
		$var($MutableAttributeSet, objAttr, $cast($MutableAttributeSet, $nc(objSpec)->getAttributes()));
		$nc(objAttr)->addAttribute(name, value);
	}
}

HTMLDocument$HTMLReader$ObjectAction::HTMLDocument$HTMLReader$ObjectAction() {
}

$Class* HTMLDocument$HTMLReader$ObjectAction::load$($String* name, bool initialize) {
	$loadClass(HTMLDocument$HTMLReader$ObjectAction, name, initialize, &_HTMLDocument$HTMLReader$ObjectAction_ClassInfo_, allocate$HTMLDocument$HTMLReader$ObjectAction);
	return class$;
}

$Class* HTMLDocument$HTMLReader$ObjectAction::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax