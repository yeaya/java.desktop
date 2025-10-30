#include <sun/awt/windows/TranslucentWindowPainter$VIOptWindowPainter$1.h>

#include <sun/awt/windows/TranslucentWindowPainter$VIOptWindowPainter.h>
#include <sun/java2d/pipe/hw/AccelSurface.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $TranslucentWindowPainter$VIOptWindowPainter = ::sun::awt::windows::TranslucentWindowPainter$VIOptWindowPainter;
using $AccelSurface = ::sun::java2d::pipe::hw::AccelSurface;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _TranslucentWindowPainter$VIOptWindowPainter$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/windows/TranslucentWindowPainter$VIOptWindowPainter;", nullptr, $FINAL | $SYNTHETIC, $field(TranslucentWindowPainter$VIOptWindowPainter$1, this$0)},
	{"val$h", "I", nullptr, $FINAL | $SYNTHETIC, $field(TranslucentWindowPainter$VIOptWindowPainter$1, val$h)},
	{"val$w", "I", nullptr, $FINAL | $SYNTHETIC, $field(TranslucentWindowPainter$VIOptWindowPainter$1, val$w)},
	{"val$arr", "[Z", nullptr, $FINAL | $SYNTHETIC, $field(TranslucentWindowPainter$VIOptWindowPainter$1, val$arr)},
	{"val$as", "Lsun/java2d/pipe/hw/AccelSurface;", nullptr, $FINAL | $SYNTHETIC, $field(TranslucentWindowPainter$VIOptWindowPainter$1, val$as)},
	{}
};

$MethodInfo _TranslucentWindowPainter$VIOptWindowPainter$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/windows/TranslucentWindowPainter$VIOptWindowPainter;Lsun/java2d/pipe/hw/AccelSurface;[ZII)V", "()V", 0, $method(static_cast<void(TranslucentWindowPainter$VIOptWindowPainter$1::*)($TranslucentWindowPainter$VIOptWindowPainter*,$AccelSurface*,$booleans*,int32_t,int32_t)>(&TranslucentWindowPainter$VIOptWindowPainter$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TranslucentWindowPainter$VIOptWindowPainter$1_EnclosingMethodInfo_ = {
	"sun.awt.windows.TranslucentWindowPainter$VIOptWindowPainter",
	"update",
	"(Ljava/awt/Image;)Z"
};

$InnerClassInfo _TranslucentWindowPainter$VIOptWindowPainter$1_InnerClassesInfo_[] = {
	{"sun.awt.windows.TranslucentWindowPainter$VIOptWindowPainter", "sun.awt.windows.TranslucentWindowPainter", "VIOptWindowPainter", $PRIVATE | $STATIC | $ABSTRACT},
	{"sun.awt.windows.TranslucentWindowPainter$VIOptWindowPainter$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TranslucentWindowPainter$VIOptWindowPainter$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.windows.TranslucentWindowPainter$VIOptWindowPainter$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_TranslucentWindowPainter$VIOptWindowPainter$1_FieldInfo_,
	_TranslucentWindowPainter$VIOptWindowPainter$1_MethodInfo_,
	nullptr,
	&_TranslucentWindowPainter$VIOptWindowPainter$1_EnclosingMethodInfo_,
	_TranslucentWindowPainter$VIOptWindowPainter$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.windows.TranslucentWindowPainter"
};

$Object* allocate$TranslucentWindowPainter$VIOptWindowPainter$1($Class* clazz) {
	return $of($alloc(TranslucentWindowPainter$VIOptWindowPainter$1));
}

void TranslucentWindowPainter$VIOptWindowPainter$1::init$($TranslucentWindowPainter$VIOptWindowPainter* this$0, $AccelSurface* val$as, $booleans* val$arr, int32_t val$w, int32_t val$h) {
	$set(this, this$0, this$0);
	$set(this, val$as, val$as);
	$set(this, val$arr, val$arr);
	this->val$w = val$w;
	this->val$h = val$h;
}

void TranslucentWindowPainter$VIOptWindowPainter$1::run() {
	int64_t psdops = $nc(this->val$as)->getNativeOps();
	$nc(this->val$arr)->set(0, this->this$0->updateWindowAccel(psdops, this->val$w, this->val$h));
}

TranslucentWindowPainter$VIOptWindowPainter$1::TranslucentWindowPainter$VIOptWindowPainter$1() {
}

$Class* TranslucentWindowPainter$VIOptWindowPainter$1::load$($String* name, bool initialize) {
	$loadClass(TranslucentWindowPainter$VIOptWindowPainter$1, name, initialize, &_TranslucentWindowPainter$VIOptWindowPainter$1_ClassInfo_, allocate$TranslucentWindowPainter$VIOptWindowPainter$1);
	return class$;
}

$Class* TranslucentWindowPainter$VIOptWindowPainter$1::class$ = nullptr;

		} // windows
	} // awt
} // sun