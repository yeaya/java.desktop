#include <JTextPaneDocumentAlignment.h>

#include <JTextPaneDocumentAlignment$1.h>
#include <JTextPaneDocumentAlignment$2.h>
#include <JTextPaneDocumentAlignment$3.h>
#include <java/awt/Robot.h>
#include <java/lang/Runnable.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTextPane.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $JTextPaneDocumentAlignment$1 = ::JTextPaneDocumentAlignment$1;
using $JTextPaneDocumentAlignment$2 = ::JTextPaneDocumentAlignment$2;
using $JTextPaneDocumentAlignment$3 = ::JTextPaneDocumentAlignment$3;
using $Robot = ::java::awt::Robot;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JFrame = ::javax::swing::JFrame;
using $JTextPane = ::javax::swing::JTextPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _JTextPaneDocumentAlignment_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(JTextPaneDocumentAlignment, frame)},
	{"jTextPane", "Ljavax/swing/JTextPane;", nullptr, $PRIVATE | $STATIC, $staticField(JTextPaneDocumentAlignment, jTextPane)},
	{"position", "I", nullptr, $PRIVATE | $STATIC, $staticField(JTextPaneDocumentAlignment, position)},
	{}
};

$MethodInfo _JTextPaneDocumentAlignment_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JTextPaneDocumentAlignment::*)()>(&JTextPaneDocumentAlignment::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&JTextPaneDocumentAlignment::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _JTextPaneDocumentAlignment_InnerClassesInfo_[] = {
	{"JTextPaneDocumentAlignment$3", nullptr, nullptr, 0},
	{"JTextPaneDocumentAlignment$2", nullptr, nullptr, 0},
	{"JTextPaneDocumentAlignment$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JTextPaneDocumentAlignment_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"JTextPaneDocumentAlignment",
	"java.lang.Object",
	nullptr,
	_JTextPaneDocumentAlignment_FieldInfo_,
	_JTextPaneDocumentAlignment_MethodInfo_,
	nullptr,
	nullptr,
	_JTextPaneDocumentAlignment_InnerClassesInfo_,
	nullptr,
	nullptr,
	"JTextPaneDocumentAlignment$3,JTextPaneDocumentAlignment$2,JTextPaneDocumentAlignment$1"
};

$Object* allocate$JTextPaneDocumentAlignment($Class* clazz) {
	return $of($alloc(JTextPaneDocumentAlignment));
}

$JFrame* JTextPaneDocumentAlignment::frame = nullptr;
$JTextPane* JTextPaneDocumentAlignment::jTextPane = nullptr;
int32_t JTextPaneDocumentAlignment::position = 0;

void JTextPaneDocumentAlignment::init$() {
}

void JTextPaneDocumentAlignment::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$SwingUtilities::invokeAndWait($$new($JTextPaneDocumentAlignment$1));
	$var($Robot, robot, $new($Robot));
	robot->waitForIdle();
	robot->delay(200);
	$SwingUtilities::invokeAndWait($$new($JTextPaneDocumentAlignment$2));
	$init(JTextPaneDocumentAlignment);
	if (JTextPaneDocumentAlignment::position < 100) {
		$throwNew($RuntimeException, $$str({"Text is not right aligned "_s, $$str(JTextPaneDocumentAlignment::position)}));
	}
	$SwingUtilities::invokeAndWait($$new($JTextPaneDocumentAlignment$3));
	if (JTextPaneDocumentAlignment::position < 20) {
		$throwNew($RuntimeException, $$str({"Text is not center aligned "_s, $$str(JTextPaneDocumentAlignment::position)}));
	}
	$nc($System::out)->println("ok"_s);
}

JTextPaneDocumentAlignment::JTextPaneDocumentAlignment() {
}

$Class* JTextPaneDocumentAlignment::load$($String* name, bool initialize) {
	$loadClass(JTextPaneDocumentAlignment, name, initialize, &_JTextPaneDocumentAlignment_ClassInfo_, allocate$JTextPaneDocumentAlignment);
	return class$;
}

$Class* JTextPaneDocumentAlignment::class$ = nullptr;