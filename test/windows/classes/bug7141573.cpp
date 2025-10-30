#include <bug7141573.h>

#include <bug7141573$1.h>
#include <java/lang/Runnable.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $bug7141573$1 = ::bug7141573$1;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

$MethodInfo _bug7141573_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug7141573::*)()>(&bug7141573::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug7141573::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug7141573_InnerClassesInfo_[] = {
	{"bug7141573$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7141573_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug7141573",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug7141573_MethodInfo_,
	nullptr,
	nullptr,
	_bug7141573_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug7141573$1"
};

$Object* allocate$bug7141573($Class* clazz) {
	return $of($alloc(bug7141573));
}

void bug7141573::init$() {
}

void bug7141573::main($StringArray* args) {
	try {
		$UIManager::setLookAndFeel("com.sun.java.swing.plaf.windows.WindowsLookAndFeel"_s);
	} catch ($Exception& e) {
		$nc($System::out)->println("WindowsLookAndFeel is not supported. The test bug7141573 is skipped."_s);
		return;
	}
	$SwingUtilities::invokeAndWait($$new($bug7141573$1));
}

bug7141573::bug7141573() {
}

$Class* bug7141573::load$($String* name, bool initialize) {
	$loadClass(bug7141573, name, initialize, &_bug7141573_ClassInfo_, allocate$bug7141573);
	return class$;
}

$Class* bug7141573::class$ = nullptr;