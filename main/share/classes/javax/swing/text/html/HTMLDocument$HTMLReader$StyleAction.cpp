#include <javax/swing/text/html/HTMLDocument$HTMLReader$StyleAction.h>

#include <java/util/Vector.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$TagAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader.h>
#include <jcpp.h>

#undef TYPE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLDocument$HTMLReader = ::javax::swing::text::html::HTMLDocument$HTMLReader;
using $HTMLDocument$HTMLReader$TagAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$TagAction;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _HTMLDocument$HTMLReader$StyleAction_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/text/html/HTMLDocument$HTMLReader;", nullptr, $FINAL | $SYNTHETIC, $field(HTMLDocument$HTMLReader$StyleAction, this$1)},
	{}
};

$MethodInfo _HTMLDocument$HTMLReader$StyleAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/HTMLDocument$HTMLReader;)V", nullptr, 0, $method(static_cast<void(HTMLDocument$HTMLReader$StyleAction::*)($HTMLDocument$HTMLReader*)>(&HTMLDocument$HTMLReader$StyleAction::init$))},
	{"end", "(Ljavax/swing/text/html/HTML$Tag;)V", nullptr, $PUBLIC},
	{"isEmpty", "(Ljavax/swing/text/html/HTML$Tag;)Z", nullptr, 0},
	{"start", "(Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/MutableAttributeSet;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HTMLDocument$HTMLReader$StyleAction_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HTMLDocument$HTMLReader", "javax.swing.text.html.HTMLDocument", "HTMLReader", $PUBLIC},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$StyleAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "StyleAction", 0},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$TagAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "TagAction", $PUBLIC},
	{}
};

$ClassInfo _HTMLDocument$HTMLReader$StyleAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.HTMLDocument$HTMLReader$StyleAction",
	"javax.swing.text.html.HTMLDocument$HTMLReader$TagAction",
	nullptr,
	_HTMLDocument$HTMLReader$StyleAction_FieldInfo_,
	_HTMLDocument$HTMLReader$StyleAction_MethodInfo_,
	nullptr,
	nullptr,
	_HTMLDocument$HTMLReader$StyleAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.HTMLDocument"
};

$Object* allocate$HTMLDocument$HTMLReader$StyleAction($Class* clazz) {
	return $of($alloc(HTMLDocument$HTMLReader$StyleAction));
}

void HTMLDocument$HTMLReader$StyleAction::init$($HTMLDocument$HTMLReader* this$1) {
	$set(this, this$1, this$1);
	$HTMLDocument$HTMLReader$TagAction::init$(this$1);
}

void HTMLDocument$HTMLReader$StyleAction::start($HTML$Tag* t, $MutableAttributeSet* a) {
	if (this->this$1->inHead) {
		if (this->this$1->styles == nullptr) {
			$set(this->this$1, styles, $new($Vector, 3));
		}
		$nc(this->this$1->styles)->addElement(t);
		$init($HTML$Attribute);
		$nc(this->this$1->styles)->addElement($($nc(a)->getAttribute($HTML$Attribute::TYPE)));
		this->this$1->inStyle = true;
	}
}

void HTMLDocument$HTMLReader$StyleAction::end($HTML$Tag* t) {
	this->this$1->inStyle = false;
}

bool HTMLDocument$HTMLReader$StyleAction::isEmpty($HTML$Tag* t) {
	return false;
}

HTMLDocument$HTMLReader$StyleAction::HTMLDocument$HTMLReader$StyleAction() {
}

$Class* HTMLDocument$HTMLReader$StyleAction::load$($String* name, bool initialize) {
	$loadClass(HTMLDocument$HTMLReader$StyleAction, name, initialize, &_HTMLDocument$HTMLReader$StyleAction_ClassInfo_, allocate$HTMLDocument$HTMLReader$StyleAction);
	return class$;
}

$Class* HTMLDocument$HTMLReader$StyleAction::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax