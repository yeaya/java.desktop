#include <bug8067346$1.h>

#include <bug8067346.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

using $bug8067346 = ::bug8067346;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $UIManager = ::javax::swing::UIManager;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

$MethodInfo _bug8067346$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8067346$1::*)()>(&bug8067346$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8067346$1_EnclosingMethodInfo_ = {
	"bug8067346",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug8067346$1_InnerClassesInfo_[] = {
	{"bug8067346$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8067346$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug8067346$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug8067346$1_MethodInfo_,
	nullptr,
	&_bug8067346$1_EnclosingMethodInfo_,
	_bug8067346$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8067346"
};

$Object* allocate$bug8067346$1($Class* clazz) {
	return $of($alloc(bug8067346$1));
}

void bug8067346$1::init$() {
}

void bug8067346$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($bug8067346, test, $new($bug8067346));
	try {
		$var($String, lnf, "com.sun.java.swing.plaf.windows.WindowsLookAndFeel"_s);
		$UIManager::setLookAndFeel(lnf);
	} catch ($UnsupportedLookAndFeelException& e) {
		$init($bug8067346);
		$bug8067346::runTest = false;
	} catch ($ClassNotFoundException& e) {
		$init($bug8067346);
		$bug8067346::runTest = false;
	} catch ($InstantiationException& e) {
		$init($bug8067346);
		$bug8067346::runTest = false;
	} catch ($IllegalAccessException& e) {
		$init($bug8067346);
		$bug8067346::runTest = false;
	}
	$init($bug8067346);
	if ($bug8067346::runTest) {
		test->createUI();
		test->performTest();
		test->dispose();
	}
}

bug8067346$1::bug8067346$1() {
}

$Class* bug8067346$1::load$($String* name, bool initialize) {
	$loadClass(bug8067346$1, name, initialize, &_bug8067346$1_ClassInfo_, allocate$bug8067346$1);
	return class$;
}

$Class* bug8067346$1::class$ = nullptr;