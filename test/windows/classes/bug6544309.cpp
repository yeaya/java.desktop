#include <bug6544309.h>

#include <bug6544309$1.h>
#include <bug6544309$2.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dialog.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef DISPOSE_ON_CLOSE
#undef VK_DOWN
#undef VK_SPACE

using $bug6544309$1 = ::bug6544309$1;
using $bug6544309$2 = ::bug6544309$2;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dialog = ::java::awt::Dialog;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $ActionListener = ::java::awt::event::ActionListener;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JDialog = ::javax::swing::JDialog;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _bug6544309_FieldInfo_[] = {
	{"dialog", "Ljavax/swing/JDialog;", nullptr, $PRIVATE, $field(bug6544309, dialog)},
	{"passed", "Z", nullptr, $PRIVATE, $field(bug6544309, passed)},
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(bug6544309, robot)},
	{}
};

$MethodInfo _bug6544309_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6544309::*)()>(&bug6544309::init$))},
	{"checkResult", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug6544309::*)()>(&bug6544309::checkResult))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6544309::main)), "java.lang.Exception"},
	{"setupUI", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug6544309::*)()>(&bug6544309::setupUI))},
	{"test", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug6544309::*)()>(&bug6544309::test)), "java.lang.Exception"},
	{"testImpl", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug6544309::*)()>(&bug6544309::testImpl)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6544309_InnerClassesInfo_[] = {
	{"bug6544309$2", nullptr, nullptr, 0},
	{"bug6544309$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6544309_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6544309",
	"java.lang.Object",
	nullptr,
	_bug6544309_FieldInfo_,
	_bug6544309_MethodInfo_,
	nullptr,
	nullptr,
	_bug6544309_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6544309$2,bug6544309$1"
};

$Object* allocate$bug6544309($Class* clazz) {
	return $of($alloc(bug6544309));
}

$Robot* bug6544309::robot = nullptr;

void bug6544309::init$() {
}

void bug6544309::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$init(bug6544309);
	$assignStatic(bug6544309::robot, $new($Robot));
	$nc(bug6544309::robot)->setAutoDelay(100);
	$nc(bug6544309::robot)->mouseMove(100, 100);
	$nc(bug6544309::robot)->waitForIdle();
	$var(bug6544309, test, $new(bug6544309));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$SwingUtilities::invokeAndWait($$new($bug6544309$1, test));
			$nc(bug6544309::robot)->waitForIdle();
			$nc(bug6544309::robot)->delay(1000);
			test->test();
			$init($System);
			$nc($System::out)->println("Test passed"_s);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			if (test->dialog != nullptr) {
				$nc(test->dialog)->dispose();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void bug6544309::setupUI() {
	$useLocalCurrentObjectStackCache();
	$set(this, dialog, $new($JDialog));
	$nc(this->dialog)->setDefaultCloseOperation($JDialog::DISPOSE_ON_CLOSE);
	$nc(this->dialog)->setSize(200, 100);
	$nc(this->dialog)->setLocationRelativeTo(nullptr);
	$nc(this->dialog)->setVisible(true);
	$var($JPopupMenu, popup, $new($JPopupMenu));
	popup->add($$new($JMenuItem, "one"_s));
	$var($JMenuItem, two, $new($JMenuItem, "two"_s));
	two->addActionListener($$new($bug6544309$2, this));
	popup->add(two);
	popup->add($$new($JMenuItem, "three"_s));
	popup->show(this->dialog, 50, 50);
}

void bug6544309::test() {
	testImpl();
	checkResult();
}

void bug6544309::testImpl() {
	$nc(bug6544309::robot)->waitForIdle();
	$init($System);
	$nc($System::out)->println("Pressing DOWN ARROW"_s);
	$nc(bug6544309::robot)->keyPress($KeyEvent::VK_DOWN);
	$nc(bug6544309::robot)->keyRelease($KeyEvent::VK_DOWN);
	$nc(bug6544309::robot)->waitForIdle();
	$nc($System::out)->println("Pressing DOWN ARROW"_s);
	$nc(bug6544309::robot)->keyPress($KeyEvent::VK_DOWN);
	$nc(bug6544309::robot)->keyRelease($KeyEvent::VK_DOWN);
	$nc(bug6544309::robot)->waitForIdle();
	$nc($System::out)->println("Pressing SPACE"_s);
	$nc(bug6544309::robot)->keyPress($KeyEvent::VK_SPACE);
	$nc(bug6544309::robot)->keyRelease($KeyEvent::VK_SPACE);
}

void bug6544309::checkResult() {
	$nc(bug6544309::robot)->waitForIdle();
	if (!this->passed) {
		$throwNew($RuntimeException, "If a JDialog is invoker for JPopupMenu, the menu cannot be handled by keyboard."_s);
	}
}

bug6544309::bug6544309() {
}

$Class* bug6544309::load$($String* name, bool initialize) {
	$loadClass(bug6544309, name, initialize, &_bug6544309_ClassInfo_, allocate$bug6544309);
	return class$;
}

$Class* bug6544309::class$ = nullptr;