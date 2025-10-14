#include <javax/swing/text/html/HTMLDocument$HTMLReader$PreAction.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/html/CSS$Attribute.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$BlockAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader.h>
#include <jcpp.h>

#undef IMPLIED
#undef WHITE_SPACE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $CSS$Attribute = ::javax::swing::text::html::CSS$Attribute;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLDocument$HTMLReader = ::javax::swing::text::html::HTMLDocument$HTMLReader;
using $HTMLDocument$HTMLReader$BlockAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$BlockAction;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _HTMLDocument$HTMLReader$PreAction_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/text/html/HTMLDocument$HTMLReader;", nullptr, $FINAL | $SYNTHETIC, $field(HTMLDocument$HTMLReader$PreAction, this$1)},
	{}
};

$MethodInfo _HTMLDocument$HTMLReader$PreAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/HTMLDocument$HTMLReader;)V", nullptr, $PUBLIC, $method(static_cast<void(HTMLDocument$HTMLReader$PreAction::*)($HTMLDocument$HTMLReader*)>(&HTMLDocument$HTMLReader$PreAction::init$))},
	{"end", "(Ljavax/swing/text/html/HTML$Tag;)V", nullptr, $PUBLIC},
	{"start", "(Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/MutableAttributeSet;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HTMLDocument$HTMLReader$PreAction_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HTMLDocument$HTMLReader", "javax.swing.text.html.HTMLDocument", "HTMLReader", $PUBLIC},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$PreAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "PreAction", $PUBLIC},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$BlockAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "BlockAction", $PUBLIC},
	{}
};

$ClassInfo _HTMLDocument$HTMLReader$PreAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.HTMLDocument$HTMLReader$PreAction",
	"javax.swing.text.html.HTMLDocument$HTMLReader$BlockAction",
	nullptr,
	_HTMLDocument$HTMLReader$PreAction_FieldInfo_,
	_HTMLDocument$HTMLReader$PreAction_MethodInfo_,
	nullptr,
	nullptr,
	_HTMLDocument$HTMLReader$PreAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.HTMLDocument"
};

$Object* allocate$HTMLDocument$HTMLReader$PreAction($Class* clazz) {
	return $of($alloc(HTMLDocument$HTMLReader$PreAction));
}

void HTMLDocument$HTMLReader$PreAction::init$($HTMLDocument$HTMLReader* this$1) {
	$set(this, this$1, this$1);
	$HTMLDocument$HTMLReader$BlockAction::init$(this$1);
}

void HTMLDocument$HTMLReader$PreAction::start($HTML$Tag* t, $MutableAttributeSet* attr) {
	this->this$1->inPre = true;
	this->this$1->blockOpen(t, attr);
	$init($CSS$Attribute);
	$nc(attr)->addAttribute($CSS$Attribute::WHITE_SPACE, "pre"_s);
	$init($HTML$Tag);
	this->this$1->blockOpen($HTML$Tag::IMPLIED, attr);
}

void HTMLDocument$HTMLReader$PreAction::end($HTML$Tag* t) {
	$init($HTML$Tag);
	this->this$1->blockClose($HTML$Tag::IMPLIED);
	this->this$1->inPre = false;
	this->this$1->blockClose(t);
}

HTMLDocument$HTMLReader$PreAction::HTMLDocument$HTMLReader$PreAction() {
}

$Class* HTMLDocument$HTMLReader$PreAction::load$($String* name, bool initialize) {
	$loadClass(HTMLDocument$HTMLReader$PreAction, name, initialize, &_HTMLDocument$HTMLReader$PreAction_ClassInfo_, allocate$HTMLDocument$HTMLReader$PreAction);
	return class$;
}

$Class* HTMLDocument$HTMLReader$PreAction::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax