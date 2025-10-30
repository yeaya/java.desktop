#include <sun/awt/AWTAccessor$FrameAccessor.h>

#include <java/awt/Frame.h>
#include <java/awt/Rectangle.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $Frame = ::java::awt::Frame;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;

namespace sun {
	namespace awt {

$MethodInfo _AWTAccessor$FrameAccessor_MethodInfo_[] = {
	{"getExtendedState", "(Ljava/awt/Frame;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getMaximizedBounds", "(Ljava/awt/Frame;)Ljava/awt/Rectangle;", nullptr, $PUBLIC | $ABSTRACT},
	{"setExtendedState", "(Ljava/awt/Frame;I)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AWTAccessor$FrameAccessor_InnerClassesInfo_[] = {
	{"sun.awt.AWTAccessor$FrameAccessor", "sun.awt.AWTAccessor", "FrameAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AWTAccessor$FrameAccessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.AWTAccessor$FrameAccessor",
	nullptr,
	nullptr,
	nullptr,
	_AWTAccessor$FrameAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_AWTAccessor$FrameAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AWTAccessor"
};

$Object* allocate$AWTAccessor$FrameAccessor($Class* clazz) {
	return $of($alloc(AWTAccessor$FrameAccessor));
}

$Class* AWTAccessor$FrameAccessor::load$($String* name, bool initialize) {
	$loadClass(AWTAccessor$FrameAccessor, name, initialize, &_AWTAccessor$FrameAccessor_ClassInfo_, allocate$AWTAccessor$FrameAccessor);
	return class$;
}

$Class* AWTAccessor$FrameAccessor::class$ = nullptr;

	} // awt
} // sun