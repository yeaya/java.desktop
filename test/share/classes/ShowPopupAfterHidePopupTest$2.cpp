#include <ShowPopupAfterHidePopupTest$2.h>

#include <ShowPopupAfterHidePopupTest.h>
#include <javax/swing/JComboBox.h>
#include <jcpp.h>

using $ShowPopupAfterHidePopupTest = ::ShowPopupAfterHidePopupTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComboBox = ::javax::swing::JComboBox;

$MethodInfo _ShowPopupAfterHidePopupTest$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ShowPopupAfterHidePopupTest$2::*)()>(&ShowPopupAfterHidePopupTest$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ShowPopupAfterHidePopupTest$2_EnclosingMethodInfo_ = {
	"ShowPopupAfterHidePopupTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _ShowPopupAfterHidePopupTest$2_InnerClassesInfo_[] = {
	{"ShowPopupAfterHidePopupTest$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ShowPopupAfterHidePopupTest$2_ClassInfo_ = {
	$ACC_SUPER,
	"ShowPopupAfterHidePopupTest$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_ShowPopupAfterHidePopupTest$2_MethodInfo_,
	nullptr,
	&_ShowPopupAfterHidePopupTest$2_EnclosingMethodInfo_,
	_ShowPopupAfterHidePopupTest$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ShowPopupAfterHidePopupTest"
};

$Object* allocate$ShowPopupAfterHidePopupTest$2($Class* clazz) {
	return $of($alloc(ShowPopupAfterHidePopupTest$2));
}

void ShowPopupAfterHidePopupTest$2::init$() {
}

void ShowPopupAfterHidePopupTest$2::run() {
	$init($ShowPopupAfterHidePopupTest);
	$nc($ShowPopupAfterHidePopupTest::comboBox)->showPopup();
	$nc($ShowPopupAfterHidePopupTest::comboBox)->hidePopup();
	$nc($ShowPopupAfterHidePopupTest::comboBox)->showPopup();
}

ShowPopupAfterHidePopupTest$2::ShowPopupAfterHidePopupTest$2() {
}

$Class* ShowPopupAfterHidePopupTest$2::load$($String* name, bool initialize) {
	$loadClass(ShowPopupAfterHidePopupTest$2, name, initialize, &_ShowPopupAfterHidePopupTest$2_ClassInfo_, allocate$ShowPopupAfterHidePopupTest$2);
	return class$;
}

$Class* ShowPopupAfterHidePopupTest$2::class$ = nullptr;