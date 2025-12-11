#include <com/apple/eawt/FullScreenHandler$1.h>

#include <com/apple/eawt/FullScreenHandler.h>
#include <com/apple/eawt/event/FullScreenEvent.h>
#include <java/awt/Window.h>
#include <javax/swing/RootPaneContainer.h>
#include <jcpp.h>

using $FullScreenHandler = ::com::apple::eawt::FullScreenHandler;
using $FullScreenEvent = ::com::apple::eawt::event::FullScreenEvent;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RootPaneContainer = ::javax::swing::RootPaneContainer;

namespace com {
	namespace apple {
		namespace eawt {

$FieldInfo _FullScreenHandler$1_FieldInfo_[] = {
	{"val$type", "I", nullptr, $FINAL | $SYNTHETIC, $field(FullScreenHandler$1, val$type)},
	{"val$window", "Ljava/awt/Window;", nullptr, $FINAL | $SYNTHETIC, $field(FullScreenHandler$1, val$window)},
	{}
};

$MethodInfo _FullScreenHandler$1_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Window;I)V", "()V", 0, $method(static_cast<void(FullScreenHandler$1::*)($Window*,int32_t)>(&FullScreenHandler$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FullScreenHandler$1_EnclosingMethodInfo_ = {
	"com.apple.eawt.FullScreenHandler",
	"handleFullScreenEventFromNative",
	"(Ljava/awt/Window;I)V"
};

$InnerClassInfo _FullScreenHandler$1_InnerClassesInfo_[] = {
	{"com.apple.eawt.FullScreenHandler$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FullScreenHandler$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.eawt.FullScreenHandler$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_FullScreenHandler$1_FieldInfo_,
	_FullScreenHandler$1_MethodInfo_,
	nullptr,
	&_FullScreenHandler$1_EnclosingMethodInfo_,
	_FullScreenHandler$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.eawt.FullScreenHandler"
};

$Object* allocate$FullScreenHandler$1($Class* clazz) {
	return $of($alloc(FullScreenHandler$1));
}

void FullScreenHandler$1::init$($Window* val$window, int32_t val$type) {
	$set(this, val$window, val$window);
	this->val$type = val$type;
}

void FullScreenHandler$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($FullScreenHandler, handler, $FullScreenHandler::getHandlerFor($cast($RootPaneContainer, this->val$window)));
	if (handler != nullptr) {
		handler->notifyListener($$new($FullScreenEvent, this->val$window), this->val$type);
	}
}

FullScreenHandler$1::FullScreenHandler$1() {
}

$Class* FullScreenHandler$1::load$($String* name, bool initialize) {
	$loadClass(FullScreenHandler$1, name, initialize, &_FullScreenHandler$1_ClassInfo_, allocate$FullScreenHandler$1);
	return class$;
}

$Class* FullScreenHandler$1::class$ = nullptr;

		} // eawt
	} // apple
} // com