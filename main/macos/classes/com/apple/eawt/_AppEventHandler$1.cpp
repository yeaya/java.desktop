#include <com/apple/eawt/_AppEventHandler$1.h>

#include <com/apple/eawt/_AppEventHandler.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Frame.h>
#include <java/awt/Window.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/WindowEvent.h>
#include <jcpp.h>

#undef WINDOW_CLOSING

using $FrameArray = $Array<::java::awt::Frame>;
using $_AppEventHandler = ::com::apple::eawt::_AppEventHandler;
using $AWTEvent = ::java::awt::AWTEvent;
using $Frame = ::java::awt::Frame;
using $Window = ::java::awt::Window;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {

$FieldInfo __AppEventHandler$1_FieldInfo_[] = {
	{"this$0", "Lcom/apple/eawt/_AppEventHandler;", nullptr, $FINAL | $SYNTHETIC, $field(_AppEventHandler$1, this$0)},
	{}
};

$MethodInfo __AppEventHandler$1_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/eawt/_AppEventHandler;)V", nullptr, 0, $method(static_cast<void(_AppEventHandler$1::*)($_AppEventHandler*)>(&_AppEventHandler$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo __AppEventHandler$1_EnclosingMethodInfo_ = {
	"com.apple.eawt._AppEventHandler",
	"performQuit",
	"()V"
};

$InnerClassInfo __AppEventHandler$1_InnerClassesInfo_[] = {
	{"com.apple.eawt._AppEventHandler$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo __AppEventHandler$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.eawt._AppEventHandler$1",
	"java.lang.Object",
	"java.lang.Runnable",
	__AppEventHandler$1_FieldInfo_,
	__AppEventHandler$1_MethodInfo_,
	nullptr,
	&__AppEventHandler$1_EnclosingMethodInfo_,
	__AppEventHandler$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.eawt._AppEventHandler"
};

$Object* allocate$_AppEventHandler$1($Class* clazz) {
	return $of($alloc(_AppEventHandler$1));
}

void _AppEventHandler$1::init$($_AppEventHandler* this$0) {
	$set(this, this$0, this$0);
}

void _AppEventHandler$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($FrameArray, allFrames, $Frame::getFrames());
	for (int32_t i = $nc(allFrames)->length - 1; i >= 0; --i) {
		$var($Frame, frame, allFrames->get(i));
		$nc(frame)->dispatchEvent($$new($WindowEvent, frame, $WindowEvent::WINDOW_CLOSING));
	}
}

_AppEventHandler$1::_AppEventHandler$1() {
}

$Class* _AppEventHandler$1::load$($String* name, bool initialize) {
	$loadClass(_AppEventHandler$1, name, initialize, &__AppEventHandler$1_ClassInfo_, allocate$_AppEventHandler$1);
	return class$;
}

$Class* _AppEventHandler$1::class$ = nullptr;

		} // eawt
	} // apple
} // com