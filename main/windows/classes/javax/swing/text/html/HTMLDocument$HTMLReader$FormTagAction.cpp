#include <javax/swing/text/html/HTMLDocument$HTMLReader$FormTagAction.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/HashMap.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$BlockAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $HTMLDocument$HTMLReader = ::javax::swing::text::html::HTMLDocument$HTMLReader;
using $HTMLDocument$HTMLReader$BlockAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$BlockAction;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _HTMLDocument$HTMLReader$FormTagAction_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/text/html/HTMLDocument$HTMLReader;", nullptr, $FINAL | $SYNTHETIC, $field(HTMLDocument$HTMLReader$FormTagAction, this$1)},
	{}
};

$MethodInfo _HTMLDocument$HTMLReader$FormTagAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/HTMLDocument$HTMLReader;)V", nullptr, $PRIVATE, $method(static_cast<void(HTMLDocument$HTMLReader$FormTagAction::*)($HTMLDocument$HTMLReader*)>(&HTMLDocument$HTMLReader$FormTagAction::init$))},
	{"end", "(Ljavax/swing/text/html/HTML$Tag;)V", nullptr, $PUBLIC},
	{"start", "(Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/MutableAttributeSet;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HTMLDocument$HTMLReader$FormTagAction_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HTMLDocument$HTMLReader", "javax.swing.text.html.HTMLDocument", "HTMLReader", $PUBLIC},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$FormTagAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "FormTagAction", $PRIVATE},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$BlockAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "BlockAction", $PUBLIC},
	{}
};

$ClassInfo _HTMLDocument$HTMLReader$FormTagAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.HTMLDocument$HTMLReader$FormTagAction",
	"javax.swing.text.html.HTMLDocument$HTMLReader$BlockAction",
	nullptr,
	_HTMLDocument$HTMLReader$FormTagAction_FieldInfo_,
	_HTMLDocument$HTMLReader$FormTagAction_MethodInfo_,
	nullptr,
	nullptr,
	_HTMLDocument$HTMLReader$FormTagAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.HTMLDocument"
};

$Object* allocate$HTMLDocument$HTMLReader$FormTagAction($Class* clazz) {
	return $of($alloc(HTMLDocument$HTMLReader$FormTagAction));
}

void HTMLDocument$HTMLReader$FormTagAction::init$($HTMLDocument$HTMLReader* this$1) {
	$set(this, this$1, this$1);
	$HTMLDocument$HTMLReader$BlockAction::init$(this$1);
}

void HTMLDocument$HTMLReader$FormTagAction::start($HTML$Tag* t, $MutableAttributeSet* attr) {
	$HTMLDocument$HTMLReader$BlockAction::start(t, attr);
	$set($nc(this->this$1->this$0), radioButtonGroupsMap, $new($HashMap));
}

void HTMLDocument$HTMLReader$FormTagAction::end($HTML$Tag* t) {
	$HTMLDocument$HTMLReader$BlockAction::end(t);
	$set($nc(this->this$1->this$0), radioButtonGroupsMap, nullptr);
}

HTMLDocument$HTMLReader$FormTagAction::HTMLDocument$HTMLReader$FormTagAction() {
}

$Class* HTMLDocument$HTMLReader$FormTagAction::load$($String* name, bool initialize) {
	$loadClass(HTMLDocument$HTMLReader$FormTagAction, name, initialize, &_HTMLDocument$HTMLReader$FormTagAction_ClassInfo_, allocate$HTMLDocument$HTMLReader$FormTagAction);
	return class$;
}

$Class* HTMLDocument$HTMLReader$FormTagAction::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax