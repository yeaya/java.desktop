#include <javax/swing/text/html/HTMLDocument$HTMLReader$ParagraphAction.h>

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
#include <javax/swing/text/html/HTMLDocument$HTMLReader$BlockAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLDocument$HTMLReader = ::javax::swing::text::html::HTMLDocument$HTMLReader;
using $HTMLDocument$HTMLReader$BlockAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$BlockAction;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _HTMLDocument$HTMLReader$ParagraphAction_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/text/html/HTMLDocument$HTMLReader;", nullptr, $FINAL | $SYNTHETIC, $field(HTMLDocument$HTMLReader$ParagraphAction, this$1)},
	{}
};

$MethodInfo _HTMLDocument$HTMLReader$ParagraphAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/HTMLDocument$HTMLReader;)V", nullptr, $PUBLIC, $method(static_cast<void(HTMLDocument$HTMLReader$ParagraphAction::*)($HTMLDocument$HTMLReader*)>(&HTMLDocument$HTMLReader$ParagraphAction::init$))},
	{"end", "(Ljavax/swing/text/html/HTML$Tag;)V", nullptr, $PUBLIC},
	{"start", "(Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/MutableAttributeSet;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HTMLDocument$HTMLReader$ParagraphAction_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HTMLDocument$HTMLReader", "javax.swing.text.html.HTMLDocument", "HTMLReader", $PUBLIC},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$ParagraphAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "ParagraphAction", $PUBLIC},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$BlockAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "BlockAction", $PUBLIC},
	{}
};

$ClassInfo _HTMLDocument$HTMLReader$ParagraphAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.HTMLDocument$HTMLReader$ParagraphAction",
	"javax.swing.text.html.HTMLDocument$HTMLReader$BlockAction",
	nullptr,
	_HTMLDocument$HTMLReader$ParagraphAction_FieldInfo_,
	_HTMLDocument$HTMLReader$ParagraphAction_MethodInfo_,
	nullptr,
	nullptr,
	_HTMLDocument$HTMLReader$ParagraphAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.HTMLDocument"
};

$Object* allocate$HTMLDocument$HTMLReader$ParagraphAction($Class* clazz) {
	return $of($alloc(HTMLDocument$HTMLReader$ParagraphAction));
}

void HTMLDocument$HTMLReader$ParagraphAction::init$($HTMLDocument$HTMLReader* this$1) {
	$set(this, this$1, this$1);
	$HTMLDocument$HTMLReader$BlockAction::init$(this$1);
}

void HTMLDocument$HTMLReader$ParagraphAction::start($HTML$Tag* t, $MutableAttributeSet* a) {
	$HTMLDocument$HTMLReader$BlockAction::start(t, a);
	this->this$1->inParagraph = true;
}

void HTMLDocument$HTMLReader$ParagraphAction::end($HTML$Tag* t) {
	$HTMLDocument$HTMLReader$BlockAction::end(t);
	this->this$1->inParagraph = false;
}

HTMLDocument$HTMLReader$ParagraphAction::HTMLDocument$HTMLReader$ParagraphAction() {
}

$Class* HTMLDocument$HTMLReader$ParagraphAction::load$($String* name, bool initialize) {
	$loadClass(HTMLDocument$HTMLReader$ParagraphAction, name, initialize, &_HTMLDocument$HTMLReader$ParagraphAction_ClassInfo_, allocate$HTMLDocument$HTMLReader$ParagraphAction);
	return class$;
}

$Class* HTMLDocument$HTMLReader$ParagraphAction::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax