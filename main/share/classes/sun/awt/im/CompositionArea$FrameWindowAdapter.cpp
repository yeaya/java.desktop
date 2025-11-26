#include <sun/awt/im/CompositionArea$FrameWindowAdapter.h>

#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <javax/swing/JComponent.h>
#include <sun/awt/im/CompositionArea.h>
#include <jcpp.h>

using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $CompositionArea = ::sun::awt::im::CompositionArea;

namespace sun {
	namespace awt {
		namespace im {

$FieldInfo _CompositionArea$FrameWindowAdapter_FieldInfo_[] = {
	{"this$0", "Lsun/awt/im/CompositionArea;", nullptr, $FINAL | $SYNTHETIC, $field(CompositionArea$FrameWindowAdapter, this$0)},
	{}
};

$MethodInfo _CompositionArea$FrameWindowAdapter_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/im/CompositionArea;)V", nullptr, 0, $method(static_cast<void(CompositionArea$FrameWindowAdapter::*)($CompositionArea*)>(&CompositionArea$FrameWindowAdapter::init$))},
	{"windowActivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CompositionArea$FrameWindowAdapter_InnerClassesInfo_[] = {
	{"sun.awt.im.CompositionArea$FrameWindowAdapter", "sun.awt.im.CompositionArea", "FrameWindowAdapter", 0},
	{}
};

$ClassInfo _CompositionArea$FrameWindowAdapter_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.im.CompositionArea$FrameWindowAdapter",
	"java.awt.event.WindowAdapter",
	nullptr,
	_CompositionArea$FrameWindowAdapter_FieldInfo_,
	_CompositionArea$FrameWindowAdapter_MethodInfo_,
	nullptr,
	nullptr,
	_CompositionArea$FrameWindowAdapter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.im.CompositionArea"
};

$Object* allocate$CompositionArea$FrameWindowAdapter($Class* clazz) {
	return $of($alloc(CompositionArea$FrameWindowAdapter));
}

void CompositionArea$FrameWindowAdapter::init$($CompositionArea* this$0) {
	$set(this, this$0, this$0);
	$WindowAdapter::init$();
}

void CompositionArea$FrameWindowAdapter::windowActivated($WindowEvent* e) {
	this->this$0->requestFocus();
}

CompositionArea$FrameWindowAdapter::CompositionArea$FrameWindowAdapter() {
}

$Class* CompositionArea$FrameWindowAdapter::load$($String* name, bool initialize) {
	$loadClass(CompositionArea$FrameWindowAdapter, name, initialize, &_CompositionArea$FrameWindowAdapter_ClassInfo_, allocate$CompositionArea$FrameWindowAdapter);
	return class$;
}

$Class* CompositionArea$FrameWindowAdapter::class$ = nullptr;

		} // im
	} // awt
} // sun