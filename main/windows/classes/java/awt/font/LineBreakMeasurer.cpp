#include <java/awt/font/LineBreakMeasurer.h>

#include <java/awt/font/CharArrayIterator.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/font/TextLayout.h>
#include <java/awt/font/TextMeasurer.h>
#include <java/lang/Array.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/AttributedCharacterIterator.h>
#include <java/text/BreakIterator.h>
#include <java/text/CharacterIterator.h>
#include <jcpp.h>

using $CharArrayIterator = ::java::awt::font::CharArrayIterator;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $TextLayout = ::java::awt::font::TextLayout;
using $TextMeasurer = ::java::awt::font::TextMeasurer;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;
using $BreakIterator = ::java::text::BreakIterator;
using $CharacterIterator = ::java::text::CharacterIterator;

namespace java {
	namespace awt {
		namespace font {

$FieldInfo _LineBreakMeasurer_FieldInfo_[] = {
	{"breakIter", "Ljava/text/BreakIterator;", nullptr, $PRIVATE, $field(LineBreakMeasurer, breakIter)},
	{"start", "I", nullptr, $PRIVATE, $field(LineBreakMeasurer, start)},
	{"pos", "I", nullptr, $PRIVATE, $field(LineBreakMeasurer, pos)},
	{"limit", "I", nullptr, $PRIVATE, $field(LineBreakMeasurer, limit)},
	{"measurer", "Ljava/awt/font/TextMeasurer;", nullptr, $PRIVATE, $field(LineBreakMeasurer, measurer)},
	{"charIter", "Ljava/awt/font/CharArrayIterator;", nullptr, $PRIVATE, $field(LineBreakMeasurer, charIter)},
	{}
};

$MethodInfo _LineBreakMeasurer_MethodInfo_[] = {
	{"<init>", "(Ljava/text/AttributedCharacterIterator;Ljava/awt/font/FontRenderContext;)V", nullptr, $PUBLIC, $method(static_cast<void(LineBreakMeasurer::*)($AttributedCharacterIterator*,$FontRenderContext*)>(&LineBreakMeasurer::init$))},
	{"<init>", "(Ljava/text/AttributedCharacterIterator;Ljava/text/BreakIterator;Ljava/awt/font/FontRenderContext;)V", nullptr, $PUBLIC, $method(static_cast<void(LineBreakMeasurer::*)($AttributedCharacterIterator*,$BreakIterator*,$FontRenderContext*)>(&LineBreakMeasurer::init$))},
	{"deleteChar", "(Ljava/text/AttributedCharacterIterator;I)V", nullptr, $PUBLIC, $method(static_cast<void(LineBreakMeasurer::*)($AttributedCharacterIterator*,int32_t)>(&LineBreakMeasurer::deleteChar))},
	{"getPosition", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(LineBreakMeasurer::*)()>(&LineBreakMeasurer::getPosition))},
	{"insertChar", "(Ljava/text/AttributedCharacterIterator;I)V", nullptr, $PUBLIC, $method(static_cast<void(LineBreakMeasurer::*)($AttributedCharacterIterator*,int32_t)>(&LineBreakMeasurer::insertChar))},
	{"nextLayout", "(F)Ljava/awt/font/TextLayout;", nullptr, $PUBLIC, $method(static_cast<$TextLayout*(LineBreakMeasurer::*)(float)>(&LineBreakMeasurer::nextLayout))},
	{"nextLayout", "(FIZ)Ljava/awt/font/TextLayout;", nullptr, $PUBLIC, $method(static_cast<$TextLayout*(LineBreakMeasurer::*)(float,int32_t,bool)>(&LineBreakMeasurer::nextLayout))},
	{"nextOffset", "(F)I", nullptr, $PUBLIC, $method(static_cast<int32_t(LineBreakMeasurer::*)(float)>(&LineBreakMeasurer::nextOffset))},
	{"nextOffset", "(FIZ)I", nullptr, $PUBLIC, $method(static_cast<int32_t(LineBreakMeasurer::*)(float,int32_t,bool)>(&LineBreakMeasurer::nextOffset))},
	{"setPosition", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(LineBreakMeasurer::*)(int32_t)>(&LineBreakMeasurer::setPosition))},
	{}
};

$ClassInfo _LineBreakMeasurer_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.font.LineBreakMeasurer",
	"java.lang.Object",
	nullptr,
	_LineBreakMeasurer_FieldInfo_,
	_LineBreakMeasurer_MethodInfo_
};

$Object* allocate$LineBreakMeasurer($Class* clazz) {
	return $of($alloc(LineBreakMeasurer));
}

void LineBreakMeasurer::init$($AttributedCharacterIterator* text, $FontRenderContext* frc) {
	LineBreakMeasurer::init$(text, $($BreakIterator::getLineInstance()), frc);
}

void LineBreakMeasurer::init$($AttributedCharacterIterator* text, $BreakIterator* breakIter, $FontRenderContext* frc) {
	int32_t var$0 = $nc(text)->getEndIndex();
	if (var$0 - text->getBeginIndex() < 1) {
		$throwNew($IllegalArgumentException, "Text must contain at least one character."_s);
	}
	$set(this, breakIter, breakIter);
	$set(this, measurer, $new($TextMeasurer, text, frc));
	this->limit = $nc(text)->getEndIndex();
	this->pos = (this->start = text->getBeginIndex());
	$set(this, charIter, $new($CharArrayIterator, $($nc(this->measurer)->getChars()), this->start));
	$nc(this->breakIter)->setText(static_cast<$CharacterIterator*>(this->charIter));
}

int32_t LineBreakMeasurer::nextOffset(float wrappingWidth) {
	return nextOffset(wrappingWidth, this->limit, false);
}

int32_t LineBreakMeasurer::nextOffset(float wrappingWidth, int32_t offsetLimit, bool requireNextWord) {
	int32_t nextOffset = this->pos;
	if (this->pos < this->limit) {
		if (offsetLimit <= this->pos) {
			$throwNew($IllegalArgumentException, "offsetLimit must be after current position"_s);
		}
		int32_t charAtMaxAdvance = $nc(this->measurer)->getLineBreakIndex(this->pos, wrappingWidth);
		if (charAtMaxAdvance == this->limit) {
			nextOffset = this->limit;
		} else if ($Character::isWhitespace($nc($($nc(this->measurer)->getChars()))->get(charAtMaxAdvance - this->start))) {
			nextOffset = $nc(this->breakIter)->following(charAtMaxAdvance);
		} else {
			int32_t testPos = charAtMaxAdvance + 1;
			if (testPos == this->limit) {
				$nc(this->breakIter)->last();
				nextOffset = $nc(this->breakIter)->previous();
			} else {
				nextOffset = $nc(this->breakIter)->preceding(testPos);
			}
			if (nextOffset <= this->pos) {
				if (requireNextWord) {
					nextOffset = this->pos;
				} else {
					nextOffset = $Math::max(this->pos + 1, charAtMaxAdvance);
				}
			}
		}
	}
	if (nextOffset > offsetLimit) {
		nextOffset = offsetLimit;
	}
	return nextOffset;
}

$TextLayout* LineBreakMeasurer::nextLayout(float wrappingWidth) {
	return nextLayout(wrappingWidth, this->limit, false);
}

$TextLayout* LineBreakMeasurer::nextLayout(float wrappingWidth, int32_t offsetLimit, bool requireNextWord) {
	if (this->pos < this->limit) {
		int32_t layoutLimit = nextOffset(wrappingWidth, offsetLimit, requireNextWord);
		if (layoutLimit == this->pos) {
			return nullptr;
		}
		$var($TextLayout, result, $nc(this->measurer)->getLayout(this->pos, layoutLimit));
		this->pos = layoutLimit;
		return result;
	} else {
		return nullptr;
	}
}

int32_t LineBreakMeasurer::getPosition() {
	return this->pos;
}

void LineBreakMeasurer::setPosition(int32_t newPosition) {
	if (newPosition < this->start || newPosition > this->limit) {
		$throwNew($IllegalArgumentException, "position is out of range"_s);
	}
	this->pos = newPosition;
}

void LineBreakMeasurer::insertChar($AttributedCharacterIterator* newParagraph, int32_t insertPos) {
	$nc(this->measurer)->insertChar(newParagraph, insertPos);
	this->limit = $nc(newParagraph)->getEndIndex();
	this->pos = (this->start = newParagraph->getBeginIndex());
	$var($chars, var$0, $nc(this->measurer)->getChars());
	$nc(this->charIter)->reset(var$0, newParagraph->getBeginIndex());
	$nc(this->breakIter)->setText(static_cast<$CharacterIterator*>(this->charIter));
}

void LineBreakMeasurer::deleteChar($AttributedCharacterIterator* newParagraph, int32_t deletePos) {
	$nc(this->measurer)->deleteChar(newParagraph, deletePos);
	this->limit = $nc(newParagraph)->getEndIndex();
	this->pos = (this->start = newParagraph->getBeginIndex());
	$nc(this->charIter)->reset($($nc(this->measurer)->getChars()), this->start);
	$nc(this->breakIter)->setText(static_cast<$CharacterIterator*>(this->charIter));
}

LineBreakMeasurer::LineBreakMeasurer() {
}

$Class* LineBreakMeasurer::load$($String* name, bool initialize) {
	$loadClass(LineBreakMeasurer, name, initialize, &_LineBreakMeasurer_ClassInfo_, allocate$LineBreakMeasurer);
	return class$;
}

$Class* LineBreakMeasurer::class$ = nullptr;

		} // font
	} // awt
} // java