#include <javax/swing/RepaintManager$DisplayChangedHandler.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/InvocationEvent.h>
#include <java/lang/Runnable.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <javax/swing/RepaintManager$DisplayChangedRunnable.h>
#include <javax/swing/RepaintManager.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

#undef EVENT_QUEUE_KEY

using $AWTEvent = ::java::awt::AWTEvent;
using $EventQueue = ::java::awt::EventQueue;
using $Toolkit = ::java::awt::Toolkit;
using $InvocationEvent = ::java::awt::event::InvocationEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $RepaintManager = ::javax::swing::RepaintManager;
using $RepaintManager$DisplayChangedRunnable = ::javax::swing::RepaintManager$DisplayChangedRunnable;
using $AppContext = ::sun::awt::AppContext;
using $DisplayChangedListener = ::sun::awt::DisplayChangedListener;

namespace javax {
	namespace swing {

$MethodInfo _RepaintManager$DisplayChangedHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(RepaintManager$DisplayChangedHandler::*)()>(&RepaintManager$DisplayChangedHandler::init$))},
	{"displayChanged", "()V", nullptr, $PUBLIC},
	{"paletteChanged", "()V", nullptr, $PUBLIC},
	{"scheduleDisplayChanges", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&RepaintManager$DisplayChangedHandler::scheduleDisplayChanges))},
	{}
};

$InnerClassInfo _RepaintManager$DisplayChangedHandler_InnerClassesInfo_[] = {
	{"javax.swing.RepaintManager$DisplayChangedHandler", "javax.swing.RepaintManager", "DisplayChangedHandler", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _RepaintManager$DisplayChangedHandler_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.RepaintManager$DisplayChangedHandler",
	"java.lang.Object",
	"sun.awt.DisplayChangedListener",
	nullptr,
	_RepaintManager$DisplayChangedHandler_MethodInfo_,
	nullptr,
	nullptr,
	_RepaintManager$DisplayChangedHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.RepaintManager"
};

$Object* allocate$RepaintManager$DisplayChangedHandler($Class* clazz) {
	return $of($alloc(RepaintManager$DisplayChangedHandler));
}

void RepaintManager$DisplayChangedHandler::init$() {
}

void RepaintManager$DisplayChangedHandler::displayChanged() {
	scheduleDisplayChanges();
}

void RepaintManager$DisplayChangedHandler::paletteChanged() {
}

void RepaintManager$DisplayChangedHandler::scheduleDisplayChanges() {
	$init(RepaintManager$DisplayChangedHandler);
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($($AppContext::getAppContexts()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($AppContext, context, $cast($AppContext, i$->next()));
			{
				$synchronized(context) {
					if (!$nc(context)->isDisposed()) {
						$var($EventQueue, eventQueue, $cast($EventQueue, context->get($AppContext::EVENT_QUEUE_KEY)));
						if (eventQueue != nullptr) {
							$var($Object, var$0, $of($Toolkit::getDefaultToolkit()));
							eventQueue->postEvent($$new($InvocationEvent, var$0, $$new($RepaintManager$DisplayChangedRunnable)));
						}
					}
				}
			}
		}
	}
}

RepaintManager$DisplayChangedHandler::RepaintManager$DisplayChangedHandler() {
}

$Class* RepaintManager$DisplayChangedHandler::load$($String* name, bool initialize) {
	$loadClass(RepaintManager$DisplayChangedHandler, name, initialize, &_RepaintManager$DisplayChangedHandler_ClassInfo_, allocate$RepaintManager$DisplayChangedHandler);
	return class$;
}

$Class* RepaintManager$DisplayChangedHandler::class$ = nullptr;

	} // swing
} // javax