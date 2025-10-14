#include <javax/swing/text/html/HTMLDocument$HTMLReader$AnchorAction.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$CharacterAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLDocument$HTMLReader = ::javax::swing::text::html::HTMLDocument$HTMLReader;
using $HTMLDocument$HTMLReader$CharacterAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$CharacterAction;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _HTMLDocument$HTMLReader$AnchorAction_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/text/html/HTMLDocument$HTMLReader;", nullptr, $FINAL | $SYNTHETIC, $field(HTMLDocument$HTMLReader$AnchorAction, this$1)},
	{}
};

$MethodInfo _HTMLDocument$HTMLReader$AnchorAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/HTMLDocument$HTMLReader;)V", nullptr, 0, $method(static_cast<void(HTMLDocument$HTMLReader$AnchorAction::*)($HTMLDocument$HTMLReader*)>(&HTMLDocument$HTMLReader$AnchorAction::init$))},
	{"end", "(Ljavax/swing/text/html/HTML$Tag;)V", nullptr, $PUBLIC},
	{"start", "(Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/MutableAttributeSet;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HTMLDocument$HTMLReader$AnchorAction_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HTMLDocument$HTMLReader", "javax.swing.text.html.HTMLDocument", "HTMLReader", $PUBLIC},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$AnchorAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "AnchorAction", 0},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$CharacterAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "CharacterAction", $PUBLIC},
	{}
};

$ClassInfo _HTMLDocument$HTMLReader$AnchorAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.HTMLDocument$HTMLReader$AnchorAction",
	"javax.swing.text.html.HTMLDocument$HTMLReader$CharacterAction",
	nullptr,
	_HTMLDocument$HTMLReader$AnchorAction_FieldInfo_,
	_HTMLDocument$HTMLReader$AnchorAction_MethodInfo_,
	nullptr,
	nullptr,
	_HTMLDocument$HTMLReader$AnchorAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.HTMLDocument"
};

$Object* allocate$HTMLDocument$HTMLReader$AnchorAction($Class* clazz) {
	return $of($alloc(HTMLDocument$HTMLReader$AnchorAction));
}

void HTMLDocument$HTMLReader$AnchorAction::init$($HTMLDocument$HTMLReader* this$1) {
	$set(this, this$1, this$1);
	$HTMLDocument$HTMLReader$CharacterAction::init$(this$1);
}

void HTMLDocument$HTMLReader$AnchorAction::start($HTML$Tag* t, $MutableAttributeSet* attr) {
	this->this$1->emptyAnchor = true;
	$HTMLDocument$HTMLReader$CharacterAction::start(t, attr);
}

void HTMLDocument$HTMLReader$AnchorAction::end($HTML$Tag* t) {
	if (this->this$1->emptyAnchor) {
		$var($chars, one, $new($chars, 1));
		one->set(0, u'\n');
		this->this$1->addContent(one, 0, 1);
	}
	$HTMLDocument$HTMLReader$CharacterAction::end(t);
}

HTMLDocument$HTMLReader$AnchorAction::HTMLDocument$HTMLReader$AnchorAction() {
}

$Class* HTMLDocument$HTMLReader$AnchorAction::load$($String* name, bool initialize) {
	$loadClass(HTMLDocument$HTMLReader$AnchorAction, name, initialize, &_HTMLDocument$HTMLReader$AnchorAction_ClassInfo_, allocate$HTMLDocument$HTMLReader$AnchorAction);
	return class$;
}

$Class* HTMLDocument$HTMLReader$AnchorAction::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax