#include <javax/swing/text/StyleContext.h>

#include <java/awt/Color.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Toolkit.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/NotSerializableException.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/ref/WeakReference.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collections.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/WeakHashMap.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/Style.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyleContext$FontKey.h>
#include <javax/swing/text/StyleContext$NamedStyle.h>
#include <javax/swing/text/StyleContext$SmallAttributeSet.h>
#include <sun/font/FontUtilities.h>
#include <jcpp.h>

#undef BOLD
#undef DEFAULT_STYLE
#undef EMPTY
#undef FONT_ATTRIBUTE_KEY
#undef ITALIC
#undef PLAIN
#undef THRESHOLD

using $ChangeListenerArray = $Array<::javax::swing::event::ChangeListener>;
using $Color = ::java::awt::Color;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Toolkit = ::java::awt::Toolkit;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $NotSerializableException = ::java::io::NotSerializableException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;
using $AbstractMap = ::java::util::AbstractMap;
using $Collections = ::java::util::Collections;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $WeakHashMap = ::java::util::WeakHashMap;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $Style = ::javax::swing::text::Style;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyleContext$FontKey = ::javax::swing::text::StyleContext$FontKey;
using $StyleContext$NamedStyle = ::javax::swing::text::StyleContext$NamedStyle;
using $StyleContext$SmallAttributeSet = ::javax::swing::text::StyleContext$SmallAttributeSet;
using $FontUtilities = ::sun::font::FontUtilities;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _StyleContext_FieldInfo_[] = {
	{"defaultContext", "Ljavax/swing/text/StyleContext;", nullptr, $PRIVATE | $STATIC, $staticField(StyleContext, defaultContext)},
	{"DEFAULT_STYLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StyleContext, DEFAULT_STYLE)},
	{"freezeKeyMap", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/Object;Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticField(StyleContext, freezeKeyMap)},
	{"thawKeyMap", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE | $STATIC, $staticField(StyleContext, thawKeyMap)},
	{"styles", "Ljavax/swing/text/Style;", nullptr, $PRIVATE, $field(StyleContext, styles)},
	{"fontSearch", "Ljavax/swing/text/StyleContext$FontKey;", nullptr, $PRIVATE | $TRANSIENT, $field(StyleContext, fontSearch)},
	{"fontTable", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljavax/swing/text/StyleContext$FontKey;Ljava/awt/Font;>;", $PRIVATE | $TRANSIENT, $field(StyleContext, fontTable)},
	{"attributesPool", "Ljava/util/Map;", "Ljava/util/Map<Ljavax/swing/text/StyleContext$SmallAttributeSet;Ljava/lang/ref/WeakReference<Ljavax/swing/text/StyleContext$SmallAttributeSet;>;>;", $PRIVATE | $TRANSIENT, $field(StyleContext, attributesPool)},
	{"search", "Ljavax/swing/text/MutableAttributeSet;", nullptr, $PRIVATE | $TRANSIENT, $field(StyleContext, search)},
	{"unusedSets", "I", nullptr, $PRIVATE, $field(StyleContext, unusedSets)},
	{"THRESHOLD", "I", nullptr, $STATIC | $FINAL, $constField(StyleContext, THRESHOLD)},
	{}
};

$MethodInfo _StyleContext_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StyleContext::*)()>(&StyleContext::init$))},
	{"addAttribute", "(Ljavax/swing/text/AttributeSet;Ljava/lang/Object;Ljava/lang/Object;)Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"addAttributes", "(Ljavax/swing/text/AttributeSet;Ljavax/swing/text/AttributeSet;)Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"addChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC},
	{"addStyle", "(Ljava/lang/String;Ljavax/swing/text/Style;)Ljavax/swing/text/Style;", nullptr, $PUBLIC},
	{"createLargeAttributeSet", "(Ljavax/swing/text/AttributeSet;)Ljavax/swing/text/MutableAttributeSet;", nullptr, $PROTECTED},
	{"createSmallAttributeSet", "(Ljavax/swing/text/AttributeSet;)Ljavax/swing/text/StyleContext$SmallAttributeSet;", nullptr, $PROTECTED},
	{"getBackground", "(Ljavax/swing/text/AttributeSet;)Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getChangeListeners", "()[Ljavax/swing/event/ChangeListener;", nullptr, $PUBLIC},
	{"getCompressionThreshold", "()I", nullptr, $PROTECTED},
	{"getDefaultStyleContext", "()Ljavax/swing/text/StyleContext;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<StyleContext*(*)()>(&StyleContext::getDefaultStyleContext))},
	{"getEmptySet", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"getFont", "(Ljavax/swing/text/AttributeSet;)Ljava/awt/Font;", nullptr, $PUBLIC},
	{"getFont", "(Ljava/lang/String;II)Ljava/awt/Font;", nullptr, $PUBLIC},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"getForeground", "(Ljavax/swing/text/AttributeSet;)Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getImmutableUniqueSet", "()Ljavax/swing/text/AttributeSet;", nullptr, 0},
	{"getMutableAttributeSet", "(Ljavax/swing/text/AttributeSet;)Ljavax/swing/text/MutableAttributeSet;", nullptr, 0},
	{"getStaticAttribute", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Object*(*)(Object$*)>(&StyleContext::getStaticAttribute))},
	{"getStaticAttributeKey", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Object*(*)(Object$*)>(&StyleContext::getStaticAttributeKey))},
	{"getStyle", "(Ljava/lang/String;)Ljavax/swing/text/Style;", nullptr, $PUBLIC},
	{"getStyleNames", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<*>;", $PUBLIC},
	{"readAttributeSet", "(Ljava/io/ObjectInputStream;Ljavax/swing/text/MutableAttributeSet;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($ObjectInputStream*,$MutableAttributeSet*)>(&StyleContext::readAttributeSet)), "java.lang.ClassNotFoundException,java.io.IOException"},
	{"readAttributes", "(Ljava/io/ObjectInputStream;Ljavax/swing/text/MutableAttributeSet;)V", nullptr, $PUBLIC, nullptr, "java.lang.ClassNotFoundException,java.io.IOException"},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(StyleContext::*)($ObjectInputStream*)>(&StyleContext::readObject)), "java.lang.ClassNotFoundException,java.io.IOException"},
	{"reclaim", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC},
	{"registerStaticAttributeKey", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(Object$*)>(&StyleContext::registerStaticAttributeKey))},
	{"removeAttribute", "(Ljavax/swing/text/AttributeSet;Ljava/lang/Object;)Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"removeAttributes", "(Ljavax/swing/text/AttributeSet;Ljava/util/Enumeration;)Ljavax/swing/text/AttributeSet;", "(Ljavax/swing/text/AttributeSet;Ljava/util/Enumeration<*>;)Ljavax/swing/text/AttributeSet;", $PUBLIC | $SYNCHRONIZED},
	{"removeAttributes", "(Ljavax/swing/text/AttributeSet;Ljavax/swing/text/AttributeSet;)Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"removeChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC},
	{"removeStyle", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"removeUnusedSets", "()V", nullptr, $SYNCHRONIZED},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeAttributeSet", "(Ljava/io/ObjectOutputStream;Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($ObjectOutputStream*,$AttributeSet*)>(&StyleContext::writeAttributeSet)), "java.io.IOException"},
	{"writeAttributes", "(Ljava/io/ObjectOutputStream;Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(StyleContext::*)($ObjectOutputStream*)>(&StyleContext::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _StyleContext_InnerClassesInfo_[] = {
	{"javax.swing.text.AbstractDocument$AttributeContext", "javax.swing.text.AbstractDocument", "AttributeContext", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"javax.swing.text.StyleContext$NamedStyle", "javax.swing.text.StyleContext", "NamedStyle", $PUBLIC},
	{"javax.swing.text.StyleContext$FontKey", "javax.swing.text.StyleContext", "FontKey", $STATIC},
	{"javax.swing.text.StyleContext$KeyBuilder", "javax.swing.text.StyleContext", "KeyBuilder", 0},
	{"javax.swing.text.StyleContext$KeyEnumeration", "javax.swing.text.StyleContext", "KeyEnumeration", 0},
	{"javax.swing.text.StyleContext$SmallAttributeSet", "javax.swing.text.StyleContext", "SmallAttributeSet", $PUBLIC},
	{}
};

$ClassInfo _StyleContext_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.StyleContext",
	"java.lang.Object",
	"java.io.Serializable,javax.swing.text.AbstractDocument$AttributeContext",
	_StyleContext_FieldInfo_,
	_StyleContext_MethodInfo_,
	nullptr,
	nullptr,
	_StyleContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.StyleContext$NamedStyle,javax.swing.text.StyleContext$FontKey,javax.swing.text.StyleContext$KeyBuilder,javax.swing.text.StyleContext$KeyEnumeration,javax.swing.text.StyleContext$SmallAttributeSet"
};

$Object* allocate$StyleContext($Class* clazz) {
	return $of($alloc(StyleContext));
}

int32_t StyleContext::hashCode() {
	 return this->$Serializable::hashCode();
}

bool StyleContext::equals(Object$* arg0) {
	 return this->$Serializable::equals(arg0);
}

$Object* StyleContext::clone() {
	 return this->$Serializable::clone();
}

void StyleContext::finalize() {
	this->$Serializable::finalize();
}

StyleContext* StyleContext::defaultContext = nullptr;
$String* StyleContext::DEFAULT_STYLE = nullptr;
$Hashtable* StyleContext::freezeKeyMap = nullptr;
$Hashtable* StyleContext::thawKeyMap = nullptr;

StyleContext* StyleContext::getDefaultStyleContext() {
	$init(StyleContext);
	if (StyleContext::defaultContext == nullptr) {
		$assignStatic(StyleContext::defaultContext, $new(StyleContext));
	}
	return StyleContext::defaultContext;
}

void StyleContext::init$() {
	$set(this, fontSearch, $new($StyleContext$FontKey, nullptr, 0, 0));
	$set(this, fontTable, $new($Hashtable));
	$set(this, attributesPool, $Collections::synchronizedMap($$new($WeakHashMap)));
	$set(this, search, $new($SimpleAttributeSet));
	$set(this, styles, $new($StyleContext$NamedStyle, this, nullptr));
	addStyle(StyleContext::DEFAULT_STYLE, nullptr);
}

$Style* StyleContext::addStyle($String* nm, $Style* parent) {
	$var($Style, style, $new($StyleContext$NamedStyle, this, nm, parent));
	if (nm != nullptr) {
		$nc(this->styles)->addAttribute(nm, style);
	}
	return style;
}

void StyleContext::removeStyle($String* nm) {
	$nc(this->styles)->removeAttribute(nm);
}

$Style* StyleContext::getStyle($String* nm) {
	return $cast($Style, $nc(this->styles)->getAttribute(nm));
}

$Enumeration* StyleContext::getStyleNames() {
	return $nc(this->styles)->getAttributeNames();
}

void StyleContext::addChangeListener($ChangeListener* l) {
	$nc(this->styles)->addChangeListener(l);
}

void StyleContext::removeChangeListener($ChangeListener* l) {
	$nc(this->styles)->removeChangeListener(l);
}

$ChangeListenerArray* StyleContext::getChangeListeners() {
	return $nc(($cast($StyleContext$NamedStyle, this->styles)))->getChangeListeners();
}

$Font* StyleContext::getFont($AttributeSet* attr) {
	int32_t style = $Font::PLAIN;
	if ($StyleConstants::isBold(attr)) {
		style |= $Font::BOLD;
	}
	if ($StyleConstants::isItalic(attr)) {
		style |= $Font::ITALIC;
	}
	$var($String, family, $StyleConstants::getFontFamily(attr));
	int32_t size = $StyleConstants::getFontSize(attr);
	bool var$0 = $StyleConstants::isSuperscript(attr);
	if (var$0 || $StyleConstants::isSubscript(attr)) {
		size -= 2;
	}
	return getFont(family, style, size);
}

$Color* StyleContext::getForeground($AttributeSet* attr) {
	return $StyleConstants::getForeground(attr);
}

$Color* StyleContext::getBackground($AttributeSet* attr) {
	return $StyleConstants::getBackground(attr);
}

$Font* StyleContext::getFont($String* family, int32_t style, int32_t size) {
	$useLocalCurrentObjectStackCache();
	$nc(this->fontSearch)->setValue(family, style, size);
	$var($Font, f, $cast($Font, $nc(this->fontTable)->get(this->fontSearch)));
	if (f == nullptr) {
		$var($Style, defaultStyle, getStyle(StyleContext::DEFAULT_STYLE));
		if (defaultStyle != nullptr) {
			$var($String, FONT_ATTRIBUTE_KEY, "FONT_ATTRIBUTE_KEY"_s);
			$var($Font, defaultFont, $cast($Font, defaultStyle->getAttribute(FONT_ATTRIBUTE_KEY)));
			if (defaultFont != nullptr && $nc($(defaultFont->getFamily()))->equalsIgnoreCase(family)) {
				$assign(f, defaultFont->deriveFont(style, (float)size));
			}
		}
		if (f == nullptr) {
			$assign(f, $new($Font, family, style, size));
		}
		if (!$FontUtilities::fontSupportsDefaultEncoding(f)) {
			$assign(f, $FontUtilities::getCompositeFontUIResource(f));
		}
		$var($StyleContext$FontKey, key, $new($StyleContext$FontKey, family, style, size));
		$nc(this->fontTable)->put(key, f);
	}
	return f;
}

$FontMetrics* StyleContext::getFontMetrics($Font* f) {
	return $nc($($Toolkit::getDefaultToolkit()))->getFontMetrics(f);
}

$AttributeSet* StyleContext::addAttribute($AttributeSet* old, Object$* name, Object$* value) {
	$synchronized(this) {
		int32_t var$0 = ($nc(old)->getAttributeCount() + 1);
		if (var$0 <= getCompressionThreshold()) {
			$nc(this->search)->removeAttributes(static_cast<$AttributeSet*>(this->search));
			$nc(this->search)->addAttributes(old);
			$nc(this->search)->addAttribute(name, value);
			reclaim(old);
			return getImmutableUniqueSet();
		}
		$var($MutableAttributeSet, ma, getMutableAttributeSet(old));
		$nc(ma)->addAttribute(name, value);
		return ma;
	}
}

$AttributeSet* StyleContext::addAttributes($AttributeSet* old, $AttributeSet* attr) {
	$synchronized(this) {
		int32_t var$1 = $nc(old)->getAttributeCount();
		int32_t var$0 = (var$1 + $nc(attr)->getAttributeCount());
		if (var$0 <= getCompressionThreshold()) {
			$nc(this->search)->removeAttributes(static_cast<$AttributeSet*>(this->search));
			$nc(this->search)->addAttributes(old);
			$nc(this->search)->addAttributes(attr);
			reclaim(old);
			return getImmutableUniqueSet();
		}
		$var($MutableAttributeSet, ma, getMutableAttributeSet(old));
		$nc(ma)->addAttributes(attr);
		return ma;
	}
}

$AttributeSet* StyleContext::removeAttribute($AttributeSet* old, Object$* name) {
	$synchronized(this) {
		int32_t var$0 = ($nc(old)->getAttributeCount() - 1);
		if (var$0 <= getCompressionThreshold()) {
			$nc(this->search)->removeAttributes(static_cast<$AttributeSet*>(this->search));
			$nc(this->search)->addAttributes(old);
			$nc(this->search)->removeAttribute(name);
			reclaim(old);
			return getImmutableUniqueSet();
		}
		$var($MutableAttributeSet, ma, getMutableAttributeSet(old));
		$nc(ma)->removeAttribute(name);
		return ma;
	}
}

$AttributeSet* StyleContext::removeAttributes($AttributeSet* old, $Enumeration* names) {
	$synchronized(this) {
		int32_t var$0 = $nc(old)->getAttributeCount();
		if (var$0 <= getCompressionThreshold()) {
			$nc(this->search)->removeAttributes(static_cast<$AttributeSet*>(this->search));
			$nc(this->search)->addAttributes(old);
			$nc(this->search)->removeAttributes(names);
			reclaim(old);
			return getImmutableUniqueSet();
		}
		$var($MutableAttributeSet, ma, getMutableAttributeSet(old));
		$nc(ma)->removeAttributes(names);
		return ma;
	}
}

$AttributeSet* StyleContext::removeAttributes($AttributeSet* old, $AttributeSet* attrs) {
	$synchronized(this) {
		int32_t var$0 = $nc(old)->getAttributeCount();
		if (var$0 <= getCompressionThreshold()) {
			$nc(this->search)->removeAttributes(static_cast<$AttributeSet*>(this->search));
			$nc(this->search)->addAttributes(old);
			$nc(this->search)->removeAttributes(attrs);
			reclaim(old);
			return getImmutableUniqueSet();
		}
		$var($MutableAttributeSet, ma, getMutableAttributeSet(old));
		$nc(ma)->removeAttributes(attrs);
		return ma;
	}
}

$AttributeSet* StyleContext::getEmptySet() {
	$init($SimpleAttributeSet);
	return $SimpleAttributeSet::EMPTY;
}

void StyleContext::reclaim($AttributeSet* a) {
	if ($SwingUtilities::isEventDispatchThread()) {
		$nc(this->attributesPool)->size();
	}
}

int32_t StyleContext::getCompressionThreshold() {
	return StyleContext::THRESHOLD;
}

$StyleContext$SmallAttributeSet* StyleContext::createSmallAttributeSet($AttributeSet* a) {
	return $new($StyleContext$SmallAttributeSet, this, a);
}

$MutableAttributeSet* StyleContext::createLargeAttributeSet($AttributeSet* a) {
	return $new($SimpleAttributeSet, a);
}

void StyleContext::removeUnusedSets() {
	$synchronized(this) {
		$nc(this->attributesPool)->size();
	}
}

$AttributeSet* StyleContext::getImmutableUniqueSet() {
	$useLocalCurrentObjectStackCache();
	$var($StyleContext$SmallAttributeSet, key, createSmallAttributeSet(this->search));
	$var($WeakReference, reference, $cast($WeakReference, $nc(this->attributesPool)->get(key)));
	$var($StyleContext$SmallAttributeSet, a, nullptr);
	if (reference == nullptr || ($assign(a, $cast($StyleContext$SmallAttributeSet, $nc(reference)->get()))) == nullptr) {
		$assign(a, key);
		$nc(this->attributesPool)->put(a, $$new($WeakReference, a));
	}
	return a;
}

$MutableAttributeSet* StyleContext::getMutableAttributeSet($AttributeSet* a) {
	$init($SimpleAttributeSet);
	if ($instanceOf($MutableAttributeSet, a) && a != $SimpleAttributeSet::EMPTY) {
		return $cast($MutableAttributeSet, a);
	}
	return createLargeAttributeSet(a);
}

$String* StyleContext::toString() {
	$useLocalCurrentObjectStackCache();
	removeUnusedSets();
	$var($String, s, ""_s);
	{
		$var($Iterator, i$, $nc($($nc(this->attributesPool)->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($StyleContext$SmallAttributeSet, set, $cast($StyleContext$SmallAttributeSet, i$->next()));
			{
				$assign(s, $str({s, set, "\n"_s}));
			}
		}
	}
	return s;
}

void StyleContext::writeAttributes($ObjectOutputStream* out, $AttributeSet* a) {
	writeAttributeSet(out, a);
}

void StyleContext::readAttributes($ObjectInputStream* in, $MutableAttributeSet* a) {
	readAttributeSet(in, a);
}

void StyleContext::writeAttributeSet($ObjectOutputStream* out, $AttributeSet* a) {
	$init(StyleContext);
	$useLocalCurrentObjectStackCache();
	int32_t n = $nc(a)->getAttributeCount();
	$nc(out)->writeInt(n);
	$var($Enumeration, keys, a->getAttributeNames());
	while ($nc(keys)->hasMoreElements()) {
		$var($Object, key, keys->nextElement());
		if ($instanceOf($Serializable, key)) {
			out->writeObject(key);
		} else {
			$var($Object, ioFmt, $nc(StyleContext::freezeKeyMap)->get(key));
			if (ioFmt == nullptr) {
				$throwNew($NotSerializableException, $$str({$($nc($of(key))->getClass()->getName()), " is not serializable as a key in an AttributeSet"_s}));
			}
			out->writeObject(ioFmt);
		}
		$var($Object, value, a->getAttribute(key));
		$var($Object, ioFmt, $nc(StyleContext::freezeKeyMap)->get(value));
		if ($instanceOf($Serializable, value)) {
			out->writeObject((ioFmt != nullptr) ? ioFmt : value);
		} else {
			if (ioFmt == nullptr) {
				$throwNew($NotSerializableException, $$str({$($nc($of(value))->getClass()->getName()), " is not serializable as a value in an AttributeSet"_s}));
			}
			out->writeObject(ioFmt);
		}
	}
}

void StyleContext::readAttributeSet($ObjectInputStream* in, $MutableAttributeSet* a) {
	$init(StyleContext);
	$useLocalCurrentObjectStackCache();
	int32_t n = $nc(in)->readInt();
	for (int32_t i = 0; i < n; ++i) {
		$var($Object, key, in->readObject());
		$var($Object, value, in->readObject());
		if (StyleContext::thawKeyMap != nullptr) {
			$var($Object, staticKey, $nc(StyleContext::thawKeyMap)->get(key));
			if (staticKey != nullptr) {
				$assign(key, staticKey);
			}
			$var($Object, staticValue, $nc(StyleContext::thawKeyMap)->get(value));
			if (staticValue != nullptr) {
				$assign(value, staticValue);
			}
		}
		$nc(a)->addAttribute(key, value);
	}
}

void StyleContext::registerStaticAttributeKey(Object$* key) {
	$init(StyleContext);
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $$str({$($nc($of(key))->getClass()->getName()), "."_s}));
	$var($String, ioFmt, $concat(var$0, $($of(key)->toString())));
	if (StyleContext::freezeKeyMap == nullptr) {
		$assignStatic(StyleContext::freezeKeyMap, $new($Hashtable));
		$assignStatic(StyleContext::thawKeyMap, $new($Hashtable));
	}
	$nc(StyleContext::freezeKeyMap)->put(key, ioFmt);
	$nc(StyleContext::thawKeyMap)->put(ioFmt, key);
}

$Object* StyleContext::getStaticAttribute(Object$* key) {
	$init(StyleContext);
	if (StyleContext::thawKeyMap == nullptr || key == nullptr) {
		return $of(nullptr);
	}
	return $of($nc(StyleContext::thawKeyMap)->get(key));
}

$Object* StyleContext::getStaticAttributeKey(Object$* key) {
	$init(StyleContext);
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $$str({$($nc($of(key))->getClass()->getName()), "."_s}));
	return $of($concat(var$0, $($of(key)->toString())));
}

void StyleContext::writeObject($ObjectOutputStream* s) {
	removeUnusedSets();
	$nc(s)->defaultWriteObject();
}

void StyleContext::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$set(this, fontSearch, $new($StyleContext$FontKey, nullptr, 0, 0));
	$set(this, fontTable, $new($Hashtable));
	$set(this, search, $new($SimpleAttributeSet));
	$set(this, attributesPool, $Collections::synchronizedMap($$new($WeakHashMap)));
	$var($ObjectInputStream$GetField, f, $nc(s)->readFields());
	$var($Style, newStyles, $cast($Style, $nc(f)->get("styles"_s, ($Object*)nullptr)));
	if (newStyles == nullptr) {
		$throwNew($InvalidObjectException, "Null styles"_s);
	}
	$set(this, styles, newStyles);
	this->unusedSets = f->get("unusedSets"_s, 0);
}

void clinit$StyleContext($Class* class$) {
	$assignStatic(StyleContext::DEFAULT_STYLE, "default"_s);
	{
		try {
			$init($StyleConstants);
			int32_t n = $nc($StyleConstants::keys)->length;
			for (int32_t i = 0; i < n; ++i) {
				StyleContext::registerStaticAttributeKey($nc($StyleConstants::keys)->get(i));
			}
		} catch ($Throwable& e) {
			e->printStackTrace();
		}
	}
}

StyleContext::StyleContext() {
}

$Class* StyleContext::load$($String* name, bool initialize) {
	$loadClass(StyleContext, name, initialize, &_StyleContext_ClassInfo_, clinit$StyleContext, allocate$StyleContext);
	return class$;
}

$Class* StyleContext::class$ = nullptr;

		} // text
	} // swing
} // javax