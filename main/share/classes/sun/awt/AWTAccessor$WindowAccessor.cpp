#include <sun/awt/AWTAccessor$WindowAccessor.h>

#include <java/awt/Window.h>
#include <java/awt/geom/Point2D.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$MethodInfo _AWTAccessor$WindowAccessor_MethodInfo_[] = {
	{"calculateSecurityWarningPosition", "(Ljava/awt/Window;DDDD)Ljava/awt/geom/Point2D;", nullptr, $PUBLIC | $ABSTRACT},
	{"getOwnedWindows", "(Ljava/awt/Window;)[Ljava/awt/Window;", nullptr, $PUBLIC | $ABSTRACT},
	{"isAutoRequestFocus", "(Ljava/awt/Window;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isTrayIconWindow", "(Ljava/awt/Window;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"setLWRequestStatus", "(Ljava/awt/Window;Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setSecurityWarningSize", "(Ljava/awt/Window;II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setTrayIconWindow", "(Ljava/awt/Window;Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"updateWindow", "(Ljava/awt/Window;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AWTAccessor$WindowAccessor_InnerClassesInfo_[] = {
	{"sun.awt.AWTAccessor$WindowAccessor", "sun.awt.AWTAccessor", "WindowAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AWTAccessor$WindowAccessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.AWTAccessor$WindowAccessor",
	nullptr,
	nullptr,
	nullptr,
	_AWTAccessor$WindowAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_AWTAccessor$WindowAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AWTAccessor"
};

$Object* allocate$AWTAccessor$WindowAccessor($Class* clazz) {
	return $of($alloc(AWTAccessor$WindowAccessor));
}

$Class* AWTAccessor$WindowAccessor::load$($String* name, bool initialize) {
	$loadClass(AWTAccessor$WindowAccessor, name, initialize, &_AWTAccessor$WindowAccessor_ClassInfo_, allocate$AWTAccessor$WindowAccessor);
	return class$;
}

$Class* AWTAccessor$WindowAccessor::class$ = nullptr;

	} // awt
} // sun