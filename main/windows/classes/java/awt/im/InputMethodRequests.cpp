#include <java/awt/im/InputMethodRequests.h>

#include <java/awt/Rectangle.h>
#include <java/awt/font/TextHitInfo.h>
#include <java/text/AttributedCharacterIterator$Attribute.h>
#include <java/text/AttributedCharacterIterator.h>
#include <jcpp.h>

using $AttributedCharacterIterator$AttributeArray = $Array<::java::text::AttributedCharacterIterator$Attribute>;
using $Rectangle = ::java::awt::Rectangle;
using $TextHitInfo = ::java::awt::font::TextHitInfo;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;

namespace java {
	namespace awt {
		namespace im {

$MethodInfo _InputMethodRequests_MethodInfo_[] = {
	{"cancelLatestCommittedText", "([Ljava/text/AttributedCharacterIterator$Attribute;)Ljava/text/AttributedCharacterIterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"getCommittedText", "(II[Ljava/text/AttributedCharacterIterator$Attribute;)Ljava/text/AttributedCharacterIterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"getCommittedTextLength", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getInsertPositionOffset", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getLocationOffset", "(II)Ljava/awt/font/TextHitInfo;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSelectedText", "([Ljava/text/AttributedCharacterIterator$Attribute;)Ljava/text/AttributedCharacterIterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTextLocation", "(Ljava/awt/font/TextHitInfo;)Ljava/awt/Rectangle;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _InputMethodRequests_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.im.InputMethodRequests",
	nullptr,
	nullptr,
	nullptr,
	_InputMethodRequests_MethodInfo_
};

$Object* allocate$InputMethodRequests($Class* clazz) {
	return $of($alloc(InputMethodRequests));
}

$Class* InputMethodRequests::load$($String* name, bool initialize) {
	$loadClass(InputMethodRequests, name, initialize, &_InputMethodRequests_ClassInfo_, allocate$InputMethodRequests);
	return class$;
}

$Class* InputMethodRequests::class$ = nullptr;

		} // im
	} // awt
} // java