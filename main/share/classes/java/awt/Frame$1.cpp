#include <java/awt/Frame$1.h>

#include <java/awt/Component.h>
#include <java/awt/Frame.h>
#include <java/awt/Rectangle.h>
#include <jcpp.h>

using $Frame = ::java::awt::Frame;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$MethodInfo _Frame$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Frame$1::*)()>(&Frame$1::init$))},
	{"getExtendedState", "(Ljava/awt/Frame;)I", nullptr, $PUBLIC},
	{"getMaximizedBounds", "(Ljava/awt/Frame;)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"setExtendedState", "(Ljava/awt/Frame;I)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Frame$1_EnclosingMethodInfo_ = {
	"java.awt.Frame",
	nullptr,
	nullptr
};

$InnerClassInfo _Frame$1_InnerClassesInfo_[] = {
	{"java.awt.Frame$1", nullptr, nullptr, 0},
	{"sun.awt.AWTAccessor$FrameAccessor", "sun.awt.AWTAccessor", "FrameAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Frame$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.Frame$1",
	"java.lang.Object",
	"sun.awt.AWTAccessor$FrameAccessor",
	nullptr,
	_Frame$1_MethodInfo_,
	nullptr,
	&_Frame$1_EnclosingMethodInfo_,
	_Frame$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Frame"
};

$Object* allocate$Frame$1($Class* clazz) {
	return $of($alloc(Frame$1));
}

void Frame$1::init$() {
}

void Frame$1::setExtendedState($Frame* frame, int32_t state) {
	$synchronized($nc(frame)->getObjectLock()) {
		frame->state = state;
	}
}

int32_t Frame$1::getExtendedState($Frame* frame) {
	$synchronized($nc(frame)->getObjectLock()) {
		return frame->state;
	}
}

$Rectangle* Frame$1::getMaximizedBounds($Frame* frame) {
	$synchronized($nc(frame)->getObjectLock()) {
		return frame->maximizedBounds;
	}
}

Frame$1::Frame$1() {
}

$Class* Frame$1::load$($String* name, bool initialize) {
	$loadClass(Frame$1, name, initialize, &_Frame$1_ClassInfo_, allocate$Frame$1);
	return class$;
}

$Class* Frame$1::class$ = nullptr;

	} // awt
} // java