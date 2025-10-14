#include <java/awt/Window$1DisposeAction.h>

#include <java/awt/Component.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/Window.h>
#include <java/awt/im/InputContext.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Vector.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $Window = ::java::awt::Window;
using $InputContext = ::java::awt::im::InputContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $Vector = ::java::util::Vector;

namespace java {
	namespace awt {

$FieldInfo _Window$1DisposeAction_FieldInfo_[] = {
	{"this$0", "Ljava/awt/Window;", nullptr, $FINAL | $SYNTHETIC, $field(Window$1DisposeAction, this$0)},
	{}
};

$MethodInfo _Window$1DisposeAction_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Window;)V", nullptr, 0, $method(static_cast<void(Window$1DisposeAction::*)($Window*)>(&Window$1DisposeAction::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Window$1DisposeAction_EnclosingMethodInfo_ = {
	"java.awt.Window",
	"doDispose",
	"()V"
};

$InnerClassInfo _Window$1DisposeAction_InnerClassesInfo_[] = {
	{"java.awt.Window$1DisposeAction", nullptr, "DisposeAction", 0},
	{}
};

$ClassInfo _Window$1DisposeAction_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.Window$1DisposeAction",
	"java.lang.Object",
	"java.lang.Runnable",
	_Window$1DisposeAction_FieldInfo_,
	_Window$1DisposeAction_MethodInfo_,
	nullptr,
	&_Window$1DisposeAction_EnclosingMethodInfo_,
	_Window$1DisposeAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Window"
};

$Object* allocate$Window$1DisposeAction($Class* clazz) {
	return $of($alloc(Window$1DisposeAction));
}

void Window$1DisposeAction::init$($Window* this$0) {
	$set(this, this$0, this$0);
}

void Window$1DisposeAction::run() {
	this->this$0->disposing = true;
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($GraphicsDevice, gd, $nc($(this->this$0->getGraphicsConfiguration()))->getDevice());
			if ($nc(gd)->getFullScreenWindow() == this->this$0) {
				gd->setFullScreenWindow(nullptr);
			}
			$var($ObjectArray, ownedWindowArray, nullptr);
			$synchronized(this->this$0->ownedWindowList) {
				$assign(ownedWindowArray, $new($ObjectArray, $nc(this->this$0->ownedWindowList)->size()));
				$nc(this->this$0->ownedWindowList)->copyInto(ownedWindowArray);
			}
			for (int32_t i = 0; i < $nc(ownedWindowArray)->length; ++i) {
				$var($Window, child, ($cast($Window, $nc((($cast($WeakReference, ownedWindowArray->get(i)))))->get())));
				if (child != nullptr) {
					child->disposeImpl();
				}
			}
			this->this$0->hide();
			this->this$0->beforeFirstShow = true;
			this->this$0->removeNotify();
			$synchronized(this->this$0->inputContextLock) {
				if (this->this$0->inputContext != nullptr) {
					$nc(this->this$0->inputContext)->dispose();
					$set(this->this$0, inputContext, nullptr);
				}
			}
			this->this$0->clearCurrentFocusCycleRootOnHide();
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			this->this$0->disposing = false;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

Window$1DisposeAction::Window$1DisposeAction() {
}

$Class* Window$1DisposeAction::load$($String* name, bool initialize) {
	$loadClass(Window$1DisposeAction, name, initialize, &_Window$1DisposeAction_ClassInfo_, allocate$Window$1DisposeAction);
	return class$;
}

$Class* Window$1DisposeAction::class$ = nullptr;

	} // awt
} // java