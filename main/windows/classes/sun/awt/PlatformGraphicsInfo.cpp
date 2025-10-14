#include <sun/awt/PlatformGraphicsInfo.h>

#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Toolkit.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/Win32GraphicsEnvironment.h>
#include <sun/awt/windows/WToolkit.h>
#include <sun/java2d/SunGraphicsEnvironment.h>
#include <jcpp.h>

using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Toolkit = ::java::awt::Toolkit;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunToolkit = ::sun::awt::SunToolkit;
using $Win32GraphicsEnvironment = ::sun::awt::Win32GraphicsEnvironment;
using $WToolkit = ::sun::awt::windows::WToolkit;
using $SunGraphicsEnvironment = ::sun::java2d::SunGraphicsEnvironment;

namespace sun {
	namespace awt {

$MethodInfo _PlatformGraphicsInfo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PlatformGraphicsInfo::*)()>(&PlatformGraphicsInfo::init$))},
	{"createGE", "()Ljava/awt/GraphicsEnvironment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$GraphicsEnvironment*(*)()>(&PlatformGraphicsInfo::createGE))},
	{"createToolkit", "()Ljava/awt/Toolkit;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Toolkit*(*)()>(&PlatformGraphicsInfo::createToolkit))},
	{"getDefaultHeadlessMessage", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)()>(&PlatformGraphicsInfo::getDefaultHeadlessMessage))},
	{"getDefaultHeadlessProperty", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&PlatformGraphicsInfo::getDefaultHeadlessProperty))},
	{}
};

$ClassInfo _PlatformGraphicsInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.PlatformGraphicsInfo",
	"java.lang.Object",
	nullptr,
	nullptr,
	_PlatformGraphicsInfo_MethodInfo_
};

$Object* allocate$PlatformGraphicsInfo($Class* clazz) {
	return $of($alloc(PlatformGraphicsInfo));
}

void PlatformGraphicsInfo::init$() {
}

$GraphicsEnvironment* PlatformGraphicsInfo::createGE() {
	return $new($Win32GraphicsEnvironment);
}

$Toolkit* PlatformGraphicsInfo::createToolkit() {
	return $new($WToolkit);
}

bool PlatformGraphicsInfo::getDefaultHeadlessProperty() {
	return false;
}

$String* PlatformGraphicsInfo::getDefaultHeadlessMessage() {
	return "\nThe application does not have desktop access,\nbut this program performed an operation which requires it."_s;
}

PlatformGraphicsInfo::PlatformGraphicsInfo() {
}

$Class* PlatformGraphicsInfo::load$($String* name, bool initialize) {
	$loadClass(PlatformGraphicsInfo, name, initialize, &_PlatformGraphicsInfo_ClassInfo_, allocate$PlatformGraphicsInfo);
	return class$;
}

$Class* PlatformGraphicsInfo::class$ = nullptr;

	} // awt
} // sun