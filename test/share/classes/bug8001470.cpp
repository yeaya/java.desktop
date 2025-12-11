#include <bug8001470.h>

#include <bug8001470$1.h>
#include <bug8001470$2.h>
#include <java/lang/Runnable.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug8001470$1 = ::bug8001470$1;
using $bug8001470$2 = ::bug8001470$2;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JFrame = ::javax::swing::JFrame;
using $JTextField = ::javax::swing::JTextField;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _bug8001470_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug8001470, frame)},
	{"textField1", "Ljavax/swing/JTextField;", nullptr, $PRIVATE | $STATIC, $staticField(bug8001470, textField1)},
	{"textField2", "Ljavax/swing/JTextField;", nullptr, $PRIVATE | $STATIC, $staticField(bug8001470, textField2)},
	{}
};

$MethodInfo _bug8001470_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8001470::*)()>(&bug8001470::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug8001470::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug8001470_InnerClassesInfo_[] = {
	{"bug8001470$2", nullptr, nullptr, 0},
	{"bug8001470$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8001470_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8001470",
	"java.lang.Object",
	nullptr,
	_bug8001470_FieldInfo_,
	_bug8001470_MethodInfo_,
	nullptr,
	nullptr,
	_bug8001470_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug8001470$2,bug8001470$1"
};

$Object* allocate$bug8001470($Class* clazz) {
	return $of($alloc(bug8001470));
}

$JFrame* bug8001470::frame = nullptr;
$JTextField* bug8001470::textField1 = nullptr;
$JTextField* bug8001470::textField2 = nullptr;

void bug8001470::init$() {
}

void bug8001470::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$SwingUtilities::invokeAndWait($$new($bug8001470$1));
	$init(bug8001470);
	bool var$0 = $nc(bug8001470::textField1)->getHeight() < 10;
	if (var$0 || $nc(bug8001470::textField2)->getHeight() < 10) {
		$throwNew($Exception, "Wrong field height"_s);
	}
	$nc($System::out)->println("ok"_s);
	$SwingUtilities::invokeLater($$new($bug8001470$2));
}

bug8001470::bug8001470() {
}

$Class* bug8001470::load$($String* name, bool initialize) {
	$loadClass(bug8001470, name, initialize, &_bug8001470_ClassInfo_, allocate$bug8001470);
	return class$;
}

$Class* bug8001470::class$ = nullptr;