#include <com/apple/eawt/_AppEventHandler$_QueuingAppEventDispatcher.h>

#include <com/apple/eawt/_AppEventHandler$_AppEventDispatcher.h>
#include <com/apple/eawt/_AppEventHandler$_NativeEvent.h>
#include <com/apple/eawt/_AppEventHandler.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSequentialList.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

using $_AppEventHandler = ::com::apple::eawt::_AppEventHandler;
using $_AppEventHandler$_AppEventDispatcher = ::com::apple::eawt::_AppEventHandler$_AppEventDispatcher;
using $_AppEventHandler$_NativeEvent = ::com::apple::eawt::_AppEventHandler$_NativeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSequentialList = ::java::util::AbstractSequentialList;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $List = ::java::util::List;
using $AppContext = ::sun::awt::AppContext;

namespace com {
	namespace apple {
		namespace eawt {

$FieldInfo __AppEventHandler$_QueuingAppEventDispatcher_FieldInfo_[] = {
	{"this$0", "Lcom/apple/eawt/_AppEventHandler;", nullptr, $FINAL | $SYNTHETIC, $field(_AppEventHandler$_QueuingAppEventDispatcher, this$0)},
	{"queuedEvents", "Ljava/util/List;", "Ljava/util/List<Lcom/apple/eawt/_AppEventHandler$_NativeEvent;>;", 0, $field(_AppEventHandler$_QueuingAppEventDispatcher, queuedEvents)},
	{}
};

$MethodInfo __AppEventHandler$_QueuingAppEventDispatcher_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/eawt/_AppEventHandler;)V", nullptr, 0, $method(static_cast<void(_AppEventHandler$_QueuingAppEventDispatcher::*)($_AppEventHandler*)>(&_AppEventHandler$_QueuingAppEventDispatcher::init$))},
	{"dispatch", "(Lcom/apple/eawt/_AppEventHandler$_NativeEvent;)V", nullptr, 0},
	{"setHandler", "(Ljava/lang/Object;)V", "(TH;)V", $SYNCHRONIZED},
	{}
};

$InnerClassInfo __AppEventHandler$_QueuingAppEventDispatcher_InnerClassesInfo_[] = {
	{"com.apple.eawt._AppEventHandler$_QueuingAppEventDispatcher", "com.apple.eawt._AppEventHandler", "_QueuingAppEventDispatcher", $ABSTRACT},
	{"com.apple.eawt._AppEventHandler$_AppEventDispatcher", "com.apple.eawt._AppEventHandler", "_AppEventDispatcher", $ABSTRACT},
	{}
};

$ClassInfo __AppEventHandler$_QueuingAppEventDispatcher_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.apple.eawt._AppEventHandler$_QueuingAppEventDispatcher",
	"com.apple.eawt._AppEventHandler$_AppEventDispatcher",
	nullptr,
	__AppEventHandler$_QueuingAppEventDispatcher_FieldInfo_,
	__AppEventHandler$_QueuingAppEventDispatcher_MethodInfo_,
	"<H:Ljava/lang/Object;>Lcom/apple/eawt/_AppEventHandler$_AppEventDispatcher<TH;>;",
	nullptr,
	__AppEventHandler$_QueuingAppEventDispatcher_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.eawt._AppEventHandler"
};

$Object* allocate$_AppEventHandler$_QueuingAppEventDispatcher($Class* clazz) {
	return $of($alloc(_AppEventHandler$_QueuingAppEventDispatcher));
}

void _AppEventHandler$_QueuingAppEventDispatcher::init$($_AppEventHandler* this$0) {
	$set(this, this$0, this$0);
	$_AppEventHandler$_AppEventDispatcher::init$(this$0);
	$set(this, queuedEvents, $new($LinkedList));
}

void _AppEventHandler$_QueuingAppEventDispatcher::dispatch($_AppEventHandler$_NativeEvent* event) {
	$synchronized(this) {
		if (this->queuedEvents != nullptr) {
			$nc(this->queuedEvents)->add(event);
			return;
		}
	}
	$_AppEventHandler$_AppEventDispatcher::dispatch(event);
}

void _AppEventHandler$_QueuingAppEventDispatcher::setHandler(Object$* handler) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$set(this, _handler, handler);
		setHandlerContext($($AppContext::getAppContext()));
		if (this->queuedEvents != nullptr) {
			$var($List, localQueuedEvents, this->queuedEvents);
			$set(this, queuedEvents, nullptr);
			if ($nc(localQueuedEvents)->size() != 0) {
				{
					$var($Iterator, i$, localQueuedEvents->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($_AppEventHandler$_NativeEvent, arg, $cast($_AppEventHandler$_NativeEvent, i$->next()));
						{
							dispatch(arg);
						}
					}
				}
			}
		}
	}
}

_AppEventHandler$_QueuingAppEventDispatcher::_AppEventHandler$_QueuingAppEventDispatcher() {
}

$Class* _AppEventHandler$_QueuingAppEventDispatcher::load$($String* name, bool initialize) {
	$loadClass(_AppEventHandler$_QueuingAppEventDispatcher, name, initialize, &__AppEventHandler$_QueuingAppEventDispatcher_ClassInfo_, allocate$_AppEventHandler$_QueuingAppEventDispatcher);
	return class$;
}

$Class* _AppEventHandler$_QueuingAppEventDispatcher::class$ = nullptr;

		} // eawt
	} // apple
} // com