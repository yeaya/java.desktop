#include <bug6608456$TestRepaintManager.h>

#include <bug6608456$TestFuture.h>
#include <bug6608456.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/RepaintManager.h>
#include <jcpp.h>

using $bug6608456 = ::bug6608456;
using $bug6608456$TestFuture = ::bug6608456$TestFuture;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $RepaintManager = ::javax::swing::RepaintManager;

$MethodInfo _bug6608456$TestRepaintManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6608456$TestRepaintManager::*)()>(&bug6608456$TestRepaintManager::init$))},
	{"addDirtyRegion", "(Ljavax/swing/JComponent;IIII)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _bug6608456$TestRepaintManager_InnerClassesInfo_[] = {
	{"bug6608456$TestRepaintManager", "bug6608456", "TestRepaintManager", $STATIC},
	{}
};

$ClassInfo _bug6608456$TestRepaintManager_ClassInfo_ = {
	$ACC_SUPER,
	"bug6608456$TestRepaintManager",
	"javax.swing.RepaintManager",
	nullptr,
	nullptr,
	_bug6608456$TestRepaintManager_MethodInfo_,
	nullptr,
	nullptr,
	_bug6608456$TestRepaintManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6608456"
};

$Object* allocate$bug6608456$TestRepaintManager($Class* clazz) {
	return $of($alloc(bug6608456$TestRepaintManager));
}

void bug6608456$TestRepaintManager::init$() {
	$RepaintManager::init$();
}

void bug6608456$TestRepaintManager::addDirtyRegion($JComponent* c, int32_t x, int32_t y, int32_t w, int32_t h) {
	if ($equals($RepaintManager::currentManager(c), this)) {
		$init($bug6608456);
		$nc($bug6608456::testFuture)->defaultCalled();
	} else {
		$init($bug6608456);
		$nc($bug6608456::testFuture)->delegateCalled();
	}
	$RepaintManager::addDirtyRegion(c, x, y, w, h);
}

bug6608456$TestRepaintManager::bug6608456$TestRepaintManager() {
}

$Class* bug6608456$TestRepaintManager::load$($String* name, bool initialize) {
	$loadClass(bug6608456$TestRepaintManager, name, initialize, &_bug6608456$TestRepaintManager_ClassInfo_, allocate$bug6608456$TestRepaintManager);
	return class$;
}

$Class* bug6608456$TestRepaintManager::class$ = nullptr;