#include <sun/swing/SwingAccessor$JLightweightFrameAccessor.h>

#include <sun/swing/JLightweightFrame.h>
#include <sun/swing/SwingAccessor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace swing {

$MethodInfo _SwingAccessor$JLightweightFrameAccessor_MethodInfo_[] = {
	{"updateCursor", "(Lsun/swing/JLightweightFrame;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _SwingAccessor$JLightweightFrameAccessor_InnerClassesInfo_[] = {
	{"sun.swing.SwingAccessor$JLightweightFrameAccessor", "sun.swing.SwingAccessor", "JLightweightFrameAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SwingAccessor$JLightweightFrameAccessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.swing.SwingAccessor$JLightweightFrameAccessor",
	nullptr,
	nullptr,
	nullptr,
	_SwingAccessor$JLightweightFrameAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_SwingAccessor$JLightweightFrameAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.SwingAccessor"
};

$Object* allocate$SwingAccessor$JLightweightFrameAccessor($Class* clazz) {
	return $of($alloc(SwingAccessor$JLightweightFrameAccessor));
}

$Class* SwingAccessor$JLightweightFrameAccessor::load$($String* name, bool initialize) {
	$loadClass(SwingAccessor$JLightweightFrameAccessor, name, initialize, &_SwingAccessor$JLightweightFrameAccessor_ClassInfo_, allocate$SwingAccessor$JLightweightFrameAccessor);
	return class$;
}

$Class* SwingAccessor$JLightweightFrameAccessor::class$ = nullptr;

	} // swing
} // sun