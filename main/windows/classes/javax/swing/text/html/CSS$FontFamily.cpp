#include <javax/swing/text/html/CSS$FontFamily.h>

#include <java/awt/Font.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/CSS$CssValue.h>
#include <javax/swing/text/html/CSS.h>
#include <jcpp.h>

#undef SANS_SERIF

using $Font = ::java::awt::Font;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $View = ::javax::swing::text::View;
using $CSS = ::javax::swing::text::html::CSS;
using $CSS$CssValue = ::javax::swing::text::html::CSS$CssValue;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _CSS$FontFamily_FieldInfo_[] = {
	{"family", "Ljava/lang/String;", nullptr, 0, $field(CSS$FontFamily, family)},
	{}
};

$MethodInfo _CSS$FontFamily_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CSS$FontFamily::*)()>(&CSS$FontFamily::init$))},
	{"fromStyleConstants", "(Ljavax/swing/text/StyleConstants;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0},
	{"getValue", "()Ljava/lang/String;", nullptr, 0},
	{"parseCssValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, 0},
	{"parseHtmlValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, 0},
	{"setFontName", "(Ljavax/swing/text/html/CSS$FontFamily;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(CSS$FontFamily::*)(CSS$FontFamily*,$String*)>(&CSS$FontFamily::setFontName))},
	{"toStyleConstants", "(Ljavax/swing/text/StyleConstants;Ljavax/swing/text/View;)Ljava/lang/Object;", nullptr, 0},
	{}
};

$InnerClassInfo _CSS$FontFamily_InnerClassesInfo_[] = {
	{"javax.swing.text.html.CSS$FontFamily", "javax.swing.text.html.CSS", "FontFamily", $STATIC},
	{"javax.swing.text.html.CSS$CssValue", "javax.swing.text.html.CSS", "CssValue", $STATIC},
	{}
};

$ClassInfo _CSS$FontFamily_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.CSS$FontFamily",
	"javax.swing.text.html.CSS$CssValue",
	nullptr,
	_CSS$FontFamily_FieldInfo_,
	_CSS$FontFamily_MethodInfo_,
	nullptr,
	nullptr,
	_CSS$FontFamily_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.CSS"
};

$Object* allocate$CSS$FontFamily($Class* clazz) {
	return $of($alloc(CSS$FontFamily));
}

void CSS$FontFamily::init$() {
	$CSS$CssValue::init$();
}

$String* CSS$FontFamily::getValue() {
	return this->family;
}

$Object* CSS$FontFamily::parseCssValue($String* value) {
	$useLocalCurrentObjectStackCache();
	int32_t cIndex = $nc(value)->indexOf((int32_t)u',');
	$var(CSS$FontFamily, ff, $new(CSS$FontFamily));
	$set(ff, svalue, value);
	$set(ff, family, nullptr);
	if (cIndex == -1) {
		setFontName(ff, value);
	} else {
		bool done = false;
		int32_t lastIndex = 0;
		int32_t length = value->length();
		cIndex = 0;
		while (!done) {
			while (cIndex < length && $Character::isWhitespace(value->charAt(cIndex))) {
				++cIndex;
			}
			lastIndex = cIndex;
			cIndex = value->indexOf((int32_t)u',', cIndex);
			if (cIndex == -1) {
				cIndex = length;
			}
			if (lastIndex < length) {
				if (lastIndex != cIndex) {
					int32_t lastCharIndex = cIndex;
					if (cIndex > 0 && value->charAt(cIndex - 1) == u' ') {
						--lastCharIndex;
					}
					setFontName(ff, $(value->substring(lastIndex, lastCharIndex)));
					done = (ff->family != nullptr);
				}
				++cIndex;
			} else {
				done = true;
			}
		}
	}
	if (ff->family == nullptr) {
		$init($Font);
		$set(ff, family, $Font::SANS_SERIF);
	}
	return $of(ff);
}

void CSS$FontFamily::setFontName(CSS$FontFamily* ff, $String* fontName) {
	$set($nc(ff), family, fontName);
}

$Object* CSS$FontFamily::parseHtmlValue($String* value) {
	return $of(parseCssValue(value));
}

$Object* CSS$FontFamily::fromStyleConstants($StyleConstants* key, Object$* value) {
	return $of(parseCssValue($($nc($of(value))->toString())));
}

$Object* CSS$FontFamily::toStyleConstants($StyleConstants* key, $View* v) {
	return $of(this->family);
}

CSS$FontFamily::CSS$FontFamily() {
}

$Class* CSS$FontFamily::load$($String* name, bool initialize) {
	$loadClass(CSS$FontFamily, name, initialize, &_CSS$FontFamily_ClassInfo_, allocate$CSS$FontFamily);
	return class$;
}

$Class* CSS$FontFamily::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax