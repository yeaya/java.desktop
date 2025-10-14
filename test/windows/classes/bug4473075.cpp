#include <bug4473075.h>

#include <bug4473075$1.h>
#include <bug4473075$2.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/event/InputEvent.h>
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
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTable.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/table/JTableHeader.h>
#include <jcpp.h>

#undef BUTTON1_MASK
#undef USER_HEADER_HEIGHT

using $bug4473075$1 = ::bug4473075$1;
using $bug4473075$2 = ::bug4473075$2;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $InputEvent = ::java::awt::event::InputEvent;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTable = ::javax::swing::JTable;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $JTableHeader = ::javax::swing::table::JTableHeader;

$FieldInfo _bug4473075_FieldInfo_[] = {
	{"USER_HEADER_HEIGHT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(bug4473075, USER_HEADER_HEIGHT)},
	{"table", "Ljavax/swing/JTable;", nullptr, $PRIVATE | $STATIC, $staticField(bug4473075, table)},
	{"scpScroll", "Ljavax/swing/JScrollPane;", nullptr, $PRIVATE | $STATIC, $staticField(bug4473075, scpScroll)},
	{"point", "Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $staticField(bug4473075, point)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug4473075, frame)},
	{}
};

$MethodInfo _bug4473075_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4473075::*)()>(&bug4473075::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug4473075::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug4473075_InnerClassesInfo_[] = {
	{"bug4473075$2", nullptr, nullptr, 0},
	{"bug4473075$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4473075_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug4473075",
	"java.lang.Object",
	nullptr,
	_bug4473075_FieldInfo_,
	_bug4473075_MethodInfo_,
	nullptr,
	nullptr,
	_bug4473075_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug4473075$2,bug4473075$1"
};

$Object* allocate$bug4473075($Class* clazz) {
	return $of($alloc(bug4473075));
}

$JTable* bug4473075::table = nullptr;
$JScrollPane* bug4473075::scpScroll = nullptr;
$Point* bug4473075::point = nullptr;
$JFrame* bug4473075::frame = nullptr;

void bug4473075::init$() {
}

void bug4473075::main($StringArray* args) {
	$var($Robot, robot, $new($Robot));
	robot->setAutoDelay(20);
	$SwingUtilities::invokeAndWait($$new($bug4473075$1));
	robot->waitForIdle();
	$init(bug4473075);
	robot->mouseMove($nc(bug4473075::point)->x + 100, $nc(bug4473075::point)->y + 5);
	robot->mousePress($InputEvent::BUTTON1_MASK);
	robot->mouseMove($nc(bug4473075::point)->x + 150, $nc(bug4473075::point)->y + 5);
	robot->mouseRelease($InputEvent::BUTTON1_MASK);
	int32_t headerH = $nc($($nc(bug4473075::table)->getTableHeader()))->getHeight();
	if (headerH != bug4473075::USER_HEADER_HEIGHT) {
		$throwNew($RuntimeException, $$str({"TableHeader height was not set: "_s, $$str(headerH), " !="_s, $$str(bug4473075::USER_HEADER_HEIGHT)}));
	}
	double tableX = (double)$nc(bug4473075::table)->getX();
	int32_t headerX = $nc($($nc(bug4473075::table)->getTableHeader()))->getX();
	if (tableX != headerX) {
		$throwNew($RuntimeException, $$str({"TableHeader X position is wrong: "_s, $$str(tableX), " !="_s, $$str(headerX)}));
	}
	double tableW = (double)$nc(bug4473075::table)->getWidth();
	int32_t headerW = $nc($($nc(bug4473075::table)->getTableHeader()))->getWidth();
	if (tableW != headerW) {
		$throwNew($RuntimeException, $$str({"TableHeader width is wrong: "_s, $$str(tableW), " !="_s, $$str(headerW)}));
	}
	$SwingUtilities::invokeLater($$new($bug4473075$2));
	$init($System);
	$nc($System::out)->println("ok"_s);
}

bug4473075::bug4473075() {
}

$Class* bug4473075::load$($String* name, bool initialize) {
	$loadClass(bug4473075, name, initialize, &_bug4473075_ClassInfo_, allocate$bug4473075);
	return class$;
}

$Class* bug4473075::class$ = nullptr;