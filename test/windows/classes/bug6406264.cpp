#include <bug6406264.h>

#include <bug6406264$1.h>
#include <bug6406264$2.h>
#include <bug6406264$3.h>
#include <bug6406264$CustomComboBoxUI.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/lang/Runnable.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/ComboBoxUI.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI.h>
#include <jcpp.h>

using $bug6406264$1 = ::bug6406264$1;
using $bug6406264$2 = ::bug6406264$2;
using $bug6406264$3 = ::bug6406264$3;
using $bug6406264$CustomComboBoxUI = ::bug6406264$CustomComboBoxUI;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComboBox = ::javax::swing::JComboBox;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $ComboBoxUI = ::javax::swing::plaf::ComboBoxUI;
using $BasicComboBoxUI = ::javax::swing::plaf::basic::BasicComboBoxUI;

$FieldInfo _bug6406264_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $STATIC, $staticField(bug6406264, frame)},
	{"comboBox", "Lbug6406264;", nullptr, $STATIC, $staticField(bug6406264, comboBox)},
	{}
};

$MethodInfo _bug6406264_MethodInfo_[] = {
	{"<init>", "([Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT, $method(static_cast<void(bug6406264::*)($ObjectArray*)>(&bug6406264::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6406264::main)), "java.lang.Exception"},
	{"updateUI", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _bug6406264_InnerClassesInfo_[] = {
	{"bug6406264$FocusablePopup", "bug6406264", "FocusablePopup", $PRIVATE},
	{"bug6406264$CustomComboBoxUI", "bug6406264", "CustomComboBoxUI", $PRIVATE},
	{"bug6406264$3", nullptr, nullptr, 0},
	{"bug6406264$2", nullptr, nullptr, 0},
	{"bug6406264$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6406264_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6406264",
	"javax.swing.JComboBox",
	nullptr,
	_bug6406264_FieldInfo_,
	_bug6406264_MethodInfo_,
	nullptr,
	nullptr,
	_bug6406264_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6406264$FocusablePopup,bug6406264$CustomComboBoxUI,bug6406264$3,bug6406264$2,bug6406264$1"
};

$Object* allocate$bug6406264($Class* clazz) {
	return $of($alloc(bug6406264));
}

$JFrame* bug6406264::frame = nullptr;
bug6406264* bug6406264::comboBox = nullptr;

void bug6406264::main($StringArray* args) {
	$init(bug6406264);
	$useLocalCurrentObjectStackCache();
	$var($Robot, robot, $new($Robot));
	$SwingUtilities::invokeAndWait($$new($bug6406264$1));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($bug6406264$2));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($bug6406264$3));
	$nc(bug6406264::frame)->dispose();
}

void bug6406264::init$($ObjectArray* items) {
	$JComboBox::init$(items);
}

void bug6406264::updateUI() {
	setUI(static_cast<$ComboBoxUI*>($$new($bug6406264$CustomComboBoxUI, this)));
}

bug6406264::bug6406264() {
}

$Class* bug6406264::load$($String* name, bool initialize) {
	$loadClass(bug6406264, name, initialize, &_bug6406264_ClassInfo_, allocate$bug6406264);
	return class$;
}

$Class* bug6406264::class$ = nullptr;