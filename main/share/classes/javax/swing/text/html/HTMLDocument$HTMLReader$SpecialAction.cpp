#include <javax/swing/text/html/HTMLDocument$HTMLReader$SpecialAction.h>

#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$TagAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLDocument$HTMLReader = ::javax::swing::text::html::HTMLDocument$HTMLReader;
using $HTMLDocument$HTMLReader$TagAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$TagAction;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _HTMLDocument$HTMLReader$SpecialAction_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/text/html/HTMLDocument$HTMLReader;", nullptr, $FINAL | $SYNTHETIC, $field(HTMLDocument$HTMLReader$SpecialAction, this$1)},
	{}
};

$MethodInfo _HTMLDocument$HTMLReader$SpecialAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/HTMLDocument$HTMLReader;)V", nullptr, $PUBLIC, $method(static_cast<void(HTMLDocument$HTMLReader$SpecialAction::*)($HTMLDocument$HTMLReader*)>(&HTMLDocument$HTMLReader$SpecialAction::init$))},
	{"start", "(Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/MutableAttributeSet;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HTMLDocument$HTMLReader$SpecialAction_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HTMLDocument$HTMLReader", "javax.swing.text.html.HTMLDocument", "HTMLReader", $PUBLIC},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$SpecialAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "SpecialAction", $PUBLIC},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$TagAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "TagAction", $PUBLIC},
	{}
};

$ClassInfo _HTMLDocument$HTMLReader$SpecialAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.HTMLDocument$HTMLReader$SpecialAction",
	"javax.swing.text.html.HTMLDocument$HTMLReader$TagAction",
	nullptr,
	_HTMLDocument$HTMLReader$SpecialAction_FieldInfo_,
	_HTMLDocument$HTMLReader$SpecialAction_MethodInfo_,
	nullptr,
	nullptr,
	_HTMLDocument$HTMLReader$SpecialAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.HTMLDocument"
};

$Object* allocate$HTMLDocument$HTMLReader$SpecialAction($Class* clazz) {
	return $of($alloc(HTMLDocument$HTMLReader$SpecialAction));
}

void HTMLDocument$HTMLReader$SpecialAction::init$($HTMLDocument$HTMLReader* this$1) {
	$set(this, this$1, this$1);
	$HTMLDocument$HTMLReader$TagAction::init$(this$1);
}

void HTMLDocument$HTMLReader$SpecialAction::start($HTML$Tag* t, $MutableAttributeSet* a) {
	this->this$1->addSpecialElement(t, a);
}

HTMLDocument$HTMLReader$SpecialAction::HTMLDocument$HTMLReader$SpecialAction() {
}

$Class* HTMLDocument$HTMLReader$SpecialAction::load$($String* name, bool initialize) {
	$loadClass(HTMLDocument$HTMLReader$SpecialAction, name, initialize, &_HTMLDocument$HTMLReader$SpecialAction_ClassInfo_, allocate$HTMLDocument$HTMLReader$SpecialAction);
	return class$;
}

$Class* HTMLDocument$HTMLReader$SpecialAction::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax