#include <bug8037575$1.h>

#include <Sysout.h>
#include <bug8037575.h>
#include <jcpp.h>

using $Sysout = ::Sysout;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _bug8037575$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8037575$1::*)()>(&bug8037575$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8037575$1_EnclosingMethodInfo_ = {
	"bug8037575",
	"init",
	"()V"
};

$InnerClassInfo _bug8037575$1_InnerClassesInfo_[] = {
	{"bug8037575$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8037575$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug8037575$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug8037575$1_MethodInfo_,
	nullptr,
	&_bug8037575$1_EnclosingMethodInfo_,
	_bug8037575$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8037575"
};

$Object* allocate$bug8037575$1($Class* clazz) {
	return $of($alloc(bug8037575$1));
}

void bug8037575$1::init$() {
}

void bug8037575$1::run() {
	$var($StringArray, instructions, $new($StringArray, {
		"1) You see a dialog with buttons and text area."_s,
		"2) Pressing Run button will start test. A new Frame will open automatically and minimize after 2 seconds."_s,
		"3) Frame should minimize gradually with animation effect."_s,
		"4) If frame disappers without animation then test failed otherwise passed."_s,
		"5) Pressing Pass/Fail button will mark test as pass/fail and will shutdown JVM as well"_s
	}));
	$Sysout::createDialogWithInstructions(instructions);
	$Sysout::printInstructions(instructions);
}

bug8037575$1::bug8037575$1() {
}

$Class* bug8037575$1::load$($String* name, bool initialize) {
	$loadClass(bug8037575$1, name, initialize, &_bug8037575$1_ClassInfo_, allocate$bug8037575$1);
	return class$;
}

$Class* bug8037575$1::class$ = nullptr;