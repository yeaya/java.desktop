#include <bug7107099.h>

#include <bug7107099$1.h>
#include <bug7107099$2.h>
#include <bug7107099$3.h>
#include <java/awt/Robot.h>
#include <java/lang/Runnable.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug7107099$1 = ::bug7107099$1;
using $bug7107099$2 = ::bug7107099$2;
using $bug7107099$3 = ::bug7107099$3;
using $Robot = ::java::awt::Robot;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JFrame = ::javax::swing::JFrame;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTextArea = ::javax::swing::JTextArea;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _bug7107099_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug7107099, frame)},
	{"textarea", "Ljavax/swing/JTextArea;", nullptr, $PRIVATE | $STATIC, $staticField(bug7107099, textarea)},
	{"scrollPane", "Ljavax/swing/JScrollPane;", nullptr, $PRIVATE | $STATIC, $staticField(bug7107099, scrollPane)},
	{"value", "I", nullptr, $PRIVATE | $STATIC, $staticField(bug7107099, value)},
	{"min", "I", nullptr, $PRIVATE | $STATIC, $staticField(bug7107099, min)},
	{"max", "I", nullptr, $PRIVATE | $STATIC, $staticField(bug7107099, max)},
	{"extent", "I", nullptr, $PRIVATE | $STATIC, $staticField(bug7107099, extent)},
	{}
};

$MethodInfo _bug7107099_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug7107099::*)()>(&bug7107099::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug7107099::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug7107099_InnerClassesInfo_[] = {
	{"bug7107099$3", nullptr, nullptr, 0},
	{"bug7107099$2", nullptr, nullptr, 0},
	{"bug7107099$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7107099_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug7107099",
	"java.lang.Object",
	nullptr,
	_bug7107099_FieldInfo_,
	_bug7107099_MethodInfo_,
	nullptr,
	nullptr,
	_bug7107099_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug7107099$3,bug7107099$2,bug7107099$1"
};

$Object* allocate$bug7107099($Class* clazz) {
	return $of($alloc(bug7107099));
}

$JFrame* bug7107099::frame = nullptr;
$JTextArea* bug7107099::textarea = nullptr;
$JScrollPane* bug7107099::scrollPane = nullptr;
int32_t bug7107099::value = 0;
int32_t bug7107099::min = 0;
int32_t bug7107099::max = 0;
int32_t bug7107099::extent = 0;

void bug7107099::init$() {
}

void bug7107099::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Robot, robot, $new($Robot));
	$SwingUtilities::invokeAndWait($$new($bug7107099$1));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($bug7107099$2));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($bug7107099$3));
}

bug7107099::bug7107099() {
}

$Class* bug7107099::load$($String* name, bool initialize) {
	$loadClass(bug7107099, name, initialize, &_bug7107099_ClassInfo_, allocate$bug7107099);
	return class$;
}

$Class* bug7107099::class$ = nullptr;