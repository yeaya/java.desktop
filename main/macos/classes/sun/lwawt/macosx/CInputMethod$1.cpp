#include <sun/lwawt/macosx/CInputMethod$1.h>

#include <java/awt/Component.h>
#include <java/awt/TextComponent.h>
#include <java/awt/im/InputMethodRequests.h>
#include <java/awt/im/spi/InputMethodContext.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/lwawt/macosx/CInputMethod.h>
#include <jcpp.h>

using $TextComponent = ::java::awt::TextComponent;
using $InputMethodContext = ::java::awt::im::spi::InputMethodContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $CInputMethod = ::sun::lwawt::macosx::CInputMethod;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CInputMethod$1_FieldInfo_[] = {
	{"this$0", "Lsun/lwawt/macosx/CInputMethod;", nullptr, $FINAL | $SYNTHETIC, $field(CInputMethod$1, this$0)},
	{}
};

$MethodInfo _CInputMethod$1_MethodInfo_[] = {
	{"<init>", "(Lsun/lwawt/macosx/CInputMethod;)V", nullptr, 0, $method(static_cast<void(CInputMethod$1::*)($CInputMethod*)>(&CInputMethod$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CInputMethod$1_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CInputMethod",
	"selectPreviousGlyph",
	"()V"
};

$InnerClassInfo _CInputMethod$1_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CInputMethod$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CInputMethod$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CInputMethod$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_CInputMethod$1_FieldInfo_,
	_CInputMethod$1_MethodInfo_,
	nullptr,
	&_CInputMethod$1_EnclosingMethodInfo_,
	_CInputMethod$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CInputMethod"
};

$Object* allocate$CInputMethod$1($Class* clazz) {
	return $of($alloc(CInputMethod$1));
}

void CInputMethod$1::init$($CInputMethod* this$0) {
	$set(this, this$0, this$0);
}

void CInputMethod$1::run() {
	int32_t offset = $nc(this->this$0->fIMContext)->getInsertPositionOffset();
	if (offset < 1) {
		return;
	}
	if ($instanceOf($JTextComponent, this->this$0->fAwtFocussedComponent)) {
		$nc(($cast($JTextComponent, this->this$0->fAwtFocussedComponent)))->select(offset - 1, offset);
		return;
	}
	if ($instanceOf($TextComponent, this->this$0->fAwtFocussedComponent)) {
		$nc(($cast($TextComponent, this->this$0->fAwtFocussedComponent)))->select(offset - 1, offset);
		return;
	}
}

CInputMethod$1::CInputMethod$1() {
}

$Class* CInputMethod$1::load$($String* name, bool initialize) {
	$loadClass(CInputMethod$1, name, initialize, &_CInputMethod$1_ClassInfo_, allocate$CInputMethod$1);
	return class$;
}

$Class* CInputMethod$1::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun