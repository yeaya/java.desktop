#include <sun/awt/X11/XEmbedCanvasPeer$7.h>

#include <java/awt/AWTKeyStroke.h>
#include <java/util/Map.h>
#include <sun/awt/X11/XEmbedCanvasPeer.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef ACCEL_LOCK
#undef FINE

using $AWTKeyStroke = ::java::awt::AWTKeyStroke;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $XEmbedCanvasPeer = ::sun::awt::X11::XEmbedCanvasPeer;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XEmbedCanvasPeer$7_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XEmbedCanvasPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XEmbedCanvasPeer$7, this$0)},
	{"val$accel_id", "J", nullptr, $FINAL | $SYNTHETIC, $field(XEmbedCanvasPeer$7, val$accel_id)},
	{}
};

$MethodInfo _XEmbedCanvasPeer$7_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XEmbedCanvasPeer;J)V", "()V", 0, $method(static_cast<void(XEmbedCanvasPeer$7::*)($XEmbedCanvasPeer*,int64_t)>(&XEmbedCanvasPeer$7::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XEmbedCanvasPeer$7_EnclosingMethodInfo_ = {
	"sun.awt.X11.XEmbedCanvasPeer",
	"unregisterAccelerator",
	"(J)V"
};

$InnerClassInfo _XEmbedCanvasPeer$7_InnerClassesInfo_[] = {
	{"sun.awt.X11.XEmbedCanvasPeer$7", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XEmbedCanvasPeer$7_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XEmbedCanvasPeer$7",
	"java.lang.Object",
	"java.lang.Runnable",
	_XEmbedCanvasPeer$7_FieldInfo_,
	_XEmbedCanvasPeer$7_MethodInfo_,
	nullptr,
	&_XEmbedCanvasPeer$7_EnclosingMethodInfo_,
	_XEmbedCanvasPeer$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XEmbedCanvasPeer"
};

$Object* allocate$XEmbedCanvasPeer$7($Class* clazz) {
	return $of($alloc(XEmbedCanvasPeer$7));
}

void XEmbedCanvasPeer$7::init$($XEmbedCanvasPeer* this$0, int64_t val$accel_id) {
	$set(this, this$0, this$0);
	this->val$accel_id = val$accel_id;
}

void XEmbedCanvasPeer$7::run() {
	$useLocalCurrentObjectStackCache();
	$var($AWTKeyStroke, stroke, nullptr);
	$synchronized(this->this$0->ACCEL_LOCK) {
		$assign(stroke, $cast($AWTKeyStroke, $nc(this->this$0->accelerators)->get($($Long::valueOf(this->val$accel_id)))));
		if (stroke != nullptr) {
			$init($XEmbedCanvasPeer);
			$init($PlatformLogger$Level);
			if ($nc($XEmbedCanvasPeer::xembedLog)->isLoggable($PlatformLogger$Level::FINE)) {
				$nc($XEmbedCanvasPeer::xembedLog)->fine($$str({"Unregistering accelerator: "_s, $$str(this->val$accel_id)}));
			}
			$nc(this->this$0->accelerators)->remove($($Long::valueOf(this->val$accel_id)));
			$nc(this->this$0->accel_lookup)->remove(stroke);
		}
	}
	this->this$0->propogateUnRegisterAccelerator(stroke);
}

XEmbedCanvasPeer$7::XEmbedCanvasPeer$7() {
}

$Class* XEmbedCanvasPeer$7::load$($String* name, bool initialize) {
	$loadClass(XEmbedCanvasPeer$7, name, initialize, &_XEmbedCanvasPeer$7_ClassInfo_, allocate$XEmbedCanvasPeer$7);
	return class$;
}

$Class* XEmbedCanvasPeer$7::class$ = nullptr;

		} // X11
	} // awt
} // sun