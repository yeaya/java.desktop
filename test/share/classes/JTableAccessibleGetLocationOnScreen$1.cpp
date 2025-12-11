#include <JTableAccessibleGetLocationOnScreen$1.h>

#include <JTableAccessibleGetLocationOnScreen.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $JTableAccessibleGetLocationOnScreen = ::JTableAccessibleGetLocationOnScreen;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _JTableAccessibleGetLocationOnScreen$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JTableAccessibleGetLocationOnScreen$1::*)()>(&JTableAccessibleGetLocationOnScreen$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JTableAccessibleGetLocationOnScreen$1_EnclosingMethodInfo_ = {
	"JTableAccessibleGetLocationOnScreen",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _JTableAccessibleGetLocationOnScreen$1_InnerClassesInfo_[] = {
	{"JTableAccessibleGetLocationOnScreen$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JTableAccessibleGetLocationOnScreen$1_ClassInfo_ = {
	$ACC_SUPER,
	"JTableAccessibleGetLocationOnScreen$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_JTableAccessibleGetLocationOnScreen$1_MethodInfo_,
	nullptr,
	&_JTableAccessibleGetLocationOnScreen$1_EnclosingMethodInfo_,
	_JTableAccessibleGetLocationOnScreen$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"JTableAccessibleGetLocationOnScreen"
};

$Object* allocate$JTableAccessibleGetLocationOnScreen$1($Class* clazz) {
	return $of($alloc(JTableAccessibleGetLocationOnScreen$1));
}

void JTableAccessibleGetLocationOnScreen$1::init$() {
}

void JTableAccessibleGetLocationOnScreen$1::run() {
	$JTableAccessibleGetLocationOnScreen::constructInEDT();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$JTableAccessibleGetLocationOnScreen::assertGetLocation();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc($JTableAccessibleGetLocationOnScreen::frame)->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

JTableAccessibleGetLocationOnScreen$1::JTableAccessibleGetLocationOnScreen$1() {
}

$Class* JTableAccessibleGetLocationOnScreen$1::load$($String* name, bool initialize) {
	$loadClass(JTableAccessibleGetLocationOnScreen$1, name, initialize, &_JTableAccessibleGetLocationOnScreen$1_ClassInfo_, allocate$JTableAccessibleGetLocationOnScreen$1);
	return class$;
}

$Class* JTableAccessibleGetLocationOnScreen$1::class$ = nullptr;