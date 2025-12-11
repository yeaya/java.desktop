#include <Sysout4FileChooserTest.h>

#include <FileChooserTest.h>
#include <TestDialog4FileChooserTest.h>
#include <java/awt/Dialog.h>
#include <java/awt/Window.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $FileChooserTest = ::FileChooserTest;
using $TestDialog4FileChooserTest = ::TestDialog4FileChooserTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JFrame = ::javax::swing::JFrame;

$FieldInfo _Sysout4FileChooserTest_FieldInfo_[] = {
	{"dialog", "LTestDialog4FileChooserTest;", nullptr, $PRIVATE | $STATIC, $staticField(Sysout4FileChooserTest, dialog)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(Sysout4FileChooserTest, frame)},
	{}
};

$MethodInfo _Sysout4FileChooserTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Sysout4FileChooserTest::*)()>(&Sysout4FileChooserTest::init$))},
	{"createDialogWithInstructions", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Sysout4FileChooserTest::createDialogWithInstructions))},
	{"dispose", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&Sysout4FileChooserTest::dispose))},
	{"printInstructions", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Sysout4FileChooserTest::printInstructions))},
	{"println", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*)>(&Sysout4FileChooserTest::println))},
	{}
};

$ClassInfo _Sysout4FileChooserTest_ClassInfo_ = {
	$ACC_SUPER,
	"Sysout4FileChooserTest",
	"java.lang.Object",
	nullptr,
	_Sysout4FileChooserTest_FieldInfo_,
	_Sysout4FileChooserTest_MethodInfo_
};

$Object* allocate$Sysout4FileChooserTest($Class* clazz) {
	return $of($alloc(Sysout4FileChooserTest));
}

$TestDialog4FileChooserTest* Sysout4FileChooserTest::dialog = nullptr;
$JFrame* Sysout4FileChooserTest::frame = nullptr;

void Sysout4FileChooserTest::init$() {
}

void Sysout4FileChooserTest::createDialogWithInstructions($StringArray* instructions) {
	$init(Sysout4FileChooserTest);
	$assignStatic(Sysout4FileChooserTest::frame, $new($JFrame));
	$assignStatic(Sysout4FileChooserTest::dialog, $new($TestDialog4FileChooserTest, Sysout4FileChooserTest::frame, "Instructions"_s));
	$nc(Sysout4FileChooserTest::dialog)->printInstructions(instructions);
	$nc(Sysout4FileChooserTest::dialog)->setVisible(true);
	println("Any messages for the tester will display here."_s);
}

void Sysout4FileChooserTest::printInstructions($StringArray* instructions) {
	$init(Sysout4FileChooserTest);
	$nc(Sysout4FileChooserTest::dialog)->printInstructions(instructions);
}

void Sysout4FileChooserTest::println($String* messageIn) {
	$init(Sysout4FileChooserTest);
	$nc(Sysout4FileChooserTest::dialog)->displayMessage(messageIn);
}

void Sysout4FileChooserTest::dispose() {
	Sysout4FileChooserTest::println("Shutting down the Java process.."_s);
	$init($FileChooserTest);
	if ($FileChooserTest::fileChooser != nullptr) {
		$nc($FileChooserTest::fileChooser)->cancelSelection();
	}
	$nc(Sysout4FileChooserTest::frame)->dispose();
	$nc(Sysout4FileChooserTest::dialog)->dispose();
}

Sysout4FileChooserTest::Sysout4FileChooserTest() {
}

$Class* Sysout4FileChooserTest::load$($String* name, bool initialize) {
	$loadClass(Sysout4FileChooserTest, name, initialize, &_Sysout4FileChooserTest_ClassInfo_, allocate$Sysout4FileChooserTest);
	return class$;
}

$Class* Sysout4FileChooserTest::class$ = nullptr;