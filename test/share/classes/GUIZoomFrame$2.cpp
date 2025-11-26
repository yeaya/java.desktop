#include <GUIZoomFrame$2.h>

#include <GUIZoomFrame.h>
#include <java/awt/Frame.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <jcpp.h>

#undef MAXIMIZED_BOTH
#undef NORMAL

using $GUIZoomFrame = ::GUIZoomFrame;
using $Frame = ::java::awt::Frame;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _GUIZoomFrame$2_FieldInfo_[] = {
	{"this$0", "LGUIZoomFrame;", nullptr, $FINAL | $SYNTHETIC, $field(GUIZoomFrame$2, this$0)},
	{}
};

$MethodInfo _GUIZoomFrame$2_MethodInfo_[] = {
	{"<init>", "(LGUIZoomFrame;)V", nullptr, 0, $method(static_cast<void(GUIZoomFrame$2::*)($GUIZoomFrame*)>(&GUIZoomFrame$2::init$))},
	{"windowStateChanged", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _GUIZoomFrame$2_EnclosingMethodInfo_ = {
	"GUIZoomFrame",
	"<init>",
	"()V"
};

$InnerClassInfo _GUIZoomFrame$2_InnerClassesInfo_[] = {
	{"GUIZoomFrame$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _GUIZoomFrame$2_ClassInfo_ = {
	$ACC_SUPER,
	"GUIZoomFrame$2",
	"java.awt.event.WindowAdapter",
	nullptr,
	_GUIZoomFrame$2_FieldInfo_,
	_GUIZoomFrame$2_MethodInfo_,
	nullptr,
	&_GUIZoomFrame$2_EnclosingMethodInfo_,
	_GUIZoomFrame$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GUIZoomFrame"
};

$Object* allocate$GUIZoomFrame$2($Class* clazz) {
	return $of($alloc(GUIZoomFrame$2));
}

void GUIZoomFrame$2::init$($GUIZoomFrame* this$0) {
	$set(this, this$0, this$0);
	$WindowAdapter::init$();
}

void GUIZoomFrame$2::windowStateChanged($WindowEvent* e) {
	if ($nc(e)->getNewState() == $Frame::MAXIMIZED_BOTH) {
		this->this$0->maxBoth = true;
	}
	if ($nc(e)->getNewState() == $Frame::NORMAL) {
		this->this$0->normal = true;
	}
}

GUIZoomFrame$2::GUIZoomFrame$2() {
}

$Class* GUIZoomFrame$2::load$($String* name, bool initialize) {
	$loadClass(GUIZoomFrame$2, name, initialize, &_GUIZoomFrame$2_ClassInfo_, allocate$GUIZoomFrame$2);
	return class$;
}

$Class* GUIZoomFrame$2::class$ = nullptr;