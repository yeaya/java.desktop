#include <sun/lwawt/macosx/CInputMethod$3.h>

#include <java/awt/im/InputMethodRequests.h>
#include <java/awt/im/spi/InputMethodContext.h>
#include <java/text/AttributedCharacterIterator$Attribute.h>
#include <java/text/AttributedCharacterIterator.h>
#include <java/text/AttributedString.h>
#include <java/text/CharacterIterator.h>
#include <sun/lwawt/macosx/CInputMethod.h>
#include <jcpp.h>

#undef DONE

using $AttributedCharacterIterator$AttributeArray = $Array<::java::text::AttributedCharacterIterator$Attribute>;
using $InputMethodContext = ::java::awt::im::spi::InputMethodContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;
using $AttributedString = ::java::text::AttributedString;
using $CharacterIterator = ::java::text::CharacterIterator;
using $CInputMethod = ::sun::lwawt::macosx::CInputMethod;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CInputMethod$3_FieldInfo_[] = {
	{"this$0", "Lsun/lwawt/macosx/CInputMethod;", nullptr, $FINAL | $SYNTHETIC, $field(CInputMethod$3, this$0)},
	{"val$lengthIn", "I", nullptr, $FINAL | $SYNTHETIC, $field(CInputMethod$3, val$lengthIn)},
	{"val$locationIn", "I", nullptr, $FINAL | $SYNTHETIC, $field(CInputMethod$3, val$locationIn)},
	{"val$retString", "[Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(CInputMethod$3, val$retString)},
	{}
};

$MethodInfo _CInputMethod$3_MethodInfo_[] = {
	{"<init>", "(Lsun/lwawt/macosx/CInputMethod;[Ljava/lang/String;II)V", "()V", 0, $method(static_cast<void(CInputMethod$3::*)($CInputMethod*,$StringArray*,int32_t,int32_t)>(&CInputMethod$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CInputMethod$3_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CInputMethod",
	"attributedSubstringFromRange",
	"(II)Ljava/lang/String;"
};

$InnerClassInfo _CInputMethod$3_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CInputMethod$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CInputMethod$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CInputMethod$3",
	"java.lang.Object",
	"java.lang.Runnable",
	_CInputMethod$3_FieldInfo_,
	_CInputMethod$3_MethodInfo_,
	nullptr,
	&_CInputMethod$3_EnclosingMethodInfo_,
	_CInputMethod$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CInputMethod"
};

$Object* allocate$CInputMethod$3($Class* clazz) {
	return $of($alloc(CInputMethod$3));
}

void CInputMethod$3::init$($CInputMethod* this$0, $StringArray* val$retString, int32_t val$locationIn, int32_t val$lengthIn) {
	$set(this, this$0, this$0);
	$set(this, val$retString, val$retString);
	this->val$locationIn = val$locationIn;
	this->val$lengthIn = val$lengthIn;
}

void CInputMethod$3::run() {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->val$retString) {
		int32_t location = this->val$locationIn;
		int32_t length = this->val$lengthIn;
		if ((location + length) > ($nc(this->this$0->fIMContext)->getCommittedTextLength() + this->this$0->fCurrentTextLength)) {
			length = $nc(this->this$0->fIMContext)->getCommittedTextLength() - location;
		}
		$var($AttributedCharacterIterator, theIterator, nullptr);
		if (this->this$0->fCurrentText == nullptr) {
			$assign(theIterator, $nc(this->this$0->fIMContext)->getCommittedText(location, location + length, nullptr));
		} else {
			int32_t insertSpot = $nc(this->this$0->fIMContext)->getInsertPositionOffset();
			if (location < insertSpot) {
				$assign(theIterator, $nc(this->this$0->fIMContext)->getCommittedText(location, location + length, nullptr));
			} else if (location >= insertSpot && location < insertSpot + this->this$0->fCurrentTextLength) {
				$assign(theIterator, $nc(this->this$0->fCurrentText)->getIterator(nullptr, location - insertSpot, location - insertSpot + length));
			} else {
				$assign(theIterator, $nc(this->this$0->fIMContext)->getCommittedText(location - this->this$0->fCurrentTextLength, location - this->this$0->fCurrentTextLength + length, nullptr));
			}
		}
		int32_t var$0 = $nc(theIterator)->getEndIndex();
		$var($chars, selectedText, $new($chars, var$0 - theIterator->getBeginIndex()));
		char16_t current = theIterator->first();
		int32_t index = 0;
		while (current != $CharacterIterator::DONE) {
			selectedText->set(index++, current);
			current = theIterator->next();
		}
		$nc(this->val$retString)->set(0, $$new($String, selectedText));
	}
}

CInputMethod$3::CInputMethod$3() {
}

$Class* CInputMethod$3::load$($String* name, bool initialize) {
	$loadClass(CInputMethod$3, name, initialize, &_CInputMethod$3_ClassInfo_, allocate$CInputMethod$3);
	return class$;
}

$Class* CInputMethod$3::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun