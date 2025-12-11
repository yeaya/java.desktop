#include <sun/lwawt/macosx/CInputMethod$6.h>

#include <java/awt/Component.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/font/TextHitInfo.h>
#include <java/awt/im/InputMethodRequests.h>
#include <java/awt/im/spi/InputMethodContext.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/lwawt/macosx/CInputMethod.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $TextHitInfo = ::java::awt::font::TextHitInfo;
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

$FieldInfo _CInputMethod$6_FieldInfo_[] = {
	{"this$0", "Lsun/lwawt/macosx/CInputMethod;", nullptr, $FINAL | $SYNTHETIC, $field(CInputMethod$6, this$0)},
	{"val$absoluteTextOffset", "I", nullptr, $FINAL | $SYNTHETIC, $field(CInputMethod$6, val$absoluteTextOffset)},
	{"val$rect", "[I", nullptr, $FINAL | $SYNTHETIC, $field(CInputMethod$6, val$rect)},
	{}
};

$MethodInfo _CInputMethod$6_MethodInfo_[] = {
	{"<init>", "(Lsun/lwawt/macosx/CInputMethod;[II)V", "()V", 0, $method(static_cast<void(CInputMethod$6::*)($CInputMethod*,$ints*,int32_t)>(&CInputMethod$6::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CInputMethod$6_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CInputMethod",
	"firstRectForCharacterRange",
	"(I)[I"
};

$InnerClassInfo _CInputMethod$6_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CInputMethod$6", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CInputMethod$6_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CInputMethod$6",
	"java.lang.Object",
	"java.lang.Runnable",
	_CInputMethod$6_FieldInfo_,
	_CInputMethod$6_MethodInfo_,
	nullptr,
	&_CInputMethod$6_EnclosingMethodInfo_,
	_CInputMethod$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CInputMethod"
};

$Object* allocate$CInputMethod$6($Class* clazz) {
	return $of($alloc(CInputMethod$6));
}

void CInputMethod$6::init$($CInputMethod* this$0, $ints* val$rect, int32_t val$absoluteTextOffset) {
	$set(this, this$0, this$0);
	$set(this, val$rect, val$rect);
	this->val$absoluteTextOffset = val$absoluteTextOffset;
}

void CInputMethod$6::run() {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->val$rect) {
		int32_t insertOffset = $nc(this->this$0->fIMContext)->getInsertPositionOffset();
		int32_t composedTextOffset = this->val$absoluteTextOffset - insertOffset;
		if (composedTextOffset < 0) {
			composedTextOffset = 0;
		}
		$var($Rectangle, r, $nc(this->this$0->fIMContext)->getTextLocation($($TextHitInfo::beforeOffset(composedTextOffset))));
		$nc(this->val$rect)->set(0, $nc(r)->x);
		$nc(this->val$rect)->set(1, r->y);
		$nc(this->val$rect)->set(2, r->width);
		$nc(this->val$rect)->set(3, r->height);
		if (composedTextOffset > 0 && ($instanceOf($JTextComponent, this->this$0->fAwtFocussedComponent))) {
			$var($Rectangle, r2, $nc(this->this$0->fIMContext)->getTextLocation($($TextHitInfo::beforeOffset(0))));
			if (r->equals(r2)) {
				$var($String, inProgressSubstring, $nc(this->this$0->fCurrentTextAsString)->substring(0, composedTextOffset));
				$var($Graphics, g, $nc(this->this$0->fAwtFocussedComponent)->getGraphics());
				int32_t xOffset = $nc($($nc(g)->getFontMetrics()))->stringWidth(inProgressSubstring);
				(*$nc(this->val$rect))[0] += xOffset;
				g->dispose();
			}
		}
	}
}

CInputMethod$6::CInputMethod$6() {
}

$Class* CInputMethod$6::load$($String* name, bool initialize) {
	$loadClass(CInputMethod$6, name, initialize, &_CInputMethod$6_ClassInfo_, allocate$CInputMethod$6);
	return class$;
}

$Class* CInputMethod$6::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun