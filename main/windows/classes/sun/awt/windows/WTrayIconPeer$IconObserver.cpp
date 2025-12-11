#include <sun/awt/windows/WTrayIconPeer$IconObserver.h>

#include <java/awt/Image.h>
#include <java/awt/TrayIcon.h>
#include <java/awt/image/ImageObserver.h>
#include <sun/awt/windows/WTrayIconPeer.h>
#include <jcpp.h>

#undef ALLBITS
#undef FRAMEBITS
#undef HEIGHT
#undef WIDTH

using $Image = ::java::awt::Image;
using $TrayIcon = ::java::awt::TrayIcon;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WTrayIconPeer = ::sun::awt::windows::WTrayIconPeer;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WTrayIconPeer$IconObserver_FieldInfo_[] = {
	{"this$0", "Lsun/awt/windows/WTrayIconPeer;", nullptr, $FINAL | $SYNTHETIC, $field(WTrayIconPeer$IconObserver, this$0)},
	{}
};

$MethodInfo _WTrayIconPeer$IconObserver_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/windows/WTrayIconPeer;)V", nullptr, 0, $method(static_cast<void(WTrayIconPeer$IconObserver::*)($WTrayIconPeer*)>(&WTrayIconPeer$IconObserver::init$))},
	{"imageUpdate", "(Ljava/awt/Image;IIIII)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WTrayIconPeer$IconObserver_InnerClassesInfo_[] = {
	{"sun.awt.windows.WTrayIconPeer$IconObserver", "sun.awt.windows.WTrayIconPeer", "IconObserver", 0},
	{}
};

$ClassInfo _WTrayIconPeer$IconObserver_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.windows.WTrayIconPeer$IconObserver",
	"java.lang.Object",
	"java.awt.image.ImageObserver",
	_WTrayIconPeer$IconObserver_FieldInfo_,
	_WTrayIconPeer$IconObserver_MethodInfo_,
	nullptr,
	nullptr,
	_WTrayIconPeer$IconObserver_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.windows.WTrayIconPeer"
};

$Object* allocate$WTrayIconPeer$IconObserver($Class* clazz) {
	return $of($alloc(WTrayIconPeer$IconObserver));
}

void WTrayIconPeer$IconObserver::init$($WTrayIconPeer* this$0) {
	$set(this, this$0, this$0);
}

bool WTrayIconPeer$IconObserver::imageUpdate($Image* image, int32_t flags, int32_t x, int32_t y, int32_t width, int32_t height) {
	bool var$0 = image != $nc(($cast($TrayIcon, this->this$0->target)))->getImage();
	if (var$0 || this->this$0->isDisposed()) {
		return false;
	}
	if (((int32_t)(flags & (uint32_t)((($ImageObserver::FRAMEBITS | $ImageObserver::ALLBITS) | $ImageObserver::WIDTH) | $ImageObserver::HEIGHT))) != 0) {
		this->this$0->updateNativeImage(image);
	}
	return ((int32_t)(flags & (uint32_t)$ImageObserver::ALLBITS)) == 0;
}

WTrayIconPeer$IconObserver::WTrayIconPeer$IconObserver() {
}

$Class* WTrayIconPeer$IconObserver::load$($String* name, bool initialize) {
	$loadClass(WTrayIconPeer$IconObserver, name, initialize, &_WTrayIconPeer$IconObserver_ClassInfo_, allocate$WTrayIconPeer$IconObserver);
	return class$;
}

$Class* WTrayIconPeer$IconObserver::class$ = nullptr;

		} // windows
	} // awt
} // sun