#include <javax/swing/text/html/HTMLDocument$HTMLReader$LinkAction.h>

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
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$HiddenAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader.h>
#include <jcpp.h>

#undef REL

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLDocument$HTMLReader = ::javax::swing::text::html::HTMLDocument$HTMLReader;
using $HTMLDocument$HTMLReader$HiddenAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$HiddenAction;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _HTMLDocument$HTMLReader$LinkAction_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/text/html/HTMLDocument$HTMLReader;", nullptr, $FINAL | $SYNTHETIC, $field(HTMLDocument$HTMLReader$LinkAction, this$1)},
	{}
};

$MethodInfo _HTMLDocument$HTMLReader$LinkAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/HTMLDocument$HTMLReader;)V", nullptr, 0, $method(static_cast<void(HTMLDocument$HTMLReader$LinkAction::*)($HTMLDocument$HTMLReader*)>(&HTMLDocument$HTMLReader$LinkAction::init$))},
	{"start", "(Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/MutableAttributeSet;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HTMLDocument$HTMLReader$LinkAction_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HTMLDocument$HTMLReader", "javax.swing.text.html.HTMLDocument", "HTMLReader", $PUBLIC},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$LinkAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "LinkAction", 0},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$HiddenAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "HiddenAction", $PUBLIC},
	{}
};

$ClassInfo _HTMLDocument$HTMLReader$LinkAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.HTMLDocument$HTMLReader$LinkAction",
	"javax.swing.text.html.HTMLDocument$HTMLReader$HiddenAction",
	nullptr,
	_HTMLDocument$HTMLReader$LinkAction_FieldInfo_,
	_HTMLDocument$HTMLReader$LinkAction_MethodInfo_,
	nullptr,
	nullptr,
	_HTMLDocument$HTMLReader$LinkAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.HTMLDocument"
};

$Object* allocate$HTMLDocument$HTMLReader$LinkAction($Class* clazz) {
	return $of($alloc(HTMLDocument$HTMLReader$LinkAction));
}

void HTMLDocument$HTMLReader$LinkAction::init$($HTMLDocument$HTMLReader* this$1) {
	$set(this, this$1, this$1);
	$HTMLDocument$HTMLReader$HiddenAction::init$(this$1);
}

void HTMLDocument$HTMLReader$LinkAction::start($HTML$Tag* t, $MutableAttributeSet* a) {
	$useLocalCurrentObjectStackCache();
	$init($HTML$Attribute);
	$var($String, rel, $cast($String, $nc(a)->getAttribute($HTML$Attribute::REL)));
	if (rel != nullptr) {
		$assign(rel, rel->toLowerCase());
		bool var$0 = rel->equals("stylesheet"_s);
		if (var$0 || rel->equals("alternate stylesheet"_s)) {
			if (this->this$1->styles == nullptr) {
				$set(this->this$1, styles, $new($Vector, 3));
			}
			$nc(this->this$1->styles)->addElement(t);
			$nc(this->this$1->styles)->addElement($(a->copyAttributes()));
		}
	}
	$HTMLDocument$HTMLReader$HiddenAction::start(t, a);
}

HTMLDocument$HTMLReader$LinkAction::HTMLDocument$HTMLReader$LinkAction() {
}

$Class* HTMLDocument$HTMLReader$LinkAction::load$($String* name, bool initialize) {
	$loadClass(HTMLDocument$HTMLReader$LinkAction, name, initialize, &_HTMLDocument$HTMLReader$LinkAction_ClassInfo_, allocate$HTMLDocument$HTMLReader$LinkAction);
	return class$;
}

$Class* HTMLDocument$HTMLReader$LinkAction::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax