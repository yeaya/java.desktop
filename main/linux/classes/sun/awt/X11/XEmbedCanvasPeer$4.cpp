#include <sun/awt/X11/XEmbedCanvasPeer$4.h>

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
using $Runnable = ::java::lang::Runnable;
using $Set = ::java::util::Set;
using $XEmbedCanvasPeer = ::sun::awt::X11::XEmbedCanvasPeer;
using $XEmbedCanvasPeer$GrabbedKey = ::sun::awt::X11::XEmbedCanvasPeer$GrabbedKey;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XEmbedCanvasPeer$4_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XEmbedCanvasPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XEmbedCanvasPeer$4, this$0)},
	{"val$modifiers", "J", nullptr, $FINAL | $SYNTHETIC, $field(XEmbedCanvasPeer$4, val$modifiers)},
	{"val$keysym", "J", nullptr, $FINAL | $SYNTHETIC, $field(XEmbedCanvasPeer$4, val$keysym)},
	{}
};

$MethodInfo _XEmbedCanvasPeer$4_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XEmbedCanvasPeer;JJ)V", "()V", 0, $method(static_cast<void(XEmbedCanvasPeer$4::*)($XEmbedCanvasPeer*,int64_t,int64_t)>(&XEmbedCanvasPeer$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XEmbedCanvasPeer$4_EnclosingMethodInfo_ = {
	"sun.awt.X11.XEmbedCanvasPeer",
	"grabKey",
	"(JJ)V"
};

$InnerClassInfo _XEmbedCanvasPeer$4_InnerClassesInfo_[] = {
	{"sun.awt.X11.XEmbedCanvasPeer$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XEmbedCanvasPeer$4_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XEmbedCanvasPeer$4",
	"java.lang.Object",
	"java.lang.Runnable",
	_XEmbedCanvasPeer$4_FieldInfo_,
	_XEmbedCanvasPeer$4_MethodInfo_,
	nullptr,
	&_XEmbedCanvasPeer$4_EnclosingMethodInfo_,
	_XEmbedCanvasPeer$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XEmbedCanvasPeer"
};

$Object* allocate$XEmbedCanvasPeer$4($Class* clazz) {
	return $of($alloc(XEmbedCanvasPeer$4));
}

void XEmbedCanvasPeer$4::init$($XEmbedCanvasPeer* this$0, int64_t val$keysym, int64_t val$modifiers) {
	$set(this, this$0, this$0);
	this->val$keysym = val$keysym;
	this->val$modifiers = val$modifiers;
}

void XEmbedCanvasPeer$4::run() {
	$useLocalCurrentObjectStackCache();
	$var($XEmbedCanvasPeer$GrabbedKey, grab, $new($XEmbedCanvasPeer$GrabbedKey, this->val$keysym, this->val$modifiers));
	$init($XEmbedCanvasPeer);
	$init($PlatformLogger$Level);
	if ($nc($XEmbedCanvasPeer::xembedLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc($XEmbedCanvasPeer::xembedLog)->fine($$str({"Grabbing key: "_s, grab}));
	}
	$synchronized(this->this$0->GRAB_LOCK) {
		$nc(this->this$0->grabbed_keys)->add(grab);
	}
}

XEmbedCanvasPeer$4::XEmbedCanvasPeer$4() {
}

$Class* XEmbedCanvasPeer$4::load$($String* name, bool initialize) {
	$loadClass(XEmbedCanvasPeer$4, name, initialize, &_XEmbedCanvasPeer$4_ClassInfo_, allocate$XEmbedCanvasPeer$4);
	return class$;
}

$Class* XEmbedCanvasPeer$4::class$ = nullptr;

		} // X11
	} // awt
} // sun