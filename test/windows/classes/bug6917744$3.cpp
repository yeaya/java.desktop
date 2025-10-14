#include <bug6917744$3.h>

#include <bug6917744.h>
#include <java/awt/Window.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/BoundedRangeModel.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane.h>
#include <jcpp.h>

using $bug6917744 = ::bug6917744;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $BoundedRangeModel = ::javax::swing::BoundedRangeModel;
using $JFrame = ::javax::swing::JFrame;
using $JScrollBar = ::javax::swing::JScrollBar;
using $JScrollPane = ::javax::swing::JScrollPane;

$MethodInfo _bug6917744$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6917744$3::*)()>(&bug6917744$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6917744$3_EnclosingMethodInfo_ = {
	"bug6917744",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6917744$3_InnerClassesInfo_[] = {
	{"bug6917744$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6917744$3_ClassInfo_ = {
	$ACC_SUPER,
	"bug6917744$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6917744$3_MethodInfo_,
	nullptr,
	&_bug6917744$3_EnclosingMethodInfo_,
	_bug6917744$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6917744"
};

$Object* allocate$bug6917744$3($Class* clazz) {
	return $of($alloc(bug6917744$3));
}

void bug6917744$3::init$() {
}

void bug6917744$3::run() {
	$init($bug6917744);
	$var($BoundedRangeModel, model, $nc($($nc($bug6917744::scrollPane)->getVerticalScrollBar()))->getModel());
	int32_t var$0 = $nc(model)->getValue();
	if (var$0 != model->getMinimum()) {
		$nc($bug6917744::frame)->dispose();
		$throwNew($RuntimeException, "Invalid HTML position"_s);
	}
	$nc($bug6917744::frame)->dispose();
}

bug6917744$3::bug6917744$3() {
}

$Class* bug6917744$3::load$($String* name, bool initialize) {
	$loadClass(bug6917744$3, name, initialize, &_bug6917744$3_ClassInfo_, allocate$bug6917744$3);
	return class$;
}

$Class* bug6917744$3::class$ = nullptr;