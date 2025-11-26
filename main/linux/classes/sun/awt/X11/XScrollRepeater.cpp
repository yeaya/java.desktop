#include <sun/awt/X11/XScrollRepeater.h>

#include <java/lang/Runnable.h>
#include <sun/awt/X11/XScrollbar.h>
#include <sun/awt/X11/XToolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $XScrollbar = ::sun::awt::X11::XScrollbar;
using $XToolkit = ::sun::awt::X11::XToolkit;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XScrollRepeater_FieldInfo_[] = {
	{"beginPause", "I", nullptr, $STATIC, $staticField(XScrollRepeater, beginPause)},
	{"repeatPause", "I", nullptr, $STATIC, $staticField(XScrollRepeater, repeatPause)},
	{"sb", "Lsun/awt/X11/XScrollbar;", nullptr, 0, $field(XScrollRepeater, sb)},
	{"newScroll", "Z", nullptr, 0, $field(XScrollRepeater, newScroll)},
	{"shouldSkip", "Z", nullptr, 0, $field(XScrollRepeater, shouldSkip)},
	{}
};

$MethodInfo _XScrollRepeater_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XScrollbar;)V", nullptr, 0, $method(static_cast<void(XScrollRepeater::*)($XScrollbar*)>(&XScrollRepeater::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{"setScrollbar", "(Lsun/awt/X11/XScrollbar;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"start", "()V", nullptr, $PUBLIC},
	{"stop", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XScrollRepeater_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XScrollRepeater",
	"java.lang.Object",
	"java.lang.Runnable",
	_XScrollRepeater_FieldInfo_,
	_XScrollRepeater_MethodInfo_
};

$Object* allocate$XScrollRepeater($Class* clazz) {
	return $of($alloc(XScrollRepeater));
}

int32_t XScrollRepeater::beginPause = 0;
int32_t XScrollRepeater::repeatPause = 0;

void XScrollRepeater::init$($XScrollbar* sb) {
	this->setScrollbar(sb);
	this->newScroll = true;
}

void XScrollRepeater::start() {
	stop();
	this->shouldSkip = false;
	$XToolkit::schedule(this, XScrollRepeater::beginPause);
}

void XScrollRepeater::stop() {
	$synchronized(this) {
		this->shouldSkip = true;
	}
	$XToolkit::remove(this);
}

void XScrollRepeater::setScrollbar($XScrollbar* sb) {
	$synchronized(this) {
		$set(this, sb, sb);
		stop();
		this->newScroll = true;
	}
}

void XScrollRepeater::run() {
	$synchronized(this) {
		if (this->shouldSkip) {
			return;
		}
	}
	$nc(this->sb)->scroll();
	$XToolkit::schedule(this, XScrollRepeater::repeatPause);
}

void clinit$XScrollRepeater($Class* class$) {
	XScrollRepeater::beginPause = 500;
	XScrollRepeater::repeatPause = 100;
}

XScrollRepeater::XScrollRepeater() {
}

$Class* XScrollRepeater::load$($String* name, bool initialize) {
	$loadClass(XScrollRepeater, name, initialize, &_XScrollRepeater_ClassInfo_, clinit$XScrollRepeater, allocate$XScrollRepeater);
	return class$;
}

$Class* XScrollRepeater::class$ = nullptr;

		} // X11
	} // awt
} // sun