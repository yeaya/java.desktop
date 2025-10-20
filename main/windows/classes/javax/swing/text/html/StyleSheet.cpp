#include <javax/swing/text/html/StyleSheet.h>

#include <java/awt/Color.h>
#include <java/awt/Font.h>
#include <java/io/BufferedReader.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/Reader.h>
#include <java/io/StringReader.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <java/util/Vector.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/EmptyBorder.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/Style.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyleContext$SmallAttributeSet.h>
#include <javax/swing/text/StyleContext.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/CSS$Attribute.h>
#include <javax/swing/text/html/CSS$BackgroundImage.h>
#include <javax/swing/text/html/CSS$FontSize.h>
#include <javax/swing/text/html/CSS.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTML.h>
#include <javax/swing/text/html/HTMLDocument$TaggedAttributeSet.h>
#include <javax/swing/text/html/MuxingAttributeSet.h>
#include <javax/swing/text/html/StyleSheet$BoxPainter.h>
#include <javax/swing/text/html/StyleSheet$CssParser.h>
#include <javax/swing/text/html/StyleSheet$LargeConversionSet.h>
#include <javax/swing/text/html/StyleSheet$ListPainter.h>
#include <javax/swing/text/html/StyleSheet$ResolvedStyle.h>
#include <javax/swing/text/html/StyleSheet$SearchBuffer.h>
#include <javax/swing/text/html/StyleSheet$SelectorMapping.h>
#include <javax/swing/text/html/StyleSheet$SmallConversionSet.h>
#include <javax/swing/text/html/StyleSheet$ViewAttributeSet.h>
#include <jcpp.h>

#undef BACKGROUND_COLOR
#undef BACKGROUND_IMAGE
#undef CLASS
#undef COLOR
#undef DEFAULT_FONT_SIZE
#undef EMPTY
#undef ID

using $AttributeSetArray = $Array<::javax::swing::text::AttributeSet>;
using $StyleSheetArray = $Array<::javax::swing::text::html::StyleSheet>;
using $Color = ::java::awt::Color;
using $Font = ::java::awt::Font;
using $BufferedReader = ::java::io::BufferedReader;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $Reader = ::java::io::Reader;
using $StringReader = ::java::io::StringReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $URL = ::java::net::URL;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $Vector = ::java::util::Vector;
using $ImageIcon = ::javax::swing::ImageIcon;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $UIResource = ::javax::swing::plaf::UIResource;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $Element = ::javax::swing::text::Element;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $Style = ::javax::swing::text::Style;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyleContext = ::javax::swing::text::StyleContext;
using $StyleContext$SmallAttributeSet = ::javax::swing::text::StyleContext$SmallAttributeSet;
using $View = ::javax::swing::text::View;
using $CSS = ::javax::swing::text::html::CSS;
using $CSS$Attribute = ::javax::swing::text::html::CSS$Attribute;
using $CSS$BackgroundImage = ::javax::swing::text::html::CSS$BackgroundImage;
using $CSS$FontSize = ::javax::swing::text::html::CSS$FontSize;
using $HTML = ::javax::swing::text::html::HTML;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLDocument$TaggedAttributeSet = ::javax::swing::text::html::HTMLDocument$TaggedAttributeSet;
using $MuxingAttributeSet = ::javax::swing::text::html::MuxingAttributeSet;
using $StyleSheet$BoxPainter = ::javax::swing::text::html::StyleSheet$BoxPainter;
using $StyleSheet$CssParser = ::javax::swing::text::html::StyleSheet$CssParser;
using $StyleSheet$LargeConversionSet = ::javax::swing::text::html::StyleSheet$LargeConversionSet;
using $StyleSheet$ListPainter = ::javax::swing::text::html::StyleSheet$ListPainter;
using $StyleSheet$ResolvedStyle = ::javax::swing::text::html::StyleSheet$ResolvedStyle;
using $StyleSheet$SearchBuffer = ::javax::swing::text::html::StyleSheet$SearchBuffer;
using $StyleSheet$SelectorMapping = ::javax::swing::text::html::StyleSheet$SelectorMapping;
using $StyleSheet$SmallConversionSet = ::javax::swing::text::html::StyleSheet$SmallConversionSet;
using $StyleSheet$ViewAttributeSet = ::javax::swing::text::html::StyleSheet$ViewAttributeSet;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _StyleSheet_FieldInfo_[] = {
	{"noBorder", "Ljavax/swing/border/Border;", nullptr, $STATIC | $FINAL, $staticField(StyleSheet, noBorder)},
	{"DEFAULT_FONT_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(StyleSheet, DEFAULT_FONT_SIZE)},
	{"fontSizeInherit", "Ljava/lang/Object;", nullptr, $PRIVATE | $TRANSIENT, $field(StyleSheet, fontSizeInherit$)},
	{"css", "Ljavax/swing/text/html/CSS;", nullptr, $PRIVATE, $field(StyleSheet, css)},
	{"selectorMapping", "Ljavax/swing/text/html/StyleSheet$SelectorMapping;", nullptr, $PRIVATE, $field(StyleSheet, selectorMapping)},
	{"resolvedStyles", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljavax/swing/text/html/StyleSheet$ResolvedStyle;>;", $PRIVATE, $field(StyleSheet, resolvedStyles)},
	{"linkedStyleSheets", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/text/html/StyleSheet;>;", $PRIVATE, $field(StyleSheet, linkedStyleSheets)},
	{"base", "Ljava/net/URL;", nullptr, $PRIVATE, $field(StyleSheet, base)},
	{"sizeMapDefault", "[I", nullptr, $STATIC | $FINAL, $staticField(StyleSheet, sizeMapDefault)},
	{"sizeMap", "[I", nullptr, $PRIVATE, $field(StyleSheet, sizeMap)},
	{"w3cLengthUnits", "Z", nullptr, $PRIVATE, $field(StyleSheet, w3cLengthUnits)},
	{}
};

$MethodInfo _StyleSheet_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StyleSheet::*)()>(&StyleSheet::init$))},
	{"_cleanSelectorString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(StyleSheet::*)($String*)>(&StyleSheet::_cleanSelectorString))},
	{"addAttribute", "(Ljavax/swing/text/AttributeSet;Ljava/lang/Object;Ljava/lang/Object;)Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"addAttributes", "(Ljavax/swing/text/AttributeSet;Ljavax/swing/text/AttributeSet;)Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"addCSSAttribute", "(Ljavax/swing/text/MutableAttributeSet;Ljavax/swing/text/html/CSS$Attribute;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"addCSSAttributeFromHTML", "(Ljavax/swing/text/MutableAttributeSet;Ljavax/swing/text/html/CSS$Attribute;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"addRule", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"addRule", "([Ljava/lang/String;Ljavax/swing/text/AttributeSet;Z)V", nullptr, 0},
	{"addSortedStyle", "(Ljavax/swing/text/html/StyleSheet$SelectorMapping;Ljava/util/Vector;)V", "(Ljavax/swing/text/html/StyleSheet$SelectorMapping;Ljava/util/Vector<Ljavax/swing/text/html/StyleSheet$SelectorMapping;>;)V", $PRIVATE, $method(static_cast<void(StyleSheet::*)($StyleSheet$SelectorMapping*,$Vector*)>(&StyleSheet::addSortedStyle))},
	{"addStyleSheet", "(Ljavax/swing/text/html/StyleSheet;)V", nullptr, $PUBLIC},
	{"cleanSelectorString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, 0},
	{"convertAttributeSet", "(Ljavax/swing/text/AttributeSet;)Ljavax/swing/text/AttributeSet;", nullptr, 0},
	{"createLargeAttributeSet", "(Ljavax/swing/text/AttributeSet;)Ljavax/swing/text/MutableAttributeSet;", nullptr, $PROTECTED},
	{"createResolvedStyle", "(Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;)Ljavax/swing/text/Style;", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<$Style*(StyleSheet::*)($String*,$StringArray*,$StringArray*,$StringArray*)>(&StyleSheet::createResolvedStyle))},
	{"createResolvedStyle", "(Ljava/lang/String;Ljava/util/Vector;Ljavax/swing/text/html/HTML$Tag;)Ljavax/swing/text/Style;", "(Ljava/lang/String;Ljava/util/Vector<Ljavax/swing/text/Element;>;Ljavax/swing/text/html/HTML$Tag;)Ljavax/swing/text/Style;", $PRIVATE, $method(static_cast<$Style*(StyleSheet::*)($String*,$Vector*,$HTML$Tag*)>(&StyleSheet::createResolvedStyle))},
	{"createResolvedStyle", "(Ljava/lang/String;)Ljavax/swing/text/Style;", nullptr, $PRIVATE, $method(static_cast<$Style*(StyleSheet::*)($String*)>(&StyleSheet::createResolvedStyle))},
	{"createSmallAttributeSet", "(Ljavax/swing/text/AttributeSet;)Ljavax/swing/text/StyleContext$SmallAttributeSet;", nullptr, $PROTECTED},
	{"fontSizeInherit", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(StyleSheet::*)()>(&StyleSheet::fontSizeInherit))},
	{"getBackground", "(Ljavax/swing/text/AttributeSet;)Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getBackgroundImage", "(Ljavax/swing/text/AttributeSet;)Ljavax/swing/ImageIcon;", nullptr, 0},
	{"getBase", "()Ljava/net/URL;", nullptr, $PUBLIC},
	{"getBoxPainter", "(Ljavax/swing/text/AttributeSet;)Ljavax/swing/text/html/StyleSheet$BoxPainter;", nullptr, $PUBLIC},
	{"getDeclaration", "(Ljava/lang/String;)Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"getFont", "(Ljavax/swing/text/AttributeSet;)Ljava/awt/Font;", nullptr, $PUBLIC},
	{"getForeground", "(Ljavax/swing/text/AttributeSet;)Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getIndexOfSize", "(F)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(float)>(&StyleSheet::getIndexOfSize))},
	{"getLinkedStyle", "(Ljavax/swing/text/Style;)Ljavax/swing/text/Style;", nullptr, $PRIVATE, $method(static_cast<$Style*(StyleSheet::*)($Style*)>(&StyleSheet::getLinkedStyle))},
	{"getListPainter", "(Ljavax/swing/text/AttributeSet;)Ljavax/swing/text/html/StyleSheet$ListPainter;", nullptr, $PUBLIC},
	{"getPointSize", "(I)F", nullptr, $PUBLIC},
	{"getPointSize", "(Ljava/lang/String;)F", nullptr, $PUBLIC},
	{"getResolvedStyle", "(Ljava/lang/String;Ljava/util/Vector;Ljavax/swing/text/html/HTML$Tag;)Ljavax/swing/text/Style;", "(Ljava/lang/String;Ljava/util/Vector<Ljavax/swing/text/Element;>;Ljavax/swing/text/html/HTML$Tag;)Ljavax/swing/text/Style;", $PRIVATE | $SYNCHRONIZED, $method(static_cast<$Style*(StyleSheet::*)($String*,$Vector*,$HTML$Tag*)>(&StyleSheet::getResolvedStyle))},
	{"getResolvedStyle", "(Ljava/lang/String;)Ljavax/swing/text/Style;", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<$Style*(StyleSheet::*)($String*)>(&StyleSheet::getResolvedStyle))},
	{"getRootSelectorMapping", "()Ljavax/swing/text/html/StyleSheet$SelectorMapping;", nullptr, $PRIVATE, $method(static_cast<$StyleSheet$SelectorMapping*(StyleSheet::*)()>(&StyleSheet::getRootSelectorMapping))},
	{"getRule", "(Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/Element;)Ljavax/swing/text/Style;", nullptr, $PUBLIC},
	{"getRule", "(Ljava/lang/String;)Ljavax/swing/text/Style;", nullptr, $PUBLIC},
	{"getSimpleSelectors", "(Ljava/lang/String;)[Ljava/lang/String;", nullptr, 0},
	{"getSizeMap", "()[I", nullptr, 0},
	{"getSpecificity", "(Ljava/lang/String;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($String*)>(&StyleSheet::getSpecificity))},
	{"getStyleSheets", "()[Ljavax/swing/text/html/StyleSheet;", nullptr, $PUBLIC},
	{"getStyles", "(Ljavax/swing/text/html/StyleSheet$SelectorMapping;Ljava/util/Vector;[Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;IILjava/util/Hashtable;)V", "(Ljavax/swing/text/html/StyleSheet$SelectorMapping;Ljava/util/Vector<Ljavax/swing/text/html/StyleSheet$SelectorMapping;>;[Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;IILjava/util/Hashtable<Ljavax/swing/text/html/StyleSheet$SelectorMapping;Ljavax/swing/text/html/StyleSheet$SelectorMapping;>;)V", $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(StyleSheet::*)($StyleSheet$SelectorMapping*,$Vector*,$StringArray*,$StringArray*,$StringArray*,int32_t,int32_t,$Hashtable*)>(&StyleSheet::getStyles))},
	{"getViewAttributes", "(Ljavax/swing/text/View;)Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"importStyleSheet", "(Ljava/net/URL;)V", nullptr, $PUBLIC},
	{"isW3CLengthUnits", "()Z", nullptr, 0},
	{"linkStyleSheetAt", "(Ljavax/swing/text/html/StyleSheet;I)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(StyleSheet::*)(StyleSheet*,int32_t)>(&StyleSheet::linkStyleSheetAt))},
	{"loadRules", "(Ljava/io/Reader;Ljava/net/URL;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"rebaseSizeMap", "(I)V", nullptr, 0},
	{"refreshResolvedRules", "(Ljava/lang/String;[Ljava/lang/String;Ljavax/swing/text/Style;I)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(StyleSheet::*)($String*,$StringArray*,$Style*,int32_t)>(&StyleSheet::refreshResolvedRules))},
	{"removeAttribute", "(Ljavax/swing/text/AttributeSet;Ljava/lang/Object;)Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"removeAttributes", "(Ljavax/swing/text/AttributeSet;Ljava/util/Enumeration;)Ljavax/swing/text/AttributeSet;", "(Ljavax/swing/text/AttributeSet;Ljava/util/Enumeration<*>;)Ljavax/swing/text/AttributeSet;", $PUBLIC},
	{"removeAttributes", "(Ljavax/swing/text/AttributeSet;Ljavax/swing/text/AttributeSet;)Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"removeHTMLTags", "(Ljavax/swing/text/AttributeSet;Ljavax/swing/text/AttributeSet;)Ljavax/swing/text/AttributeSet;", nullptr, $PRIVATE, $method(static_cast<$AttributeSet*(StyleSheet::*)($AttributeSet*,$AttributeSet*)>(&StyleSheet::removeHTMLTags))},
	{"removeStyle", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"removeStyleSheet", "(Ljavax/swing/text/html/StyleSheet;)V", nullptr, $PUBLIC},
	{"setBase", "(Ljava/net/URL;)V", nullptr, $PUBLIC},
	{"setBaseFontSize", "(I)V", nullptr, $PUBLIC},
	{"setBaseFontSize", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"stringToColor", "(Ljava/lang/String;)Ljava/awt/Color;", nullptr, $PUBLIC},
	{"translateHTMLToCSS", "(Ljavax/swing/text/AttributeSet;)Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"unlinkStyleSheet", "(Ljavax/swing/text/html/StyleSheet;I)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(StyleSheet::*)(StyleSheet*,int32_t)>(&StyleSheet::unlinkStyleSheet))},
	{}
};

$InnerClassInfo _StyleSheet_InnerClassesInfo_[] = {
	{"javax.swing.text.html.StyleSheet$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"javax.swing.text.html.StyleSheet$CssParser", "javax.swing.text.html.StyleSheet", "CssParser", 0},
	{"javax.swing.text.html.StyleSheet$SelectorMapping", "javax.swing.text.html.StyleSheet", "SelectorMapping", $STATIC},
	{"javax.swing.text.html.StyleSheet$ResolvedStyle", "javax.swing.text.html.StyleSheet", "ResolvedStyle", $STATIC},
	{"javax.swing.text.html.StyleSheet$ViewAttributeSet", "javax.swing.text.html.StyleSheet", "ViewAttributeSet", 0},
	{"javax.swing.text.html.StyleSheet$BackgroundImagePainter", "javax.swing.text.html.StyleSheet", "BackgroundImagePainter", $STATIC},
	{"javax.swing.text.html.StyleSheet$ListPainter", "javax.swing.text.html.StyleSheet", "ListPainter", $PUBLIC | $STATIC},
	{"javax.swing.text.html.StyleSheet$BoxPainter", "javax.swing.text.html.StyleSheet", "BoxPainter", $PUBLIC | $STATIC},
	{"javax.swing.text.html.StyleSheet$SearchBuffer", "javax.swing.text.html.StyleSheet", "SearchBuffer", $PRIVATE | $STATIC},
	{"javax.swing.text.html.StyleSheet$SmallConversionSet", "javax.swing.text.html.StyleSheet", "SmallConversionSet", 0},
	{"javax.swing.text.html.StyleSheet$LargeConversionSet", "javax.swing.text.html.StyleSheet", "LargeConversionSet", 0},
	{}
};

$ClassInfo _StyleSheet_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.StyleSheet",
	"javax.swing.text.StyleContext",
	nullptr,
	_StyleSheet_FieldInfo_,
	_StyleSheet_MethodInfo_,
	nullptr,
	nullptr,
	_StyleSheet_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.html.StyleSheet$1,javax.swing.text.html.StyleSheet$CssParser,javax.swing.text.html.StyleSheet$SelectorMapping,javax.swing.text.html.StyleSheet$ResolvedStyle,javax.swing.text.html.StyleSheet$ViewAttributeSet,javax.swing.text.html.StyleSheet$BackgroundImagePainter,javax.swing.text.html.StyleSheet$ListPainter,javax.swing.text.html.StyleSheet$BoxPainter,javax.swing.text.html.StyleSheet$BoxPainter$HorizontalMargin,javax.swing.text.html.StyleSheet$SearchBuffer,javax.swing.text.html.StyleSheet$SmallConversionSet,javax.swing.text.html.StyleSheet$LargeConversionSet"
};

$Object* allocate$StyleSheet($Class* clazz) {
	return $of($alloc(StyleSheet));
}

$Border* StyleSheet::noBorder = nullptr;

$ints* StyleSheet::sizeMapDefault = nullptr;

void StyleSheet::init$() {
	$StyleContext::init$();
	$set(this, sizeMap, StyleSheet::sizeMapDefault);
	this->w3cLengthUnits = false;
	$set(this, selectorMapping, $new($StyleSheet$SelectorMapping, 0));
	$set(this, resolvedStyles, $new($Hashtable));
	if (this->css == nullptr) {
		$set(this, css, $new($CSS));
	}
}

$Style* StyleSheet::getRule($HTML$Tag* t, $Element* e$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Element, e, e$renamed);
	$var($StyleSheet$SearchBuffer, sb, $StyleSheet$SearchBuffer::obtainSearchBuffer());
	{
		$var($Throwable, var$0, nullptr);
		$var($Style, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($Vector, searchContext, $nc(sb)->getVector());
			{
				$var($Element, p, e);
				for (; p != nullptr; $assign(p, $nc(p)->getParentElement())) {
					$nc(searchContext)->addElement(p);
				}
			}
			int32_t n = $nc(searchContext)->size();
			$var($StringBuffer, cacheLookup, sb->getStringBuffer());
			$var($AttributeSet, attr, nullptr);
			$var($String, eName, nullptr);
			$var($Object, name, nullptr);
			for (int32_t counter = n - 1; counter >= 1; --counter) {
				$assign(e, $cast($Element, searchContext->elementAt(counter)));
				$assign(attr, $nc(e)->getAttributes());
				$init($StyleConstants);
				$assign(name, $nc(attr)->getAttribute($StyleConstants::NameAttribute));
				$assign(eName, $nc($of(name))->toString());
				$nc(cacheLookup)->append(eName);
				if (attr != nullptr) {
					$init($HTML$Attribute);
					if (attr->isDefined($HTML$Attribute::ID)) {
						cacheLookup->append(u'#');
						cacheLookup->append($(attr->getAttribute($HTML$Attribute::ID)));
					} else {
						if (attr->isDefined($HTML$Attribute::CLASS)) {
							cacheLookup->append(u'.');
							cacheLookup->append($(attr->getAttribute($HTML$Attribute::CLASS)));
						}
					}
				}
				cacheLookup->append(u' ');
			}
			$nc(cacheLookup)->append($($nc(t)->toString()));
			$assign(e, $cast($Element, searchContext->elementAt(0)));
			$assign(attr, $nc(e)->getAttributes());
			if (e->isLeaf()) {
				$var($Object, testAttr, $nc(attr)->getAttribute(t));
				if ($instanceOf($AttributeSet, testAttr)) {
					$assign(attr, $cast($AttributeSet, testAttr));
				} else {
					$assign(attr, nullptr);
				}
			}
			if (attr != nullptr) {
				$init($HTML$Attribute);
				if (attr->isDefined($HTML$Attribute::ID)) {
					cacheLookup->append(u'#');
					cacheLookup->append($(attr->getAttribute($HTML$Attribute::ID)));
				} else {
					if (attr->isDefined($HTML$Attribute::CLASS)) {
						cacheLookup->append(u'.');
						cacheLookup->append($(attr->getAttribute($HTML$Attribute::CLASS)));
					}
				}
			}
			$var($Style, style, getResolvedStyle($(cacheLookup->toString()), searchContext, t));
			$assign(var$2, style);
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$StyleSheet$SearchBuffer::releaseSearchBuffer(sb);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Style* StyleSheet::getRule($String* selector$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, selector, selector$renamed);
	$assign(selector, cleanSelectorString(selector));
	if (selector != nullptr) {
		$var($Style, style, getResolvedStyle(selector));
		return style;
	}
	return nullptr;
}

void StyleSheet::addRule($String* rule) {
	$useLocalCurrentObjectStackCache();
	if (rule != nullptr) {
		$var($String, baseUnitsDisable, "BASE_SIZE_DISABLE"_s);
		$var($String, baseUnits, "BASE_SIZE "_s);
		$var($String, w3cLengthUnitsEnable, "W3C_LENGTH_UNITS_ENABLE"_s);
		$var($String, w3cLengthUnitsDisable, "W3C_LENGTH_UNITS_DISABLE"_s);
		if (rule == baseUnitsDisable) {
			$set(this, sizeMap, StyleSheet::sizeMapDefault);
		} else if (rule->startsWith(baseUnits)) {
			rebaseSizeMap($Integer::parseInt($(rule->substring(baseUnits->length()))));
		} else if (rule == w3cLengthUnitsEnable) {
			this->w3cLengthUnits = true;
		} else if (rule == w3cLengthUnitsDisable) {
			this->w3cLengthUnits = false;
		} else {
			$var($StyleSheet$CssParser, parser, $new($StyleSheet$CssParser, this));
			try {
				$var($URL, var$0, getBase());
				parser->parse(var$0, $$new($StringReader, rule), false, false);
			} catch ($IOException&) {
				$catch();
			}
		}
	}
}

$AttributeSet* StyleSheet::getDeclaration($String* decl) {
	if (decl == nullptr) {
		$init($SimpleAttributeSet);
		return $SimpleAttributeSet::EMPTY;
	}
	$var($StyleSheet$CssParser, parser, $new($StyleSheet$CssParser, this));
	return parser->parseDeclaration(decl);
}

void StyleSheet::loadRules($Reader* in, $URL* ref) {
	$var($StyleSheet$CssParser, parser, $new($StyleSheet$CssParser, this));
	parser->parse(ref, in, false, false);
}

$AttributeSet* StyleSheet::getViewAttributes($View* v) {
	return $new($StyleSheet$ViewAttributeSet, this, v);
}

void StyleSheet::removeStyle($String* nm) {
	$useLocalCurrentObjectStackCache();
	$var($Style, aStyle, getStyle(nm));
	if (aStyle != nullptr) {
		$var($String, selector, cleanSelectorString(nm));
		$var($StringArray, selectors, getSimpleSelectors(selector));
		$synchronized(this) {
			$var($StyleSheet$SelectorMapping, mapping, getRootSelectorMapping());
			for (int32_t i = $nc(selectors)->length - 1; i >= 0; --i) {
				$assign(mapping, $nc(mapping)->getChildSelectorMapping(selectors->get(i), true));
			}
			$var($Style, rule, $nc(mapping)->getStyle());
			if (rule != nullptr) {
				mapping->setStyle(nullptr);
				if ($nc(this->resolvedStyles)->size() > 0) {
					$var($Enumeration, values, $nc(this->resolvedStyles)->elements());
					while ($nc(values)->hasMoreElements()) {
						$var($StyleSheet$ResolvedStyle, style, $cast($StyleSheet$ResolvedStyle, values->nextElement()));
						$nc(style)->removeStyle(rule);
					}
				}
			}
		}
	}
	$StyleContext::removeStyle(nm);
}

void StyleSheet::addStyleSheet(StyleSheet* ss) {
	$synchronized(this) {
		if (this->linkedStyleSheets == nullptr) {
			$set(this, linkedStyleSheets, $new($Vector));
		}
		if (!$nc(this->linkedStyleSheets)->contains(ss)) {
			int32_t index = 0;
			if ($instanceOf($UIResource, ss) && $nc(this->linkedStyleSheets)->size() > 1) {
				index = $nc(this->linkedStyleSheets)->size() - 1;
			}
			$nc(this->linkedStyleSheets)->insertElementAt(ss, index);
			linkStyleSheetAt(ss, index);
		}
	}
}

void StyleSheet::removeStyleSheet(StyleSheet* ss) {
	$synchronized(this) {
		if (this->linkedStyleSheets != nullptr) {
			int32_t index = $nc(this->linkedStyleSheets)->indexOf(ss);
			if (index != -1) {
				$nc(this->linkedStyleSheets)->removeElementAt(index);
				unlinkStyleSheet(ss, index);
				if (index == 0 && $nc(this->linkedStyleSheets)->size() == 0) {
					$set(this, linkedStyleSheets, nullptr);
				}
			}
		}
	}
}

$StyleSheetArray* StyleSheet::getStyleSheets() {
	$var($StyleSheetArray, retValue, nullptr);
	$synchronized(this) {
		if (this->linkedStyleSheets != nullptr) {
			$assign(retValue, $new($StyleSheetArray, $nc(this->linkedStyleSheets)->size()));
			$nc(this->linkedStyleSheets)->copyInto(retValue);
		} else {
			$assign(retValue, nullptr);
		}
	}
	return retValue;
}

void StyleSheet::importStyleSheet($URL* url) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($InputStream, is, nullptr);
		$assign(is, $nc(url)->openStream());
		$var($Reader, r, $new($BufferedReader, $$new($InputStreamReader, is)));
		$var($StyleSheet$CssParser, parser, $new($StyleSheet$CssParser, this));
		parser->parse(url, r, false, true);
		r->close();
		$nc(is)->close();
	} catch ($Throwable&) {
		$catch();
	}
}

void StyleSheet::setBase($URL* base) {
	$set(this, base, base);
}

$URL* StyleSheet::getBase() {
	return this->base;
}

void StyleSheet::addCSSAttribute($MutableAttributeSet* attr, $CSS$Attribute* key, $String* value) {
	$nc(this->css)->addInternalCSSValue(attr, key, value);
}

bool StyleSheet::addCSSAttributeFromHTML($MutableAttributeSet* attr, $CSS$Attribute* key, $String* value) {
	$var($Object, iValue, $nc(this->css)->getCssValue(key, value));
	if (iValue != nullptr) {
		$nc(attr)->addAttribute(key, iValue);
		return true;
	}
	return false;
}

$AttributeSet* StyleSheet::translateHTMLToCSS($AttributeSet* htmlAttrSet) {
	$useLocalCurrentObjectStackCache();
	$var($AttributeSet, cssAttrSet, $nc(this->css)->translateHTMLToCSS(htmlAttrSet));
	$var($MutableAttributeSet, cssStyleSet, addStyle(nullptr, nullptr));
	$nc(cssStyleSet)->addAttributes(cssAttrSet);
	return cssStyleSet;
}

$AttributeSet* StyleSheet::addAttribute($AttributeSet* old$renamed, Object$* key, Object$* value) {
	$useLocalCurrentObjectStackCache();
	$var($AttributeSet, old, old$renamed);
	if (this->css == nullptr) {
		$set(this, css, $new($CSS));
	}
	if ($instanceOf($StyleConstants, key)) {
		$var($HTML$Tag, tag, $HTML::getTagForStyleConstantsKey($cast($StyleConstants, key)));
		if (tag != nullptr && $nc(old)->isDefined(tag)) {
			$assign(old, removeAttribute(old, tag));
		}
		$var($Object, cssValue, $nc(this->css)->styleConstantsValueToCSSValue($cast($StyleConstants, key), value));
		if (cssValue != nullptr) {
			$var($Object, cssKey, $nc(this->css)->styleConstantsKeyToCSSKey($cast($StyleConstants, key)));
			if (cssKey != nullptr) {
				return $StyleContext::addAttribute(old, cssKey, cssValue);
			}
		}
	}
	return $StyleContext::addAttribute(old, key, value);
}

$AttributeSet* StyleSheet::addAttributes($AttributeSet* old$renamed, $AttributeSet* attr) {
	$useLocalCurrentObjectStackCache();
	$var($AttributeSet, old, old$renamed);
	if (!($instanceOf($HTMLDocument$TaggedAttributeSet, attr))) {
		$assign(old, removeHTMLTags(old, attr));
	}
	return $StyleContext::addAttributes(old, $(convertAttributeSet(attr)));
}

$AttributeSet* StyleSheet::removeAttribute($AttributeSet* old$renamed, Object$* key) {
	$useLocalCurrentObjectStackCache();
	$var($AttributeSet, old, old$renamed);
	if ($instanceOf($StyleConstants, key)) {
		$var($HTML$Tag, tag, $HTML::getTagForStyleConstantsKey($cast($StyleConstants, key)));
		if (tag != nullptr) {
			$assign(old, $StyleContext::removeAttribute(old, tag));
		}
		$var($Object, cssKey, $nc(this->css)->styleConstantsKeyToCSSKey($cast($StyleConstants, key)));
		if (cssKey != nullptr) {
			return $StyleContext::removeAttribute(old, cssKey);
		}
	}
	return $StyleContext::removeAttribute(old, key);
}

$AttributeSet* StyleSheet::removeAttributes($AttributeSet* old, $Enumeration* names) {
	return $StyleContext::removeAttributes(old, names);
}

$AttributeSet* StyleSheet::removeAttributes($AttributeSet* old$renamed, $AttributeSet* attrs) {
	$useLocalCurrentObjectStackCache();
	$var($AttributeSet, old, old$renamed);
	if (old != attrs) {
		$assign(old, removeHTMLTags(old, attrs));
	}
	return $StyleContext::removeAttributes(old, $(convertAttributeSet(attrs)));
}

$StyleContext$SmallAttributeSet* StyleSheet::createSmallAttributeSet($AttributeSet* a) {
	return $new($StyleSheet$SmallConversionSet, this, a);
}

$MutableAttributeSet* StyleSheet::createLargeAttributeSet($AttributeSet* a) {
	return $new($StyleSheet$LargeConversionSet, this, a);
}

$AttributeSet* StyleSheet::removeHTMLTags($AttributeSet* old$renamed, $AttributeSet* attr) {
	$useLocalCurrentObjectStackCache();
	$var($AttributeSet, old, old$renamed);
	if (!($instanceOf($StyleSheet$LargeConversionSet, attr)) && !($instanceOf($StyleSheet$SmallConversionSet, attr))) {
		$var($Enumeration, names, $nc(attr)->getAttributeNames());
		while ($nc(names)->hasMoreElements()) {
			$var($Object, key, names->nextElement());
			if ($instanceOf($StyleConstants, key)) {
				$var($HTML$Tag, tag, $HTML::getTagForStyleConstantsKey($cast($StyleConstants, key)));
				if (tag != nullptr && $nc(old)->isDefined(tag)) {
					$assign(old, $StyleContext::removeAttribute(old, tag));
				}
			}
		}
	}
	return old;
}

$AttributeSet* StyleSheet::convertAttributeSet($AttributeSet* a) {
	$useLocalCurrentObjectStackCache();
	if (($instanceOf($StyleSheet$LargeConversionSet, a)) || ($instanceOf($StyleSheet$SmallConversionSet, a))) {
		return a;
	}
	$var($Enumeration, names, $nc(a)->getAttributeNames());
	while ($nc(names)->hasMoreElements()) {
		$var($Object, name, names->nextElement());
		if ($instanceOf($StyleConstants, name)) {
			$var($MutableAttributeSet, converted, $new($StyleSheet$LargeConversionSet, this));
			$var($Enumeration, keys, a->getAttributeNames());
			while ($nc(keys)->hasMoreElements()) {
				$var($Object, key, keys->nextElement());
				$var($Object, cssValue, nullptr);
				if ($instanceOf($StyleConstants, key)) {
					$var($Object, cssKey, $nc(this->css)->styleConstantsKeyToCSSKey($cast($StyleConstants, key)));
					if (cssKey != nullptr) {
						$var($Object, value, a->getAttribute(key));
						$assign(cssValue, $nc(this->css)->styleConstantsValueToCSSValue($cast($StyleConstants, key), value));
						if (cssValue != nullptr) {
							converted->addAttribute(cssKey, cssValue);
						}
					}
				}
				if (cssValue == nullptr) {
					converted->addAttribute(key, $(a->getAttribute(key)));
				}
			}
			return converted;
		}
	}
	return a;
}

$Font* StyleSheet::getFont($AttributeSet* a) {
	return $nc(this->css)->getFont(this, a, 12, this);
}

$Color* StyleSheet::getForeground($AttributeSet* a) {
	$init($CSS$Attribute);
	$var($Color, c, $nc(this->css)->getColor(a, $CSS$Attribute::COLOR));
	if (c == nullptr) {
		$init($Color);
		return $Color::black;
	}
	return c;
}

$Color* StyleSheet::getBackground($AttributeSet* a) {
	$init($CSS$Attribute);
	return $nc(this->css)->getColor(a, $CSS$Attribute::BACKGROUND_COLOR);
}

$StyleSheet$BoxPainter* StyleSheet::getBoxPainter($AttributeSet* a) {
	return $new($StyleSheet$BoxPainter, a, this->css, this);
}

$StyleSheet$ListPainter* StyleSheet::getListPainter($AttributeSet* a) {
	return $new($StyleSheet$ListPainter, a, this);
}

void StyleSheet::setBaseFontSize(int32_t sz) {
	$nc(this->css)->setBaseFontSize(sz);
}

void StyleSheet::setBaseFontSize($String* size) {
	$nc(this->css)->setBaseFontSize(size);
}

int32_t StyleSheet::getIndexOfSize(float pt) {
	$init(StyleSheet);
	return $CSS::getIndexOfSize(pt, StyleSheet::sizeMapDefault);
}

float StyleSheet::getPointSize(int32_t index) {
	return $nc(this->css)->getPointSize(index, this);
}

float StyleSheet::getPointSize($String* size) {
	return $nc(this->css)->getPointSize(size, this);
}

$Color* StyleSheet::stringToColor($String* string) {
	return $CSS::stringToColor(string);
}

$ImageIcon* StyleSheet::getBackgroundImage($AttributeSet* attr) {
	$useLocalCurrentObjectStackCache();
	$init($CSS$Attribute);
	$var($Object, value, $nc(attr)->getAttribute($CSS$Attribute::BACKGROUND_IMAGE));
	if (value != nullptr) {
		return $nc(($cast($CSS$BackgroundImage, value)))->getImage($(getBase()));
	}
	return nullptr;
}

void StyleSheet::addRule($StringArray* selector, $AttributeSet* declaration, bool isLinked) {
	$useLocalCurrentObjectStackCache();
	int32_t n = $nc(selector)->length;
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append(selector->get(0));
	for (int32_t counter = 1; counter < n; ++counter) {
		sb->append(u' ');
		sb->append(selector->get(counter));
	}
	$var($String, selectorName, sb->toString());
	$var($Style, rule, getStyle(selectorName));
	if (rule == nullptr) {
		$var($Style, altRule, addStyle(selectorName, nullptr));
		$synchronized(this) {
			$var($StyleSheet$SelectorMapping, mapping, getRootSelectorMapping());
			for (int32_t i = n - 1; i >= 0; --i) {
				$assign(mapping, $nc(mapping)->getChildSelectorMapping(selector->get(i), true));
			}
			$assign(rule, $nc(mapping)->getStyle());
			if (rule == nullptr) {
				$assign(rule, altRule);
				mapping->setStyle(rule);
				refreshResolvedRules(selectorName, selector, rule, mapping->getSpecificity());
			}
		}
	}
	if (isLinked) {
		$assign(rule, getLinkedStyle(rule));
	}
	$nc(rule)->addAttributes(declaration);
}

void StyleSheet::linkStyleSheetAt(StyleSheet* ss, int32_t index) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if ($nc(this->resolvedStyles)->size() > 0) {
			$var($Enumeration, values, $nc(this->resolvedStyles)->elements());
			while ($nc(values)->hasMoreElements()) {
				$var($StyleSheet$ResolvedStyle, rule, $cast($StyleSheet$ResolvedStyle, values->nextElement()));
				$nc(rule)->insertExtendedStyleAt($($nc(ss)->getRule($(rule->getName()))), index);
			}
		}
	}
}

void StyleSheet::unlinkStyleSheet(StyleSheet* ss, int32_t index) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if ($nc(this->resolvedStyles)->size() > 0) {
			$var($Enumeration, values, $nc(this->resolvedStyles)->elements());
			while ($nc(values)->hasMoreElements()) {
				$var($StyleSheet$ResolvedStyle, rule, $cast($StyleSheet$ResolvedStyle, values->nextElement()));
				$nc(rule)->removeExtendedStyleAt(index);
			}
		}
	}
}

$StringArray* StyleSheet::getSimpleSelectors($String* selector$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, selector, selector$renamed);
	$assign(selector, cleanSelectorString(selector));
	$var($StyleSheet$SearchBuffer, sb, $StyleSheet$SearchBuffer::obtainSearchBuffer());
	$var($Vector, selectors, $nc(sb)->getVector());
	int32_t lastIndex = 0;
	int32_t length = $nc(selector)->length();
	while (lastIndex != -1) {
		int32_t newIndex = selector->indexOf((int32_t)u' ', lastIndex);
		if (newIndex != -1) {
			$nc(selectors)->addElement($(selector->substring(lastIndex, newIndex)));
			if (++newIndex == length) {
				lastIndex = -1;
			} else {
				lastIndex = newIndex;
			}
		} else {
			$nc(selectors)->addElement($(selector->substring(lastIndex)));
			lastIndex = -1;
		}
	}
	$var($StringArray, retValue, $new($StringArray, $nc(selectors)->size()));
	selectors->copyInto(retValue);
	$StyleSheet$SearchBuffer::releaseSearchBuffer(sb);
	return retValue;
}

