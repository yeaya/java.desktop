#include <bug7049024.h>

#include <bug7049024$1.h>
#include <bug7049024$2.h>
#include <bug7049024$3.h>
#include <bug7049024$4.h>
#include <bug7049024$5.h>
#include <bug7049024$6.h>
#include <java/awt/Component.h>
#include <java/awt/Robot.h>
#include <java/awt/Toolkit.h>
#include <java/awt/datatransfer/Clipboard.h>
#include <java/awt/datatransfer/DataFlavor.h>
#include <java/lang/Runnable.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/DefaultCaret.h>
#include <jcpp.h>

using $bug7049024$1 = ::bug7049024$1;
using $bug7049024$2 = ::bug7049024$2;
using $bug7049024$3 = ::bug7049024$3;
using $bug7049024$4 = ::bug7049024$4;
using $bug7049024$5 = ::bug7049024$5;
using $bug7049024$6 = ::bug7049024$6;
using $Component = ::java::awt::Component;
using $Robot = ::java::awt::Robot;
using $Toolkit = ::java::awt::Toolkit;
using $Clipboard = ::java::awt::datatransfer::Clipboard;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JButton = ::javax::swing::JButton;
using $JFrame = ::javax::swing::JFrame;
using $JTextField = ::javax::swing::JTextField;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $DefaultCaret = ::javax::swing::text::DefaultCaret;

$FieldInfo _bug7049024_FieldInfo_[] = {
	{"clipboard", "Ljava/awt/datatransfer/Clipboard;", nullptr, $PUBLIC | $STATIC, $staticField(bug7049024, clipboard)},
	{"textField", "Ljavax/swing/JTextField;", nullptr, $PUBLIC | $STATIC, $staticField(bug7049024, textField)},
	{"button", "Ljavax/swing/JButton;", nullptr, $PUBLIC | $STATIC, $staticField(bug7049024, button)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PUBLIC | $STATIC, $staticField(bug7049024, frame)},
	{"caret", "Ljavax/swing/text/DefaultCaret;", nullptr, $PUBLIC | $STATIC, $staticField(bug7049024, caret)},
	{}
};

$MethodInfo _bug7049024_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug7049024::*)()>(&bug7049024::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug7049024::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug7049024_InnerClassesInfo_[] = {
	{"bug7049024$6", nullptr, nullptr, 0},
	{"bug7049024$5", nullptr, nullptr, 0},
	{"bug7049024$4", nullptr, nullptr, 0},
	{"bug7049024$3", nullptr, nullptr, 0},
	{"bug7049024$2", nullptr, nullptr, 0},
	{"bug7049024$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7049024_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug7049024",
	"java.lang.Object",
	nullptr,
	_bug7049024_FieldInfo_,
	_bug7049024_MethodInfo_,
	nullptr,
	nullptr,
	_bug7049024_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug7049024$6,bug7049024$5,bug7049024$4,bug7049024$3,bug7049024$2,bug7049024$1"
};

$Object* allocate$bug7049024($Class* clazz) {
	return $of($alloc(bug7049024));
}

$Clipboard* bug7049024::clipboard = nullptr;
$JTextField* bug7049024::textField = nullptr;
$JButton* bug7049024::button = nullptr;
$JFrame* bug7049024::frame = nullptr;
$DefaultCaret* bug7049024::caret = nullptr;

void bug7049024::init$() {
}

void bug7049024::main($StringArray* args) {
	$init(bug7049024);
	$useLocalCurrentObjectStackCache();
	$var($Robot, robot, $new($Robot));
	$SwingUtilities::invokeAndWait($$new($bug7049024$1));
	robot->waitForIdle();
	$assignStatic(bug7049024::clipboard, $nc($($nc(bug7049024::textField)->getToolkit()))->getSystemSelection());
	if (nullptr == bug7049024::clipboard) {
		return;
	}
	$SwingUtilities::invokeAndWait($$new($bug7049024$2));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($bug7049024$3));
	robot->waitForIdle();
	$init($DataFlavor);
	$var($String, oldSelection, $cast($String, $nc(bug7049024::clipboard)->getData($DataFlavor::stringFlavor)));
	$nc($System::out)->println($$str({"oldSelection is "_s, oldSelection}));
	$SwingUtilities::invokeAndWait($$new($bug7049024$4));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($bug7049024$5));
	robot->waitForIdle();
	$var($String, newSelection, $cast($String, $nc(bug7049024::clipboard)->getData($DataFlavor::stringFlavor)));
	$nc($System::out)->println($$str({"newSelection is "_s, newSelection}));
	bool passed = $nc(newSelection)->equals(oldSelection);
	$SwingUtilities::invokeAndWait($$new($bug7049024$6));
	if (!passed) {
		$throwNew($RuntimeException, "The test for bug 7049024 failed"_s);
	}
}

void clinit$bug7049024($Class* class$) {
	$assignStatic(bug7049024::clipboard, nullptr);
	$assignStatic(bug7049024::textField, nullptr);
	$assignStatic(bug7049024::button, nullptr);
	$assignStatic(bug7049024::frame, nullptr);
	$assignStatic(bug7049024::caret, nullptr);
}

bug7049024::bug7049024() {
}

$Class* bug7049024::load$($String* name, bool initialize) {
	$loadClass(bug7049024, name, initialize, &_bug7049024_ClassInfo_, clinit$bug7049024, allocate$bug7049024);
	return class$;
}

$Class* bug7049024::class$ = nullptr;