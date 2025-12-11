#include <sun/awt/X11GraphicsConfig$X11GCDisposerRecord.h>

#include <sun/awt/X11GraphicsConfig.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $X11GraphicsConfig = ::sun::awt::X11GraphicsConfig;

namespace sun {
	namespace awt {

$FieldInfo _X11GraphicsConfig$X11GCDisposerRecord_FieldInfo_[] = {
	{"x11ConfigData", "J", nullptr, $PRIVATE, $field(X11GraphicsConfig$X11GCDisposerRecord, x11ConfigData)},
	{}
};

$MethodInfo _X11GraphicsConfig$X11GCDisposerRecord_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(X11GraphicsConfig$X11GCDisposerRecord::*)(int64_t)>(&X11GraphicsConfig$X11GCDisposerRecord::init$))},
	{"dispose", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$InnerClassInfo _X11GraphicsConfig$X11GCDisposerRecord_InnerClassesInfo_[] = {
	{"sun.awt.X11GraphicsConfig$X11GCDisposerRecord", "sun.awt.X11GraphicsConfig", "X11GCDisposerRecord", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _X11GraphicsConfig$X11GCDisposerRecord_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11GraphicsConfig$X11GCDisposerRecord",
	"java.lang.Object",
	"sun.java2d.DisposerRecord",
	_X11GraphicsConfig$X11GCDisposerRecord_FieldInfo_,
	_X11GraphicsConfig$X11GCDisposerRecord_MethodInfo_,
	nullptr,
	nullptr,
	_X11GraphicsConfig$X11GCDisposerRecord_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11GraphicsConfig"
};

$Object* allocate$X11GraphicsConfig$X11GCDisposerRecord($Class* clazz) {
	return $of($alloc(X11GraphicsConfig$X11GCDisposerRecord));
}

void X11GraphicsConfig$X11GCDisposerRecord::init$(int64_t x11CfgData) {
	this->x11ConfigData = x11CfgData;
}

void X11GraphicsConfig$X11GCDisposerRecord::dispose() {
	$synchronized(this) {
		if (this->x11ConfigData != (int64_t)0) {
			$X11GraphicsConfig::dispose(this->x11ConfigData);
			this->x11ConfigData = 0;
		}
	}
}

X11GraphicsConfig$X11GCDisposerRecord::X11GraphicsConfig$X11GCDisposerRecord() {
}

$Class* X11GraphicsConfig$X11GCDisposerRecord::load$($String* name, bool initialize) {
	$loadClass(X11GraphicsConfig$X11GCDisposerRecord, name, initialize, &_X11GraphicsConfig$X11GCDisposerRecord_ClassInfo_, allocate$X11GraphicsConfig$X11GCDisposerRecord);
	return class$;
}

$Class* X11GraphicsConfig$X11GCDisposerRecord::class$ = nullptr;

	} // awt
} // sun