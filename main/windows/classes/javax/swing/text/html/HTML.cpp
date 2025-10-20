#include <javax/swing/text/html/HTML.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Hashtable.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyleContext.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <jcpp.h>

#undef B
#undef COMMENT
#undef CONTENT
#undef FONT
#undef HTML
#undef I
#undef IMPLIED
#undef NULL_ATTRIBUTE_VALUE
#undef STRIKE
#undef SUB
#undef SUP
#undef U

using $HTML$AttributeArray = $Array<::javax::swing::text::html::HTML$Attribute>;
using $HTML$TagArray = $Array<::javax::swing::text::html::HTML$Tag>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Hashtable = ::java::util::Hashtable;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyleContext = ::javax::swing::text::StyleContext;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _HTML_FieldInfo_[] = {
	{"tagHashtable", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljavax/swing/text/html/HTML$Tag;>;", $PRIVATE | $STATIC | $FINAL, $staticField(HTML, tagHashtable)},
	{"scMapping", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/Object;Ljavax/swing/text/html/HTML$Tag;>;", $PRIVATE | $STATIC | $FINAL, $staticField(HTML, scMapping)},
	{"NULL_ATTRIBUTE_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML, NULL_ATTRIBUTE_VALUE)},
	{"attHashtable", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljavax/swing/text/html/HTML$Attribute;>;", $PRIVATE | $STATIC | $FINAL, $staticField(HTML, attHashtable)},
	{}
};

$MethodInfo _HTML_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HTML::*)()>(&HTML::init$))},
	{"getAllAttributeKeys", "()[Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$HTML$AttributeArray*(*)()>(&HTML::getAllAttributeKeys))},
	{"getAllTags", "()[Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$HTML$TagArray*(*)()>(&HTML::getAllTags))},
	{"getAttributeKey", "(Ljava/lang/String;)Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$HTML$Attribute*(*)($String*)>(&HTML::getAttributeKey))},
	{"getIntegerAttributeValue", "(Ljavax/swing/text/AttributeSet;Ljavax/swing/text/html/HTML$Attribute;I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($AttributeSet*,$HTML$Attribute*,int32_t)>(&HTML::getIntegerAttributeValue))},
	{"getTag", "(Ljava/lang/String;)Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$HTML$Tag*(*)($String*)>(&HTML::getTag))},
	{"getTagForStyleConstantsKey", "(Ljavax/swing/text/StyleConstants;)Ljavax/swing/text/html/HTML$Tag;", nullptr, $STATIC, $method(static_cast<$HTML$Tag*(*)($StyleConstants*)>(&HTML::getTagForStyleConstantsKey))},
	{}
};

$InnerClassInfo _HTML_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HTML$Attribute", "javax.swing.text.html.HTML", "Attribute", $PUBLIC | $STATIC | $FINAL},
	{"javax.swing.text.html.HTML$UnknownTag", "javax.swing.text.html.HTML", "UnknownTag", $PUBLIC | $STATIC},
	{"javax.swing.text.html.HTML$Tag", "javax.swing.text.html.HTML", "Tag", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _HTML_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.HTML",
	"java.lang.Object",
	nullptr,
	_HTML_FieldInfo_,
	_HTML_MethodInfo_,
	nullptr,
	nullptr,
	_HTML_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.html.HTML$Attribute,javax.swing.text.html.HTML$UnknownTag,javax.swing.text.html.HTML$Tag"
};

$Object* allocate$HTML($Class* clazz) {
	return $of($alloc(HTML));
}

$Hashtable* HTML::tagHashtable = nullptr;

$Hashtable* HTML::scMapping = nullptr;

$String* HTML::NULL_ATTRIBUTE_VALUE = nullptr;
$Hashtable* HTML::attHashtable = nullptr;

void HTML::init$() {
}

$HTML$TagArray* HTML::getAllTags() {
	$init(HTML);
	$init($HTML$Tag);
	$var($HTML$TagArray, tags, $new($HTML$TagArray, $nc($HTML$Tag::allTags)->length));
	$System::arraycopy($HTML$Tag::allTags, 0, tags, 0, $nc($HTML$Tag::allTags)->length);
	return tags;
}

$HTML$Tag* HTML::getTag($String* tagName) {
	$init(HTML);
	$var($HTML$Tag, t, $cast($HTML$Tag, $nc(HTML::tagHashtable)->get(tagName)));
	return (t == nullptr ? ($HTML$Tag*)nullptr : t);
}

$HTML$Tag* HTML::getTagForStyleConstantsKey($StyleConstants* sc) {
	$init(HTML);
	return $cast($HTML$Tag, $nc(HTML::scMapping)->get(sc));
}

int32_t HTML::getIntegerAttributeValue($AttributeSet* attr, $HTML$Attribute* key, int32_t def) {
	$init(HTML);
	$useLocalCurrentObjectStackCache();
	int32_t value = def;
	$var($String, istr, $cast($String, $nc(attr)->getAttribute(key)));
	if (istr != nullptr) {
		try {
			value = $nc($($Integer::valueOf(istr)))->intValue();
		} catch ($NumberFormatException&) {
			$var($NumberFormatException, e, $catch());
			value = def;
		}
	}
	return value;
}

$HTML$AttributeArray* HTML::getAllAttributeKeys() {
	$init(HTML);
	$init($HTML$Attribute);
	$var($HTML$AttributeArray, attributes, $new($HTML$AttributeArray, $nc($HTML$Attribute::allAttributes)->length));
	$System::arraycopy($HTML$Attribute::allAttributes, 0, attributes, 0, $nc($HTML$Attribute::allAttributes)->length);
	return attributes;
}

$HTML$Attribute* HTML::getAttributeKey($String* attName) {
	$init(HTML);
	$var($HTML$Attribute, a, $cast($HTML$Attribute, $nc(HTML::attHashtable)->get(attName)));
	if (a == nullptr) {
		return nullptr;
	}
	return a;
}

void clinit$HTML($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(HTML::NULL_ATTRIBUTE_VALUE, "#DEFAULT"_s);
	$assignStatic(HTML::tagHashtable, $new($Hashtable, 73));
	$assignStatic(HTML::scMapping, $new($Hashtable, 8));
	{
		$init($HTML$Tag);
		for (int32_t i = 0; i < $nc($HTML$Tag::allTags)->length; ++i) {
			$nc(HTML::tagHashtable)->put($($nc($nc($HTML$Tag::allTags)->get(i))->toString()), $nc($HTML$Tag::allTags)->get(i));
			$StyleContext::registerStaticAttributeKey($nc($HTML$Tag::allTags)->get(i));
		}
		$StyleContext::registerStaticAttributeKey($HTML$Tag::IMPLIED);
		$StyleContext::registerStaticAttributeKey($HTML$Tag::CONTENT);
		$StyleContext::registerStaticAttributeKey($HTML$Tag::COMMENT);
		$init($HTML$Attribute);
		for (int32_t i = 0; i < $nc($HTML$Attribute::allAttributes)->length; ++i) {
			$StyleContext::registerStaticAttributeKey($nc($HTML$Attribute::allAttributes)->get(i));
		}
		$StyleContext::registerStaticAttributeKey(HTML::NULL_ATTRIBUTE_VALUE);
		$init($StyleConstants);
		$nc(HTML::scMapping)->put($StyleConstants::Bold, $HTML$Tag::B);
		$nc(HTML::scMapping)->put($StyleConstants::Italic, $HTML$Tag::I);
		$nc(HTML::scMapping)->put($StyleConstants::Underline, $HTML$Tag::U);
		$nc(HTML::scMapping)->put($StyleConstants::StrikeThrough, $HTML$Tag::STRIKE);
		$nc(HTML::scMapping)->put($StyleConstants::Superscript, $HTML$Tag::SUP);
		$nc(HTML::scMapping)->put($StyleConstants::Subscript, $HTML$Tag::SUB);
		$nc(HTML::scMapping)->put($StyleConstants::FontFamily, $HTML$Tag::FONT);
		$nc(HTML::scMapping)->put($StyleConstants::FontSize, $HTML$Tag::FONT);
	}
	$assignStatic(HTML::attHashtable, $new($Hashtable, 77));
	{
		$init($HTML$Attribute);
		for (int32_t i = 0; i < $nc($HTML$Attribute::allAttributes)->length; ++i) {
			$nc(HTML::attHashtable)->put($($nc($nc($HTML$Attribute::allAttributes)->get(i))->toString()), $nc($HTML$Attribute::allAttributes)->get(i));
		}
	}
}

HTML::HTML() {
}

$Class* HTML::load$($String* name, bool initialize) {
	$loadClass(HTML, name, initialize, &_HTML_ClassInfo_, clinit$HTML, allocate$HTML);
	return class$;
}

$Class* HTML::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax