#include <bug6547087.h>

#include <bug6547087$1.h>
#include <java/awt/Dimension.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/Callable.h>
#include <java/util/concurrent/ExecutionException.h>
#include <java/util/concurrent/FutureTask.h>
#include <java/util/concurrent/RunnableFuture.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPopupMenu$Separator.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $bug6547087$1 = ::bug6547087$1;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Callable = ::java::util::concurrent::Callable;
using $ExecutionException = ::java::util::concurrent::ExecutionException;
using $FutureTask = ::java::util::concurrent::FutureTask;
using $RunnableFuture = ::java::util::concurrent::RunnableFuture;
using $JComponent = ::javax::swing::JComponent;
using $JPopupMenu$Separator = ::javax::swing::JPopupMenu$Separator;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

$MethodInfo _bug6547087_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6547087::*)()>(&bug6547087::init$))},
	{"invokeAndWait", "(Ljava/util/concurrent/Callable;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/util/concurrent/Callable<TT;>;)TT;", $STATIC, $method(static_cast<$Object*(*)($Callable*)>(&bug6547087::invokeAndWait)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6547087::main)), "java.lang.Exception"},
	{"test", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&bug6547087::test)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6547087_InnerClassesInfo_[] = {
	{"bug6547087$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6547087_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6547087",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug6547087_MethodInfo_,
	nullptr,
	nullptr,
	_bug6547087_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6547087$1"
};

$Object* allocate$bug6547087($Class* clazz) {
	return $of($alloc(bug6547087));
}

void bug6547087::init$() {
}

void bug6547087::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	try {
		invokeAndWait($$new($bug6547087$1));
	} catch ($ExecutionException&) {
		$var($ExecutionException, e, $catch());
		if ($instanceOf($NullPointerException, $(e->getCause()))) {
			$throwNew($RuntimeException, "failed"_s);
		}
	}
}

void bug6547087::test() {
	$useLocalCurrentObjectStackCache();
	$UIManager::setLookAndFeel($($UIManager::getSystemLookAndFeelClassName()));
	$var($JPopupMenu$Separator, separator, $new($JPopupMenu$Separator));
	separator->getPreferredSize();
}

$Object* bug6547087::invokeAndWait($Callable* callable) {
	$var($FutureTask, future, $new($FutureTask, callable));
	$SwingUtilities::invokeLater(future);
	return $of(future->get());
}

bug6547087::bug6547087() {
}

$Class* bug6547087::load$($String* name, bool initialize) {
	$loadClass(bug6547087, name, initialize, &_bug6547087_ClassInfo_, allocate$bug6547087);
	return class$;
}

$Class* bug6547087::class$ = nullptr;