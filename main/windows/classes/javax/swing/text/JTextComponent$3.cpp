#include <javax/swing/text/JTextComponent$3.h>

#include <java/awt/Component.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/Error.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
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
#include <java/util/concurrent/Future.h>
#include <java/util/concurrent/FutureTask.h>
#include <java/util/concurrent/RunnableFuture.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent$3$1.h>
#include <javax/swing/text/JTextComponent$3$2.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Callable = ::java::util::concurrent::Callable;
using $ExecutionException = ::java::util::concurrent::ExecutionException;
using $Future = ::java::util::concurrent::Future;
using $FutureTask = ::java::util::concurrent::FutureTask;
using $RunnableFuture = ::java::util::concurrent::RunnableFuture;
using $JComponent = ::javax::swing::JComponent;
using $Document = ::javax::swing::text::Document;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $JTextComponent$3$1 = ::javax::swing::text::JTextComponent$3$1;
using $JTextComponent$3$2 = ::javax::swing::text::JTextComponent$3$2;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _JTextComponent$3_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/JTextComponent;", nullptr, $FINAL | $SYNTHETIC, $field(JTextComponent$3, this$0)},
	{"val$futurePrinting", "Ljava/util/concurrent/FutureTask;", nullptr, $FINAL | $SYNTHETIC, $field(JTextComponent$3, val$futurePrinting)},
	{"val$isEventDispatchThread", "Z", nullptr, $FINAL | $SYNTHETIC, $field(JTextComponent$3, val$isEventDispatchThread)},
	{}
};

$MethodInfo _JTextComponent$3_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/JTextComponent;ZLjava/util/concurrent/FutureTask;)V", "()V", 0, $method(static_cast<void(JTextComponent$3::*)($JTextComponent*,bool,$FutureTask*)>(&JTextComponent$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JTextComponent$3_EnclosingMethodInfo_ = {
	"javax.swing.text.JTextComponent",
	"print",
	"(Ljava/text/MessageFormat;Ljava/text/MessageFormat;ZLjavax/print/PrintService;Ljavax/print/attribute/PrintRequestAttributeSet;Z)Z"
};

$InnerClassInfo _JTextComponent$3_InnerClassesInfo_[] = {
	{"javax.swing.text.JTextComponent$3", nullptr, nullptr, 0},
	{"javax.swing.text.JTextComponent$3$2", nullptr, nullptr, 0},
	{"javax.swing.text.JTextComponent$3$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JTextComponent$3_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.JTextComponent$3",
	"java.lang.Object",
	"java.lang.Runnable",
	_JTextComponent$3_FieldInfo_,
	_JTextComponent$3_MethodInfo_,
	nullptr,
	&_JTextComponent$3_EnclosingMethodInfo_,
	_JTextComponent$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.JTextComponent"
};

$Object* allocate$JTextComponent$3($Class* clazz) {
	return $of($alloc(JTextComponent$3));
}

void JTextComponent$3::init$($JTextComponent* this$0, bool val$isEventDispatchThread, $FutureTask* val$futurePrinting) {
	$set(this, this$0, this$0);
	this->val$isEventDispatchThread = val$isEventDispatchThread;
	$set(this, val$futurePrinting, val$futurePrinting);
}

void JTextComponent$3::run() {
	bool wasEnabled = false;
	if (this->val$isEventDispatchThread) {
		if (this->this$0->isEnabled()) {
			wasEnabled = true;
			this->this$0->setEnabled(false);
		}
	} else {
		try {
			wasEnabled = $nc(($cast($Boolean, $($nc($($SwingUtilities2::submit($$new($JTextComponent$3$1, this))))->get()))))->booleanValue();
		} catch ($InterruptedException&) {
			$var($InterruptedException, e, $catch());
			$throwNew($RuntimeException, static_cast<$Throwable*>(e));
		} catch ($ExecutionException&) {
			$var($ExecutionException, e, $catch());
			$var($Throwable, cause, e->getCause());
			if ($instanceOf($Error, cause)) {
				$throw($cast($Error, cause));
			}
			if ($instanceOf($RuntimeException, cause)) {
				$throw($cast($RuntimeException, cause));
			}
			$throwNew($AssertionError, $of(cause));
		}
	}
	$nc($(this->this$0->getDocument()))->render(this->val$futurePrinting);
	if (wasEnabled) {
		if (this->val$isEventDispatchThread) {
			this->this$0->setEnabled(true);
		} else {
			try {
				$nc($($SwingUtilities2::submit($$new($JTextComponent$3$2, this), nullptr)))->get();
			} catch ($InterruptedException&) {
				$var($InterruptedException, e, $catch());
				$throwNew($RuntimeException, static_cast<$Throwable*>(e));
			} catch ($ExecutionException&) {
				$var($ExecutionException, e, $catch());
				$var($Throwable, cause, e->getCause());
				if ($instanceOf($Error, cause)) {
					$throw($cast($Error, cause));
				}
				if ($instanceOf($RuntimeException, cause)) {
					$throw($cast($RuntimeException, cause));
				}
				$throwNew($AssertionError, $of(cause));
			}
		}
	}
}

JTextComponent$3::JTextComponent$3() {
}

$Class* JTextComponent$3::load$($String* name, bool initialize) {
	$loadClass(JTextComponent$3, name, initialize, &_JTextComponent$3_ClassInfo_, allocate$JTextComponent$3);
	return class$;
}

$Class* JTextComponent$3::class$ = nullptr;

		} // text
	} // swing
} // javax