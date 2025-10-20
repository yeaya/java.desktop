#include <javax/swing/text/html/StyleSheet$CssParser.h>

#include <java/io/IOException.h>
#include <java/io/Reader.h>
#include <java/io/StringReader.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <java/util/Vector.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/html/CSS$Attribute.h>
#include <javax/swing/text/html/CSS.h>
#include <javax/swing/text/html/CSSParser$CSSParserCallback.h>
#include <javax/swing/text/html/CSSParser.h>
#include <javax/swing/text/html/StyleSheet.h>
#include <jcpp.h>

#undef LIST_STYLE_IMAGE

using $IOException = ::java::io::IOException;
using $Reader = ::java::io::Reader;
using $StringReader = ::java::io::StringReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $Vector = ::java::util::Vector;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $CSS = ::javax::swing::text::html::CSS;
using $CSS$Attribute = ::javax::swing::text::html::CSS$Attribute;
using $CSSParser = ::javax::swing::text::html::CSSParser;
using $CSSParser$CSSParserCallback = ::javax::swing::text::html::CSSParser$CSSParserCallback;
using $StyleSheet = ::javax::swing::text::html::StyleSheet;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _StyleSheet$CssParser_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/html/StyleSheet;", nullptr, $FINAL | $SYNTHETIC, $field(StyleSheet$CssParser, this$0)},
	{"selectors", "Ljava/util/Vector;", "Ljava/util/Vector<[Ljava/lang/String;>;", 0, $field(StyleSheet$CssParser, selectors)},
	{"selectorTokens", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/lang/String;>;", 0, $field(StyleSheet$CssParser, selectorTokens)},
	{"propertyName", "Ljava/lang/String;", nullptr, 0, $field(StyleSheet$CssParser, propertyName)},
	{"declaration", "Ljavax/swing/text/MutableAttributeSet;", nullptr, 0, $field(StyleSheet$CssParser, declaration)},
	{"parsingDeclaration", "Z", nullptr, 0, $field(StyleSheet$CssParser, parsingDeclaration)},
	{"isLink", "Z", nullptr, 0, $field(StyleSheet$CssParser, isLink)},
	{"base", "Ljava/net/URL;", nullptr, 0, $field(StyleSheet$CssParser, base)},
	{"parser", "Ljavax/swing/text/html/CSSParser;", nullptr, 0, $field(StyleSheet$CssParser, parser)},
	{}
};

$MethodInfo _StyleSheet$CssParser_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/StyleSheet;)V", nullptr, 0, $method(static_cast<void(StyleSheet$CssParser::*)($StyleSheet*)>(&StyleSheet$CssParser::init$))},
	{"addSelector", "()V", nullptr, $PRIVATE, $method(static_cast<void(StyleSheet$CssParser::*)()>(&StyleSheet$CssParser::addSelector))},
	{"endRule", "()V", nullptr, $PUBLIC},
	{"handleImport", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"handleProperty", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"handleSelector", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"handleValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"parse", "(Ljava/net/URL;Ljava/io/Reader;ZZ)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"parseDeclaration", "(Ljava/lang/String;)Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"parseDeclaration", "(Ljava/io/Reader;)Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"startRule", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StyleSheet$CssParser_InnerClassesInfo_[] = {
	{"javax.swing.text.html.StyleSheet$CssParser", "javax.swing.text.html.StyleSheet", "CssParser", 0},
	{"javax.swing.text.html.CSSParser$CSSParserCallback", "javax.swing.text.html.CSSParser", "CSSParserCallback", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _StyleSheet$CssParser_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.StyleSheet$CssParser",
	"java.lang.Object",
	"javax.swing.text.html.CSSParser$CSSParserCallback",
	_StyleSheet$CssParser_FieldInfo_,
	_StyleSheet$CssParser_MethodInfo_,
	nullptr,
	nullptr,
	_StyleSheet$CssParser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.StyleSheet"
};

$Object* allocate$StyleSheet$CssParser($Class* clazz) {
	return $of($alloc(StyleSheet$CssParser));
}

void StyleSheet$CssParser::init$($StyleSheet* this$0) {
	$set(this, this$0, this$0);
	$set(this, selectors, $new($Vector));
	$set(this, selectorTokens, $new($Vector));
	$set(this, declaration, $new($SimpleAttributeSet));
	$set(this, parser, $new($CSSParser));
}

$AttributeSet* StyleSheet$CssParser::parseDeclaration($String* string) {
	try {
		return parseDeclaration(static_cast<$Reader*>($$new($StringReader, string)));
	} catch ($IOException&) {
		$catch();
	}
	return nullptr;
}

$AttributeSet* StyleSheet$CssParser::parseDeclaration($Reader* r) {
	parse(this->base, r, true, false);
	return $nc(this->declaration)->copyAttributes();
}

void StyleSheet$CssParser::parse($URL* base, $Reader* r, bool parseDeclaration, bool isLink) {
	$set(this, base, base);
	this->isLink = isLink;
	this->parsingDeclaration = parseDeclaration;
	$nc(this->declaration)->removeAttributes(static_cast<$AttributeSet*>(this->declaration));
	$nc(this->selectorTokens)->removeAllElements();
	$nc(this->selectors)->removeAllElements();
	$set(this, propertyName, nullptr);
	$nc(this->parser)->parse(r, this, parseDeclaration);
}

void StyleSheet$CssParser::handleImport($String* importString) {
	$var($URL, url, $CSS::getURL(this->base, importString));
	if (url != nullptr) {
		this->this$0->importStyleSheet(url);
	}
}

void StyleSheet$CssParser::handleSelector($String* selector$renamed) {
	$var($String, selector, selector$renamed);
	bool var$0 = $nc(selector)->startsWith("."_s);
	if (!(var$0 || $nc(selector)->startsWith("#"_s))) {
		$assign(selector, selector->toLowerCase());
	}
	int32_t length = $nc(selector)->length();
	if (selector->endsWith(","_s)) {
		if (length > 1) {
			$assign(selector, selector->substring(0, length - 1));
			$nc(this->selectorTokens)->addElement(selector);
		}
		addSelector();
	} else if (length > 0) {
		$nc(this->selectorTokens)->addElement(selector);
	}
}

void StyleSheet$CssParser::startRule() {
	if ($nc(this->selectorTokens)->size() > 0) {
		addSelector();
	}
	$set(this, propertyName, nullptr);
}

void StyleSheet$CssParser::handleProperty($String* property) {
	$set(this, propertyName, property);
}

void StyleSheet$CssParser::handleValue($String* value$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, value, value$renamed);
	if (this->propertyName != nullptr && value != nullptr && value->length() > 0) {
		$var($CSS$Attribute, cssKey, $CSS::getAttribute(this->propertyName));
		if (cssKey != nullptr) {
			$init($CSS$Attribute);
			if (cssKey == $CSS$Attribute::LIST_STYLE_IMAGE) {
				if (value != nullptr && !value->equals("none"_s)) {
					$var($URL, url, $CSS::getURL(this->base, value));
					if (url != nullptr) {
						$assign(value, url->toString());
					}
				}
			}
			this->this$0->addCSSAttribute(this->declaration, cssKey, value);
		}
		$set(this, propertyName, nullptr);
	}
}

void StyleSheet$CssParser::endRule() {
	$useLocalCurrentObjectStackCache();
	int32_t n = $nc(this->selectors)->size();
	for (int32_t i = 0; i < n; ++i) {
		$var($StringArray, selector, $cast($StringArray, $nc(this->selectors)->elementAt(i)));
		if ($nc(selector)->length > 0) {
			this->this$0->addRule(selector, this->declaration, this->isLink);
		}
	}
	$nc(this->declaration)->removeAttributes(static_cast<$AttributeSet*>(this->declaration));
	$nc(this->selectors)->removeAllElements();
}

void StyleSheet$CssParser::addSelector() {
	$var($StringArray, selector, $new($StringArray, $nc(this->selectorTokens)->size()));
	$nc(this->selectorTokens)->copyInto(selector);
	$nc(this->selectors)->addElement(selector);
	$nc(this->selectorTokens)->removeAllElements();
}

StyleSheet$CssParser::StyleSheet$CssParser() {
}

$Class* StyleSheet$CssParser::load$($String* name, bool initialize) {
	$loadClass(StyleSheet$CssParser, name, initialize, &_StyleSheet$CssParser_ClassInfo_, allocate$StyleSheet$CssParser);
	return class$;
}

$Class* StyleSheet$CssParser::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax