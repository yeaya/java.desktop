#include <bug6274267.h>

#include <bug6274267$1.h>
#include <bug6274267$2.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
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
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef HORIZONTAL_SPLIT

using $bug6274267$1 = ::bug6274267$1;
using $bug6274267$2 = ::bug6274267$2;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JSplitPane = ::javax::swing::JSplitPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _bug6274267_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE, $field(bug6274267, frame)},
	{"left", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(bug6274267, left)},
	{}
};

$MethodInfo _bug6274267_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6274267::*)()>(&bug6274267::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6274267::main)), "java.lang.Exception"},
	{"setupUI1", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug6274267::*)()>(&bug6274267::setupUI1))},
	{"setupUI2", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug6274267::*)()>(&bug6274267::setupUI2))},
	{"test", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug6274267::*)()>(&bug6274267::test)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6274267_InnerClassesInfo_[] = {
	{"bug6274267$2", nullptr, nullptr, 0},
	{"bug6274267$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6274267_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6274267",
	"java.lang.Object",
	nullptr,
	_bug6274267_FieldInfo_,
	_bug6274267_MethodInfo_,
	nullptr,
	nullptr,
	_bug6274267_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6274267$2,bug6274267$1"
};

$Object* allocate$bug6274267($Class* clazz) {
	return $of($alloc(bug6274267));
}

void bug6274267::init$() {
}

void bug6274267::main($StringArray* args) {
	$var(bug6274267, test, $new(bug6274267));
	$var($Robot, robot, $new($Robot));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$SwingUtilities::invokeAndWait($$new($bug6274267$1, test));
			robot->waitForIdle();
			$SwingUtilities::invokeAndWait($$new($bug6274267$2, test));
			test->test();
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			if (test->frame != nullptr) {
				$nc(test->frame)->dispose();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void bug6274267::setupUI1() {
	$set(this, frame, $new($JFrame));
	$nc(this->frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$set(this, left, $new($JPanel));
	$nc(this->left)->setPreferredSize($$new($Dimension, 100, 100));
	$var($JPanel, rightPanel, $new($JPanel));
	rightPanel->setPreferredSize($$new($Dimension, 100, 50));
	$var($Component, right, $new($JScrollPane, rightPanel));
	$var($JSplitPane, split, $new($JSplitPane, $JSplitPane::HORIZONTAL_SPLIT, this->left, right));
	$set(this, frame, $new($JFrame));
	$nc(this->frame)->add(static_cast<$Component*>(split));
	$nc(this->frame)->pack();
}

void bug6274267::setupUI2() {
	$nc(this->frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc(this->frame)->setLocationRelativeTo(nullptr);
	$nc(this->frame)->setVisible(true);
}

void bug6274267::test() {
	if ($nc($($nc(this->left)->getSize()))->width == 100) {
		$init($System);
		$nc($System::out)->println("Test passed"_s);
	} else {
		$throwNew($RuntimeException, "ScrollPaneLayout sometimes improperly calculates the preferred layout size. "_s);
	}
}

bug6274267::bug6274267() {
}

$Class* bug6274267::load$($String* name, bool initialize) {
	$loadClass(bug6274267, name, initialize, &_bug6274267_ClassInfo_, allocate$bug6274267);
	return class$;
}

$Class* bug6274267::class$ = nullptr;