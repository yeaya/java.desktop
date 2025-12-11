#include <sun/awt/AWTAccessor$InputEventAccessor.h>

#include <java/awt/event/InputEvent.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$MethodInfo _AWTAccessor$InputEventAccessor_MethodInfo_[] = {
	{"canAccessSystemClipboard", "(Ljava/awt/event/InputEvent;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getButtonDownMasks", "()[I", nullptr, $PUBLIC | $ABSTRACT},
	{"setCanAccessSystemClipboard", "(Ljava/awt/event/InputEvent;Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AWTAccessor$InputEventAccessor_InnerClassesInfo_[] = {
	{"sun.awt.AWTAccessor$InputEventAccessor", "sun.awt.AWTAccessor", "InputEventAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AWTAccessor$InputEventAccessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.AWTAccessor$InputEventAccessor",
	nullptr,
	nullptr,
	nullptr,
	_AWTAccessor$InputEventAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_AWTAccessor$InputEventAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AWTAccessor"
};

$Object* allocate$AWTAccessor$InputEventAccessor($Class* clazz) {
	return $of($alloc(AWTAccessor$InputEventAccessor));
}

$Class* AWTAccessor$InputEventAccessor::load$($String* name, bool initialize) {
	$loadClass(AWTAccessor$InputEventAccessor, name, initialize, &_AWTAccessor$InputEventAccessor_ClassInfo_, allocate$AWTAccessor$InputEventAccessor);
	return class$;
}

$Class* AWTAccessor$InputEventAccessor::class$ = nullptr;

	} // awt
} // sun