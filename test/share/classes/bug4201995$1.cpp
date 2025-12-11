#include <bug4201995$1.h>

#include <bug4201995.h>
#include <java/lang/CharSequence.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JSplitPane = ::javax::swing::JSplitPane;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIManager = ::javax::swing::UIManager;

$MethodInfo _bug4201995$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug4201995$1::*)()>(&bug4201995$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4201995$1_EnclosingMethodInfo_ = {
	"bug4201995",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug4201995$1_InnerClassesInfo_[] = {
	{"bug4201995$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4201995$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug4201995$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug4201995$1_MethodInfo_,
	nullptr,
	&_bug4201995$1_EnclosingMethodInfo_,
	_bug4201995$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4201995"
};

$Object* allocate$bug4201995$1($Class* clazz) {
	return $of($alloc(bug4201995$1));
}

void bug4201995$1::init$() {
}

void bug4201995$1::run() {
	$useLocalCurrentObjectStackCache();
	bool var$0 = "Nimbus"_s->equals($($nc($($UIManager::getLookAndFeel()))->getName()));
	bool expectedOpaqueValue = !(var$0 || $nc($($nc($($UIManager::getLookAndFeel()))->getName()))->contains("GTK"_s));
	$var($JSplitPane, sp, $new($JSplitPane));
	$nc($System::out)->println($$str({"sp.isOpaque "_s, $$str(sp->isOpaque())}));
	if (sp->isOpaque() != expectedOpaqueValue) {
		$throwNew($RuntimeException, "JSplitPane has incorrect default opaque value"_s);
	}
}

bug4201995$1::bug4201995$1() {
}

$Class* bug4201995$1::load$($String* name, bool initialize) {
	$loadClass(bug4201995$1, name, initialize, &_bug4201995$1_ClassInfo_, allocate$bug4201995$1);
	return class$;
}

$Class* bug4201995$1::class$ = nullptr;