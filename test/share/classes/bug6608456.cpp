#include <bug6608456.h>

#include <bug6608456$1.h>
#include <bug6608456$2.h>
#include <bug6608456$TestFuture.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <java/awt/Window.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/Callable.h>
#include <java/util/concurrent/FutureTask.h>
#include <java/util/concurrent/RunnableFuture.h>
#include <java/util/concurrent/TimeUnit.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/RepaintManager.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef SECONDS

using $bug6608456$1 = ::bug6608456$1;
using $bug6608456$2 = ::bug6608456$2;
using $bug6608456$TestFuture = ::bug6608456$TestFuture;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Point = ::java::awt::Point;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Method = ::java::lang::reflect::Method;
using $Callable = ::java::util::concurrent::Callable;
using $FutureTask = ::java::util::concurrent::FutureTask;
using $RunnableFuture = ::java::util::concurrent::RunnableFuture;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $RepaintManager = ::javax::swing::RepaintManager;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _bug6608456_FieldInfo_[] = {
	{"testFuture", "Lbug6608456$TestFuture;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug6608456, testFuture)},
	{}
};

$MethodInfo _bug6608456_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6608456::*)()>(&bug6608456::init$))},
	{"blockTillDisplayed", "(Ljava/awt/Component;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Component*)>(&bug6608456::blockTillDisplayed))},
	{"invokeAndWait", "(Ljava/util/concurrent/Callable;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/util/concurrent/Callable<TT;>;)TT;", $STATIC, $method(static_cast<$Object*(*)($Callable*)>(&bug6608456::invokeAndWait)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6608456::main)), "java.lang.Exception"},
	{"registerDelegate", "(Ljavax/swing/JComponent;Ljavax/swing/RepaintManager;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($JComponent*,$RepaintManager*)>(&bug6608456::registerDelegate))},
	{}
};

$InnerClassInfo _bug6608456_InnerClassesInfo_[] = {
	{"bug6608456$TestFuture", "bug6608456", "TestFuture", $STATIC},
	{"bug6608456$TestRepaintManager", "bug6608456", "TestRepaintManager", $STATIC},
	{"bug6608456$2", nullptr, nullptr, 0},
	{"bug6608456$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6608456_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6608456",
	"java.lang.Object",
	nullptr,
	_bug6608456_FieldInfo_,
	_bug6608456_MethodInfo_,
	nullptr,
	nullptr,
	_bug6608456_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6608456$TestFuture,bug6608456$TestFuture$1,bug6608456$TestRepaintManager,bug6608456$2,bug6608456$1"
};

$Object* allocate$bug6608456($Class* clazz) {
	return $of($alloc(bug6608456));
}

$bug6608456$TestFuture* bug6608456::testFuture = nullptr;

void bug6608456::init$() {
}

void bug6608456::main($StringArray* args) {
	$init(bug6608456);
	$useLocalCurrentObjectStackCache();
	$var($JComponent, component, $cast($JComponent, invokeAndWait($$new($bug6608456$1))));
	if (component == nullptr) {
		$throwNew($RuntimeException, "failed. can not register delegate"_s);
	}
	blockTillDisplayed(component);
	invokeAndWait($$new($bug6608456$2, component));
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$init($TimeUnit);
				if ($nc(($cast($Boolean, $($nc(bug6608456::testFuture)->get(10, $TimeUnit::SECONDS)))))->booleanValue()) {
				}
			} catch ($Exception& e) {
				$throwNew($RuntimeException, "failed"_s, e);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$load($JFrame);
			$var($JFrame, frame, $cast($JFrame, $SwingUtilities::getAncestorOfClass($JFrame::class$, component)));
			if (frame != nullptr) {
				frame->dispose();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool bug6608456::registerDelegate($JComponent* c, $RepaintManager* repaintManager) {
	$init(bug6608456);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	bool rv = false;
	try {
		$Class* clazz = $Class::forName("com.sun.java.swing.SwingUtilities3"_s);
		$load($JComponent);
		$load($RepaintManager);
		$var($Method, method, $nc(clazz)->getMethod("setDelegateRepaintManager"_s, $$new($ClassArray, {
			$JComponent::class$,
			$RepaintManager::class$
		})));
		$nc(method)->invoke(clazz, $$new($ObjectArray, {
			$of(c),
			$of(repaintManager)
		}));
		rv = true;
	} catch ($Exception& ignore) {
	}
	return rv;
}

$Object* bug6608456::invokeAndWait($Callable* callable) {
	$init(bug6608456);
	$var($FutureTask, future, $new($FutureTask, callable));
	$SwingUtilities::invokeLater(future);
	return $of(future->get());
}

void bug6608456::blockTillDisplayed($Component* comp) {
	$init(bug6608456);
	$var($Point, p, nullptr);
	while (p == nullptr) {
		try {
			$assign(p, $nc(comp)->getLocationOnScreen());
		} catch ($IllegalStateException& e) {
			try {
				$Thread::sleep(100);
			} catch ($InterruptedException& ie) {
			}
		}
	}
}

void clinit$bug6608456($Class* class$) {
	$assignStatic(bug6608456::testFuture, $new($bug6608456$TestFuture));
}

bug6608456::bug6608456() {
}

$Class* bug6608456::load$($String* name, bool initialize) {
	$loadClass(bug6608456, name, initialize, &_bug6608456_ClassInfo_, clinit$bug6608456, allocate$bug6608456);
	return class$;
}

$Class* bug6608456::class$ = nullptr;