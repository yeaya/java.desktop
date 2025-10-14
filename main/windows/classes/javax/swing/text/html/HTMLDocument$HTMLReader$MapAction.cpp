#include <javax/swing/text/html/HTMLDocument$HTMLReader$MapAction.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$TagAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/Map.h>
#include <jcpp.h>

#undef NAME

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $HTMLDocument$HTMLReader = ::javax::swing::text::html::HTMLDocument$HTMLReader;
using $HTMLDocument$HTMLReader$TagAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$TagAction;
using $Map = ::javax::swing::text::html::Map;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _HTMLDocument$HTMLReader$MapAction_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/text/html/HTMLDocument$HTMLReader;", nullptr, $FINAL | $SYNTHETIC, $field(HTMLDocument$HTMLReader$MapAction, this$1)},
	{}
};

$MethodInfo _HTMLDocument$HTMLReader$MapAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/HTMLDocument$HTMLReader;)V", nullptr, 0, $method(static_cast<void(HTMLDocument$HTMLReader$MapAction::*)($HTMLDocument$HTMLReader*)>(&HTMLDocument$HTMLReader$MapAction::init$))},
	{"end", "(Ljavax/swing/text/html/HTML$Tag;)V", nullptr, $PUBLIC},
	{"start", "(Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/MutableAttributeSet;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HTMLDocument$HTMLReader$MapAction_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HTMLDocument$HTMLReader", "javax.swing.text.html.HTMLDocument", "HTMLReader", $PUBLIC},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$MapAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "MapAction", 0},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$TagAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "TagAction", $PUBLIC},
	{}
};

$ClassInfo _HTMLDocument$HTMLReader$MapAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.HTMLDocument$HTMLReader$MapAction",
	"javax.swing.text.html.HTMLDocument$HTMLReader$TagAction",
	nullptr,
	_HTMLDocument$HTMLReader$MapAction_FieldInfo_,
	_HTMLDocument$HTMLReader$MapAction_MethodInfo_,
	nullptr,
	nullptr,
	_HTMLDocument$HTMLReader$MapAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.HTMLDocument"
};

$Object* allocate$HTMLDocument$HTMLReader$MapAction($Class* clazz) {
	return $of($alloc(HTMLDocument$HTMLReader$MapAction));
}

void HTMLDocument$HTMLReader$MapAction::init$($HTMLDocument$HTMLReader* this$1) {
	$set(this, this$1, this$1);
	$HTMLDocument$HTMLReader$TagAction::init$(this$1);
}

void HTMLDocument$HTMLReader$MapAction::start($HTML$Tag* t, $MutableAttributeSet* a) {
	$init($HTML$Attribute);
	$set(this->this$1, lastMap, $new($Map, $cast($String, $($nc(a)->getAttribute($HTML$Attribute::NAME)))));
	$nc(this->this$1->this$0)->addMap(this->this$1->lastMap);
}

void HTMLDocument$HTMLReader$MapAction::end($HTML$Tag* t) {
}

HTMLDocument$HTMLReader$MapAction::HTMLDocument$HTMLReader$MapAction() {
}

$Class* HTMLDocument$HTMLReader$MapAction::load$($String* name, bool initialize) {
	$loadClass(HTMLDocument$HTMLReader$MapAction, name, initialize, &_HTMLDocument$HTMLReader$MapAction_ClassInfo_, allocate$HTMLDocument$HTMLReader$MapAction);
	return class$;
}

$Class* HTMLDocument$HTMLReader$MapAction::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax