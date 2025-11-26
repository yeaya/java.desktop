#include <javax/swing/text/TextLayoutStrategy$AttributedSegment.h>

#include <java/awt/Font.h>
#include <java/awt/font/TextAttribute.h>
#include <java/lang/Math.h>
#include <java/text/AttributedCharacterIterator$Attribute.h>
#include <java/util/AbstractSet.h>
#include <java/util/HashSet.h>
#include <java/util/Hashtable.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/GlyphView.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/Segment.h>
#include <javax/swing/text/TextLayoutStrategy.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

#undef FONT
#undef NUMERIC_SHAPING
#undef RUN_DIRECTION

using $Font = ::java::awt::Font;
using $TextAttribute = ::java::awt::font::TextAttribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;
using $AttributedCharacterIterator$Attribute = ::java::text::AttributedCharacterIterator$Attribute;
using $AbstractSet = ::java::util::AbstractSet;
using $HashSet = ::java::util::HashSet;
using $Hashtable = ::java::util::Hashtable;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Document = ::javax::swing::text::Document;
using $GlyphView = ::javax::swing::text::GlyphView;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $Segment = ::javax::swing::text::Segment;
using $TextLayoutStrategy = ::javax::swing::text::TextLayoutStrategy;
using $View = ::javax::swing::text::View;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _TextLayoutStrategy$AttributedSegment_FieldInfo_[] = {
	{"v", "Ljavax/swing/text/View;", nullptr, 0, $field(TextLayoutStrategy$AttributedSegment, v)},
	{"keys", "Ljava/util/Set;", "Ljava/util/Set<Ljava/text/AttributedCharacterIterator$Attribute;>;", $STATIC, $staticField(TextLayoutStrategy$AttributedSegment, keys)},
	{"shaper", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(TextLayoutStrategy$AttributedSegment, shaper)},
	{}
};

$MethodInfo _TextLayoutStrategy$AttributedSegment_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*current", "()C", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*first", "()C", nullptr, $PUBLIC},
	{"*getBeginIndex", "()I", nullptr, $PUBLIC},
	{"*getEndIndex", "()I", nullptr, $PUBLIC},
	{"*getIndex", "()I", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TextLayoutStrategy$AttributedSegment::*)()>(&TextLayoutStrategy$AttributedSegment::init$))},
	{"getAllAttributeKeys", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/text/AttributedCharacterIterator$Attribute;>;", $PUBLIC},
	{"getAttribute", "(Ljava/text/AttributedCharacterIterator$Attribute;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getAttributes", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/text/AttributedCharacterIterator$Attribute;Ljava/lang/Object;>;", $PUBLIC},
	{"getFont", "(I)Ljava/awt/Font;", nullptr, 0},
	{"getFontBoundary", "(II)I", nullptr, 0},
	{"getRunLimit", "()I", nullptr, $PUBLIC},
	{"getRunLimit", "(Ljava/text/AttributedCharacterIterator$Attribute;)I", nullptr, $PUBLIC},
	{"getRunLimit", "(Ljava/util/Set;)I", "(Ljava/util/Set<+Ljava/text/AttributedCharacterIterator$Attribute;>;)I", $PUBLIC},
	{"getRunStart", "()I", nullptr, $PUBLIC},
	{"getRunStart", "(Ljava/text/AttributedCharacterIterator$Attribute;)I", nullptr, $PUBLIC},
	{"getRunStart", "(Ljava/util/Set;)I", "(Ljava/util/Set<+Ljava/text/AttributedCharacterIterator$Attribute;>;)I", $PUBLIC},
	{"getView", "()Ljavax/swing/text/View;", nullptr, 0},
	{"*last", "()C", nullptr, $PUBLIC},
	{"*next", "()C", nullptr, $PUBLIC},
	{"*previous", "()C", nullptr, $PUBLIC},
	{"*setIndex", "(I)C", nullptr, $PUBLIC},
	{"setShaper", "(Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(TextLayoutStrategy$AttributedSegment::*)(Object$*)>(&TextLayoutStrategy$AttributedSegment::setShaper))},
	{"setView", "(Ljavax/swing/text/View;)V", nullptr, 0},
	{"toIteratorIndex", "(I)I", nullptr, 0},
	{"toModelPosition", "(I)I", nullptr, 0},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TextLayoutStrategy$AttributedSegment_InnerClassesInfo_[] = {
	{"javax.swing.text.TextLayoutStrategy$AttributedSegment", "javax.swing.text.TextLayoutStrategy", "AttributedSegment", $STATIC},
	{}
};

$ClassInfo _TextLayoutStrategy$AttributedSegment_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.TextLayoutStrategy$AttributedSegment",
	"javax.swing.text.Segment",
	"java.text.AttributedCharacterIterator",
	_TextLayoutStrategy$AttributedSegment_FieldInfo_,
	_TextLayoutStrategy$AttributedSegment_MethodInfo_,
	nullptr,
	nullptr,
	_TextLayoutStrategy$AttributedSegment_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.TextLayoutStrategy"
};

$Object* allocate$TextLayoutStrategy$AttributedSegment($Class* clazz) {
	return $of($alloc(TextLayoutStrategy$AttributedSegment));
}

$String* TextLayoutStrategy$AttributedSegment::toString() {
	 return this->$Segment::toString();
}

char16_t TextLayoutStrategy$AttributedSegment::first() {
	 return this->$Segment::first();
}

char16_t TextLayoutStrategy$AttributedSegment::last() {
	 return this->$Segment::last();
}

char16_t TextLayoutStrategy$AttributedSegment::current() {
	 return this->$Segment::current();
}

char16_t TextLayoutStrategy$AttributedSegment::next() {
	 return this->$Segment::next();
}

char16_t TextLayoutStrategy$AttributedSegment::previous() {
	 return this->$Segment::previous();
}

char16_t TextLayoutStrategy$AttributedSegment::setIndex(int32_t position) {
	 return this->$Segment::setIndex(position);
}

int32_t TextLayoutStrategy$AttributedSegment::getBeginIndex() {
	 return this->$Segment::getBeginIndex();
}

int32_t TextLayoutStrategy$AttributedSegment::getEndIndex() {
	 return this->$Segment::getEndIndex();
}

int32_t TextLayoutStrategy$AttributedSegment::getIndex() {
	 return this->$Segment::getIndex();
}

$Object* TextLayoutStrategy$AttributedSegment::clone() {
	 return this->$Segment::clone();
}

int32_t TextLayoutStrategy$AttributedSegment::hashCode() {
	 return this->$Segment::hashCode();
}

bool TextLayoutStrategy$AttributedSegment::equals(Object$* arg0) {
	 return this->$Segment::equals(arg0);
}

void TextLayoutStrategy$AttributedSegment::finalize() {
	this->$Segment::finalize();
}

$Set* TextLayoutStrategy$AttributedSegment::keys = nullptr;

void TextLayoutStrategy$AttributedSegment::init$() {
	$Segment::init$();
	$set(this, shaper, nullptr);
}

$View* TextLayoutStrategy$AttributedSegment::getView() {
	return this->v;
}

void TextLayoutStrategy$AttributedSegment::setView($View* v) {
	$set(this, v, v);
	$var($Document, doc, $nc(v)->getDocument());
	int32_t p0 = v->getStartOffset();
	int32_t p1 = v->getEndOffset();
	try {
		$nc(doc)->getText(p0, p1 - p0, this);
	} catch ($BadLocationException& bl) {
		$throwNew($IllegalArgumentException, "Invalid view"_s);
	}
	first();
}

int32_t TextLayoutStrategy$AttributedSegment::getFontBoundary(int32_t childIndex, int32_t dir) {
	$useLocalCurrentObjectStackCache();
	$var($View, child, $nc(this->v)->getView(childIndex));
	$var($Font, f, getFont(childIndex));
	for (childIndex += dir; (childIndex >= 0) && (childIndex < $nc(this->v)->getViewCount()); childIndex += dir) {
		$var($Font, next, getFont(childIndex));
		if (next != f) {
			break;
		}
		$assign(child, $nc(this->v)->getView(childIndex));
	}
	return (dir < 0) ? $nc(child)->getStartOffset() : child->getEndOffset();
}

$Font* TextLayoutStrategy$AttributedSegment::getFont(int32_t childIndex) {
	$var($View, child, $nc(this->v)->getView(childIndex));
	if ($instanceOf($GlyphView, child)) {
		return $nc(($cast($GlyphView, child)))->getFont();
	}
	return nullptr;
}

int32_t TextLayoutStrategy$AttributedSegment::toModelPosition(int32_t index) {
	int32_t var$0 = $nc(this->v)->getStartOffset();
	return var$0 + (index - getBeginIndex());
}

int32_t TextLayoutStrategy$AttributedSegment::toIteratorIndex(int32_t pos) {
	int32_t var$0 = pos - $nc(this->v)->getStartOffset();
	return var$0 + getBeginIndex();
}

void TextLayoutStrategy$AttributedSegment::setShaper(Object$* shaper) {
	$set(this, shaper, shaper);
}

int32_t TextLayoutStrategy$AttributedSegment::getRunStart() {
	int32_t pos = toModelPosition(getIndex());
	$init($Position$Bias);
	int32_t i = $nc(this->v)->getViewIndex(pos, $Position$Bias::Forward);
	$var($View, child, $nc(this->v)->getView(i));
	return toIteratorIndex($nc(child)->getStartOffset());
}

int32_t TextLayoutStrategy$AttributedSegment::getRunStart($AttributedCharacterIterator$Attribute* attribute) {
	if ($instanceOf($TextAttribute, attribute)) {
		int32_t pos = toModelPosition(getIndex());
		$init($Position$Bias);
		int32_t i = $nc(this->v)->getViewIndex(pos, $Position$Bias::Forward);
		$init($TextAttribute);
		if ($equals(attribute, $TextAttribute::FONT)) {
			return toIteratorIndex(getFontBoundary(i, -1));
		}
	}
	return getBeginIndex();
}

int32_t TextLayoutStrategy$AttributedSegment::getRunStart($Set* attributes) {
	$useLocalCurrentObjectStackCache();
	int32_t index = getBeginIndex();
	$var($ObjectArray, a, $nc(attributes)->toArray());
	for (int32_t i = 0; i < $nc(a)->length; ++i) {
		$var($TextAttribute, attr, $cast($TextAttribute, a->get(i)));
		index = $Math::max(getRunStart(static_cast<$AttributedCharacterIterator$Attribute*>(attr)), index);
	}
	return $Math::min(getIndex(), index);
}

int32_t TextLayoutStrategy$AttributedSegment::getRunLimit() {
	int32_t pos = toModelPosition(getIndex());
	$init($Position$Bias);
	int32_t i = $nc(this->v)->getViewIndex(pos, $Position$Bias::Forward);
	$var($View, child, $nc(this->v)->getView(i));
	return toIteratorIndex($nc(child)->getEndOffset());
}

int32_t TextLayoutStrategy$AttributedSegment::getRunLimit($AttributedCharacterIterator$Attribute* attribute) {
	if ($instanceOf($TextAttribute, attribute)) {
		int32_t pos = toModelPosition(getIndex());
		$init($Position$Bias);
		int32_t i = $nc(this->v)->getViewIndex(pos, $Position$Bias::Forward);
		$init($TextAttribute);
		if ($equals(attribute, $TextAttribute::FONT)) {
			return toIteratorIndex(getFontBoundary(i, 1));
		}
	}
	return getEndIndex();
}

int32_t TextLayoutStrategy$AttributedSegment::getRunLimit($Set* attributes) {
	$useLocalCurrentObjectStackCache();
	int32_t index = getEndIndex();
	$var($ObjectArray, a, $nc(attributes)->toArray());
	for (int32_t i = 0; i < $nc(a)->length; ++i) {
		$var($TextAttribute, attr, $cast($TextAttribute, a->get(i)));
		index = $Math::min(getRunLimit(static_cast<$AttributedCharacterIterator$Attribute*>(attr)), index);
	}
	return $Math::max(getIndex(), index);
}

$Map* TextLayoutStrategy$AttributedSegment::getAttributes() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, ka, $nc(TextLayoutStrategy$AttributedSegment::keys)->toArray());
	$var($Hashtable, h, $new($Hashtable));
	for (int32_t i = 0; i < $nc(ka)->length; ++i) {
		$var($TextAttribute, a, $cast($TextAttribute, ka->get(i)));
		$var($Object, value, getAttribute(a));
		if (value != nullptr) {
			h->put(a, value);
		}
	}
	return h;
}

$Object* TextLayoutStrategy$AttributedSegment::getAttribute($AttributedCharacterIterator$Attribute* attribute) {
	int32_t pos = toModelPosition(getIndex());
	$init($Position$Bias);
	int32_t childIndex = $nc(this->v)->getViewIndex(pos, $Position$Bias::Forward);
	$init($TextAttribute);
	if ($equals(attribute, $TextAttribute::FONT)) {
		return $of(getFont(childIndex));
	} else {
		if ($equals(attribute, $TextAttribute::RUN_DIRECTION)) {
			return $of($nc($($nc(this->v)->getDocument()))->getProperty($TextAttribute::RUN_DIRECTION));
		} else {
			if ($equals(attribute, $TextAttribute::NUMERIC_SHAPING)) {
				return $of(this->shaper);
			}
		}
	}
	return $of(nullptr);
}

$Set* TextLayoutStrategy$AttributedSegment::getAllAttributeKeys() {
	return TextLayoutStrategy$AttributedSegment::keys;
}

void clinit$TextLayoutStrategy$AttributedSegment($Class* class$) {
	{
		$assignStatic(TextLayoutStrategy$AttributedSegment::keys, $new($HashSet));
		$init($TextAttribute);
		$nc(TextLayoutStrategy$AttributedSegment::keys)->add($TextAttribute::FONT);
		$nc(TextLayoutStrategy$AttributedSegment::keys)->add($TextAttribute::RUN_DIRECTION);
		$nc(TextLayoutStrategy$AttributedSegment::keys)->add($TextAttribute::NUMERIC_SHAPING);
	}
}

TextLayoutStrategy$AttributedSegment::TextLayoutStrategy$AttributedSegment() {
}

$Class* TextLayoutStrategy$AttributedSegment::load$($String* name, bool initialize) {
	$loadClass(TextLayoutStrategy$AttributedSegment, name, initialize, &_TextLayoutStrategy$AttributedSegment_ClassInfo_, clinit$TextLayoutStrategy$AttributedSegment, allocate$TextLayoutStrategy$AttributedSegment);
	return class$;
}

$Class* TextLayoutStrategy$AttributedSegment::class$ = nullptr;

		} // text
	} // swing
} // javax