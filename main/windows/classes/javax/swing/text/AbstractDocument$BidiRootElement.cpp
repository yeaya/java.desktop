#include <javax/swing/text/AbstractDocument$BidiRootElement.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/AbstractDocument$BranchElement.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Element.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AbstractDocument$BranchElement = ::javax::swing::text::AbstractDocument$BranchElement;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $Element = ::javax::swing::text::Element;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _AbstractDocument$BidiRootElement_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/AbstractDocument;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractDocument$BidiRootElement, this$0)},
	{}
};

$MethodInfo _AbstractDocument$BidiRootElement_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/AbstractDocument;)V", nullptr, 0, $method(static_cast<void(AbstractDocument$BidiRootElement::*)($AbstractDocument*)>(&AbstractDocument$BidiRootElement::init$))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AbstractDocument$BidiRootElement_InnerClassesInfo_[] = {
	{"javax.swing.text.AbstractDocument$BidiRootElement", "javax.swing.text.AbstractDocument", "BidiRootElement", 0},
	{"javax.swing.text.AbstractDocument$BranchElement", "javax.swing.text.AbstractDocument", "BranchElement", $PUBLIC},
	{}
};

$ClassInfo _AbstractDocument$BidiRootElement_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.AbstractDocument$BidiRootElement",
	"javax.swing.text.AbstractDocument$BranchElement",
	nullptr,
	_AbstractDocument$BidiRootElement_FieldInfo_,
	_AbstractDocument$BidiRootElement_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractDocument$BidiRootElement_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.AbstractDocument"
};

$Object* allocate$AbstractDocument$BidiRootElement($Class* clazz) {
	return $of($alloc(AbstractDocument$BidiRootElement));
}

void AbstractDocument$BidiRootElement::init$($AbstractDocument* this$0) {
	$set(this, this$0, this$0);
	$AbstractDocument$BranchElement::init$(this$0, nullptr, nullptr);
}

$String* AbstractDocument$BidiRootElement::getName() {
	return "bidi root"_s;
}

AbstractDocument$BidiRootElement::AbstractDocument$BidiRootElement() {
}

$Class* AbstractDocument$BidiRootElement::load$($String* name, bool initialize) {
	$loadClass(AbstractDocument$BidiRootElement, name, initialize, &_AbstractDocument$BidiRootElement_ClassInfo_, allocate$AbstractDocument$BidiRootElement);
	return class$;
}

$Class* AbstractDocument$BidiRootElement::class$ = nullptr;

		} // text
	} // swing
} // javax