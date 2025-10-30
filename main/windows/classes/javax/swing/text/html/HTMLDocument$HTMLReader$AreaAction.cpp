#include <javax/swing/text/html/HTMLDocument$HTMLReader$AreaAction.h>

#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$TagAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader.h>
#include <javax/swing/text/html/Map.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLDocument$HTMLReader = ::javax::swing::text::html::HTMLDocument$HTMLReader;
using $HTMLDocument$HTMLReader$TagAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$TagAction;
using $Map = ::javax::swing::text::html::Map;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _HTMLDocument$HTMLReader$AreaAction_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/text/html/HTMLDocument$HTMLReader;", nullptr, $FINAL | $SYNTHETIC, $field(HTMLDocument$HTMLReader$AreaAction, this$1)},
	{}
};

$MethodInfo _HTMLDocument$HTMLReader$AreaAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/HTMLDocument$HTMLReader;)V", nullptr, 0, $method(static_cast<void(HTMLDocument$HTMLReader$AreaAction::*)($HTMLDocument$HTMLReader*)>(&HTMLDocument$HTMLReader$AreaAction::init$))},
	{"end", "(Ljavax/swing/text/html/HTML$Tag;)V", nullptr, $PUBLIC},
	{"start", "(Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/MutableAttributeSet;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HTMLDocument$HTMLReader$AreaAction_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HTMLDocument$HTMLReader", "javax.swing.text.html.HTMLDocument", "HTMLReader", $PUBLIC},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$AreaAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "AreaAction", 0},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$TagAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "TagAction", $PUBLIC},
	{}
};

$ClassInfo _HTMLDocument$HTMLReader$AreaAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.HTMLDocument$HTMLReader$AreaAction",
	"javax.swing.text.html.HTMLDocument$HTMLReader$TagAction",
	nullptr,
	_HTMLDocument$HTMLReader$AreaAction_FieldInfo_,
	_HTMLDocument$HTMLReader$AreaAction_MethodInfo_,
	nullptr,
	nullptr,
	_HTMLDocument$HTMLReader$AreaAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.HTMLDocument"
};

$Object* allocate$HTMLDocument$HTMLReader$AreaAction($Class* clazz) {
	return $of($alloc(HTMLDocument$HTMLReader$AreaAction));
}

void HTMLDocument$HTMLReader$AreaAction::init$($HTMLDocument$HTMLReader* this$1) {
	$set(this, this$1, this$1);
	$HTMLDocument$HTMLReader$TagAction::init$(this$1);
}

void HTMLDocument$HTMLReader$AreaAction::start($HTML$Tag* t, $MutableAttributeSet* a) {
	if (this->this$1->lastMap != nullptr) {
		$nc(this->this$1->lastMap)->addArea($($nc(a)->copyAttributes()));
	}
}

void HTMLDocument$HTMLReader$AreaAction::end($HTML$Tag* t) {
}

HTMLDocument$HTMLReader$AreaAction::HTMLDocument$HTMLReader$AreaAction() {
}

$Class* HTMLDocument$HTMLReader$AreaAction::load$($String* name, bool initialize) {
	$loadClass(HTMLDocument$HTMLReader$AreaAction, name, initialize, &_HTMLDocument$HTMLReader$AreaAction_ClassInfo_, allocate$HTMLDocument$HTMLReader$AreaAction);
	return class$;
}

$Class* HTMLDocument$HTMLReader$AreaAction::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax