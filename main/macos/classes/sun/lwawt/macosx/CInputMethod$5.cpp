#include <sun/lwawt/macosx/CInputMethod$5.h>

#include <java/awt/im/InputMethodRequests.h>
#include <java/awt/im/spi/InputMethodContext.h>
#include <sun/lwawt/macosx/CInputMethod.h>
#include <jcpp.h>

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

$FieldInfo _CInputMethod$5_FieldInfo_[] = {
	{"this$0", "Lsun/lwawt/macosx/CInputMethod;", nullptr, $FINAL | $SYNTHETIC, $field(CInputMethod$5, this$0)},
	{"val$returnValue", "[I", nullptr, $FINAL | $SYNTHETIC, $field(CInputMethod$5, val$returnValue)},
	{}
};

$MethodInfo _CInputMethod$5_MethodInfo_[] = {
	{"<init>", "(Lsun/lwawt/macosx/CInputMethod;[I)V", "()V", 0, $method(static_cast<void(CInputMethod$5::*)($CInputMethod*,$ints*)>(&CInputMethod$5::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CInputMethod$5_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CInputMethod",
	"markedRange",
	"()[I"
};

$InnerClassInfo _CInputMethod$5_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CInputMethod$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CInputMethod$5_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CInputMethod$5",
	"java.lang.Object",
	"java.lang.Runnable",
	_CInputMethod$5_FieldInfo_,
	_CInputMethod$5_MethodInfo_,
	nullptr,
	&_CInputMethod$5_EnclosingMethodInfo_,
	_CInputMethod$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CInputMethod"
};

$Object* allocate$CInputMethod$5($Class* clazz) {
	return $of($alloc(CInputMethod$5));
}

void CInputMethod$5::init$($CInputMethod* this$0, $ints* val$returnValue) {
	$set(this, this$0, this$0);
	$set(this, val$returnValue, val$returnValue);
}

void CInputMethod$5::run() {
	$synchronized(this->val$returnValue) {
		$nc(this->val$returnValue)->set(0, $nc(this->this$0->fIMContext)->getInsertPositionOffset());
	}
}

CInputMethod$5::CInputMethod$5() {
}

$Class* CInputMethod$5::load$($String* name, bool initialize) {
	$loadClass(CInputMethod$5, name, initialize, &_CInputMethod$5_ClassInfo_, allocate$CInputMethod$5);
	return class$;
}

$Class* CInputMethod$5::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun