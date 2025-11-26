#include <sun/awt/X11/XEmbedCanvasPeer$6.h>

#include <java/awt/AWTKeyStroke.h>
#include <java/util/Map.h>
#include <sun/awt/X11/XEmbedCanvasPeer$XEmbedServer.h>
#include <sun/awt/X11/XEmbedCanvasPeer.h>
#include <sun/awt/X11/XEmbedHelper.h>
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
using $Runnable = ::java::lang::Runnable;
using $Map = ::java::util::Map;
using $XEmbedCanvasPeer = ::sun::awt::X11::XEmbedCanvasPeer;
using $XEmbedCanvasPeer$XEmbedServer = ::sun::awt::X11::XEmbedCanvasPeer$XEmbedServer;
using $XEmbedHelper = ::sun::awt::X11::XEmbedHelper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XEmbedCanvasPeer$6_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XEmbedCanvasPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XEmbedCanvasPeer$6, this$0)},
	{"val$accel_id", "J", nullptr, $FINAL | $SYNTHETIC, $field(XEmbedCanvasPeer$6, val$accel_id)},
	{"val$modifiers", "J", nullptr, $FINAL | $SYNTHETIC, $field(XEmbedCanvasPeer$6, val$modifiers)},
	{"val$keysym", "J", nullptr, $FINAL | $SYNTHETIC, $field(XEmbedCanvasPeer$6, val$keysym)},
	{}
};

$MethodInfo _XEmbedCanvasPeer$6_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XEmbedCanvasPeer;JJJ)V", "()V", 0, $method(static_cast<void(XEmbedCanvasPeer$6::*)($XEmbedCanvasPeer*,int64_t,int64_t,int64_t)>(&XEmbedCanvasPeer$6::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XEmbedCanvasPeer$6_EnclosingMethodInfo_ = {
	"sun.awt.X11.XEmbedCanvasPeer",
	"registerAccelerator",
	"(JJJ)V"
};

$InnerClassInfo _XEmbedCanvasPeer$6_InnerClassesInfo_[] = {
	{"sun.awt.X11.XEmbedCanvasPeer$6", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XEmbedCanvasPeer$6_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XEmbedCanvasPeer$6",
	"java.lang.Object",
	"java.lang.Runnable",
	_XEmbedCanvasPeer$6_FieldInfo_,
	_XEmbedCanvasPeer$6_MethodInfo_,
	nullptr,
	&_XEmbedCanvasPeer$6_EnclosingMethodInfo_,
	_XEmbedCanvasPeer$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XEmbedCanvasPeer"
};

$Object* allocate$XEmbedCanvasPeer$6($Class* clazz) {
	return $of($alloc(XEmbedCanvasPeer$6));
}

void XEmbedCanvasPeer$6::init$($XEmbedCanvasPeer* this$0, int64_t val$keysym, int64_t val$modifiers, int64_t val$accel_id) {
	$set(this, this$0, this$0);
	this->val$keysym = val$keysym;
	this->val$modifiers = val$modifiers;
	this->val$accel_id = val$accel_id;
}

void XEmbedCanvasPeer$6::run() {
	$useLocalCurrentObjectStackCache();
	$var($AWTKeyStroke, stroke, $nc(this->this$0->xembed)->getKeyStrokeForKeySym(this->val$keysym, this->val$modifiers));
	if (stroke != nullptr) {
		$init($XEmbedCanvasPeer);
		$init($PlatformLogger$Level);
		if ($nc($XEmbedCanvasPeer::xembedLog)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc($XEmbedCanvasPeer::xembedLog)->fine($$str({"Registering accelerator "_s, $$str(this->val$accel_id), " for "_s, stroke}));
		}
		$synchronized(this->this$0->ACCEL_LOCK) {
			$nc(this->this$0->accelerators)->put($($Long::valueOf(this->val$accel_id)), stroke);
			$nc(this->this$0->accel_lookup)->put(stroke, $($Long::valueOf(this->val$accel_id)));
		}
	}
	this->this$0->propogateRegisterAccelerator(stroke);
}

XEmbedCanvasPeer$6::XEmbedCanvasPeer$6() {
}

$Class* XEmbedCanvasPeer$6::load$($String* name, bool initialize) {
	$loadClass(XEmbedCanvasPeer$6, name, initialize, &_XEmbedCanvasPeer$6_ClassInfo_, allocate$XEmbedCanvasPeer$6);
	return class$;
}

$Class* XEmbedCanvasPeer$6::class$ = nullptr;

		} // X11
	} // awt
} // sun