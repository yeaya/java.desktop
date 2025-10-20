#include <ShowPopupAfterHidePopupTest.h>

#include <ShowPopupAfterHidePopupTest$1.h>
#include <ShowPopupAfterHidePopupTest$2.h>
#include <ShowPopupAfterHidePopupTest$3.h>
#include <java/awt/Robot.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

using $ShowPopupAfterHidePopupTest$1 = ::ShowPopupAfterHidePopupTest$1;
using $ShowPopupAfterHidePopupTest$2 = ::ShowPopupAfterHidePopupTest$2;
using $ShowPopupAfterHidePopupTest$3 = ::ShowPopupAfterHidePopupTest$3;
using $Robot = ::java::awt::Robot;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JComboBox = ::javax::swing::JComboBox;
using $JFrame = ::javax::swing::JFrame;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

$FieldInfo _ShowPopupAfterHidePopupTest_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(ShowPopupAfterHidePopupTest, frame)},
	{"comboBox", "Ljavax/swing/JComboBox;", nullptr, $PRIVATE | $STATIC, $staticField(ShowPopupAfterHidePopupTest, comboBox)},
	{"popupIsVisible", "Z", nullptr, $PRIVATE | $STATIC, $staticField(ShowPopupAfterHidePopupTest, popupIsVisible)},
	{}
};

$MethodInfo _ShowPopupAfterHidePopupTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ShowPopupAfterHidePopupTest::*)()>(&ShowPopupAfterHidePopupTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ShowPopupAfterHidePopupTest::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _ShowPopupAfterHidePopupTest_InnerClassesInfo_[] = {
	{"ShowPopupAfterHidePopupTest$3", nullptr, nullptr, 0},
	{"ShowPopupAfterHidePopupTest$2", nullptr, nullptr, 0},
	{"ShowPopupAfterHidePopupTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ShowPopupAfterHidePopupTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ShowPopupAfterHidePopupTest",
	"java.lang.Object",
	nullptr,
	_ShowPopupAfterHidePopupTest_FieldInfo_,
	_ShowPopupAfterHidePopupTest_MethodInfo_,
	nullptr,
	nullptr,
	_ShowPopupAfterHidePopupTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"ShowPopupAfterHidePopupTest$3,ShowPopupAfterHidePopupTest$2,ShowPopupAfterHidePopupTest$1"
};

$Object* allocate$ShowPopupAfterHidePopupTest($Class* clazz) {
	return $of($alloc(ShowPopupAfterHidePopupTest));
}

$JFrame* ShowPopupAfterHidePopupTest::frame = nullptr;
$JComboBox* ShowPopupAfterHidePopupTest::comboBox = nullptr;
bool ShowPopupAfterHidePopupTest::popupIsVisible = false;

void ShowPopupAfterHidePopupTest::init$() {
}

void ShowPopupAfterHidePopupTest::main($StringArray* args) {
	$init(ShowPopupAfterHidePopupTest);
	$useLocalCurrentObjectStackCache();
	$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>($$new($MetalLookAndFeel)));
	$var($Robot, robot, $new($Robot));
	$SwingUtilities::invokeAndWait($$new($ShowPopupAfterHidePopupTest$1));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($ShowPopupAfterHidePopupTest$2));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($ShowPopupAfterHidePopupTest$3));
	if (!ShowPopupAfterHidePopupTest::popupIsVisible) {
		$throwNew($RuntimeException, "Calling hidePopup() affected the next call to showPopup()."_s);
	}
}

void clinit$ShowPopupAfterHidePopupTest($Class* class$) {
	$assignStatic(ShowPopupAfterHidePopupTest::frame, nullptr);
	$assignStatic(ShowPopupAfterHidePopupTest::comboBox, nullptr);
	ShowPopupAfterHidePopupTest::popupIsVisible = false;
}

ShowPopupAfterHidePopupTest::ShowPopupAfterHidePopupTest() {
}

$Class* ShowPopupAfterHidePopupTest::load$($String* name, bool initialize) {
	$loadClass(ShowPopupAfterHidePopupTest, name, initialize, &_ShowPopupAfterHidePopupTest_ClassInfo_, clinit$ShowPopupAfterHidePopupTest, allocate$ShowPopupAfterHidePopupTest);
	return class$;
}

$Class* ShowPopupAfterHidePopupTest::class$ = nullptr;