$String* StyleSheet::cleanSelectorString($String* selector) {
	bool lastWasSpace = true;
	{
		int32_t counter = 0;
		int32_t maxCounter = $nc(selector)->length();
		for (; counter < maxCounter; ++counter) {
			switch (selector->charAt(counter)) {
			case u' ':
				{
					if (lastWasSpace) {
						return _cleanSelectorString(selector);
					}
					lastWasSpace = true;
					break;
				}
			case u'\n':
				{}
			case u'\r':
				{}
			case u'\t':
				{
					return _cleanSelectorString(selector);
				}
			default:
				{
					lastWasSpace = false;
				}
			}
		}
	}
	if (lastWasSpace) {
		return _cleanSelectorString(selector);
	}
	return selector;
}

$String* StyleSheet::_cleanSelectorString($String* selector) {
	$useLocalCurrentObjectStackCache();
	$var($StyleSheet$SearchBuffer, sb, $StyleSheet$SearchBuffer::obtainSearchBuffer());
	$var($StringBuffer, buff, $nc(sb)->getStringBuffer());
	bool lastWasSpace = true;
	int32_t lastIndex = 0;
	$var($chars, chars, $nc(selector)->toCharArray());
	int32_t numChars = chars->length;
	$var($String, retValue, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			for (int32_t counter = 0; counter < numChars; ++counter) {
				switch (chars->get(counter)) {
				case u' ':
					{
						if (!lastWasSpace) {
							lastWasSpace = true;
							if (lastIndex < counter) {
								$nc(buff)->append(chars, lastIndex, 1 + counter - lastIndex);
							}
						}
						lastIndex = counter + 1;
						break;
					}
				case u'\n':
					{}
				case u'\r':
					{}
				case u'\t':
					{
						if (!lastWasSpace) {
							lastWasSpace = true;
							if (lastIndex < counter) {
								$nc(buff)->append(chars, lastIndex, counter - lastIndex);
								buff->append(u' ');
							}
						}
						lastIndex = counter + 1;
						break;
					}
				default:
					{
						lastWasSpace = false;
						break;
					}
				}
			}
			if (lastWasSpace && $nc(buff)->length() > 0) {
				buff->setLength(buff->length() - 1);
			} else if (lastIndex < numChars) {
				buff->append(chars, lastIndex, numChars - lastIndex);
			}
			$assign(retValue, $nc(buff)->toString());
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$StyleSheet$SearchBuffer::releaseSearchBuffer(sb);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return retValue;
}

$StyleSheet$SelectorMapping* StyleSheet::getRootSelectorMapping() {
	return this->selectorMapping;
}

int32_t StyleSheet::getSpecificity($String* selector) {
	$init(StyleSheet);
	int32_t specificity = 0;
	bool lastWasSpace = true;
	{
		int32_t counter = 0;
		int32_t maxCounter = $nc(selector)->length();
		for (; counter < maxCounter; ++counter) {
			switch (selector->charAt(counter)) {
			case u'.':
				{
					specificity += 100;
					break;
				}
			case u'#':
				{
					specificity += 10000;
					break;
				}
			case u' ':
				{
					lastWasSpace = true;
					break;
				}
			default:
				{
					if (lastWasSpace) {
						lastWasSpace = false;
						specificity += 1;
					}
				}
			}
		}
	}
	return specificity;
}

$Style* StyleSheet::getLinkedStyle($Style* localStyle) {
	$var($Style, retStyle, $cast($Style, $nc(localStyle)->getResolveParent()));
	if (retStyle == nullptr) {
		$assign(retStyle, addStyle(nullptr, nullptr));
		localStyle->setResolveParent(retStyle);
	}
	return retStyle;
}

$Style* StyleSheet::getResolvedStyle($String* selector, $Vector* elements, $HTML$Tag* t) {
	$synchronized(this) {
		$var($Style, retStyle, $cast($Style, $nc(this->resolvedStyles)->get(selector)));
		if (retStyle == nullptr) {
			$assign(retStyle, createResolvedStyle(selector, elements, t));
		}
		return retStyle;
	}
}

$Style* StyleSheet::getResolvedStyle($String* selector) {
	$synchronized(this) {
		$var($Style, retStyle, $cast($Style, $nc(this->resolvedStyles)->get(selector)));
		if (retStyle == nullptr) {
			$assign(retStyle, createResolvedStyle(selector));
		}
		return retStyle;
	}
}

void StyleSheet::addSortedStyle($StyleSheet$SelectorMapping* mapping, $Vector* elements) {
	$useLocalCurrentObjectStackCache();
	int32_t size = $nc(elements)->size();
	if (size > 0) {
		int32_t specificity = $nc(mapping)->getSpecificity();
		for (int32_t counter = 0; counter < size; ++counter) {
			if (specificity >= $nc(($cast($StyleSheet$SelectorMapping, $(elements->elementAt(counter)))))->getSpecificity()) {
				elements->insertElementAt(mapping, counter);
				return;
			}
		}
	}
	elements->addElement(mapping);
}

void StyleSheet::getStyles($StyleSheet$SelectorMapping* parentMapping, $Vector* styles, $StringArray* tags, $StringArray* ids, $StringArray* classes, int32_t index, int32_t numElements, $Hashtable* alreadyChecked) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if ($nc(alreadyChecked)->contains(parentMapping)) {
			return;
		}
		$nc(alreadyChecked)->put(parentMapping, parentMapping);
		$var($Style, style, $nc(parentMapping)->getStyle());
		if (style != nullptr) {
			addSortedStyle(parentMapping, styles);
		}
		for (int32_t counter = index; counter < numElements; ++counter) {
			$var($String, tagString, $nc(tags)->get(counter));
			if (tagString != nullptr) {
				$var($StyleSheet$SelectorMapping, childMapping, parentMapping->getChildSelectorMapping(tagString, false));
				if (childMapping != nullptr) {
					getStyles(childMapping, styles, tags, ids, classes, counter + 1, numElements, alreadyChecked);
				}
				if ($nc(classes)->get(counter) != nullptr) {
					$var($String, className, classes->get(counter));
					$assign(childMapping, parentMapping->getChildSelectorMapping($$str({tagString, "."_s, className}), false));
					if (childMapping != nullptr) {
						getStyles(childMapping, styles, tags, ids, classes, counter + 1, numElements, alreadyChecked);
					}
					$assign(childMapping, parentMapping->getChildSelectorMapping($$str({"."_s, className}), false));
					if (childMapping != nullptr) {
						getStyles(childMapping, styles, tags, ids, classes, counter + 1, numElements, alreadyChecked);
					}
				}
				if ($nc(ids)->get(counter) != nullptr) {
					$var($String, idName, ids->get(counter));
					$assign(childMapping, parentMapping->getChildSelectorMapping($$str({tagString, "#"_s, idName}), false));
					if (childMapping != nullptr) {
						getStyles(childMapping, styles, tags, ids, classes, counter + 1, numElements, alreadyChecked);
					}
					$assign(childMapping, parentMapping->getChildSelectorMapping($$str({"#"_s, idName}), false));
					if (childMapping != nullptr) {
						getStyles(childMapping, styles, tags, ids, classes, counter + 1, numElements, alreadyChecked);
					}
				}
			}
		}
	}
}

$Style* StyleSheet::createResolvedStyle($String* selector, $StringArray* tags, $StringArray* ids, $StringArray* classes) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($StyleSheet$SearchBuffer, sb, $StyleSheet$SearchBuffer::obtainSearchBuffer());
		$var($Vector, tempVector, $nc(sb)->getVector());
		$var($Hashtable, tempHashtable, sb->getHashtable());
		{
			$var($Throwable, var$0, nullptr);
			$var($Style, var$2, nullptr);
			bool return$1 = false;
			try {
				$var($StyleSheet$SelectorMapping, mapping, getRootSelectorMapping());
				int32_t numElements = $nc(tags)->length;
				$var($String, tagString, tags->get(0));
				$var($StyleSheet$SelectorMapping, childMapping, $nc(mapping)->getChildSelectorMapping(tagString, false));
				if (childMapping != nullptr) {
					getStyles(childMapping, tempVector, tags, ids, classes, 1, numElements, tempHashtable);
				}
				if ($nc(classes)->get(0) != nullptr) {
					$var($String, className, classes->get(0));
					$assign(childMapping, mapping->getChildSelectorMapping($$str({tagString, "."_s, className}), false));
					if (childMapping != nullptr) {
						getStyles(childMapping, tempVector, tags, ids, classes, 1, numElements, tempHashtable);
					}
					$assign(childMapping, mapping->getChildSelectorMapping($$str({"."_s, className}), false));
					if (childMapping != nullptr) {
						getStyles(childMapping, tempVector, tags, ids, classes, 1, numElements, tempHashtable);
					}
				}
				if ($nc(ids)->get(0) != nullptr) {
					$var($String, idName, ids->get(0));
					$assign(childMapping, mapping->getChildSelectorMapping($$str({tagString, "#"_s, idName}), false));
					if (childMapping != nullptr) {
						getStyles(childMapping, tempVector, tags, ids, classes, 1, numElements, tempHashtable);
					}
					$assign(childMapping, mapping->getChildSelectorMapping($$str({"#"_s, idName}), false));
					if (childMapping != nullptr) {
						getStyles(childMapping, tempVector, tags, ids, classes, 1, numElements, tempHashtable);
					}
				}
				int32_t numLinkedSS = (this->linkedStyleSheets != nullptr) ? $nc(this->linkedStyleSheets)->size() : 0;
				int32_t numStyles = $nc(tempVector)->size();
				$var($AttributeSetArray, attrs, $new($AttributeSetArray, numStyles + numLinkedSS));
				for (int32_t counter = 0; counter < numStyles; ++counter) {
					attrs->set(counter, $($nc(($cast($StyleSheet$SelectorMapping, $(tempVector->elementAt(counter)))))->getStyle()));
				}
				for (int32_t counter = 0; counter < numLinkedSS; ++counter) {
					$var($AttributeSet, attr, $nc(($cast(StyleSheet, $($nc(this->linkedStyleSheets)->elementAt(counter)))))->getRule(selector));
					if (attr == nullptr) {
						$init($SimpleAttributeSet);
						attrs->set(counter + numStyles, $SimpleAttributeSet::EMPTY);
					} else {
						attrs->set(counter + numStyles, attr);
					}
				}
				$var($StyleSheet$ResolvedStyle, retStyle, $new($StyleSheet$ResolvedStyle, selector, attrs, numStyles));
				$nc(this->resolvedStyles)->put(selector, retStyle);
				$assign(var$2, retStyle);
				return$1 = true;
				goto $finally;
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} $finally: {
				$StyleSheet$SearchBuffer::releaseSearchBuffer(sb);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	}
	$shouldNotReachHere();
}

$Style* StyleSheet::createResolvedStyle($String* selector, $Vector* elements, $HTML$Tag* t) {
	$useLocalCurrentObjectStackCache();
	int32_t numElements = $nc(elements)->size();
	$var($StringArray, tags, $new($StringArray, numElements));
	$var($StringArray, ids, $new($StringArray, numElements));
	$var($StringArray, classes, $new($StringArray, numElements));
	for (int32_t counter = 0; counter < numElements; ++counter) {
		$var($Element, e, $cast($Element, elements->elementAt(counter)));
		$var($AttributeSet, attr, $nc(e)->getAttributes());
		if (counter == 0 && e->isLeaf()) {
			$var($Object, testAttr, $nc(attr)->getAttribute(t));
			if ($instanceOf($AttributeSet, testAttr)) {
				$assign(attr, $cast($AttributeSet, testAttr));
			} else {
				$assign(attr, nullptr);
			}
		}
		if (attr != nullptr) {
			$init($StyleConstants);
			$var($HTML$Tag, tag, $cast($HTML$Tag, attr->getAttribute($StyleConstants::NameAttribute)));
			if (tag != nullptr) {
				tags->set(counter, $(tag->toString()));
			} else {
				tags->set(counter, nullptr);
			}
			$init($HTML$Attribute);
			if (attr->isDefined($HTML$Attribute::CLASS)) {
				classes->set(counter, $($nc($of($(attr->getAttribute($HTML$Attribute::CLASS))))->toString()));
			} else {
				classes->set(counter, nullptr);
			}
			if (attr->isDefined($HTML$Attribute::ID)) {
				ids->set(counter, $($nc($of($(attr->getAttribute($HTML$Attribute::ID))))->toString()));
			} else {
				ids->set(counter, nullptr);
			}
		} else {
			int32_t var$0 = counter;
			int32_t var$1 = counter;
			tags->set(var$0, ids->set(var$1, classes->set(counter, nullptr)));
		}
	}
	tags->set(0, $($nc(t)->toString()));
	return createResolvedStyle(selector, tags, ids, classes);
}

$Style* StyleSheet::createResolvedStyle($String* selector) {
	$useLocalCurrentObjectStackCache();
	$var($StyleSheet$SearchBuffer, sb, $StyleSheet$SearchBuffer::obtainSearchBuffer());
	$var($Vector, elements, $nc(sb)->getVector());
	{
		$var($Throwable, var$0, nullptr);
		$var($Style, var$2, nullptr);
		bool return$1 = false;
		try {
			bool done = false;
			int32_t dotIndex = 0;
			int32_t spaceIndex = 0;
			int32_t poundIndex = 0;
			int32_t lastIndex = 0;
			int32_t length = $nc(selector)->length();
			while (lastIndex < length) {
				if (dotIndex == lastIndex) {
					dotIndex = selector->indexOf((int32_t)u'.', lastIndex);
				}
				if (poundIndex == lastIndex) {
					poundIndex = selector->indexOf((int32_t)u'#', lastIndex);
				}
				spaceIndex = selector->indexOf((int32_t)u' ', lastIndex);
				if (spaceIndex == -1) {
					spaceIndex = length;
				}
				if (dotIndex != -1 && poundIndex != -1 && dotIndex < spaceIndex && poundIndex < spaceIndex) {
					if (poundIndex < dotIndex) {
						if (lastIndex == poundIndex) {
							$nc(elements)->addElement(""_s);
						} else {
							$nc(elements)->addElement($(selector->substring(lastIndex, poundIndex)));
						}
						if ((dotIndex + 1) < spaceIndex) {
							$nc(elements)->addElement($(selector->substring(dotIndex + 1, spaceIndex)));
						} else {
							$nc(elements)->addElement(nullptr);
						}
						if ((poundIndex + 1) == dotIndex) {
							$nc(elements)->addElement(nullptr);
						} else {
							$nc(elements)->addElement($(selector->substring(poundIndex + 1, dotIndex)));
						}
					} else if (poundIndex < spaceIndex) {
						if (lastIndex == dotIndex) {
							$nc(elements)->addElement(""_s);
						} else {
							$nc(elements)->addElement($(selector->substring(lastIndex, dotIndex)));
						}
						if ((dotIndex + 1) < poundIndex) {
							$nc(elements)->addElement($(selector->substring(dotIndex + 1, poundIndex)));
						} else {
							$nc(elements)->addElement(nullptr);
						}
						if ((poundIndex + 1) == spaceIndex) {
							$nc(elements)->addElement(nullptr);
						} else {
							$nc(elements)->addElement($(selector->substring(poundIndex + 1, spaceIndex)));
						}
					}
					dotIndex = (poundIndex = spaceIndex + 1);
				} else if (dotIndex != -1 && dotIndex < spaceIndex) {
					if (dotIndex == lastIndex) {
						$nc(elements)->addElement(""_s);
					} else {
						$nc(elements)->addElement($(selector->substring(lastIndex, dotIndex)));
					}
					if ((dotIndex + 1) == spaceIndex) {
						$nc(elements)->addElement(nullptr);
					} else {
						$nc(elements)->addElement($(selector->substring(dotIndex + 1, spaceIndex)));
					}
					$nc(elements)->addElement(nullptr);
					dotIndex = spaceIndex + 1;
				} else if (poundIndex != -1 && poundIndex < spaceIndex) {
					if (poundIndex == lastIndex) {
						$nc(elements)->addElement(""_s);
					} else {
						$nc(elements)->addElement($(selector->substring(lastIndex, poundIndex)));
					}
					$nc(elements)->addElement(nullptr);
					if ((poundIndex + 1) == spaceIndex) {
						elements->addElement(nullptr);
					} else {
						elements->addElement($(selector->substring(poundIndex + 1, spaceIndex)));
					}
					poundIndex = spaceIndex + 1;
				} else {
					$nc(elements)->addElement($(selector->substring(lastIndex, spaceIndex)));
					elements->addElement(nullptr);
					elements->addElement(nullptr);
				}
				lastIndex = spaceIndex + 1;
			}
			int32_t total = $nc(elements)->size();
			int32_t numTags = total / 3;
			$var($StringArray, tags, $new($StringArray, numTags));
			$var($StringArray, ids, $new($StringArray, numTags));
			$var($StringArray, classes, $new($StringArray, numTags));
			{
				int32_t index = 0;
				int32_t eIndex = total - 3;
				for (; index < numTags; ++index, eIndex -= 3) {
					tags->set(index, $cast($String, $(elements->elementAt(eIndex))));
					classes->set(index, $cast($String, $(elements->elementAt(eIndex + 1))));
					ids->set(index, $cast($String, $(elements->elementAt(eIndex + 2))));
				}
			}
			$assign(var$2, createResolvedStyle(selector, tags, ids, classes));
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$StyleSheet$SearchBuffer::releaseSearchBuffer(sb);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void StyleSheet::refreshResolvedRules($String* selectorName, $StringArray* selector, $Style* newStyle, int32_t specificity) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if ($nc(this->resolvedStyles)->size() > 0) {
			$var($Enumeration, values, $nc(this->resolvedStyles)->elements());
			while ($nc(values)->hasMoreElements()) {
				$var($StyleSheet$ResolvedStyle, style, $cast($StyleSheet$ResolvedStyle, values->nextElement()));
				if ($nc(style)->matches(selectorName)) {
					style->insertStyle(newStyle, specificity);
				}
			}
		}
	}
}

$Object* StyleSheet::fontSizeInherit() {
	if (this->fontSizeInherit$ == nullptr) {
		$set(this, fontSizeInherit$, $$new($CSS$FontSize, static_cast<$CSS*>($nc(this->css)))->parseCssValue("100%"_s));
	}
	return $of(this->fontSizeInherit$);
}

void StyleSheet::rebaseSizeMap(int32_t base) {
	int32_t minimalFontSize = 4;
	$set(this, sizeMap, $new($ints, $nc(StyleSheet::sizeMapDefault)->length));
	for (int32_t i = 0; i < $nc(StyleSheet::sizeMapDefault)->length; ++i) {
		$init($CSS);
		$nc(this->sizeMap)->set(i, $Math::max($div(base * $nc(StyleSheet::sizeMapDefault)->get(i), $nc(StyleSheet::sizeMapDefault)->get($CSS::baseFontSizeIndex)), minimalFontSize));
	}
}

$ints* StyleSheet::getSizeMap() {
	return this->sizeMap;
}

bool StyleSheet::isW3CLengthUnits() {
	return this->w3cLengthUnits;
}

void clinit$StyleSheet($Class* class$) {
	$assignStatic(StyleSheet::noBorder, $new($EmptyBorder, 0, 0, 0, 0));
	$assignStatic(StyleSheet::sizeMapDefault, $new($ints, {
		8,
		10,
		12,
		14,
		18,
		24,
		36
	}));
}

StyleSheet::StyleSheet() {
}

$Class* StyleSheet::load$($String* name, bool initialize) {
	$loadClass(StyleSheet, name, initialize, &_StyleSheet_ClassInfo_, clinit$StyleSheet, allocate$StyleSheet);
	return class$;
}

$Class* StyleSheet::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax