#include <JTextPaneDocumentWrapping.h>

#include <JTextPaneDocumentWrapping$1.h>
#include <JTextPaneDocumentWrapping$2.h>
#include <JTextPaneDocumentWrapping$3.h>
#include <java/awt/Robot.h>
#include <java/lang/Runnable.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTextPane.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $JTextPaneDocumentWrapping$1 = ::JTextPaneDocumentWrapping$1;
using $JTextPaneDocumentWrapping$2 = ::JTextPaneDocumentWrapping$2;
using $JTextPaneDocumentWrapping$3 = ::JTextPaneDocumentWrapping$3;
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

$FieldInfo _JTextPaneDocumentWrapping_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(JTextPaneDocumentWrapping, frame)},
	{"jTextPane", "Ljavax/swing/JTextPane;", nullptr, $PRIVATE | $STATIC, $staticField(JTextPaneDocumentWrapping, jTextPane)},
	{"position", "I", nullptr, $PRIVATE | $STATIC, $staticField(JTextPaneDocumentWrapping, position)},
	{}
};

$MethodInfo _JTextPaneDocumentWrapping_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JTextPaneDocumentWrapping::*)()>(&JTextPaneDocumentWrapping::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&JTextPaneDocumentWrapping::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _JTextPaneDocumentWrapping_InnerClassesInfo_[] = {
	{"JTextPaneDocumentWrapping$3", nullptr, nullptr, 0},
	{"JTextPaneDocumentWrapping$2", nullptr, nullptr, 0},
	{"JTextPaneDocumentWrapping$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JTextPaneDocumentWrapping_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"JTextPaneDocumentWrapping",
	"java.lang.Object",
	nullptr,
	_JTextPaneDocumentWrapping_FieldInfo_,
	_JTextPaneDocumentWrapping_MethodInfo_,
	nullptr,
	nullptr,
	_JTextPaneDocumentWrapping_InnerClassesInfo_,
	nullptr,
	nullptr,
	"JTextPaneDocumentWrapping$3,JTextPaneDocumentWrapping$2,JTextPaneDocumentWrapping$1"
};

$Object* allocate$JTextPaneDocumentWrapping($Class* clazz) {
	return $of($alloc(JTextPaneDocumentWrapping));
}

$JFrame* JTextPaneDocumentWrapping::frame = nullptr;
$JTextPane* JTextPaneDocumentWrapping::jTextPane = nullptr;
int32_t JTextPaneDocumentWrapping::position = 0;

void JTextPaneDocumentWrapping::init$() {
}

void JTextPaneDocumentWrapping::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$SwingUtilities::invokeAndWait($$new($JTextPaneDocumentWrapping$1));
	$var($Robot, robot, $new($Robot));
	robot->waitForIdle();
	robot->delay(200);
	$SwingUtilities::invokeAndWait($$new($JTextPaneDocumentWrapping$2));
	$init(JTextPaneDocumentWrapping);
	if (JTextPaneDocumentWrapping::position < 40) {
		$throwNew($RuntimeException, $$str({"Text is not wrapped "_s, $$str(JTextPaneDocumentWrapping::position)}));
	}
	robot->waitForIdle();
	robot->delay(200);
	$SwingUtilities::invokeAndWait($$new($JTextPaneDocumentWrapping$3));
	if (JTextPaneDocumentWrapping::position > 20) {
		$throwNew($RuntimeException, $$str({"Text is wrapped "_s, $$str(JTextPaneDocumentWrapping::position)}));
	}
	$nc($System::out)->println("ok"_s);
}

JTextPaneDocumentWrapping::JTextPaneDocumentWrapping() {
}

$Class* JTextPaneDocumentWrapping::load$($String* name, bool initialize) {
	$loadClass(JTextPaneDocumentWrapping, name, initialize, &_JTextPaneDocumentWrapping_ClassInfo_, allocate$JTextPaneDocumentWrapping);
	return class$;
}

$Class* JTextPaneDocumentWrapping::class$ = nullptr;