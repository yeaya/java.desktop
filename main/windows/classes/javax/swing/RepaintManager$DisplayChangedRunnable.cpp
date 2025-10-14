#include <javax/swing/RepaintManager$DisplayChangedRunnable.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/RepaintManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComponent = ::javax::swing::JComponent;
using $RepaintManager = ::javax::swing::RepaintManager;

namespace javax {
	namespace swing {

$MethodInfo _RepaintManager$DisplayChangedRunnable_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(RepaintManager$DisplayChangedRunnable::*)()>(&RepaintManager$DisplayChangedRunnable::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _RepaintManager$DisplayChangedRunnable_InnerClassesInfo_[] = {
	{"javax.swing.RepaintManager$DisplayChangedRunnable", "javax.swing.RepaintManager", "DisplayChangedRunnable", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _RepaintManager$DisplayChangedRunnable_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.RepaintManager$DisplayChangedRunnable",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_RepaintManager$DisplayChangedRunnable_MethodInfo_,
	nullptr,
	nullptr,
	_RepaintManager$DisplayChangedRunnable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.RepaintManager"
};

$Object* allocate$RepaintManager$DisplayChangedRunnable($Class* clazz) {
	return $of($alloc(RepaintManager$DisplayChangedRunnable));
}

void RepaintManager$DisplayChangedRunnable::init$() {
}

void RepaintManager$DisplayChangedRunnable::run() {
	$nc($($RepaintManager::currentManager(($JComponent*)nullptr)))->displayChanged();
}

RepaintManager$DisplayChangedRunnable::RepaintManager$DisplayChangedRunnable() {
}

$Class* RepaintManager$DisplayChangedRunnable::load$($String* name, bool initialize) {
	$loadClass(RepaintManager$DisplayChangedRunnable, name, initialize, &_RepaintManager$DisplayChangedRunnable_ClassInfo_, allocate$RepaintManager$DisplayChangedRunnable);
	return class$;
}

$Class* RepaintManager$DisplayChangedRunnable::class$ = nullptr;

	} // swing
} // javax