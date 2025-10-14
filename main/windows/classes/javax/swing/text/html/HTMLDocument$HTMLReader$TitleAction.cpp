#include <javax/swing/text/html/HTMLDocument$HTMLReader$TitleAction.h>

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
#include <javax/swing/text/html/HTMLDocument$HTMLReader$HiddenAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLDocument$HTMLReader = ::javax::swing::text::html::HTMLDocument$HTMLReader;
using $HTMLDocument$HTMLReader$HiddenAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$HiddenAction;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _HTMLDocument$HTMLReader$TitleAction_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/text/html/HTMLDocument$HTMLReader;", nullptr, $FINAL | $SYNTHETIC, $field(HTMLDocument$HTMLReader$TitleAction, this$1)},
	{}
};

$MethodInfo _HTMLDocument$HTMLReader$TitleAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/HTMLDocument$HTMLReader;)V", nullptr, 0, $method(static_cast<void(HTMLDocument$HTMLReader$TitleAction::*)($HTMLDocument$HTMLReader*)>(&HTMLDocument$HTMLReader$TitleAction::init$))},
	{"end", "(Ljavax/swing/text/html/HTML$Tag;)V", nullptr, $PUBLIC},
	{"isEmpty", "(Ljavax/swing/text/html/HTML$Tag;)Z", nullptr, 0},
	{"start", "(Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/MutableAttributeSet;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HTMLDocument$HTMLReader$TitleAction_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HTMLDocument$HTMLReader", "javax.swing.text.html.HTMLDocument", "HTMLReader", $PUBLIC},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$TitleAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "TitleAction", 0},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$HiddenAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "HiddenAction", $PUBLIC},
	{}
};

$ClassInfo _HTMLDocument$HTMLReader$TitleAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.HTMLDocument$HTMLReader$TitleAction",
	"javax.swing.text.html.HTMLDocument$HTMLReader$HiddenAction",
	nullptr,
	_HTMLDocument$HTMLReader$TitleAction_FieldInfo_,
	_HTMLDocument$HTMLReader$TitleAction_MethodInfo_,
	nullptr,
	nullptr,
	_HTMLDocument$HTMLReader$TitleAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.HTMLDocument"
};

$Object* allocate$HTMLDocument$HTMLReader$TitleAction($Class* clazz) {
	return $of($alloc(HTMLDocument$HTMLReader$TitleAction));
}

void HTMLDocument$HTMLReader$TitleAction::init$($HTMLDocument$HTMLReader* this$1) {
	$set(this, this$1, this$1);
	$HTMLDocument$HTMLReader$HiddenAction::init$(this$1);
}

void HTMLDocument$HTMLReader$TitleAction::start($HTML$Tag* t, $MutableAttributeSet* attr) {
	this->this$1->inTitle = true;
	$HTMLDocument$HTMLReader$HiddenAction::start(t, attr);
}

void HTMLDocument$HTMLReader$TitleAction::end($HTML$Tag* t) {
	this->this$1->inTitle = false;
	$HTMLDocument$HTMLReader$HiddenAction::end(t);
}

bool HTMLDocument$HTMLReader$TitleAction::isEmpty($HTML$Tag* t) {
	return false;
}

HTMLDocument$HTMLReader$TitleAction::HTMLDocument$HTMLReader$TitleAction() {
}

$Class* HTMLDocument$HTMLReader$TitleAction::load$($String* name, bool initialize) {
	$loadClass(HTMLDocument$HTMLReader$TitleAction, name, initialize, &_HTMLDocument$HTMLReader$TitleAction_ClassInfo_, allocate$HTMLDocument$HTMLReader$TitleAction);
	return class$;
}

$Class* HTMLDocument$HTMLReader$TitleAction::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax