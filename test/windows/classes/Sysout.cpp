#include <Sysout.h>

#include <TestDialog4bug8037575.h>
#include <java/awt/Dialog.h>
#include <java/awt/Window.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $TestDialog4bug8037575 = ::TestDialog4bug8037575;
using $Dialog = ::java::awt::Dialog;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

$FieldInfo _Sysout_FieldInfo_[] = {
	{"dialog", "LTestDialog4bug8037575;", nullptr, $PRIVATE | $STATIC, $staticField(Sysout, dialog)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(Sysout, frame)},
	{}
};

$MethodInfo _Sysout_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Sysout::*)()>(&Sysout::init$))},
	{"createDialogWithInstructions", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Sysout::createDialogWithInstructions))},
	{"dispose", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&Sysout::dispose))},
	{"printInstructions", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Sysout::printInstructions))},
	{"println", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*)>(&Sysout::println))},
	{}
};

$ClassInfo _Sysout_ClassInfo_ = {
	$ACC_SUPER,
	"Sysout",
	"java.lang.Object",
	nullptr,
	_Sysout_FieldInfo_,
	_Sysout_MethodInfo_
};

$Object* allocate$Sysout($Class* clazz) {
	return $of($alloc(Sysout));
}

$TestDialog4bug8037575* Sysout::dialog = nullptr;
$JFrame* Sysout::frame = nullptr;

void Sysout::init$() {
}

void Sysout::createDialogWithInstructions($StringArray* instructions) {
	$init(Sysout);
	$assignStatic(Sysout::frame, $new($JFrame));
	$assignStatic(Sysout::dialog, $new($TestDialog4bug8037575, Sysout::frame, "Instructions"_s));
	$nc(Sysout::dialog)->printInstructions(instructions);
	$nc(Sysout::dialog)->setVisible(true);
	println("Any messages for the tester will display here."_s);
}

void Sysout::printInstructions($StringArray* instructions) {
	$init(Sysout);
	$nc(Sysout::dialog)->printInstructions(instructions);
}

void Sysout::println($String* messageIn) {
	$init(Sysout);
	$nc(Sysout::dialog)->displayMessage(messageIn);
}

void Sysout::dispose() {
	Sysout::println("Shutting down the Java process.."_s);
	$nc(Sysout::frame)->dispose();
	$nc(Sysout::dialog)->dispose();
}

Sysout::Sysout() {
}

$Class* Sysout::load$($String* name, bool initialize) {
	$loadClass(Sysout, name, initialize, &_Sysout_ClassInfo_, allocate$Sysout);
	return class$;
}

$Class* Sysout::class$ = nullptr;