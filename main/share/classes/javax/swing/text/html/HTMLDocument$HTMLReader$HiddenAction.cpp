#include <javax/swing/text/html/HTMLDocument$HTMLReader$HiddenAction.h>

#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$TagAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader.h>
#include <jcpp.h>

#undef APPLET
#undef ENDTAG
#undef SCRIPT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLDocument$HTMLReader = ::javax::swing::text::html::HTMLDocument$HTMLReader;
using $HTMLDocument$HTMLReader$TagAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$TagAction;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _HTMLDocument$HTMLReader$HiddenAction_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/text/html/HTMLDocument$HTMLReader;", nullptr, $FINAL | $SYNTHETIC, $field(HTMLDocument$HTMLReader$HiddenAction, this$1)},
	{}
};

$MethodInfo _HTMLDocument$HTMLReader$HiddenAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/HTMLDocument$HTMLReader;)V", nullptr, $PUBLIC, $method(static_cast<void(HTMLDocument$HTMLReader$HiddenAction::*)($HTMLDocument$HTMLReader*)>(&HTMLDocument$HTMLReader$HiddenAction::init$))},
	{"end", "(Ljavax/swing/text/html/HTML$Tag;)V", nullptr, $PUBLIC},
	{"isEmpty", "(Ljavax/swing/text/html/HTML$Tag;)Z", nullptr, 0},
	{"start", "(Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/MutableAttributeSet;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HTMLDocument$HTMLReader$HiddenAction_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HTMLDocument$HTMLReader", "javax.swing.text.html.HTMLDocument", "HTMLReader", $PUBLIC},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$HiddenAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "HiddenAction", $PUBLIC},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$TagAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "TagAction", $PUBLIC},
	{}
};

$ClassInfo _HTMLDocument$HTMLReader$HiddenAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.HTMLDocument$HTMLReader$HiddenAction",
	"javax.swing.text.html.HTMLDocument$HTMLReader$TagAction",
	nullptr,
	_HTMLDocument$HTMLReader$HiddenAction_FieldInfo_,
	_HTMLDocument$HTMLReader$HiddenAction_MethodInfo_,
	nullptr,
	nullptr,
	_HTMLDocument$HTMLReader$HiddenAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.HTMLDocument"
};

$Object* allocate$HTMLDocument$HTMLReader$HiddenAction($Class* clazz) {
	return $of($alloc(HTMLDocument$HTMLReader$HiddenAction));
}

void HTMLDocument$HTMLReader$HiddenAction::init$($HTMLDocument$HTMLReader* this$1) {
	$set(this, this$1, this$1);
	$HTMLDocument$HTMLReader$TagAction::init$(this$1);
}

void HTMLDocument$HTMLReader$HiddenAction::start($HTML$Tag* t, $MutableAttributeSet* a) {
	this->this$1->addSpecialElement(t, a);
}

void HTMLDocument$HTMLReader$HiddenAction::end($HTML$Tag* t) {
	if (!isEmpty(t)) {
		$var($MutableAttributeSet, a, $new($SimpleAttributeSet));
		$init($HTML$Attribute);
		a->addAttribute($HTML$Attribute::ENDTAG, "true"_s);
		this->this$1->addSpecialElement(t, a);
	}
}

bool HTMLDocument$HTMLReader$HiddenAction::isEmpty($HTML$Tag* t) {
	$init($HTML$Tag);
	if (t == $HTML$Tag::APPLET || t == $HTML$Tag::SCRIPT) {
		return false;
	}
	return true;
}

HTMLDocument$HTMLReader$HiddenAction::HTMLDocument$HTMLReader$HiddenAction() {
}

$Class* HTMLDocument$HTMLReader$HiddenAction::load$($String* name, bool initialize) {
	$loadClass(HTMLDocument$HTMLReader$HiddenAction, name, initialize, &_HTMLDocument$HTMLReader$HiddenAction_ClassInfo_, allocate$HTMLDocument$HTMLReader$HiddenAction);
	return class$;
}

$Class* HTMLDocument$HTMLReader$HiddenAction::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax