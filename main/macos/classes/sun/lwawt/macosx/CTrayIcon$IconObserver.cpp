#include <sun/lwawt/macosx/CTrayIcon$IconObserver.h>

#include <java/awt/Image.h>
#include <java/awt/TrayIcon.h>
#include <java/awt/image/ImageObserver.h>
#include <java/lang/Runnable.h>
#include <sun/awt/SunToolkit.h>
#include <sun/lwawt/macosx/CTrayIcon$IconObserver$1.h>
#include <sun/lwawt/macosx/CTrayIcon.h>
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
using $Runnable = ::java::lang::Runnable;
using $SunToolkit = ::sun::awt::SunToolkit;
using $CTrayIcon = ::sun::lwawt::macosx::CTrayIcon;
using $CTrayIcon$IconObserver$1 = ::sun::lwawt::macosx::CTrayIcon$IconObserver$1;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CTrayIcon$IconObserver_FieldInfo_[] = {
	{"this$0", "Lsun/lwawt/macosx/CTrayIcon;", nullptr, $FINAL | $SYNTHETIC, $field(CTrayIcon$IconObserver, this$0)},
	{}
};

$MethodInfo _CTrayIcon$IconObserver_MethodInfo_[] = {
	{"<init>", "(Lsun/lwawt/macosx/CTrayIcon;)V", nullptr, 0, $method(static_cast<void(CTrayIcon$IconObserver::*)($CTrayIcon*)>(&CTrayIcon$IconObserver::init$))},
	{"imageUpdate", "(Ljava/awt/Image;IIIII)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CTrayIcon$IconObserver_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CTrayIcon$IconObserver", "sun.lwawt.macosx.CTrayIcon", "IconObserver", 0},
	{"sun.lwawt.macosx.CTrayIcon$IconObserver$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CTrayIcon$IconObserver_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CTrayIcon$IconObserver",
	"java.lang.Object",
	"java.awt.image.ImageObserver",
	_CTrayIcon$IconObserver_FieldInfo_,
	_CTrayIcon$IconObserver_MethodInfo_,
	nullptr,
	nullptr,
	_CTrayIcon$IconObserver_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CTrayIcon"
};

$Object* allocate$CTrayIcon$IconObserver($Class* clazz) {
	return $of($alloc(CTrayIcon$IconObserver));
}

void CTrayIcon$IconObserver::init$($CTrayIcon* this$0) {
	$set(this, this$0, this$0);
}

bool CTrayIcon$IconObserver::imageUpdate($Image* image, int32_t flags, int32_t x, int32_t y, int32_t width, int32_t height) {
	if (this->this$0->target == nullptr || image != $nc(this->this$0->target)->getImage()) {
		return false;
	}
	if (((int32_t)(flags & (uint32_t)((($ImageObserver::FRAMEBITS | $ImageObserver::ALLBITS) | $ImageObserver::WIDTH) | $ImageObserver::HEIGHT))) != 0) {
		$SunToolkit::executeOnEventHandlerThread(this->this$0->target, $$new($CTrayIcon$IconObserver$1, this, image));
	}
	return ((int32_t)(flags & (uint32_t)$ImageObserver::ALLBITS)) == 0;
}

CTrayIcon$IconObserver::CTrayIcon$IconObserver() {
}

$Class* CTrayIcon$IconObserver::load$($String* name, bool initialize) {
	$loadClass(CTrayIcon$IconObserver, name, initialize, &_CTrayIcon$IconObserver_ClassInfo_, allocate$CTrayIcon$IconObserver);
	return class$;
}

$Class* CTrayIcon$IconObserver::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun