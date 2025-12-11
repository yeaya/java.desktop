#include <sun/awt/X11/XEmbedCanvasPeer$5.h>

#include <java/util/Set.h>
#include <sun/awt/X11/XEmbedCanvasPeer$GrabbedKey.h>
#include <sun/awt/X11/XEmbedCanvasPeer.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef FINE
#undef GRAB_LOCK

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Set = ::java::util::Set;
using $XEmbedCanvasPeer = ::sun::awt::X11::XEmbedCanvasPeer;
using $XEmbedCanvasPeer$GrabbedKey = ::sun::awt::X11::XEmbedCanvasPeer$GrabbedKey;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XEmbedCanvasPeer$5_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XEmbedCanvasPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XEmbedCanvasPeer$5, this$0)},
	{"val$modifiers", "J", nullptr, $FINAL | $SYNTHETIC, $field(XEmbedCanvasPeer$5, val$modifiers)},
	{"val$keysym", "J", nullptr, $FINAL | $SYNTHETIC, $field(XEmbedCanvasPeer$5, val$keysym)},
	{}
};

$MethodInfo _XEmbedCanvasPeer$5_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XEmbedCanvasPeer;JJ)V", "()V", 0, $method(static_cast<void(XEmbedCanvasPeer$5::*)($XEmbedCanvasPeer*,int64_t,int64_t)>(&XEmbedCanvasPeer$5::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XEmbedCanvasPeer$5_EnclosingMethodInfo_ = {
	"sun.awt.X11.XEmbedCanvasPeer",
	"ungrabKey",
	"(JJ)V"
};

$InnerClassInfo _XEmbedCanvasPeer$5_InnerClassesInfo_[] = {
	{"sun.awt.X11.XEmbedCanvasPeer$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XEmbedCanvasPeer$5_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XEmbedCanvasPeer$5",
	"java.lang.Object",
	"java.lang.Runnable",
	_XEmbedCanvasPeer$5_FieldInfo_,
	_XEmbedCanvasPeer$5_MethodInfo_,
	nullptr,
	&_XEmbedCanvasPeer$5_EnclosingMethodInfo_,
	_XEmbedCanvasPeer$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XEmbedCanvasPeer"
};

$Object* allocate$XEmbedCanvasPeer$5($Class* clazz) {
	return $of($alloc(XEmbedCanvasPeer$5));
}

void XEmbedCanvasPeer$5::init$($XEmbedCanvasPeer* this$0, int64_t val$keysym, int64_t val$modifiers) {
	$set(this, this$0, this$0);
	this->val$keysym = val$keysym;
	this->val$modifiers = val$modifiers;
}

void XEmbedCanvasPeer$5::run() {
	$useLocalCurrentObjectStackCache();
	$var($XEmbedCanvasPeer$GrabbedKey, grab, $new($XEmbedCanvasPeer$GrabbedKey, this->val$keysym, this->val$modifiers));
	$init($XEmbedCanvasPeer);
	$init($PlatformLogger$Level);
	if ($nc($XEmbedCanvasPeer::xembedLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc($XEmbedCanvasPeer::xembedLog)->fine($$str({"UnGrabbing key: "_s, grab}));
	}
	$synchronized(this->this$0->GRAB_LOCK) {
		$nc(this->this$0->grabbed_keys)->remove(grab);
	}
}

XEmbedCanvasPeer$5::XEmbedCanvasPeer$5() {
}

$Class* XEmbedCanvasPeer$5::load$($String* name, bool initialize) {
	$loadClass(XEmbedCanvasPeer$5, name, initialize, &_XEmbedCanvasPeer$5_ClassInfo_, allocate$XEmbedCanvasPeer$5);
	return class$;
}

$Class* XEmbedCanvasPeer$5::class$ = nullptr;

		} // X11
	} // awt
} // sun