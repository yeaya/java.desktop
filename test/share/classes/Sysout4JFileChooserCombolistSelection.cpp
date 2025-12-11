#include <Sysout4JFileChooserCombolistSelection.h>

#include <JFileChooserCombolistSelection.h>
#include <TestDialog4Sysout.h>
#include <java/awt/Dialog.h>
#include <java/awt/Window.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $JFileChooserCombolistSelection = ::JFileChooserCombolistSelection;
using $TestDialog4Sysout = ::TestDialog4Sysout;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JFrame = ::javax::swing::JFrame;

$FieldInfo _Sysout4JFileChooserCombolistSelection_FieldInfo_[] = {
	{"dialog", "LTestDialog4Sysout;", nullptr, $PRIVATE | $STATIC, $staticField(Sysout4JFileChooserCombolistSelection, dialog)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(Sysout4JFileChooserCombolistSelection, frame)},
	{}
};

$MethodInfo _Sysout4JFileChooserCombolistSelection_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Sysout4JFileChooserCombolistSelection::*)()>(&Sysout4JFileChooserCombolistSelection::init$))},
	{"createDialogWithInstructions", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Sysout4JFileChooserCombolistSelection::createDialogWithInstructions))},
	{"dispose", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&Sysout4JFileChooserCombolistSelection::dispose))},
	{"printInstructions", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Sysout4JFileChooserCombolistSelection::printInstructions))},
	{"println", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*)>(&Sysout4JFileChooserCombolistSelection::println))},
	{}
};

$ClassInfo _Sysout4JFileChooserCombolistSelection_ClassInfo_ = {
	$ACC_SUPER,
	"Sysout4JFileChooserCombolistSelection",
	"java.lang.Object",
	nullptr,
	_Sysout4JFileChooserCombolistSelection_FieldInfo_,
	_Sysout4JFileChooserCombolistSelection_MethodInfo_
};

$Object* allocate$Sysout4JFileChooserCombolistSelection($Class* clazz) {
	return $of($alloc(Sysout4JFileChooserCombolistSelection));
}

$TestDialog4Sysout* Sysout4JFileChooserCombolistSelection::dialog = nullptr;
$JFrame* Sysout4JFileChooserCombolistSelection::frame = nullptr;

void Sysout4JFileChooserCombolistSelection::init$() {
}

void Sysout4JFileChooserCombolistSelection::createDialogWithInstructions($StringArray* instructions) {
	$init(Sysout4JFileChooserCombolistSelection);
	$assignStatic(Sysout4JFileChooserCombolistSelection::frame, $new($JFrame));
	$assignStatic(Sysout4JFileChooserCombolistSelection::dialog, $new($TestDialog4Sysout, Sysout4JFileChooserCombolistSelection::frame, "Instructions"_s));
	$nc(Sysout4JFileChooserCombolistSelection::dialog)->printInstructions(instructions);
	$nc(Sysout4JFileChooserCombolistSelection::dialog)->setVisible(true);
	println("Any messages for the tester will display here."_s);
}

void Sysout4JFileChooserCombolistSelection::printInstructions($StringArray* instructions) {
	$init(Sysout4JFileChooserCombolistSelection);
	$nc(Sysout4JFileChooserCombolistSelection::dialog)->printInstructions(instructions);
}

void Sysout4JFileChooserCombolistSelection::println($String* messageIn) {
	$init(Sysout4JFileChooserCombolistSelection);
	$nc(Sysout4JFileChooserCombolistSelection::dialog)->displayMessage(messageIn);
}

void Sysout4JFileChooserCombolistSelection::dispose() {
	Sysout4JFileChooserCombolistSelection::println("Shutting down the Java process.."_s);
	$init($JFileChooserCombolistSelection);
	if ($JFileChooserCombolistSelection::fileChooser != nullptr) {
		$nc($JFileChooserCombolistSelection::fileChooser)->cancelSelection();
	}
	$nc(Sysout4JFileChooserCombolistSelection::frame)->dispose();
	$nc(Sysout4JFileChooserCombolistSelection::dialog)->dispose();
}

Sysout4JFileChooserCombolistSelection::Sysout4JFileChooserCombolistSelection() {
}

$Class* Sysout4JFileChooserCombolistSelection::load$($String* name, bool initialize) {
	$loadClass(Sysout4JFileChooserCombolistSelection, name, initialize, &_Sysout4JFileChooserCombolistSelection_ClassInfo_, allocate$Sysout4JFileChooserCombolistSelection);
	return class$;
}

$Class* Sysout4JFileChooserCombolistSelection::class$ = nullptr;