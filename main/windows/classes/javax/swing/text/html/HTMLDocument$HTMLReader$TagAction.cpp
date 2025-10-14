#include <javax/swing/text/html/HTMLDocument$HTMLReader$TagAction.h>

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
#include <javax/swing/text/html/HTMLDocument$HTMLReader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLDocument$HTMLReader = ::javax::swing::text::html::HTMLDocument$HTMLReader;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _HTMLDocument$HTMLReader$TagAction_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/text/html/HTMLDocument$HTMLReader;", nullptr, $FINAL | $SYNTHETIC, $field(HTMLDocument$HTMLReader$TagAction, this$1)},
	{}
};

$MethodInfo _HTMLDocument$HTMLReader$TagAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/HTMLDocument$HTMLReader;)V", nullptr, $PUBLIC, $method(static_cast<void(HTMLDocument$HTMLReader$TagAction::*)($HTMLDocument$HTMLReader*)>(&HTMLDocument$HTMLReader$TagAction::init$))},
	{"end", "(Ljavax/swing/text/html/HTML$Tag;)V", nullptr, $PUBLIC},
	{"start", "(Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/MutableAttributeSet;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HTMLDocument$HTMLReader$TagAction_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HTMLDocument$HTMLReader", "javax.swing.text.html.HTMLDocument", "HTMLReader", $PUBLIC},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$TagAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "TagAction", $PUBLIC},
	{}
};

$ClassInfo _HTMLDocument$HTMLReader$TagAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.HTMLDocument$HTMLReader$TagAction",
	"java.lang.Object",
	nullptr,
	_HTMLDocument$HTMLReader$TagAction_FieldInfo_,
	_HTMLDocument$HTMLReader$TagAction_MethodInfo_,
	nullptr,
	nullptr,
	_HTMLDocument$HTMLReader$TagAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.HTMLDocument"
};

$Object* allocate$HTMLDocument$HTMLReader$TagAction($Class* clazz) {
	return $of($alloc(HTMLDocument$HTMLReader$TagAction));
}

void HTMLDocument$HTMLReader$TagAction::init$($HTMLDocument$HTMLReader* this$1) {
	$set(this, this$1, this$1);
}

void HTMLDocument$HTMLReader$TagAction::start($HTML$Tag* t, $MutableAttributeSet* a) {
}

void HTMLDocument$HTMLReader$TagAction::end($HTML$Tag* t) {
}

HTMLDocument$HTMLReader$TagAction::HTMLDocument$HTMLReader$TagAction() {
}

$Class* HTMLDocument$HTMLReader$TagAction::load$($String* name, bool initialize) {
	$loadClass(HTMLDocument$HTMLReader$TagAction, name, initialize, &_HTMLDocument$HTMLReader$TagAction_ClassInfo_, allocate$HTMLDocument$HTMLReader$TagAction);
	return class$;
}

$Class* HTMLDocument$HTMLReader$TagAction::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax