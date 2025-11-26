#include <sun/awt/AWTAccessor$MouseEventAccessor.h>

#include <java/awt/event/MouseEvent.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;

namespace sun {
	namespace awt {

$MethodInfo _AWTAccessor$MouseEventAccessor_MethodInfo_[] = {
	{"isCausedByTouchEvent", "(Ljava/awt/event/MouseEvent;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"setCausedByTouchEvent", "(Ljava/awt/event/MouseEvent;Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AWTAccessor$MouseEventAccessor_InnerClassesInfo_[] = {
	{"sun.awt.AWTAccessor$MouseEventAccessor", "sun.awt.AWTAccessor", "MouseEventAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AWTAccessor$MouseEventAccessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.AWTAccessor$MouseEventAccessor",
	nullptr,
	nullptr,
	nullptr,
	_AWTAccessor$MouseEventAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_AWTAccessor$MouseEventAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AWTAccessor"
};

$Object* allocate$AWTAccessor$MouseEventAccessor($Class* clazz) {
	return $of($alloc(AWTAccessor$MouseEventAccessor));
}

$Class* AWTAccessor$MouseEventAccessor::load$($String* name, bool initialize) {
	$loadClass(AWTAccessor$MouseEventAccessor, name, initialize, &_AWTAccessor$MouseEventAccessor_ClassInfo_, allocate$AWTAccessor$MouseEventAccessor);
	return class$;
}

$Class* AWTAccessor$MouseEventAccessor::class$ = nullptr;

	} // awt
} // sun