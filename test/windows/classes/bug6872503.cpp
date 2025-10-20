#include <bug6872503.h>

#include <bug6872503$1.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/event/AWTEventListener.h>
#include <java/awt/event/AWTEventListenerProxy.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventListener.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLayer.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef FOCUS_EVENT_MASK
#undef KEY_EVENT_MASK
#undef MOUSE_EVENT_MASK

using $AWTEventListenerArray = $Array<::java::awt::event::AWTEventListener>;
using $bug6872503$1 = ::bug6872503$1;
using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $FlowLayout = ::java::awt::FlowLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $AWTEventListener = ::java::awt::event::AWTEventListener;
using $AWTEventListenerProxy = ::java::awt::event::AWTEventListenerProxy;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $EventListener = ::java::util::EventListener;
using $EventListenerProxy = ::java::util::EventListenerProxy;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JLayer = ::javax::swing::JLayer;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _bug6872503_FieldInfo_[] = {
	{"l1", "Ljavax/swing/JLayer;", "Ljavax/swing/JLayer<Ljava/awt/Component;>;", $STATIC, $staticField(bug6872503, l1)},
	{"l2", "Ljavax/swing/JLayer;", "Ljavax/swing/JLayer<Ljava/awt/Component;>;", $STATIC, $staticField(bug6872503, l2)},
	{}
};

$MethodInfo _bug6872503_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6872503::*)()>(&bug6872503::init$))},
	{"createGui", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug6872503::createGui))},
	{"isLayerEventControllerAdded", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&bug6872503::isLayerEventControllerAdded))},
	{"layerEventControllerMaskEquals", "(J)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int64_t)>(&bug6872503::layerEventControllerMaskEquals))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6872503::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6872503_InnerClassesInfo_[] = {
	{"bug6872503$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6872503_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6872503",
	"java.lang.Object",
	nullptr,
	_bug6872503_FieldInfo_,
	_bug6872503_MethodInfo_,
	nullptr,
	nullptr,
	_bug6872503_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6872503$1"
};

$Object* allocate$bug6872503($Class* clazz) {
	return $of($alloc(bug6872503));
}

$JLayer* bug6872503::l1 = nullptr;
$JLayer* bug6872503::l2 = nullptr;

void bug6872503::init$() {
}

void bug6872503::createGui() {
	$useLocalCurrentObjectStackCache();
	$var($Toolkit, toolkit, $Toolkit::getDefaultToolkit());
	int32_t length = $nc($($nc(toolkit)->getAWTEventListeners()))->length;
	$init(bug6872503);
	$assignStatic(bug6872503::l1, $new($JLayer));
	$nc(bug6872503::l1)->setLayerEventMask($AWTEvent::MOUSE_EVENT_MASK | $AWTEvent::FOCUS_EVENT_MASK);
	$assignStatic(bug6872503::l2, $new($JLayer));
	$nc(bug6872503::l2)->setLayerEventMask($AWTEvent::MOUSE_EVENT_MASK | $AWTEvent::KEY_EVENT_MASK);
	if (isLayerEventControllerAdded()) {
		$throwNew($RuntimeException, "Unexpected AWTEventListener was added"_s);
	}
	$var($JFrame, frame, $new($JFrame));
	frame->setLayout($$new($FlowLayout));
	frame->add(static_cast<$Component*>(bug6872503::l1));
	frame->add(static_cast<$Component*>(bug6872503::l2));
	if (isLayerEventControllerAdded()) {
		$throwNew($RuntimeException, "Unexpected AWTEventListener was added"_s);
	}
	frame->pack();
	if (!isLayerEventControllerAdded()) {
		$throwNew($RuntimeException, "AWTEventListener was not added"_s);
	}
	int64_t var$0 = $nc(bug6872503::l1)->getLayerEventMask();
	if (!layerEventControllerMaskEquals(var$0 | $nc(bug6872503::l2)->getLayerEventMask())) {
		$throwNew($RuntimeException, "Wrong mask for AWTEventListener"_s);
	}
	frame->dispose();
	if (isLayerEventControllerAdded()) {
		$throwNew($RuntimeException, "Unexpected AWTEventListener was added"_s);
	}
}

bool bug6872503::isLayerEventControllerAdded() {
	$useLocalCurrentObjectStackCache();
	$var($Toolkit, toolkit, $Toolkit::getDefaultToolkit());
	$var($AWTEventListener, layerEventController, nullptr);
	{
		$var($AWTEventListenerArray, arr$, $nc(toolkit)->getAWTEventListeners());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($AWTEventListener, listener, arr$->get(i$));
			{
				if ($instanceOf($AWTEventListenerProxy, listener)) {
					$assign(listener, $cast($AWTEventListener, $nc(($cast($AWTEventListenerProxy, listener)))->getListener()));
				}
				if ("LayerEventController"_s->equals($($nc($of(listener))->getClass()->getSimpleName()))) {
					if (layerEventController != nullptr) {
						$throwNew($RuntimeException, "Duplicated LayerEventController"_s);
					}
					$assign(layerEventController, listener);
				}
			}
		}
	}
	bool ret = layerEventController != nullptr;
	if (ret) {
		$init($System);
		$nc($System::out)->println("LayerEventController found"_s);
	} else {
		$init($System);
		$nc($System::out)->println("No LayerEventController"_s);
	}
	return ret;
}

bool bug6872503::layerEventControllerMaskEquals(int64_t mask) {
	$useLocalCurrentObjectStackCache();
	$var($Toolkit, toolkit, $Toolkit::getDefaultToolkit());
	$var($AWTEventListener, layerEventController, nullptr);
	{
		$var($AWTEventListenerArray, arr$, $nc(toolkit)->getAWTEventListeners(mask));
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($AWTEventListener, listener, arr$->get(i$));
			{
				if ($instanceOf($AWTEventListenerProxy, listener)) {
					$assign(listener, $cast($AWTEventListener, $nc(($cast($AWTEventListenerProxy, listener)))->getListener()));
				}
				if ("LayerEventController"_s->equals($($nc($of(listener))->getClass()->getSimpleName()))) {
					if (layerEventController != nullptr) {
						$throwNew($RuntimeException, "Duplicated LayerEventController"_s);
					}
					$assign(layerEventController, listener);
				}
			}
		}
	}
	bool ret = layerEventController != nullptr;
	if (ret) {
		$init($System);
		$nc($System::out)->println("LayerEventController with the correct mask found"_s);
	} else {
		$init($System);
		$nc($System::out)->println("No LayerEventController with the correct mask"_s);
	}
	return ret;
}

void bug6872503::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug6872503$1));
}

bug6872503::bug6872503() {
}

$Class* bug6872503::load$($String* name, bool initialize) {
	$loadClass(bug6872503, name, initialize, &_bug6872503_ClassInfo_, allocate$bug6872503);
	return class$;
}

$Class* bug6872503::class$ = nullptr;