#include <javax/swing/text/AbstractDocument$BidiElement.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/AbstractDocument$AbstractElement.h>
#include <javax/swing/text/AbstractDocument$LeafElement.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/StyleConstants.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AbstractDocument$AbstractElement = ::javax::swing::text::AbstractDocument$AbstractElement;
using $AbstractDocument$LeafElement = ::javax::swing::text::AbstractDocument$LeafElement;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $Element = ::javax::swing::text::Element;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $StyleConstants = ::javax::swing::text::StyleConstants;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _AbstractDocument$BidiElement_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/AbstractDocument;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractDocument$BidiElement, this$0)},
	{}
};

$MethodInfo _AbstractDocument$BidiElement_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/AbstractDocument;Ljavax/swing/text/Element;III)V", nullptr, 0, $method(static_cast<void(AbstractDocument$BidiElement::*)($AbstractDocument*,$Element*,int32_t,int32_t,int32_t)>(&AbstractDocument$BidiElement::init$))},
	{"getLevel", "()I", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"isLeftToRight", "()Z", nullptr, 0},
	{}
};

$InnerClassInfo _AbstractDocument$BidiElement_InnerClassesInfo_[] = {
	{"javax.swing.text.AbstractDocument$BidiElement", "javax.swing.text.AbstractDocument", "BidiElement", 0},
	{"javax.swing.text.AbstractDocument$LeafElement", "javax.swing.text.AbstractDocument", "LeafElement", $PUBLIC},
	{}
};

$ClassInfo _AbstractDocument$BidiElement_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.AbstractDocument$BidiElement",
	"javax.swing.text.AbstractDocument$LeafElement",
	nullptr,
	_AbstractDocument$BidiElement_FieldInfo_,
	_AbstractDocument$BidiElement_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractDocument$BidiElement_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.AbstractDocument"
};

$Object* allocate$AbstractDocument$BidiElement($Class* clazz) {
	return $of($alloc(AbstractDocument$BidiElement));
}

void AbstractDocument$BidiElement::init$($AbstractDocument* this$0, $Element* parent, int32_t start, int32_t end, int32_t level) {
	$set(this, this$0, this$0);
	$AbstractDocument$LeafElement::init$(this$0, parent, $$new($SimpleAttributeSet), start, end);
	$init($StyleConstants);
	addAttribute($StyleConstants::BidiLevel, $($Integer::valueOf(level)));
}

$String* AbstractDocument$BidiElement::getName() {
	return "bidi level"_s;
}

int32_t AbstractDocument$BidiElement::getLevel() {
	$init($StyleConstants);
	$var($Integer, o, $cast($Integer, getAttribute($StyleConstants::BidiLevel)));
	if (o != nullptr) {
		return o->intValue();
	}
	return 0;
}

bool AbstractDocument$BidiElement::isLeftToRight() {
	return ((getLevel() % 2) == 0);
}

AbstractDocument$BidiElement::AbstractDocument$BidiElement() {
}

$Class* AbstractDocument$BidiElement::load$($String* name, bool initialize) {
	$loadClass(AbstractDocument$BidiElement, name, initialize, &_AbstractDocument$BidiElement_ClassInfo_, allocate$AbstractDocument$BidiElement);
	return class$;
}

$Class* AbstractDocument$BidiElement::class$ = nullptr;

		} // text
	} // swing
} // javax