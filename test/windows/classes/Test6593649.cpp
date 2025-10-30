#include <Test6593649.h>

#include <Test6593649$1.h>
#include <Test6593649$2.h>
#include <java/awt/event/ActionListener.h>
#include <java/lang/Runnable.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/Timer.h>
#include <jcpp.h>

using $Test6593649$1 = ::Test6593649$1;
using $Test6593649$2 = ::Test6593649$2;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JFrame = ::javax::swing::JFrame;
using $JTextArea = ::javax::swing::JTextArea;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Timer = ::javax::swing::Timer;

$FieldInfo _Test6593649_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(Test6593649, frame)},
	{"textArea", "Ljavax/swing/JTextArea;", nullptr, $PRIVATE | $STATIC, $staticField(Test6593649, textArea)},
	{"timer", "Ljavax/swing/Timer;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Test6593649, timer)},
	{}
};

$MethodInfo _Test6593649_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test6593649::*)()>(&Test6593649::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test6593649::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _Test6593649_InnerClassesInfo_[] = {
	{"Test6593649$2", nullptr, nullptr, 0},
	{"Test6593649$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test6593649_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test6593649",
	"java.lang.Object",
	nullptr,
	_Test6593649_FieldInfo_,
	_Test6593649_MethodInfo_,
	nullptr,
	nullptr,
	_Test6593649_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Test6593649$2,Test6593649$1"
};

$Object* allocate$Test6593649($Class* clazz) {
	return $of($alloc(Test6593649));
}

$JFrame* Test6593649::frame = nullptr;
$JTextArea* Test6593649::textArea = nullptr;
$Timer* Test6593649::timer = nullptr;

void Test6593649::init$() {
}

void Test6593649::main($StringArray* args) {
	$init(Test6593649);
	$SwingUtilities::invokeAndWait($$new($Test6593649$2));
}

void clinit$Test6593649($Class* class$) {
	$assignStatic(Test6593649::timer, $new($Timer, 1000, $$new($Test6593649$1)));
}

Test6593649::Test6593649() {
}

$Class* Test6593649::load$($String* name, bool initialize) {
	$loadClass(Test6593649, name, initialize, &_Test6593649_ClassInfo_, clinit$Test6593649, allocate$Test6593649);
	return class$;
}

$Class* Test6593649::class$ = nullptr;