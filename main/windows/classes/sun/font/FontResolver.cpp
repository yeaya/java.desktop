#include <sun/font/FontResolver.h>

#include <java/awt/Font.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ArrayList.h>
#include <java/util/Map.h>
#include <sun/font/CodePointIterator.h>
#include <sun/font/Font2D.h>
#include <sun/font/FontUtilities.h>
#include <jcpp.h>

#undef BLOCKSIZE
#undef DEFAULT_SIZE
#undef DIALOG
#undef DONE
#undef INSTANCE
#undef MASK
#undef PLAIN
#undef SHIFT

using $FontArray = $Array<::java::awt::Font>;
using $intArray2 = $Array<int32_t, 2>;
using $Font = ::java::awt::Font;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $Map = ::java::util::Map;
using $CodePointIterator = ::sun::font::CodePointIterator;
using $Font2D = ::sun::font::Font2D;
using $FontUtilities = ::sun::font::FontUtilities;

namespace sun {
	namespace font {

$FieldInfo _FontResolver_FieldInfo_[] = {
	{"allFonts", "[Ljava/awt/Font;", nullptr, $PRIVATE, $field(FontResolver, allFonts)},
	{"supplementaryFonts", "[Ljava/awt/Font;", nullptr, $PRIVATE, $field(FontResolver, supplementaryFonts)},
	{"supplementaryIndices", "[I", nullptr, $PRIVATE, $field(FontResolver, supplementaryIndices)},
	{"DEFAULT_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FontResolver, DEFAULT_SIZE)},
	{"defaultFont", "Ljava/awt/Font;", nullptr, $PRIVATE, $field(FontResolver, defaultFont)},
	{"SHIFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FontResolver, SHIFT)},
	{"BLOCKSIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FontResolver, BLOCKSIZE)},
	{"MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FontResolver, MASK)},
	{"blocks", "[[I", nullptr, $PRIVATE, $field(FontResolver, blocks)},
	{"INSTANCE", "Lsun/font/FontResolver;", nullptr, $PRIVATE | $STATIC, $staticField(FontResolver, INSTANCE)},
	{}
};

$MethodInfo _FontResolver_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(FontResolver::*)()>(&FontResolver::init$))},
	{"getAllFonts", "()[Ljava/awt/Font;", nullptr, $PRIVATE, $method(static_cast<$FontArray*(FontResolver::*)()>(&FontResolver::getAllFonts))},
	{"getAllSCFonts", "()[Ljava/awt/Font;", nullptr, $PRIVATE, $method(static_cast<$FontArray*(FontResolver::*)()>(&FontResolver::getAllSCFonts))},
	{"getFont", "(ILjava/util/Map;)Ljava/awt/Font;", "(ILjava/util/Map<+Ljava/text/AttributedCharacterIterator$Attribute;*>;)Ljava/awt/Font;", $PUBLIC, $method(static_cast<$Font*(FontResolver::*)(int32_t,$Map*)>(&FontResolver::getFont))},
	{"getFontIndex", "(C)I", nullptr, $PUBLIC, $method(static_cast<int32_t(FontResolver::*)(char16_t)>(&FontResolver::getFontIndex))},
	{"getFontIndex", "(I)I", nullptr, $PUBLIC, $method(static_cast<int32_t(FontResolver::*)(int32_t)>(&FontResolver::getFontIndex))},
	{"getIndexFor", "(C)I", nullptr, $PRIVATE, $method(static_cast<int32_t(FontResolver::*)(char16_t)>(&FontResolver::getIndexFor))},
	{"getIndexFor", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(FontResolver::*)(int32_t)>(&FontResolver::getIndexFor))},
	{"getInstance", "()Lsun/font/FontResolver;", nullptr, $PUBLIC | $STATIC, $method(static_cast<FontResolver*(*)()>(&FontResolver::getInstance))},
	{"nextFontRunIndex", "(Lsun/font/CodePointIterator;)I", nullptr, $PUBLIC, $method(static_cast<int32_t(FontResolver::*)($CodePointIterator*)>(&FontResolver::nextFontRunIndex))},
	{}
};

$ClassInfo _FontResolver_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.font.FontResolver",
	"java.lang.Object",
	nullptr,
	_FontResolver_FieldInfo_,
	_FontResolver_MethodInfo_
};

$Object* allocate$FontResolver($Class* clazz) {
	return $of($alloc(FontResolver));
}

FontResolver* FontResolver::INSTANCE = nullptr;

void FontResolver::init$() {
	$init($Font);
	$set(this, defaultFont, $new($Font, $Font::DIALOG, $Font::PLAIN, FontResolver::DEFAULT_SIZE));
	$set(this, blocks, $new($intArray2, $sl(1, FontResolver::SHIFT)));
}

$FontArray* FontResolver::getAllFonts() {
	$useLocalCurrentObjectStackCache();
	if (this->allFonts == nullptr) {
		$set(this, allFonts, $nc($($GraphicsEnvironment::getLocalGraphicsEnvironment()))->getAllFonts());
		for (int32_t i = 0; i < $nc(this->allFonts)->length; ++i) {
			$nc(this->allFonts)->set(i, $($nc($nc(this->allFonts)->get(i))->deriveFont((float)FontResolver::DEFAULT_SIZE)));
		}
	}
	return this->allFonts;
}

int32_t FontResolver::getIndexFor(char16_t c) {
	if ($nc(this->defaultFont)->canDisplay(c)) {
		return 1;
	}
	for (int32_t i = 0; i < $nc($(getAllFonts()))->length; ++i) {
		if ($nc($nc(this->allFonts)->get(i))->canDisplay(c)) {
			return i + 2;
		}
	}
	return 1;
}

$FontArray* FontResolver::getAllSCFonts() {
	$useLocalCurrentObjectStackCache();
	if (this->supplementaryFonts == nullptr) {
		$var($ArrayList, fonts, $new($ArrayList));
		$var($ArrayList, indices, $new($ArrayList));
		for (int32_t i = 0; i < $nc($(getAllFonts()))->length; ++i) {
			$var($Font, font, $nc(this->allFonts)->get(i));
			$var($Font2D, font2D, $FontUtilities::getFont2D(font));
			if ($nc(font2D)->hasSupplementaryChars()) {
				fonts->add(font);
				indices->add($($Integer::valueOf(i)));
			}
		}
		int32_t len = fonts->size();
		$set(this, supplementaryIndices, $new($ints, len));
		for (int32_t i = 0; i < len; ++i) {
			$nc(this->supplementaryIndices)->set(i, $nc(($cast($Integer, $(indices->get(i)))))->intValue());
		}
		$set(this, supplementaryFonts, $fcast($FontArray, fonts->toArray($$new($FontArray, len))));
	}
	return this->supplementaryFonts;
}

int32_t FontResolver::getIndexFor(int32_t cp) {
	if ($nc(this->defaultFont)->canDisplay(cp)) {
		return 1;
	}
	for (int32_t i = 0; i < $nc($(getAllSCFonts()))->length; ++i) {
		if ($nc($nc(this->supplementaryFonts)->get(i))->canDisplay(cp)) {
			return $nc(this->supplementaryIndices)->get(i) + 2;
		}
	}
	return 1;
}

int32_t FontResolver::getFontIndex(char16_t c) {
	int32_t blockIndex = $sr((int32_t)c, FontResolver::SHIFT);
	$var($ints, block, $nc(this->blocks)->get(blockIndex));
	if (block == nullptr) {
		$assign(block, $new($ints, FontResolver::BLOCKSIZE));
		$nc(this->blocks)->set(blockIndex, block);
	}
	int32_t index = (int32_t)(c & (uint32_t)FontResolver::MASK);
	if ($nc(block)->get(index) == 0) {
		block->set(index, getIndexFor(c));
	}
	return $nc(block)->get(index);
}

int32_t FontResolver::getFontIndex(int32_t cp) {
	if (cp < 0x00010000) {
		return getFontIndex((char16_t)cp);
	}
	return getIndexFor(cp);
}

int32_t FontResolver::nextFontRunIndex($CodePointIterator* iter) {
	int32_t cp = $nc(iter)->next();
	int32_t fontIndex = 1;
	if (cp != $CodePointIterator::DONE) {
		fontIndex = getFontIndex(cp);
		while ((cp = iter->next()) != $CodePointIterator::DONE) {
			if (getFontIndex(cp) != fontIndex) {
				iter->prev();
				break;
			}
		}
	}
	return fontIndex;
}

$Font* FontResolver::getFont(int32_t index, $Map* attributes) {
	$var($Font, font, this->defaultFont);
	if (index >= 2) {
		$assign(font, $nc(this->allFonts)->get(index - 2));
	}
	return $nc(font)->deriveFont(attributes);
}

FontResolver* FontResolver::getInstance() {
	$init(FontResolver);
	if (FontResolver::INSTANCE == nullptr) {
		$assignStatic(FontResolver::INSTANCE, $new(FontResolver));
	}
	return FontResolver::INSTANCE;
}

FontResolver::FontResolver() {
}

$Class* FontResolver::load$($String* name, bool initialize) {
	$loadClass(FontResolver, name, initialize, &_FontResolver_ClassInfo_, allocate$FontResolver);
	return class$;
}

$Class* FontResolver::class$ = nullptr;

	} // font
} // sun