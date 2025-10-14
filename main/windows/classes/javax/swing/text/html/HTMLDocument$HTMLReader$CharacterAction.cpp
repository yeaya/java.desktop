#include <javax/swing/text/html/HTMLDocument$HTMLReader$CharacterAction.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$TagAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader.h>
#include <javax/swing/text/html/HTMLEditorKit$ParserCallback.h>
#include <jcpp.h>

#undef IMPLIED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLDocument$HTMLReader = ::javax::swing::text::html::HTMLDocument$HTMLReader;
using $HTMLDocument$HTMLReader$TagAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$TagAction;
using $HTMLEditorKit$ParserCallback = ::javax::swing::text::html::HTMLEditorKit$ParserCallback;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _HTMLDocument$HTMLReader$CharacterAction_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/text/html/HTMLDocument$HTMLReader;", nullptr, $FINAL | $SYNTHETIC, $field(HTMLDocument$HTMLReader$CharacterAction, this$1)},
	{}
};

$MethodInfo _HTMLDocument$HTMLReader$CharacterAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/HTMLDocument$HTMLReader;)V", nullptr, $PUBLIC, $method(static_cast<void(HTMLDocument$HTMLReader$CharacterAction::*)($HTMLDocument$HTMLReader*)>(&HTMLDocument$HTMLReader$CharacterAction::init$))},
	{"end", "(Ljavax/swing/text/html/HTML$Tag;)V", nullptr, $PUBLIC},
	{"start", "(Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/MutableAttributeSet;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HTMLDocument$HTMLReader$CharacterAction_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HTMLDocument$HTMLReader", "javax.swing.text.html.HTMLDocument", "HTMLReader", $PUBLIC},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$CharacterAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "CharacterAction", $PUBLIC},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$TagAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "TagAction", $PUBLIC},
	{}
};

$ClassInfo _HTMLDocument$HTMLReader$CharacterAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.HTMLDocument$HTMLReader$CharacterAction",
	"javax.swing.text.html.HTMLDocument$HTMLReader$TagAction",
	nullptr,
	_HTMLDocument$HTMLReader$CharacterAction_FieldInfo_,
	_HTMLDocument$HTMLReader$CharacterAction_MethodInfo_,
	nullptr,
	nullptr,
	_HTMLDocument$HTMLReader$CharacterAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.HTMLDocument"
};

$Object* allocate$HTMLDocument$HTMLReader$CharacterAction($Class* clazz) {
	return $of($alloc(HTMLDocument$HTMLReader$CharacterAction));
}

void HTMLDocument$HTMLReader$CharacterAction::init$($HTMLDocument$HTMLReader* this$1) {
	$set(this, this$1, this$1);
	$HTMLDocument$HTMLReader$TagAction::init$(this$1);
}

void HTMLDocument$HTMLReader$CharacterAction::start($HTML$Tag* t, $MutableAttributeSet* attr) {
	this->this$1->pushCharacterStyle();
	if (!this->this$1->foundInsertTag$) {
		bool insert = this->this$1->canInsertTag(t, attr, false);
		if (this->this$1->foundInsertTag$) {
			if (!this->this$1->inParagraph) {
				this->this$1->inParagraph = (this->this$1->impliedP = true);
			}
		}
		if (!insert) {
			return;
		}
	}
	$init($HTMLEditorKit$ParserCallback);
	if ($nc(attr)->isDefined($HTMLEditorKit$ParserCallback::IMPLIED)) {
		attr->removeAttribute($HTMLEditorKit$ParserCallback::IMPLIED);
	}
	$nc(this->this$1->charAttr)->addAttribute(t, $($nc(attr)->copyAttributes()));
	if (this->this$1->styleAttributes != nullptr) {
		$nc(this->this$1->charAttr)->addAttributes(this->this$1->styleAttributes);
	}
}

void HTMLDocument$HTMLReader$CharacterAction::end($HTML$Tag* t) {
	this->this$1->popCharacterStyle();
}

HTMLDocument$HTMLReader$CharacterAction::HTMLDocument$HTMLReader$CharacterAction() {
}

$Class* HTMLDocument$HTMLReader$CharacterAction::load$($String* name, bool initialize) {
	$loadClass(HTMLDocument$HTMLReader$CharacterAction, name, initialize, &_HTMLDocument$HTMLReader$CharacterAction_ClassInfo_, allocate$HTMLDocument$HTMLReader$CharacterAction);
	return class$;
}

$Class* HTMLDocument$HTMLReader$CharacterAction::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax