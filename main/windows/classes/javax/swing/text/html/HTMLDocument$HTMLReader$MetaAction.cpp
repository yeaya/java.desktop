#include <javax/swing/text/html/HTMLDocument$HTMLReader$MetaAction.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$HiddenAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <jcpp.h>

#undef CONTENT
#undef HTTPEQUIV

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $HTMLDocument$HTMLReader = ::javax::swing::text::html::HTMLDocument$HTMLReader;
using $HTMLDocument$HTMLReader$HiddenAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$HiddenAction;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _HTMLDocument$HTMLReader$MetaAction_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/text/html/HTMLDocument$HTMLReader;", nullptr, $FINAL | $SYNTHETIC, $field(HTMLDocument$HTMLReader$MetaAction, this$1)},
	{}
};

$MethodInfo _HTMLDocument$HTMLReader$MetaAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/HTMLDocument$HTMLReader;)V", nullptr, 0, $method(static_cast<void(HTMLDocument$HTMLReader$MetaAction::*)($HTMLDocument$HTMLReader*)>(&HTMLDocument$HTMLReader$MetaAction::init$))},
	{"isEmpty", "(Ljavax/swing/text/html/HTML$Tag;)Z", nullptr, 0},
	{"start", "(Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/MutableAttributeSet;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HTMLDocument$HTMLReader$MetaAction_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HTMLDocument$HTMLReader", "javax.swing.text.html.HTMLDocument", "HTMLReader", $PUBLIC},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$MetaAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "MetaAction", 0},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$HiddenAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "HiddenAction", $PUBLIC},
	{}
};

$ClassInfo _HTMLDocument$HTMLReader$MetaAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.HTMLDocument$HTMLReader$MetaAction",
	"javax.swing.text.html.HTMLDocument$HTMLReader$HiddenAction",
	nullptr,
	_HTMLDocument$HTMLReader$MetaAction_FieldInfo_,
	_HTMLDocument$HTMLReader$MetaAction_MethodInfo_,
	nullptr,
	nullptr,
	_HTMLDocument$HTMLReader$MetaAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.HTMLDocument"
};

$Object* allocate$HTMLDocument$HTMLReader$MetaAction($Class* clazz) {
	return $of($alloc(HTMLDocument$HTMLReader$MetaAction));
}

void HTMLDocument$HTMLReader$MetaAction::init$($HTMLDocument$HTMLReader* this$1) {
	$set(this, this$1, this$1);
	$HTMLDocument$HTMLReader$HiddenAction::init$(this$1);
}

void HTMLDocument$HTMLReader$MetaAction::start($HTML$Tag* t, $MutableAttributeSet* a) {
	$init($HTML$Attribute);
	$var($Object, equiv, $nc(a)->getAttribute($HTML$Attribute::HTTPEQUIV));
	if (equiv != nullptr) {
		$assign(equiv, $nc(($cast($String, equiv)))->toLowerCase());
		if ($of(equiv)->equals("content-style-type"_s)) {
			$var($String, value, $cast($String, a->getAttribute($HTML$Attribute::CONTENT)));
			$nc(this->this$1->this$0)->setDefaultStyleSheetType(value);
			this->this$1->isStyleCSS = "text/css"_s->equals($($nc(this->this$1->this$0)->getDefaultStyleSheetType()));
		} else if ($of(equiv)->equals("default-style"_s)) {
			$set(this->this$1, defaultStyle, $cast($String, a->getAttribute($HTML$Attribute::CONTENT)));
		}
	}
	$HTMLDocument$HTMLReader$HiddenAction::start(t, a);
}

bool HTMLDocument$HTMLReader$MetaAction::isEmpty($HTML$Tag* t) {
	return true;
}

HTMLDocument$HTMLReader$MetaAction::HTMLDocument$HTMLReader$MetaAction() {
}

$Class* HTMLDocument$HTMLReader$MetaAction::load$($String* name, bool initialize) {
	$loadClass(HTMLDocument$HTMLReader$MetaAction, name, initialize, &_HTMLDocument$HTMLReader$MetaAction_ClassInfo_, allocate$HTMLDocument$HTMLReader$MetaAction);
	return class$;
}

$Class* HTMLDocument$HTMLReader$MetaAction::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax