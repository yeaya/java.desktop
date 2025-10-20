#include <sun/awt/dnd/SunDragSourceContextPeer$EventDispatcher.h>

#include <java/awt/dnd/DragSourceContext.h>
#include <java/awt/dnd/DragSourceDragEvent.h>
#include <java/awt/dnd/DragSourceDropEvent.h>
#include <java/awt/dnd/DragSourceEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/dnd/SunDragSourceContextPeer.h>
#include <jcpp.h>

using $DragSourceContext = ::java::awt::dnd::DragSourceContext;
using $DragSourceDragEvent = ::java::awt::dnd::DragSourceDragEvent;
using $DragSourceDropEvent = ::java::awt::dnd::DragSourceDropEvent;
using $DragSourceEvent = ::java::awt::dnd::DragSourceEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SunDragSourceContextPeer = ::sun::awt::dnd::SunDragSourceContextPeer;

namespace sun {
	namespace awt {
		namespace dnd {

$FieldInfo _SunDragSourceContextPeer$EventDispatcher_FieldInfo_[] = {
	{"this$0", "Lsun/awt/dnd/SunDragSourceContextPeer;", nullptr, $FINAL | $SYNTHETIC, $field(SunDragSourceContextPeer$EventDispatcher, this$0)},
	{"dispatchType", "I", nullptr, $PRIVATE | $FINAL, $field(SunDragSourceContextPeer$EventDispatcher, dispatchType)},
	{"event", "Ljava/awt/dnd/DragSourceEvent;", nullptr, $PRIVATE | $FINAL, $field(SunDragSourceContextPeer$EventDispatcher, event)},
	{}
};

$MethodInfo _SunDragSourceContextPeer$EventDispatcher_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/dnd/SunDragSourceContextPeer;ILjava/awt/dnd/DragSourceEvent;)V", nullptr, 0, $method(static_cast<void(SunDragSourceContextPeer$EventDispatcher::*)($SunDragSourceContextPeer*,int32_t,$DragSourceEvent*)>(&SunDragSourceContextPeer$EventDispatcher::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SunDragSourceContextPeer$EventDispatcher_InnerClassesInfo_[] = {
	{"sun.awt.dnd.SunDragSourceContextPeer$EventDispatcher", "sun.awt.dnd.SunDragSourceContextPeer", "EventDispatcher", $PRIVATE},
	{}
};

$ClassInfo _SunDragSourceContextPeer$EventDispatcher_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.dnd.SunDragSourceContextPeer$EventDispatcher",
	"java.lang.Object",
	"java.lang.Runnable",
	_SunDragSourceContextPeer$EventDispatcher_FieldInfo_,
	_SunDragSourceContextPeer$EventDispatcher_MethodInfo_,
	nullptr,
	nullptr,
	_SunDragSourceContextPeer$EventDispatcher_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.dnd.SunDragSourceContextPeer"
};

$Object* allocate$SunDragSourceContextPeer$EventDispatcher($Class* clazz) {
	return $of($alloc(SunDragSourceContextPeer$EventDispatcher));
}

void SunDragSourceContextPeer$EventDispatcher::init$($SunDragSourceContextPeer* this$0, int32_t dispatchType, $DragSourceEvent* event) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	switch (dispatchType) {
	case 1:
		{}
	case 2:
		{}
	case 3:
		{}
	case 6:
		{
			if (!($instanceOf($DragSourceDragEvent, event))) {
				$throwNew($IllegalArgumentException, $$str({"Event: "_s, event}));
			}
			break;
		}
	case 4:
		{
			break;
		}
	case 5:
		{
			if (!($instanceOf($DragSourceDropEvent, event))) {
				$throwNew($IllegalArgumentException, $$str({"Event: "_s, event}));
			}
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"Dispatch type: "_s, $$str(dispatchType)}));
		}
	}
	this->dispatchType = dispatchType;
	$set(this, event, event);
}

void SunDragSourceContextPeer$EventDispatcher::run() {
	$useLocalCurrentObjectStackCache();
	$var($DragSourceContext, dragSourceContext, this->this$0->getDragSourceContext());
	{
		$var($Throwable, var$0, nullptr);
		try {
			switch (this->dispatchType) {
			case 1:
				{
					$nc(dragSourceContext)->dragEnter($cast($DragSourceDragEvent, this->event));
					break;
				}
			case 2:
				{
					$nc(dragSourceContext)->dragOver($cast($DragSourceDragEvent, this->event));
					break;
				}
			case 3:
				{
					$nc(dragSourceContext)->dropActionChanged($cast($DragSourceDragEvent, this->event));
					break;
				}
			case 4:
				{
					$nc(dragSourceContext)->dragExit(this->event);
					break;
				}
			case 6:
				{
					$nc(dragSourceContext)->dragMouseMoved($cast($DragSourceDragEvent, this->event));
					break;
				}
			case 5:
				{
					{
						$var($Throwable, var$1, nullptr);
						try {
							$nc(dragSourceContext)->dragDropEnd($cast($DragSourceDropEvent, this->event));
						} catch ($Throwable&) {
							$assign(var$1, $catch());
						} /*finally*/ {
							this->this$0->cleanup();
						}
						if (var$1 != nullptr) {
							$throw(var$1);
						}
					}
					break;
				}
			default:
				{
					$throwNew($IllegalStateException, $$str({"Dispatch type: "_s, $$str(this->dispatchType)}));
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			this->this$0->quitSecondaryEventLoop();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

SunDragSourceContextPeer$EventDispatcher::SunDragSourceContextPeer$EventDispatcher() {
}

$Class* SunDragSourceContextPeer$EventDispatcher::load$($String* name, bool initialize) {
	$loadClass(SunDragSourceContextPeer$EventDispatcher, name, initialize, &_SunDragSourceContextPeer$EventDispatcher_ClassInfo_, allocate$SunDragSourceContextPeer$EventDispatcher);
	return class$;
}

$Class* SunDragSourceContextPeer$EventDispatcher::class$ = nullptr;

		} // dnd
	} // awt
} // sun