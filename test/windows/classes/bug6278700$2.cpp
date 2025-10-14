#include <bug6278700$2.h>

#include <bug6278700.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/BoundedRangeModel.h>
#include <javax/swing/DefaultBoundedRangeModel.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/event/ChangeListener.h>
#include <jcpp.h>

using $bug6278700 = ::bug6278700;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $BoundedRangeModel = ::javax::swing::BoundedRangeModel;
using $DefaultBoundedRangeModel = ::javax::swing::DefaultBoundedRangeModel;
using $JSlider = ::javax::swing::JSlider;
using $ChangeListener = ::javax::swing::event::ChangeListener;

$FieldInfo _bug6278700$2_FieldInfo_[] = {
	{"this$0", "Lbug6278700;", nullptr, $FINAL | $SYNTHETIC, $field(bug6278700$2, this$0)},
	{}
};

$MethodInfo _bug6278700$2_MethodInfo_[] = {
	{"<init>", "(Lbug6278700;)V", nullptr, 0, $method(static_cast<void(bug6278700$2::*)($bug6278700*)>(&bug6278700$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6278700$2_EnclosingMethodInfo_ = {
	"bug6278700",
	"<init>",
	"()V"
};

$InnerClassInfo _bug6278700$2_InnerClassesInfo_[] = {
	{"bug6278700$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6278700$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug6278700$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug6278700$2_FieldInfo_,
	_bug6278700$2_MethodInfo_,
	nullptr,
	&_bug6278700$2_EnclosingMethodInfo_,
	_bug6278700$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6278700"
};

$Object* allocate$bug6278700$2($Class* clazz) {
	return $of($alloc(bug6278700$2));
}

void bug6278700$2::init$($bug6278700* this$0) {
	$set(this, this$0, this$0);
}

void bug6278700$2::run() {
	$var($JSlider, slider, $new($JSlider, static_cast<$BoundedRangeModel*>($$new($DefaultBoundedRangeModel, 5, 0, 0, 10))));
	slider->addChangeListener(this->this$0->listener);
	slider->setValue(0);
	if (this->this$0->changeCount != 1) {
		$throwNew($RuntimeException, $$str({"Incorrect stateChanged count: "_s, $($Integer::toString(this->this$0->changeCount))}));
	}
	this->this$0->changeCount = 0;
	$assign(slider, $new($JSlider));
	slider->addChangeListener(this->this$0->listener);
	slider->setValue(0);
	if (this->this$0->changeCount != 1) {
		$throwNew($RuntimeException, $$str({"Incorrect stateChanged count: "_s, $($Integer::toString(this->this$0->changeCount))}));
	}
}

bug6278700$2::bug6278700$2() {
}

$Class* bug6278700$2::load$($String* name, bool initialize) {
	$loadClass(bug6278700$2, name, initialize, &_bug6278700$2_ClassInfo_, allocate$bug6278700$2);
	return class$;
}

$Class* bug6278700$2::class$ = nullptr;