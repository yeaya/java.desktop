#include <javax/swing/text/DefaultStyledDocument$SectionElement.h>

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
#include <javax/swing/text/DefaultStyledDocument.h>
#include <javax/swing/text/Element.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AbstractDocument$BranchElement = ::javax::swing::text::AbstractDocument$BranchElement;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $DefaultStyledDocument = ::javax::swing::text::DefaultStyledDocument;
using $Element = ::javax::swing::text::Element;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _DefaultStyledDocument$SectionElement_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/DefaultStyledDocument;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultStyledDocument$SectionElement, this$0)},
	{}
};

$MethodInfo _DefaultStyledDocument$SectionElement_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/DefaultStyledDocument;)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultStyledDocument$SectionElement::*)($DefaultStyledDocument*)>(&DefaultStyledDocument$SectionElement::init$))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultStyledDocument$SectionElement_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultStyledDocument$SectionElement", "javax.swing.text.DefaultStyledDocument", "SectionElement", $PROTECTED},
	{"javax.swing.text.AbstractDocument$BranchElement", "javax.swing.text.AbstractDocument", "BranchElement", $PUBLIC},
	{}
};

$ClassInfo _DefaultStyledDocument$SectionElement_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.DefaultStyledDocument$SectionElement",
	"javax.swing.text.AbstractDocument$BranchElement",
	nullptr,
	_DefaultStyledDocument$SectionElement_FieldInfo_,
	_DefaultStyledDocument$SectionElement_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultStyledDocument$SectionElement_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultStyledDocument"
};

$Object* allocate$DefaultStyledDocument$SectionElement($Class* clazz) {
	return $of($alloc(DefaultStyledDocument$SectionElement));
}

void DefaultStyledDocument$SectionElement::init$($DefaultStyledDocument* this$0) {
	$set(this, this$0, this$0);
	$AbstractDocument$BranchElement::init$(this$0, nullptr, nullptr);
}

$String* DefaultStyledDocument$SectionElement::getName() {
	return "section"_s;
}

DefaultStyledDocument$SectionElement::DefaultStyledDocument$SectionElement() {
}

$Class* DefaultStyledDocument$SectionElement::load$($String* name, bool initialize) {
	$loadClass(DefaultStyledDocument$SectionElement, name, initialize, &_DefaultStyledDocument$SectionElement_ClassInfo_, allocate$DefaultStyledDocument$SectionElement);
	return class$;
}

$Class* DefaultStyledDocument$SectionElement::class$ = nullptr;

		} // text
	} // swing
} // javax