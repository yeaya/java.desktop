#include <bug6917744$2.h>

#include <bug6917744.h>
#include <java/awt/Window.h>
#include <javax/swing/BoundedRangeModel.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane.h>
#include <jcpp.h>

using $bug6917744 = ::bug6917744;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BoundedRangeModel = ::javax::swing::BoundedRangeModel;
using $JFrame = ::javax::swing::JFrame;
using $JScrollBar = ::javax::swing::JScrollBar;
using $JScrollPane = ::javax::swing::JScrollPane;

$MethodInfo _bug6917744$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6917744$2::*)()>(&bug6917744$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6917744$2_EnclosingMethodInfo_ = {
	"bug6917744",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6917744$2_InnerClassesInfo_[] = {
	{"bug6917744$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6917744$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug6917744$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6917744$2_MethodInfo_,
	nullptr,
	&_bug6917744$2_EnclosingMethodInfo_,
	_bug6917744$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6917744"
};

$Object* allocate$bug6917744$2($Class* clazz) {
	return $of($alloc(bug6917744$2));
}

void bug6917744$2::init$() {
}

void bug6917744$2::run() {
	$useLocalCurrentObjectStackCache();
	$init($bug6917744);
	$var($BoundedRangeModel, model, $nc($($nc($bug6917744::scrollPane)->getVerticalScrollBar()))->getModel());
	int32_t var$1 = $nc(model)->getValue();
	int32_t var$0 = var$1 + model->getExtent();
	if (var$0 != model->getMaximum()) {
		$nc($bug6917744::frame)->dispose();
		$throwNew($RuntimeException, "Invalid HTML position"_s);
	}
}

bug6917744$2::bug6917744$2() {
}

$Class* bug6917744$2::load$($String* name, bool initialize) {
	$loadClass(bug6917744$2, name, initialize, &_bug6917744$2_ClassInfo_, allocate$bug6917744$2);
	return class$;
}

$Class* bug6917744$2::class$ = nullptr;