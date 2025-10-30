#include <javax/swing/text/html/HTMLDocument$HTMLReader$IsindexAction.h>

#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$TagAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader.h>
#include <jcpp.h>

#undef IMPLIED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLDocument$HTMLReader = ::javax::swing::text::html::HTMLDocument$HTMLReader;
using $HTMLDocument$HTMLReader$TagAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$TagAction;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _HTMLDocument$HTMLReader$IsindexAction_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/text/html/HTMLDocument$HTMLReader;", nullptr, $FINAL | $SYNTHETIC, $field(HTMLDocument$HTMLReader$IsindexAction, this$1)},
	{}
};

$MethodInfo _HTMLDocument$HTMLReader$IsindexAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/HTMLDocument$HTMLReader;)V", nullptr, $PUBLIC, $method(static_cast<void(HTMLDocument$HTMLReader$IsindexAction::*)($HTMLDocument$HTMLReader*)>(&HTMLDocument$HTMLReader$IsindexAction::init$))},
	{"start", "(Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/MutableAttributeSet;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HTMLDocument$HTMLReader$IsindexAction_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HTMLDocument$HTMLReader", "javax.swing.text.html.HTMLDocument", "HTMLReader", $PUBLIC},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$IsindexAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "IsindexAction", $PUBLIC},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$TagAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "TagAction", $PUBLIC},
	{}
};

$ClassInfo _HTMLDocument$HTMLReader$IsindexAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.HTMLDocument$HTMLReader$IsindexAction",
	"javax.swing.text.html.HTMLDocument$HTMLReader$TagAction",
	nullptr,
	_HTMLDocument$HTMLReader$IsindexAction_FieldInfo_,
	_HTMLDocument$HTMLReader$IsindexAction_MethodInfo_,
	nullptr,
	nullptr,
	_HTMLDocument$HTMLReader$IsindexAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.HTMLDocument"
};

$Object* allocate$HTMLDocument$HTMLReader$IsindexAction($Class* clazz) {
	return $of($alloc(HTMLDocument$HTMLReader$IsindexAction));
}

void HTMLDocument$HTMLReader$IsindexAction::init$($HTMLDocument$HTMLReader* this$1) {
	$set(this, this$1, this$1);
	$HTMLDocument$HTMLReader$TagAction::init$(this$1);
}

void HTMLDocument$HTMLReader$IsindexAction::start($HTML$Tag* t, $MutableAttributeSet* a) {
	$init($HTML$Tag);
	this->this$1->blockOpen($HTML$Tag::IMPLIED, $$new($SimpleAttributeSet));
	this->this$1->addSpecialElement(t, a);
	this->this$1->blockClose($HTML$Tag::IMPLIED);
}

HTMLDocument$HTMLReader$IsindexAction::HTMLDocument$HTMLReader$IsindexAction() {
}

$Class* HTMLDocument$HTMLReader$IsindexAction::load$($String* name, bool initialize) {
	$loadClass(HTMLDocument$HTMLReader$IsindexAction, name, initialize, &_HTMLDocument$HTMLReader$IsindexAction_ClassInfo_, allocate$HTMLDocument$HTMLReader$IsindexAction);
	return class$;
}

$Class* HTMLDocument$HTMLReader$IsindexAction::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax