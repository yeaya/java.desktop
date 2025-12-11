#include <sun/lwawt/macosx/CInputMethod$7.h>

#include <java/awt/font/TextHitInfo.h>
#include <java/awt/im/InputMethodRequests.h>
#include <java/awt/im/spi/InputMethodContext.h>
#include <sun/lwawt/macosx/CInputMethod.h>
#include <jcpp.h>

using $TextHitInfoArray = $Array<::java::awt::font::TextHitInfo>;
using $InputMethodContext = ::java::awt::im::spi::InputMethodContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CInputMethod = ::sun::lwawt::macosx::CInputMethod;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CInputMethod$7_FieldInfo_[] = {
	{"this$0", "Lsun/lwawt/macosx/CInputMethod;", nullptr, $FINAL | $SYNTHETIC, $field(CInputMethod$7, this$0)},
	{"val$insertPositionOffset", "[I", nullptr, $FINAL | $SYNTHETIC, $field(CInputMethod$7, val$insertPositionOffset)},
	{"val$screenY", "I", nullptr, $FINAL | $SYNTHETIC, $field(CInputMethod$7, val$screenY)},
	{"val$screenX", "I", nullptr, $FINAL | $SYNTHETIC, $field(CInputMethod$7, val$screenX)},
	{"val$offsetInfo", "[Ljava/awt/font/TextHitInfo;", nullptr, $FINAL | $SYNTHETIC, $field(CInputMethod$7, val$offsetInfo)},
	{}
};

$MethodInfo _CInputMethod$7_MethodInfo_[] = {
	{"<init>", "(Lsun/lwawt/macosx/CInputMethod;[Ljava/awt/font/TextHitInfo;II[I)V", "()V", 0, $method(static_cast<void(CInputMethod$7::*)($CInputMethod*,$TextHitInfoArray*,int32_t,int32_t,$ints*)>(&CInputMethod$7::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CInputMethod$7_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CInputMethod",
	"characterIndexForPoint",
	"(II)I"
};

$InnerClassInfo _CInputMethod$7_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CInputMethod$7", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CInputMethod$7_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CInputMethod$7",
	"java.lang.Object",
	"java.lang.Runnable",
	_CInputMethod$7_FieldInfo_,
	_CInputMethod$7_MethodInfo_,
	nullptr,
	&_CInputMethod$7_EnclosingMethodInfo_,
	_CInputMethod$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CInputMethod"
};

$Object* allocate$CInputMethod$7($Class* clazz) {
	return $of($alloc(CInputMethod$7));
}

void CInputMethod$7::init$($CInputMethod* this$0, $TextHitInfoArray* val$offsetInfo, int32_t val$screenX, int32_t val$screenY, $ints* val$insertPositionOffset) {
	$set(this, this$0, this$0);
	$set(this, val$offsetInfo, val$offsetInfo);
	this->val$screenX = val$screenX;
	this->val$screenY = val$screenY;
	$set(this, val$insertPositionOffset, val$insertPositionOffset);
}

void CInputMethod$7::run() {
	$synchronized(this->val$offsetInfo) {
		$nc(this->val$offsetInfo)->set(0, $($nc(this->this$0->fIMContext)->getLocationOffset(this->val$screenX, this->val$screenY)));
		$nc(this->val$insertPositionOffset)->set(0, $nc(this->this$0->fIMContext)->getInsertPositionOffset());
	}
}

CInputMethod$7::CInputMethod$7() {
}

$Class* CInputMethod$7::load$($String* name, bool initialize) {
	$loadClass(CInputMethod$7, name, initialize, &_CInputMethod$7_ClassInfo_, allocate$CInputMethod$7);
	return class$;
}

$Class* CInputMethod$7::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun