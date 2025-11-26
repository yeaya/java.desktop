#include <sun/awt/X11/XDragSourceProtocol$TargetWindowInfo.h>

#include <sun/awt/X11/XDragSourceProtocol.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XDragSourceProtocol = ::sun::awt::X11::XDragSourceProtocol;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XDragSourceProtocol$TargetWindowInfo_FieldInfo_[] = {
	{"proxyWindow", "J", nullptr, $PRIVATE | $FINAL, $field(XDragSourceProtocol$TargetWindowInfo, proxyWindow)},
	{"protocolVersion", "I", nullptr, $PRIVATE | $FINAL, $field(XDragSourceProtocol$TargetWindowInfo, protocolVersion)},
	{}
};

$MethodInfo _XDragSourceProtocol$TargetWindowInfo_MethodInfo_[] = {
	{"<init>", "(JI)V", nullptr, $PUBLIC, $method(static_cast<void(XDragSourceProtocol$TargetWindowInfo::*)(int64_t,int32_t)>(&XDragSourceProtocol$TargetWindowInfo::init$))},
	{"getProtocolVersion", "()I", nullptr, $PUBLIC},
	{"getProxyWindow", "()J", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XDragSourceProtocol$TargetWindowInfo_InnerClassesInfo_[] = {
	{"sun.awt.X11.XDragSourceProtocol$TargetWindowInfo", "sun.awt.X11.XDragSourceProtocol", "TargetWindowInfo", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _XDragSourceProtocol$TargetWindowInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XDragSourceProtocol$TargetWindowInfo",
	"java.lang.Object",
	nullptr,
	_XDragSourceProtocol$TargetWindowInfo_FieldInfo_,
	_XDragSourceProtocol$TargetWindowInfo_MethodInfo_,
	nullptr,
	nullptr,
	_XDragSourceProtocol$TargetWindowInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XDragSourceProtocol"
};

$Object* allocate$XDragSourceProtocol$TargetWindowInfo($Class* clazz) {
	return $of($alloc(XDragSourceProtocol$TargetWindowInfo));
}

void XDragSourceProtocol$TargetWindowInfo::init$(int64_t proxy, int32_t version) {
	this->proxyWindow = proxy;
	this->protocolVersion = version;
}

int64_t XDragSourceProtocol$TargetWindowInfo::getProxyWindow() {
	return this->proxyWindow;
}

int32_t XDragSourceProtocol$TargetWindowInfo::getProtocolVersion() {
	return this->protocolVersion;
}

XDragSourceProtocol$TargetWindowInfo::XDragSourceProtocol$TargetWindowInfo() {
}

$Class* XDragSourceProtocol$TargetWindowInfo::load$($String* name, bool initialize) {
	$loadClass(XDragSourceProtocol$TargetWindowInfo, name, initialize, &_XDragSourceProtocol$TargetWindowInfo_ClassInfo_, allocate$XDragSourceProtocol$TargetWindowInfo);
	return class$;
}

$Class* XDragSourceProtocol$TargetWindowInfo::class$ = nullptr;

		} // X11
	} // awt
} // sun