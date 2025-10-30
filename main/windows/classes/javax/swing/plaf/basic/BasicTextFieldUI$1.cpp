#include <javax/swing/plaf/basic/BasicTextFieldUI$1.h>

#include <javax/swing/plaf/basic/BasicTextFieldUI.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/GlyphView.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicTextFieldUI = ::javax::swing::plaf::basic::BasicTextFieldUI;
using $Element = ::javax::swing::text::Element;
using $GlyphView = ::javax::swing::text::GlyphView;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTextFieldUI$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicTextFieldUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTextFieldUI$1, this$0)},
	{}
};

$MethodInfo _BasicTextFieldUI$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTextFieldUI;Ljavax/swing/text/Element;)V", nullptr, 0, $method(static_cast<void(BasicTextFieldUI$1::*)($BasicTextFieldUI*,$Element*)>(&BasicTextFieldUI$1::init$))},
	{"getMinimumSpan", "(I)F", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _BasicTextFieldUI$1_EnclosingMethodInfo_ = {
	"javax.swing.plaf.basic.BasicTextFieldUI",
	"create",
	"(Ljavax/swing/text/Element;)Ljavax/swing/text/View;"
};

$InnerClassInfo _BasicTextFieldUI$1_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTextFieldUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BasicTextFieldUI$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicTextFieldUI$1",
	"javax.swing.text.GlyphView",
	nullptr,
	_BasicTextFieldUI$1_FieldInfo_,
	_BasicTextFieldUI$1_MethodInfo_,
	nullptr,
	&_BasicTextFieldUI$1_EnclosingMethodInfo_,
	_BasicTextFieldUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTextFieldUI"
};

$Object* allocate$BasicTextFieldUI$1($Class* clazz) {
	return $of($alloc(BasicTextFieldUI$1));
}

void BasicTextFieldUI$1::init$($BasicTextFieldUI* this$0, $Element* elem) {
	$set(this, this$0, this$0);
	$GlyphView::init$(elem);
}

float BasicTextFieldUI$1::getMinimumSpan(int32_t axis) {
	return getPreferredSpan(axis);
}

BasicTextFieldUI$1::BasicTextFieldUI$1() {
}

$Class* BasicTextFieldUI$1::load$($String* name, bool initialize) {
	$loadClass(BasicTextFieldUI$1, name, initialize, &_BasicTextFieldUI$1_ClassInfo_, allocate$BasicTextFieldUI$1);
	return class$;
}

$Class* BasicTextFieldUI$1::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax