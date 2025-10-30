#include <java/awt/font/StyledParagraph.h>

#include <java/awt/Font.h>
#include <java/awt/Toolkit.h>
#include <java/awt/font/TextAttribute.h>
#include <java/awt/im/InputMethodHighlight.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/Math.h>
#include <java/lang/NoSuchMethodError.h>
#include <java/text/Annotation.h>
#include <java/text/AttributedCharacterIterator.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <java/util/Vector.h>
#include <sun/font/CodePointIterator.h>
#include <sun/font/Decoration.h>
#include <sun/font/FontResolver.h>
#include <jcpp.h>

#undef CHAR_REPLACEMENT
#undef FAMILY
#undef FONT
#undef INITIAL_SIZE
#undef INPUT_METHOD_HIGHLIGHT

using $Font = ::java::awt::Font;
using $Toolkit = ::java::awt::Toolkit;
using $TextAttribute = ::java::awt::font::TextAttribute;
using $InputMethodHighlight = ::java::awt::im::InputMethodHighlight;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodError = ::java::lang::NoSuchMethodError;
using $Annotation = ::java::text::Annotation;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;
using $CharacterIterator = ::java::text::CharacterIterator;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $Vector = ::java::util::Vector;
using $CodePointIterator = ::sun::font::CodePointIterator;
using $Decoration = ::sun::font::Decoration;
using $FontResolver = ::sun::font::FontResolver;

namespace java {
	namespace awt {
		namespace font {

$FieldInfo _StyledParagraph_FieldInfo_[] = {
	{"length", "I", nullptr, $PRIVATE, $field(StyledParagraph, length)},
	{"decoration", "Lsun/font/Decoration;", nullptr, $PRIVATE, $field(StyledParagraph, decoration)},
	{"font", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(StyledParagraph, font)},
	{"decorations", "Ljava/util/Vector;", "Ljava/util/Vector<Lsun/font/Decoration;>;", $PRIVATE, $field(StyledParagraph, decorations)},
	{"decorationStarts", "[I", nullptr, 0, $field(StyledParagraph, decorationStarts)},
	{"fonts", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/lang/Object;>;", $PRIVATE, $field(StyledParagraph, fonts)},
	{"fontStarts", "[I", nullptr, 0, $field(StyledParagraph, fontStarts)},
	{"INITIAL_SIZE", "I", nullptr, $PRIVATE | $STATIC, $staticField(StyledParagraph, INITIAL_SIZE)},
	{}
};

$MethodInfo _StyledParagraph_MethodInfo_[] = {
	{"<init>", "(Ljava/text/AttributedCharacterIterator;[C)V", nullptr, $PUBLIC, $method(static_cast<void(StyledParagraph::*)($AttributedCharacterIterator*,$chars*)>(&StyledParagraph::init$))},
	{"addDecoration", "(Lsun/font/Decoration;I)V", nullptr, $PRIVATE, $method(static_cast<void(StyledParagraph::*)($Decoration*,int32_t)>(&StyledParagraph::addDecoration))},
	{"addFont", "(Ljava/lang/Object;I)V", nullptr, $PRIVATE, $method(static_cast<void(StyledParagraph::*)(Object$*,int32_t)>(&StyledParagraph::addFont))},
	{"addFonts", "([CLjava/util/Map;II)V", "([CLjava/util/Map<+Ljava/text/AttributedCharacterIterator$Attribute;*>;II)V", $PRIVATE, $method(static_cast<void(StyledParagraph::*)($chars*,$Map*,int32_t,int32_t)>(&StyledParagraph::addFonts))},
	{"addInputMethodAttrs", "(Ljava/util/Map;)Ljava/util/Map;", "(Ljava/util/Map<+Ljava/text/AttributedCharacterIterator$Attribute;*>;)Ljava/util/Map<+Ljava/text/AttributedCharacterIterator$Attribute;*>;", $STATIC, $method(static_cast<$Map*(*)($Map*)>(&StyledParagraph::addInputMethodAttrs))},
	{"addToVector", "(Ljava/lang/Object;ILjava/util/Vector;[I)[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ints*(*)(Object$*,int32_t,$Vector*,$ints*)>(&StyledParagraph::addToVector))},
	{"deleteChar", "(Ljava/text/AttributedCharacterIterator;[CILjava/awt/font/StyledParagraph;)Ljava/awt/font/StyledParagraph;", nullptr, $PUBLIC | $STATIC, $method(static_cast<StyledParagraph*(*)($AttributedCharacterIterator*,$chars*,int32_t,StyledParagraph*)>(&StyledParagraph::deleteChar))},
	{"deleteFrom", "(I[II)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t,$ints*,int32_t)>(&StyledParagraph::deleteFrom))},
	{"findRunContaining", "(I[I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,$ints*)>(&StyledParagraph::findRunContaining))},
	{"getDecorationAt", "(I)Lsun/font/Decoration;", nullptr, $PUBLIC, $method(static_cast<$Decoration*(StyledParagraph::*)(int32_t)>(&StyledParagraph::getDecorationAt))},
	{"getFontOrGraphicAt", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $method(static_cast<$Object*(StyledParagraph::*)(int32_t)>(&StyledParagraph::getFontOrGraphicAt))},
	{"getGraphicOrFont", "(Ljava/util/Map;)Ljava/lang/Object;", "(Ljava/util/Map<+Ljava/text/AttributedCharacterIterator$Attribute;*>;)Ljava/lang/Object;", $PRIVATE | $STATIC, $method(static_cast<$Object*(*)($Map*)>(&StyledParagraph::getGraphicOrFont))},
	{"getRunLimit", "(I)I", nullptr, $PUBLIC, $method(static_cast<int32_t(StyledParagraph::*)(int32_t)>(&StyledParagraph::getRunLimit))},
	{"insertChar", "(Ljava/text/AttributedCharacterIterator;[CILjava/awt/font/StyledParagraph;)Ljava/awt/font/StyledParagraph;", nullptr, $PUBLIC | $STATIC, $method(static_cast<StyledParagraph*(*)($AttributedCharacterIterator*,$chars*,int32_t,StyledParagraph*)>(&StyledParagraph::insertChar))},
	{"insertInto", "(I[II)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t,$ints*,int32_t)>(&StyledParagraph::insertInto))},
	{}
};

$ClassInfo _StyledParagraph_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.awt.font.StyledParagraph",
	"java.lang.Object",
	nullptr,
	_StyledParagraph_FieldInfo_,
	_StyledParagraph_MethodInfo_
};

$Object* allocate$StyledParagraph($Class* clazz) {
	return $of($alloc(StyledParagraph));
}

int32_t StyledParagraph::INITIAL_SIZE = 0;

void StyledParagraph::init$($AttributedCharacterIterator* aci, $chars* chars) {
	$useLocalCurrentObjectStackCache();
	int32_t start = $nc(aci)->getBeginIndex();
	int32_t end = aci->getEndIndex();
	this->length = end - start;
	int32_t index = start;
	aci->first();
	do {
		int32_t nextRunStart = aci->getRunLimit();
		int32_t localIndex = index - start;
		$var($Map, attributes, aci->getAttributes());
		$assign(attributes, addInputMethodAttrs(attributes));
		$var($Decoration, d, $Decoration::getDecoration(attributes));
		addDecoration(d, localIndex);
		$var($Object, f, getGraphicOrFont(attributes));
		if (f == nullptr) {
			addFonts(chars, attributes, localIndex, nextRunStart - start);
		} else {
			addFont(f, localIndex);
		}
		aci->setIndex(nextRunStart);
		index = nextRunStart;
	} while (index < end);
	if (this->decorations != nullptr) {
		$set(this, decorationStarts, addToVector(this, this->length, this->decorations, this->decorationStarts));
	}
	if (this->fonts != nullptr) {
		$set(this, fontStarts, addToVector(this, this->length, this->fonts, this->fontStarts));
	}
}

void StyledParagraph::insertInto(int32_t pos, $ints* starts, int32_t numStarts) {
	$init(StyledParagraph);
	while ($nc(starts)->get(--numStarts) > pos) {
		(*starts)[numStarts] += 1;
	}
}

StyledParagraph* StyledParagraph::insertChar($AttributedCharacterIterator* aci, $chars* chars, int32_t insertPos, StyledParagraph* oldParagraph) {
	$init(StyledParagraph);
	$useLocalCurrentObjectStackCache();
	char16_t ch = $nc(aci)->setIndex(insertPos);
	int32_t relativePos = $Math::max(insertPos - aci->getBeginIndex() - 1, 0);
	$var($Map, attributes, addInputMethodAttrs($(aci->getAttributes())));
	$var($Decoration, d, $Decoration::getDecoration(attributes));
	if (!$nc($of($($nc(oldParagraph)->getDecorationAt(relativePos))))->equals(d)) {
		return $new(StyledParagraph, aci, chars);
	}
	$var($Object, f, getGraphicOrFont(attributes));
	if (f == nullptr) {
		$var($FontResolver, resolver, $FontResolver::getInstance());
		int32_t fontIndex = $nc(resolver)->getFontIndex(ch);
		$assign(f, resolver->getFont(fontIndex, attributes));
	}
	if (!$nc($of($($nc(oldParagraph)->getFontOrGraphicAt(relativePos))))->equals(f)) {
		return $new(StyledParagraph, aci, chars);
	}
	$nc(oldParagraph)->length += 1;
	if (oldParagraph->decorations != nullptr) {
		insertInto(relativePos, oldParagraph->decorationStarts, $nc(oldParagraph->decorations)->size());
	}
	if (oldParagraph->fonts != nullptr) {
		insertInto(relativePos, oldParagraph->fontStarts, $nc(oldParagraph->fonts)->size());
	}
	return oldParagraph;
}

void StyledParagraph::deleteFrom(int32_t deleteAt, $ints* starts, int32_t numStarts) {
	$init(StyledParagraph);
	while ($nc(starts)->get(--numStarts) > deleteAt) {
		(*starts)[numStarts] -= 1;
	}
}

StyledParagraph* StyledParagraph::deleteChar($AttributedCharacterIterator* aci, $chars* chars, int32_t deletePos, StyledParagraph* oldParagraph) {
	$init(StyledParagraph);
	deletePos -= $nc(aci)->getBeginIndex();
	if ($nc(oldParagraph)->decorations == nullptr && oldParagraph->fonts == nullptr) {
		oldParagraph->length -= 1;
		return oldParagraph;
	}
	if ($nc(oldParagraph)->getRunLimit(deletePos) == deletePos + 1) {
		if (deletePos == 0 || oldParagraph->getRunLimit(deletePos - 1) == deletePos) {
			return $new(StyledParagraph, aci, chars);
		}
	}
	$nc(oldParagraph)->length -= 1;
	if (oldParagraph->decorations != nullptr) {
		deleteFrom(deletePos, oldParagraph->decorationStarts, $nc(oldParagraph->decorations)->size());
	}
	if (oldParagraph->fonts != nullptr) {
		deleteFrom(deletePos, oldParagraph->fontStarts, $nc(oldParagraph->fonts)->size());
	}
	return oldParagraph;
}

int32_t StyledParagraph::getRunLimit(int32_t index) {
	if (index < 0 || index >= this->length) {
		$throwNew($IllegalArgumentException, "index out of range"_s);
	}
	int32_t limit1 = this->length;
	if (this->decorations != nullptr) {
		int32_t run = findRunContaining(index, this->decorationStarts);
		limit1 = $nc(this->decorationStarts)->get(run + 1);
	}
	int32_t limit2 = this->length;
	if (this->fonts != nullptr) {
		int32_t run = findRunContaining(index, this->fontStarts);
		limit2 = $nc(this->fontStarts)->get(run + 1);
	}
	return $Math::min(limit1, limit2);
}

$Decoration* StyledParagraph::getDecorationAt(int32_t index) {
	if (index < 0 || index >= this->length) {
		$throwNew($IllegalArgumentException, "index out of range"_s);
	}
	if (this->decorations == nullptr) {
		return this->decoration;
	}
	int32_t run = findRunContaining(index, this->decorationStarts);
	return $cast($Decoration, $nc(this->decorations)->elementAt(run));
}

$Object* StyledParagraph::getFontOrGraphicAt(int32_t index) {
	if (index < 0 || index >= this->length) {
		$throwNew($IllegalArgumentException, "index out of range"_s);
	}
	if (this->fonts == nullptr) {
		return $of(this->font);
	}
	int32_t run = findRunContaining(index, this->fontStarts);
	return $of($nc(this->fonts)->elementAt(run));
}

int32_t StyledParagraph::findRunContaining(int32_t index, $ints* starts) {
	$init(StyledParagraph);
	for (int32_t i = 1; true; ++i) {
		if ($nc(starts)->get(i) > index) {
			return i - 1;
		}
	}
}

$ints* StyledParagraph::addToVector(Object$* obj, int32_t index, $Vector* v, $ints* starts$renamed) {
	$init(StyledParagraph);
	$useLocalCurrentObjectStackCache();
	$var($ints, starts, starts$renamed);
	if (!$nc($of($($nc(v)->lastElement())))->equals(obj)) {
		v->addElement(obj);
		int32_t count = v->size();
		if ($nc(starts)->length == count) {
			$var($ints, temp, $new($ints, starts->length * 2));
			$System::arraycopy(starts, 0, temp, 0, starts->length);
			$assign(starts, temp);
		}
		$nc(starts)->set(count - 1, index);
	}
	return starts;
}

void StyledParagraph::addDecoration($Decoration* d, int32_t index) {
	if (this->decorations != nullptr) {
		$set(this, decorationStarts, addToVector(d, index, this->decorations, this->decorationStarts));
	} else if (this->decoration == nullptr) {
		$set(this, decoration, d);
	} else if (!$nc($of(this->decoration))->equals(d)) {
		$set(this, decorations, $new($Vector, StyledParagraph::INITIAL_SIZE));
		$nc(this->decorations)->addElement(this->decoration);
		$nc(this->decorations)->addElement(d);
		$set(this, decorationStarts, $new($ints, StyledParagraph::INITIAL_SIZE));
		$nc(this->decorationStarts)->set(0, 0);
		$nc(this->decorationStarts)->set(1, index);
	}
}

void StyledParagraph::addFont(Object$* f, int32_t index) {
	if (this->fonts != nullptr) {
		$set(this, fontStarts, addToVector(f, index, this->fonts, this->fontStarts));
	} else if (this->font == nullptr) {
		$set(this, font, f);
	} else if (!$nc($of(this->font))->equals(f)) {
		$set(this, fonts, $new($Vector, StyledParagraph::INITIAL_SIZE));
		$nc(this->fonts)->addElement(this->font);
		$nc(this->fonts)->addElement(f);
		$set(this, fontStarts, $new($ints, StyledParagraph::INITIAL_SIZE));
		$nc(this->fontStarts)->set(0, 0);
		$nc(this->fontStarts)->set(1, index);
	}
}

void StyledParagraph::addFonts($chars* chars, $Map* attributes, int32_t start, int32_t limit) {
	$useLocalCurrentObjectStackCache();
	$var($FontResolver, resolver, $FontResolver::getInstance());
	$var($CodePointIterator, iter, $CodePointIterator::create(chars, start, limit));
	for (int32_t runStart = $nc(iter)->charIndex(); runStart < limit; runStart = iter->charIndex()) {
		int32_t fontIndex = $nc(resolver)->nextFontRunIndex(iter);
		addFont($(resolver->getFont(fontIndex, attributes)), runStart);
	}
}

$Map* StyledParagraph::addInputMethodAttrs($Map* oldStyles) {
	$init(StyledParagraph);
	$useLocalCurrentObjectStackCache();
	$init($TextAttribute);
	$var($Object, value, $nc(oldStyles)->get($TextAttribute::INPUT_METHOD_HIGHLIGHT));
	try {
		if (value != nullptr) {
			if ($instanceOf($Annotation, value)) {
				$assign(value, $nc(($cast($Annotation, value)))->getValue());
			}
			$var($InputMethodHighlight, hl, nullptr);
			$assign(hl, $cast($InputMethodHighlight, value));
			$var($Map, imStyles, nullptr);
			try {
				$assign(imStyles, hl->getStyle());
			} catch ($NoSuchMethodError& e) {
			}
			if (imStyles == nullptr) {
				$var($Toolkit, tk, $Toolkit::getDefaultToolkit());
				$assign(imStyles, $nc(tk)->mapInputMethodHighlight(hl));
			}
			if (imStyles != nullptr) {
				$var($HashMap, newStyles, $new($HashMap, 5, (float)0.9));
				newStyles->putAll(oldStyles);
				newStyles->putAll(imStyles);
				return newStyles;
			}
		}
	} catch ($ClassCastException& e) {
	}
	return oldStyles;
}

$Object* StyledParagraph::getGraphicOrFont($Map* attributes) {
	$init(StyledParagraph);
	$init($TextAttribute);
	$var($Object, value, $nc(attributes)->get($TextAttribute::CHAR_REPLACEMENT));
	if (value != nullptr) {
		return $of(value);
	}
	$assign(value, attributes->get($TextAttribute::FONT));
	if (value != nullptr) {
		return $of(value);
	}
	if (attributes->get($TextAttribute::FAMILY) != nullptr) {
		return $of($Font::getFont(attributes));
	} else {
		return $of(nullptr);
	}
}

void clinit$StyledParagraph($Class* class$) {
	StyledParagraph::INITIAL_SIZE = 8;
}

StyledParagraph::StyledParagraph() {
}

$Class* StyledParagraph::load$($String* name, bool initialize) {
	$loadClass(StyledParagraph, name, initialize, &_StyledParagraph_ClassInfo_, clinit$StyledParagraph, allocate$StyledParagraph);
	return class$;
}

$Class* StyledParagraph::class$ = nullptr;

		} // font
	} // awt
} // java