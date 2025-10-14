#include <javax/swing/text/html/HTMLDocument$HTMLReader$BlockAction.h>

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

$FieldInfo _HTMLDocument$HTMLReader$BlockAction_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/text/html/HTMLDocument$HTMLReader;", nullptr, $FINAL | $SYNTHETIC, $field(HTMLDocument$HTMLReader$BlockAction, this$1)},
	{}
};

$MethodInfo _HTMLDocument$HTMLReader$BlockAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/HTMLDocument$HTMLReader;)V", nullptr, $PUBLIC, $method(static_cast<void(HTMLDocument$HTMLReader$BlockAction::*)($HTMLDocument$HTMLReader*)>(&HTMLDocument$HTMLReader$BlockAction::init$))},
	{"end", "(Ljavax/swing/text/html/HTML$Tag;)V", nullptr, $PUBLIC},
	{"start", "(Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/MutableAttributeSet;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HTMLDocument$HTMLReader$BlockAction_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HTMLDocument$HTMLReader", "javax.swing.text.html.HTMLDocument", "HTMLReader", $PUBLIC},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$BlockAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "BlockAction", $PUBLIC},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$TagAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "TagAction", $PUBLIC},
	{}
};

$ClassInfo _HTMLDocument$HTMLReader$BlockAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.HTMLDocument$HTMLReader$BlockAction",
	"javax.swing.text.html.HTMLDocument$HTMLReader$TagAction",
	nullptr,
	_HTMLDocument$HTMLReader$BlockAction_FieldInfo_,
	_HTMLDocument$HTMLReader$BlockAction_MethodInfo_,
	nullptr,
	nullptr,
	_HTMLDocument$HTMLReader$BlockAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.HTMLDocument"
};

$Object* allocate$HTMLDocument$HTMLReader$BlockAction($Class* clazz) {
	return $of($alloc(HTMLDocument$HTMLReader$BlockAction));
}

void HTMLDocument$HTMLReader$BlockAction::init$($HTMLDocument$HTMLReader* this$1) {
	$set(this, this$1, this$1);
	$HTMLDocument$HTMLReader$TagAction::init$(this$1);
}

void HTMLDocument$HTMLReader$BlockAction::start($HTML$Tag* t, $MutableAttributeSet* attr) {
	this->this$1->blockOpen(t, attr);
}

void HTMLDocument$HTMLReader$BlockAction::end($HTML$Tag* t) {
	this->this$1->blockClose(t);
}

HTMLDocument$HTMLReader$BlockAction::HTMLDocument$HTMLReader$BlockAction() {
}

$Class* HTMLDocument$HTMLReader$BlockAction::load$($String* name, bool initialize) {
	$loadClass(HTMLDocument$HTMLReader$BlockAction, name, initialize, &_HTMLDocument$HTMLReader$BlockAction_ClassInfo_, allocate$HTMLDocument$HTMLReader$BlockAction);
	return class$;
}

$Class* HTMLDocument$HTMLReader$BlockAction::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax