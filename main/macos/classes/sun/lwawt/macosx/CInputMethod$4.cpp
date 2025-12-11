#include <sun/lwawt/macosx/CInputMethod$4.h>

#include <java/awt/Component.h>
#include <java/awt/TextComponent.h>
#include <java/awt/im/InputMethodRequests.h>
#include <java/awt/im/spi/InputMethodContext.h>
#include <java/text/AttributedCharacterIterator$Attribute.h>
#include <java/text/AttributedCharacterIterator.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/lwawt/macosx/CInputMethod.h>
#include <jcpp.h>

using $AttributedCharacterIterator$AttributeArray = $Array<::java::text::AttributedCharacterIterator$Attribute>;
using $TextComponent = ::java::awt::TextComponent;
using $InputMethodContext = ::java::awt::im::spi::InputMethodContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $CInputMethod = ::sun::lwawt::macosx::CInputMethod;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CInputMethod$4_FieldInfo_[] = {
	{"this$0", "Lsun/lwawt/macosx/CInputMethod;", nullptr, $FINAL | $SYNTHETIC, $field(CInputMethod$4, this$0)},
	{"val$returnValue", "[I", nullptr, $FINAL | $SYNTHETIC, $field(CInputMethod$4, val$returnValue)},
	{}
};

$MethodInfo _CInputMethod$4_MethodInfo_[] = {
	{"<init>", "(Lsun/lwawt/macosx/CInputMethod;[I)V", "()V", 0, $method(static_cast<void(CInputMethod$4::*)($CInputMethod*,$ints*)>(&CInputMethod$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CInputMethod$4_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CInputMethod",
	"selectedRange",
	"()[I"
};

$InnerClassInfo _CInputMethod$4_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CInputMethod$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CInputMethod$4_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CInputMethod$4",
	"java.lang.Object",
	"java.lang.Runnable",
	_CInputMethod$4_FieldInfo_,
	_CInputMethod$4_MethodInfo_,
	nullptr,
	&_CInputMethod$4_EnclosingMethodInfo_,
	_CInputMethod$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CInputMethod"
};

$Object* allocate$CInputMethod$4($Class* clazz) {
	return $of($alloc(CInputMethod$4));
}

void CInputMethod$4::init$($CInputMethod* this$0, $ints* val$returnValue) {
	$set(this, this$0, this$0);
	$set(this, val$returnValue, val$returnValue);
}

void CInputMethod$4::run() {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->val$returnValue) {
		$var($AttributedCharacterIterator, theIterator, $nc(this->this$0->fIMContext)->getSelectedText(nullptr));
		if (theIterator == nullptr) {
			$nc(this->val$returnValue)->set(0, $nc(this->this$0->fIMContext)->getInsertPositionOffset());
			$nc(this->val$returnValue)->set(1, 0);
			return;
		}
		int32_t startLocation = 0;
		if ($instanceOf($JTextComponent, this->this$0->fAwtFocussedComponent)) {
			$var($JTextComponent, theComponent, $cast($JTextComponent, this->this$0->fAwtFocussedComponent));
			startLocation = $nc(theComponent)->getSelectionStart();
		} else if ($instanceOf($TextComponent, this->this$0->fAwtFocussedComponent)) {
			$var($TextComponent, theComponent, $cast($TextComponent, this->this$0->fAwtFocussedComponent));
			startLocation = $nc(theComponent)->getSelectionStart();
		} else {
			int32_t var$0 = $nc(this->this$0->fIMContext)->getInsertPositionOffset();
			int32_t var$2 = $nc(theIterator)->getEndIndex();
			int32_t var$1 = (var$2 - theIterator->getBeginIndex());
			startLocation = var$0 - var$1;
			if (startLocation < 0) {
				int32_t var$3 = $nc(this->this$0->fIMContext)->getInsertPositionOffset();
				int32_t var$5 = theIterator->getEndIndex();
				int32_t var$4 = (var$5 - theIterator->getBeginIndex());
				startLocation = var$3 + var$4;
			}
		}
		$nc(this->val$returnValue)->set(0, startLocation);
		int32_t var$6 = $nc(theIterator)->getEndIndex();
		$nc(this->val$returnValue)->set(1, var$6 - theIterator->getBeginIndex());
	}
}

CInputMethod$4::CInputMethod$4() {
}

$Class* CInputMethod$4::load$($String* name, bool initialize) {
	$loadClass(CInputMethod$4, name, initialize, &_CInputMethod$4_ClassInfo_, allocate$CInputMethod$4);
	return class$;
}

$Class* CInputMethod$4::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun