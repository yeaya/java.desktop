#include <sun/font/StandardTextSource.h>

#include <java/awt/Font.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/font/LineMetrics.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/font/CoreMetrics.h>
#include <sun/font/FontLineMetrics.h>
#include <sun/font/TextLineComponent.h>
#include <sun/font/TextSource.h>
#include <jcpp.h>

#undef LEFT_TO_RIGHT
#undef RIGHT_TO_LEFT
#undef UNCHANGED
#undef WITH_CONTEXT

using $Font = ::java::awt::Font;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $LineMetrics = ::java::awt::font::LineMetrics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $CoreMetrics = ::sun::font::CoreMetrics;
using $FontLineMetrics = ::sun::font::FontLineMetrics;
using $TextLineComponent = ::sun::font::TextLineComponent;
using $TextSource = ::sun::font::TextSource;

namespace sun {
	namespace font {

$FieldInfo _StandardTextSource_FieldInfo_[] = {
	{"chars", "[C", nullptr, $PRIVATE | $FINAL, $field(StandardTextSource, chars)},
	{"start", "I", nullptr, $PRIVATE | $FINAL, $field(StandardTextSource, start)},
	{"len", "I", nullptr, $PRIVATE | $FINAL, $field(StandardTextSource, len)},
	{"cstart", "I", nullptr, $PRIVATE | $FINAL, $field(StandardTextSource, cstart)},
	{"clen", "I", nullptr, $PRIVATE | $FINAL, $field(StandardTextSource, clen)},
	{"level", "I", nullptr, $PRIVATE | $FINAL, $field(StandardTextSource, level)},
	{"flags", "I", nullptr, $PRIVATE | $FINAL, $field(StandardTextSource, flags)},
	{"font", "Ljava/awt/Font;", nullptr, $PRIVATE | $FINAL, $field(StandardTextSource, font)},
	{"frc", "Ljava/awt/font/FontRenderContext;", nullptr, $PRIVATE | $FINAL, $field(StandardTextSource, frc)},
	{"cm", "Lsun/font/CoreMetrics;", nullptr, $PRIVATE | $FINAL, $field(StandardTextSource, cm)},
	{}
};

$MethodInfo _StandardTextSource_MethodInfo_[] = {
	{"<init>", "([CIIIIIILjava/awt/Font;Ljava/awt/font/FontRenderContext;Lsun/font/CoreMetrics;)V", nullptr, 0, $method(static_cast<void(StandardTextSource::*)($chars*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,$Font*,$FontRenderContext*,$CoreMetrics*)>(&StandardTextSource::init$))},
	{"getBidiLevel", "()I", nullptr, $PUBLIC},
	{"getChars", "()[C", nullptr, $PUBLIC},
	{"getContextLength", "()I", nullptr, $PUBLIC},
	{"getContextStart", "()I", nullptr, $PUBLIC},
	{"getCoreMetrics", "()Lsun/font/CoreMetrics;", nullptr, $PUBLIC},
	{"getFRC", "()Ljava/awt/font/FontRenderContext;", nullptr, $PUBLIC},
	{"getFont", "()Ljava/awt/Font;", nullptr, $PUBLIC},
	{"getLayoutFlags", "()I", nullptr, $PUBLIC},
	{"getLength", "()I", nullptr, $PUBLIC},
	{"getStart", "()I", nullptr, $PUBLIC},
	{"getSubSource", "(III)Lsun/font/TextSource;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "(Z)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _StandardTextSource_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.font.StandardTextSource",
	"sun.font.TextSource",
	nullptr,
	_StandardTextSource_FieldInfo_,
	_StandardTextSource_MethodInfo_
};

$Object* allocate$StandardTextSource($Class* clazz) {
	return $of($alloc(StandardTextSource));
}

void StandardTextSource::init$($chars* chars, int32_t start, int32_t len, int32_t cstart, int32_t clen, int32_t level, int32_t flags, $Font* font, $FontRenderContext* frc, $CoreMetrics* cm) {
	$useLocalCurrentObjectStackCache();
	$TextSource::init$();
	if (chars == nullptr) {
		$throwNew($IllegalArgumentException, "bad chars: null"_s);
	}
	if (cstart < 0) {
		$throwNew($IllegalArgumentException, $$str({"bad cstart: "_s, $$str(cstart)}));
	}
	if (start < cstart) {
		$throwNew($IllegalArgumentException, $$str({"bad start: "_s, $$str(start), " for cstart: "_s, $$str(cstart)}));
	}
	if (clen < 0) {
		$throwNew($IllegalArgumentException, $$str({"bad clen: "_s, $$str(clen)}));
	}
	if (cstart + clen > $nc(chars)->length) {
		$throwNew($IllegalArgumentException, $$str({"bad clen: "_s, $$str(clen), " cstart: "_s, $$str(cstart), " for array len: "_s, $$str(chars->length)}));
	}
	if (len < 0) {
		$throwNew($IllegalArgumentException, $$str({"bad len: "_s, $$str(len)}));
	}
	if ((start + len) > (cstart + clen)) {
		$throwNew($IllegalArgumentException, $$str({"bad len: "_s, $$str(len), " start: "_s, $$str(start), " for cstart: "_s, $$str(cstart), " clen: "_s, $$str(clen)}));
	}
	if (font == nullptr) {
		$throwNew($IllegalArgumentException, "bad font: null"_s);
	}
	if (frc == nullptr) {
		$throwNew($IllegalArgumentException, "bad frc: null"_s);
	}
	$set(this, chars, chars);
	this->start = start;
	this->len = len;
	this->cstart = cstart;
	this->clen = clen;
	this->level = level;
	this->flags = flags;
	$set(this, font, font);
	$set(this, frc, frc);
	if (cm != nullptr) {
		$set(this, cm, cm);
	} else {
		$var($LineMetrics, metrics, $nc(font)->getLineMetrics(chars, cstart, clen, frc));
		$set(this, cm, $nc(($cast($FontLineMetrics, metrics)))->cm);
	}
}

$chars* StandardTextSource::getChars() {
	return this->chars;
}

int32_t StandardTextSource::getStart() {
	return this->start;
}

int32_t StandardTextSource::getLength() {
	return this->len;
}

int32_t StandardTextSource::getContextStart() {
	return this->cstart;
}

int32_t StandardTextSource::getContextLength() {
	return this->clen;
}

int32_t StandardTextSource::getLayoutFlags() {
	return this->flags;
}

int32_t StandardTextSource::getBidiLevel() {
	return this->level;
}

$Font* StandardTextSource::getFont() {
	return this->font;
}

$FontRenderContext* StandardTextSource::getFRC() {
	return this->frc;
}

$CoreMetrics* StandardTextSource::getCoreMetrics() {
	return this->cm;
}

$TextSource* StandardTextSource::getSubSource(int32_t start, int32_t length, int32_t dir) {
	$useLocalCurrentObjectStackCache();
	if (start < 0 || length < 0 || (start + length) > this->len) {
		$throwNew($IllegalArgumentException, $$str({"bad start ("_s, $$str(start), ") or length ("_s, $$str(length), ")"_s}));
	}
	int32_t level = this->level;
	if (dir != $TextLineComponent::UNCHANGED) {
		bool ltr = ((int32_t)(this->flags & (uint32_t)8)) == 0;
		if (!(dir == $TextLineComponent::LEFT_TO_RIGHT && ltr) && !(dir == $TextLineComponent::RIGHT_TO_LEFT && !ltr)) {
			$throwNew($IllegalArgumentException, "direction flag is invalid"_s);
		}
		level = ltr ? 0 : 1;
	}
	return $new(StandardTextSource, this->chars, this->start + start, length, this->cstart, this->clen, level, this->flags, this->font, this->frc, this->cm);
}

$String* StandardTextSource::toString() {
	return toString($TextSource::WITH_CONTEXT);
}

$String* StandardTextSource::toString(bool withContext) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder, $($TextSource::toString())));
	sb->append("[start:"_s);
	sb->append(this->start);
	sb->append(", len:"_s);
	sb->append(this->len);
	sb->append(", cstart:"_s);
	sb->append(this->cstart);
	sb->append(", clen:"_s);
	sb->append(this->clen);
	sb->append(", chars:\""_s);
	int32_t chStart = 0;
	int32_t chLimit = 0;
	if (withContext == $TextSource::WITH_CONTEXT) {
		chStart = this->cstart;
		chLimit = this->cstart + this->clen;
	} else {
		chStart = this->start;
		chLimit = this->start + this->len;
	}
	for (int32_t i = chStart; i < chLimit; ++i) {
		if (i > chStart) {
			sb->append(" "_s);
		}
		sb->append($($Integer::toHexString($nc(this->chars)->get(i))));
	}
	sb->append("\""_s);
	sb->append(", level:"_s);
	sb->append(this->level);
	sb->append(", flags:"_s);
	sb->append(this->flags);
	sb->append(", font:"_s);
	sb->append($of(this->font));
	sb->append(", frc:"_s);
	sb->append($of(this->frc));
	sb->append(", cm:"_s);
	sb->append($of(this->cm));
	sb->append("]"_s);
	return sb->toString();
}

StandardTextSource::StandardTextSource() {
}

$Class* StandardTextSource::load$($String* name, bool initialize) {
	$loadClass(StandardTextSource, name, initialize, &_StandardTextSource_ClassInfo_, allocate$StandardTextSource);
	return class$;
}

$Class* StandardTextSource::class$ = nullptr;

	} // font
} // sun