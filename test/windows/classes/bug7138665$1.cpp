#include <bug7138665$1.h>

#include <bug7138665.h>
#include <java/awt/Component.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JOptionPane.h>
#include <jcpp.h>

#undef OK_CANCEL_OPTION
#undef OK_OPTION
#undef QUESTION_MESSAGE

using $bug7138665 = ::bug7138665;
using $Component = ::java::awt::Component;
using $Dialog = ::java::awt::Dialog;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Icon = ::javax::swing::Icon;
using $JDialog = ::javax::swing::JDialog;
using $JOptionPane = ::javax::swing::JOptionPane;

$MethodInfo _bug7138665$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug7138665$1::*)()>(&bug7138665$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7138665$1_EnclosingMethodInfo_ = {
	"bug7138665",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug7138665$1_InnerClassesInfo_[] = {
	{"bug7138665$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7138665$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug7138665$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug7138665$1_MethodInfo_,
	nullptr,
	&_bug7138665$1_EnclosingMethodInfo_,
	_bug7138665$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7138665"
};

$Object* allocate$bug7138665$1($Class* clazz) {
	return $of($alloc(bug7138665$1));
}

void bug7138665$1::init$() {
}

void bug7138665$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($JOptionPane, pane, $new($JOptionPane, "Enter value"_s, $JOptionPane::QUESTION_MESSAGE, $JOptionPane::OK_CANCEL_OPTION, nullptr, nullptr, nullptr));
	pane->setWantsInput(true);
	$var($JDialog, dialog, pane->createDialog(nullptr, "My Dialog"_s));
	$nc(dialog)->setVisible(true);
	$var($Object, result, pane->getValue());
	if (result == nullptr || $nc(($cast($Integer, result)))->intValue() != $JOptionPane::OK_OPTION) {
		$throwNew($RuntimeException, $$str({"Invalid result: "_s, result}));
	}
	$nc($System::out)->println("Test bug7138665 passed"_s);
}

bug7138665$1::bug7138665$1() {
}

$Class* bug7138665$1::load$($String* name, bool initialize) {
	$loadClass(bug7138665$1, name, initialize, &_bug7138665$1_ClassInfo_, allocate$bug7138665$1);
	return class$;
}

$Class* bug7138665$1::class$ = nullptr;