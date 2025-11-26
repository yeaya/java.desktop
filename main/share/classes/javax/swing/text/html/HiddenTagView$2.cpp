#include <javax/swing/text/html/HiddenTagView$2.h>

#include <javax/swing/text/html/HiddenTagView.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $HiddenTagView = ::javax::swing::text::html::HiddenTagView;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _HiddenTagView$2_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/html/HiddenTagView;", nullptr, $FINAL | $SYNTHETIC, $field(HiddenTagView$2, this$0)},
	{}
};

$MethodInfo _HiddenTagView$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/HiddenTagView;)V", nullptr, 0, $method(static_cast<void(HiddenTagView$2::*)($HiddenTagView*)>(&HiddenTagView$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _HiddenTagView$2_EnclosingMethodInfo_ = {
	"javax.swing.text.html.HiddenTagView",
	"updateModelFromText",
	"()V"
};

$InnerClassInfo _HiddenTagView$2_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HiddenTagView$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HiddenTagView$2_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.HiddenTagView$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_HiddenTagView$2_FieldInfo_,
	_HiddenTagView$2_MethodInfo_,
	nullptr,
	&_HiddenTagView$2_EnclosingMethodInfo_,
	_HiddenTagView$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.HiddenTagView"
};

$Object* allocate$HiddenTagView$2($Class* clazz) {
	return $of($alloc(HiddenTagView$2));
}

void HiddenTagView$2::init$($HiddenTagView* this$0) {
	$set(this, this$0, this$0);
}

void HiddenTagView$2::run() {
	this->this$0->_updateModelFromText();
}

HiddenTagView$2::HiddenTagView$2() {
}

$Class* HiddenTagView$2::load$($String* name, bool initialize) {
	$loadClass(HiddenTagView$2, name, initialize, &_HiddenTagView$2_ClassInfo_, allocate$HiddenTagView$2);
	return class$;
}

$Class* HiddenTagView$2::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax