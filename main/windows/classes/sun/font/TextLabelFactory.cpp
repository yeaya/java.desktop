#include <sun/font/TextLabelFactory.h>

#include <java/awt/Font.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/Bidi.h>
#include <sun/font/CoreMetrics.h>
#include <sun/font/Decoration.h>
#include <sun/font/ExtendedTextLabel.h>
#include <sun/font/ExtendedTextSourceLabel.h>
#include <sun/font/StandardTextSource.h>
#include <sun/font/TextLabel.h>
#include <sun/font/TextSource.h>
#include <sun/font/TextSourceLabel.h>
#include <jcpp.h>

using $Font = ::java::awt::Font;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Bidi = ::java::text::Bidi;
using $CoreMetrics = ::sun::font::CoreMetrics;
using $Decoration = ::sun::font::Decoration;
using $ExtendedTextLabel = ::sun::font::ExtendedTextLabel;
using $ExtendedTextSourceLabel = ::sun::font::ExtendedTextSourceLabel;
using $StandardTextSource = ::sun::font::StandardTextSource;
using $TextLabel = ::sun::font::TextLabel;
using $TextSource = ::sun::font::TextSource;
using $TextSourceLabel = ::sun::font::TextSourceLabel;

namespace sun {
	namespace font {

$FieldInfo _TextLabelFactory_FieldInfo_[] = {
	{"frc", "Ljava/awt/font/FontRenderContext;", nullptr, $PRIVATE | $FINAL, $field(TextLabelFactory, frc)},
	{"text", "[C", nullptr, $PRIVATE | $FINAL, $field(TextLabelFactory, text)},
	{"bidi", "Ljava/text/Bidi;", nullptr, $PRIVATE | $FINAL, $field(TextLabelFactory, bidi)},
	{"lineBidi", "Ljava/text/Bidi;", nullptr, $PRIVATE, $field(TextLabelFactory, lineBidi)},
	{"flags", "I", nullptr, $PRIVATE | $FINAL, $field(TextLabelFactory, flags)},
	{"lineStart", "I", nullptr, $PRIVATE, $field(TextLabelFactory, lineStart)},
	{"lineLimit", "I", nullptr, $PRIVATE, $field(TextLabelFactory, lineLimit)},
	{}
};

$MethodInfo _TextLabelFactory_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/font/FontRenderContext;[CLjava/text/Bidi;I)V", nullptr, $PUBLIC, $method(static_cast<void(TextLabelFactory::*)($FontRenderContext*,$chars*,$Bidi*,int32_t)>(&TextLabelFactory::init$))},
	{"createExtended", "(Ljava/awt/Font;Lsun/font/CoreMetrics;Lsun/font/Decoration;II)Lsun/font/ExtendedTextLabel;", nullptr, $PUBLIC, $method(static_cast<$ExtendedTextLabel*(TextLabelFactory::*)($Font*,$CoreMetrics*,$Decoration*,int32_t,int32_t)>(&TextLabelFactory::createExtended))},
	{"createSimple", "(Ljava/awt/Font;Lsun/font/CoreMetrics;II)Lsun/font/TextLabel;", nullptr, $PUBLIC, $method(static_cast<$TextLabel*(TextLabelFactory::*)($Font*,$CoreMetrics*,int32_t,int32_t)>(&TextLabelFactory::createSimple))},
	{"getFontRenderContext", "()Ljava/awt/font/FontRenderContext;", nullptr, $PUBLIC, $method(static_cast<$FontRenderContext*(TextLabelFactory::*)()>(&TextLabelFactory::getFontRenderContext))},
	{"getLineBidi", "()Ljava/text/Bidi;", nullptr, $PUBLIC, $method(static_cast<$Bidi*(TextLabelFactory::*)()>(&TextLabelFactory::getLineBidi))},
	{"setLineContext", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(TextLabelFactory::*)(int32_t,int32_t)>(&TextLabelFactory::setLineContext))},
	{}
};

$ClassInfo _TextLabelFactory_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.font.TextLabelFactory",
	"java.lang.Object",
	nullptr,
	_TextLabelFactory_FieldInfo_,
	_TextLabelFactory_MethodInfo_
};

$Object* allocate$TextLabelFactory($Class* clazz) {
	return $of($alloc(TextLabelFactory));
}

void TextLabelFactory::init$($FontRenderContext* frc, $chars* text, $Bidi* bidi, int32_t flags) {
	$set(this, frc, frc);
	$set(this, text, $cast($chars, $nc(text)->clone()));
	$set(this, bidi, bidi);
	this->flags = flags;
	$set(this, lineBidi, bidi);
	this->lineStart = 0;
	this->lineLimit = text->length;
}

$FontRenderContext* TextLabelFactory::getFontRenderContext() {
	return this->frc;
}

$Bidi* TextLabelFactory::getLineBidi() {
	return this->lineBidi;
}

void TextLabelFactory::setLineContext(int32_t lineStart, int32_t lineLimit) {
	this->lineStart = lineStart;
	this->lineLimit = lineLimit;
	if (this->bidi != nullptr) {
		$set(this, lineBidi, $nc(this->bidi)->createLineBidi(lineStart, lineLimit));
	}
}

$ExtendedTextLabel* TextLabelFactory::createExtended($Font* font, $CoreMetrics* lm, $Decoration* decorator, int32_t start, int32_t limit) {
	if (start >= limit || start < this->lineStart || limit > this->lineLimit) {
		$throwNew($IllegalArgumentException, $$str({"bad start: "_s, $$str(start), " or limit: "_s, $$str(limit)}));
	}
	int32_t level = this->lineBidi == nullptr ? 0 : $nc(this->lineBidi)->getLevelAt(start - this->lineStart);
	int32_t linedir = (this->lineBidi == nullptr || $nc(this->lineBidi)->baseIsLeftToRight()) ? 0 : 1;
	int32_t layoutFlags = (int32_t)(this->flags & (uint32_t)~9);
	if (((int32_t)(level & (uint32_t)1)) != 0) {
		layoutFlags |= 1;
	}
	if (((int32_t)(linedir & (uint32_t)1)) != 0) {
		layoutFlags |= 8;
	}
	$var($TextSource, source, $new($StandardTextSource, this->text, start, limit - start, this->lineStart, this->lineLimit - this->lineStart, level, layoutFlags, font, this->frc, lm));
	return $new($ExtendedTextSourceLabel, source, decorator);
}

$TextLabel* TextLabelFactory::createSimple($Font* font, $CoreMetrics* lm, int32_t start, int32_t limit) {
	if (start >= limit || start < this->lineStart || limit > this->lineLimit) {
		$throwNew($IllegalArgumentException, $$str({"bad start: "_s, $$str(start), " or limit: "_s, $$str(limit)}));
	}
	int32_t level = this->lineBidi == nullptr ? 0 : $nc(this->lineBidi)->getLevelAt(start - this->lineStart);
	int32_t linedir = (this->lineBidi == nullptr || $nc(this->lineBidi)->baseIsLeftToRight()) ? 0 : 1;
	int32_t layoutFlags = (int32_t)(this->flags & (uint32_t)~9);
	if (((int32_t)(level & (uint32_t)1)) != 0) {
		layoutFlags |= 1;
	}
	if (((int32_t)(linedir & (uint32_t)1)) != 0) {
		layoutFlags |= 8;
	}
	$var($TextSource, source, $new($StandardTextSource, this->text, start, limit - start, this->lineStart, this->lineLimit - this->lineStart, level, layoutFlags, font, this->frc, lm));
	return $new($TextSourceLabel, source);
}

TextLabelFactory::TextLabelFactory() {
}

$Class* TextLabelFactory::load$($String* name, bool initialize) {
	$loadClass(TextLabelFactory, name, initialize, &_TextLabelFactory_ClassInfo_, allocate$TextLabelFactory);
	return class$;
}

$Class* TextLabelFactory::class$ = nullptr;

	} // font
} // sun