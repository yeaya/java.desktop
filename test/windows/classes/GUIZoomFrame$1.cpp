#include <GUIZoomFrame$1.h>

#include <GUIZoomFrame.h>
#include <java/awt/Frame.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef ICONIFIED
#undef MAXIMIZED_BOTH
#undef MAXIMIZED_HORIZ
#undef MAXIMIZED_VERT
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

$FieldInfo _GUIZoomFrame$1_FieldInfo_[] = {
	{"this$0", "LGUIZoomFrame;", nullptr, $FINAL | $SYNTHETIC, $field(GUIZoomFrame$1, this$0)},
	{}
};

$MethodInfo _GUIZoomFrame$1_MethodInfo_[] = {
	{"<init>", "(LGUIZoomFrame;)V", nullptr, 0, $method(static_cast<void(GUIZoomFrame$1::*)($GUIZoomFrame*)>(&GUIZoomFrame$1::init$))},
	{"windowStateChanged", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _GUIZoomFrame$1_EnclosingMethodInfo_ = {
	"GUIZoomFrame",
	"<init>",
	"()V"
};

$InnerClassInfo _GUIZoomFrame$1_InnerClassesInfo_[] = {
	{"GUIZoomFrame$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _GUIZoomFrame$1_ClassInfo_ = {
	$ACC_SUPER,
	"GUIZoomFrame$1",
	"java.awt.event.WindowAdapter",
	nullptr,
	_GUIZoomFrame$1_FieldInfo_,
	_GUIZoomFrame$1_MethodInfo_,
	nullptr,
	&_GUIZoomFrame$1_EnclosingMethodInfo_,
	_GUIZoomFrame$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GUIZoomFrame"
};

$Object* allocate$GUIZoomFrame$1($Class* clazz) {
	return $of($alloc(GUIZoomFrame$1));
}

void GUIZoomFrame$1::init$($GUIZoomFrame* this$0) {
	$set(this, this$0, this$0);
	$WindowAdapter::init$();
}

void GUIZoomFrame$1::windowStateChanged($WindowEvent* e) {
	if ($nc(e)->getNewState() == $Frame::MAXIMIZED_BOTH) {
		this->this$0->maxBoth = true;
	}
	if ($nc(e)->getNewState() == $Frame::NORMAL) {
		this->this$0->normal = true;
	}
	if ($nc(e)->getNewState() == $Frame::ICONIFIED) {
		this->this$0->iconify = true;
	}
	if ($nc(e)->getNewState() == $Frame::MAXIMIZED_HORIZ) {
		this->this$0->maxHor = true;
	}
	if ($nc(e)->getNewState() == $Frame::MAXIMIZED_VERT) {
		this->this$0->maxVer = true;
	}
}

GUIZoomFrame$1::GUIZoomFrame$1() {
}

$Class* GUIZoomFrame$1::load$($String* name, bool initialize) {
	$loadClass(GUIZoomFrame$1, name, initialize, &_GUIZoomFrame$1_ClassInfo_, allocate$GUIZoomFrame$1);
	return class$;
}

$Class* GUIZoomFrame$1::class$ = nullptr;