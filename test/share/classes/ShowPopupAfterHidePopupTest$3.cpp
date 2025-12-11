#include <ShowPopupAfterHidePopupTest$3.h>

#include <ShowPopupAfterHidePopupTest.h>
#include <java/awt/Window.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $ShowPopupAfterHidePopupTest = ::ShowPopupAfterHidePopupTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComboBox = ::javax::swing::JComboBox;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _ShowPopupAfterHidePopupTest$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ShowPopupAfterHidePopupTest$3::*)()>(&ShowPopupAfterHidePopupTest$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ShowPopupAfterHidePopupTest$3_EnclosingMethodInfo_ = {
	"ShowPopupAfterHidePopupTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _ShowPopupAfterHidePopupTest$3_InnerClassesInfo_[] = {
	{"ShowPopupAfterHidePopupTest$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ShowPopupAfterHidePopupTest$3_ClassInfo_ = {
	$ACC_SUPER,
	"ShowPopupAfterHidePopupTest$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_ShowPopupAfterHidePopupTest$3_MethodInfo_,
	nullptr,
	&_ShowPopupAfterHidePopupTest$3_EnclosingMethodInfo_,
	_ShowPopupAfterHidePopupTest$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ShowPopupAfterHidePopupTest"
};

$Object* allocate$ShowPopupAfterHidePopupTest$3($Class* clazz) {
	return $of($alloc(ShowPopupAfterHidePopupTest$3));
}

void ShowPopupAfterHidePopupTest$3::init$() {
}

void ShowPopupAfterHidePopupTest$3::run() {
	$init($ShowPopupAfterHidePopupTest);
	$ShowPopupAfterHidePopupTest::popupIsVisible = $nc($ShowPopupAfterHidePopupTest::comboBox)->isPopupVisible();
	$nc($ShowPopupAfterHidePopupTest::frame)->dispose();
}

ShowPopupAfterHidePopupTest$3::ShowPopupAfterHidePopupTest$3() {
}

$Class* ShowPopupAfterHidePopupTest$3::load$($String* name, bool initialize) {
	$loadClass(ShowPopupAfterHidePopupTest$3, name, initialize, &_ShowPopupAfterHidePopupTest$3_ClassInfo_, allocate$ShowPopupAfterHidePopupTest$3);
	return class$;
}

$Class* ShowPopupAfterHidePopupTest$3::class$ = nullptr;