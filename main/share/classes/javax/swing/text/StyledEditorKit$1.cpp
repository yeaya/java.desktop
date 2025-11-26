#include <javax/swing/text/StyledEditorKit$1.h>

#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/StyledEditorKit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $Element = ::javax::swing::text::Element;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $StyledEditorKit = ::javax::swing::text::StyledEditorKit;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _StyledEditorKit$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/StyledEditorKit;", nullptr, $FINAL | $SYNTHETIC, $field(StyledEditorKit$1, this$0)},
	{}
};

$MethodInfo _StyledEditorKit$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/StyledEditorKit;)V", nullptr, 0, $method(static_cast<void(StyledEditorKit$1::*)($StyledEditorKit*)>(&StyledEditorKit$1::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getResolveParent", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _StyledEditorKit$1_EnclosingMethodInfo_ = {
	"javax.swing.text.StyledEditorKit",
	"createInputAttributes",
	"()V"
};

$InnerClassInfo _StyledEditorKit$1_InnerClassesInfo_[] = {
	{"javax.swing.text.StyledEditorKit$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _StyledEditorKit$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.StyledEditorKit$1",
	"javax.swing.text.SimpleAttributeSet",
	nullptr,
	_StyledEditorKit$1_FieldInfo_,
	_StyledEditorKit$1_MethodInfo_,
	nullptr,
	&_StyledEditorKit$1_EnclosingMethodInfo_,
	_StyledEditorKit$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.StyledEditorKit"
};

$Object* allocate$StyledEditorKit$1($Class* clazz) {
	return $of($alloc(StyledEditorKit$1));
}

void StyledEditorKit$1::init$($StyledEditorKit* this$0) {
	$set(this, this$0, this$0);
	$SimpleAttributeSet::init$();
}

$AttributeSet* StyledEditorKit$1::getResolveParent() {
	return (this->this$0->currentParagraph != nullptr) ? $nc(this->this$0->currentParagraph)->getAttributes() : ($AttributeSet*)nullptr;
}

$Object* StyledEditorKit$1::clone() {
	return $of($new($SimpleAttributeSet, this));
}

StyledEditorKit$1::StyledEditorKit$1() {
}

$Class* StyledEditorKit$1::load$($String* name, bool initialize) {
	$loadClass(StyledEditorKit$1, name, initialize, &_StyledEditorKit$1_ClassInfo_, allocate$StyledEditorKit$1);
	return class$;
}

$Class* StyledEditorKit$1::class$ = nullptr;

		} // text
	} // swing
} // javax