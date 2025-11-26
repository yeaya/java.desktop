#include <bug7013453$1.h>

#include <bug7013453$1$1.h>
#include <bug7013453.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/NoSuchFieldException.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/Runnable.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/RepaintManager.h>
#include <jcpp.h>

using $bug7013453 = ::bug7013453;
using $bug7013453$1$1 = ::bug7013453$1$1;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchFieldException = ::java::lang::NoSuchFieldException;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Field = ::java::lang::reflect::Field;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Method = ::java::lang::reflect::Method;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $RepaintManager = ::javax::swing::RepaintManager;

$MethodInfo _bug7013453$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug7013453$1::*)()>(&bug7013453$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7013453$1_EnclosingMethodInfo_ = {
	"bug7013453",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug7013453$1_InnerClassesInfo_[] = {
	{"bug7013453$1", nullptr, nullptr, 0},
	{"bug7013453$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7013453$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug7013453$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug7013453$1_MethodInfo_,
	nullptr,
	&_bug7013453$1_EnclosingMethodInfo_,
	_bug7013453$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7013453"
};

$Object* allocate$bug7013453$1($Class* clazz) {
	return $of($alloc(bug7013453$1));
}

void bug7013453$1::init$() {
}

void bug7013453$1::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$load($RepaintManager);
		$var($Method, getPaintManagerMethod, $RepaintManager::class$->getDeclaredMethod("getPaintManager"_s, $$new($ClassArray, 0)));
		$nc(getPaintManagerMethod)->setAccessible(true);
		$var($Object, paintManager, getPaintManagerMethod->invoke($($RepaintManager::currentManager(static_cast<$JComponent*>($$new($JLabel)))), $$new($ObjectArray, 0)));
		$var($String, paintManagerName, $nc($of(paintManager))->getClass()->getCanonicalName());
		if (!$nc(paintManagerName)->equals("javax.swing.BufferStrategyPaintManager"_s)) {
			$nc($System::out)->println($$str({"The test is not suitable for the "_s, paintManagerName, " paint manager. The test skipped."_s}));
			return;
		}
		$var($Field, showingField, $of(paintManager)->getClass()->getDeclaredField("showing"_s));
		$nc(showingField)->setAccessible(true);
		$synchronized(paintManager) {
			showingField->setBoolean(paintManager, true);
		}
		$var($Thread, thread, $new($Thread, static_cast<$Runnable*>($$new($bug7013453$1$1, this, paintManager, showingField))));
		thread->start();
		$var($Method, disposeMethod, $of(paintManager)->getClass()->getDeclaredMethod("dispose"_s, $$new($ClassArray, 0)));
		$nc(disposeMethod)->setAccessible(true);
		disposeMethod->invoke(paintManager, $$new($ObjectArray, 0));
		$nc($System::out)->println("The test passed."_s);
	} catch ($NoSuchMethodException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($InvocationTargetException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($IllegalAccessException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($NoSuchFieldException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

bug7013453$1::bug7013453$1() {
}

$Class* bug7013453$1::load$($String* name, bool initialize) {
	$loadClass(bug7013453$1, name, initialize, &_bug7013453$1_ClassInfo_, allocate$bug7013453$1);
	return class$;
}

$Class* bug7013453$1::class$ = nullptr;