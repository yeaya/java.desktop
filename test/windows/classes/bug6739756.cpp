#include <bug6739756.h>

#include <bug6739756$1.h>
#include <java/lang/Runnable.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $bug6739756$1 = ::bug6739756$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

$MethodInfo _bug6739756_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6739756::*)()>(&bug6739756::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6739756::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6739756_InnerClassesInfo_[] = {
	{"bug6739756$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6739756_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6739756",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug6739756_MethodInfo_,
	nullptr,
	nullptr,
	_bug6739756_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6739756$1"
};

$Object* allocate$bug6739756($Class* clazz) {
	return $of($alloc(bug6739756));
}

void bug6739756::init$() {
}

void bug6739756::main($StringArray* args) {
	try {
		$UIManager::setLookAndFeel("com.sun.java.swing.plaf.nimbus.NimbusLookAndFeel"_s);
	} catch ($Exception& e) {
		e->printStackTrace();
		return;
	}
	$SwingUtilities::invokeAndWait($$new($bug6739756$1));
}

bug6739756::bug6739756() {
}

$Class* bug6739756::load$($String* name, bool initialize) {
	$loadClass(bug6739756, name, initialize, &_bug6739756_ClassInfo_, allocate$bug6739756);
	return class$;
}

$Class* bug6739756::class$ = nullptr;