#include <javax/swing/text/html/HiddenTagView$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _HiddenTagView$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/html/HiddenTagView;", nullptr, $FINAL | $SYNTHETIC, $field(HiddenTagView$1, this$0)},
	{}
};

$MethodInfo _HiddenTagView$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/HiddenTagView;)V", nullptr, 0, $method(static_cast<void(HiddenTagView$1::*)($HiddenTagView*)>(&HiddenTagView$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _HiddenTagView$1_EnclosingMethodInfo_ = {
	"javax.swing.text.html.HiddenTagView",
	"setTextFromModel",
	"()V"
};

$InnerClassInfo _HiddenTagView$1_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HiddenTagView$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HiddenTagView$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.HiddenTagView$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_HiddenTagView$1_FieldInfo_,
	_HiddenTagView$1_MethodInfo_,
	nullptr,
	&_HiddenTagView$1_EnclosingMethodInfo_,
	_HiddenTagView$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.HiddenTagView"
};

$Object* allocate$HiddenTagView$1($Class* clazz) {
	return $of($alloc(HiddenTagView$1));
}

void HiddenTagView$1::init$($HiddenTagView* this$0) {
	$set(this, this$0, this$0);
}

void HiddenTagView$1::run() {
	this->this$0->_setTextFromModel();
}

HiddenTagView$1::HiddenTagView$1() {
}

$Class* HiddenTagView$1::load$($String* name, bool initialize) {
	$loadClass(HiddenTagView$1, name, initialize, &_HiddenTagView$1_ClassInfo_, allocate$HiddenTagView$1);
	return class$;
}

$Class* HiddenTagView$1::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax