#include <javax/swing/text/html/CSS$StringValue.h>

#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/CSS$CssValue.h>
#include <javax/swing/text/html/CSS.h>
#include <jcpp.h>

#undef ALIGN_CENTER
#undef ALIGN_JUSTIFIED
#undef ALIGN_LEFT
#undef ALIGN_RIGHT
#undef FALSE
#undef TRUE

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $View = ::javax::swing::text::View;
using $CSS = ::javax::swing::text::html::CSS;
using $CSS$CssValue = ::javax::swing::text::html::CSS$CssValue;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$MethodInfo _CSS$StringValue_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CSS$StringValue::*)()>(&CSS$StringValue::init$))},
	{"fromStyleConstants", "(Ljavax/swing/text/StyleConstants;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0},
	{"isItalic", "()Z", nullptr, 0},
	{"isStrike", "()Z", nullptr, 0},
	{"isSub", "()Z", nullptr, 0},
	{"isSup", "()Z", nullptr, 0},
	{"isUnderline", "()Z", nullptr, 0},
	{"parseCssValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, 0},
	{"toStyleConstants", "(Ljavax/swing/text/StyleConstants;Ljavax/swing/text/View;)Ljava/lang/Object;", nullptr, 0},
	{}
};

$InnerClassInfo _CSS$StringValue_InnerClassesInfo_[] = {
	{"javax.swing.text.html.CSS$StringValue", "javax.swing.text.html.CSS", "StringValue", $STATIC},
	{"javax.swing.text.html.CSS$CssValue", "javax.swing.text.html.CSS", "CssValue", $STATIC},
	{}
};

$ClassInfo _CSS$StringValue_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.CSS$StringValue",
	"javax.swing.text.html.CSS$CssValue",
	nullptr,
	nullptr,
	_CSS$StringValue_MethodInfo_,
	nullptr,
	nullptr,
	_CSS$StringValue_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.CSS"
};

$Object* allocate$CSS$StringValue($Class* clazz) {
	return $of($alloc(CSS$StringValue));
}

void CSS$StringValue::init$() {
	$CSS$CssValue::init$();
}

$Object* CSS$StringValue::parseCssValue($String* value) {
	$var(CSS$StringValue, sv, $new(CSS$StringValue));
	$set(sv, svalue, value);
	return $of(sv);
}

$Object* CSS$StringValue::fromStyleConstants($StyleConstants* key, Object$* value) {
	$init($StyleConstants);
	if ($equals(key, $StyleConstants::Italic)) {
		$init($Boolean);
		if ($nc($of(value))->equals($Boolean::TRUE)) {
			return $of(parseCssValue("italic"_s));
		}
		return $of(parseCssValue(""_s));
	} else {
		if ($equals(key, $StyleConstants::Underline)) {
			$init($Boolean);
			if ($nc($of(value))->equals($Boolean::TRUE)) {
				return $of(parseCssValue("underline"_s));
			}
			return $of(parseCssValue(""_s));
		} else {
			if ($equals(key, $StyleConstants::Alignment)) {
				int32_t align = $nc(($cast($Integer, value)))->intValue();
				$var($String, ta, nullptr);
				switch (align) {
				case $StyleConstants::ALIGN_LEFT:
					{
						$assign(ta, "left"_s);
						break;
					}
				case $StyleConstants::ALIGN_RIGHT:
					{
						$assign(ta, "right"_s);
						break;
					}
				case $StyleConstants::ALIGN_CENTER:
					{
						$assign(ta, "center"_s);
						break;
					}
				case $StyleConstants::ALIGN_JUSTIFIED:
					{
						$assign(ta, "justify"_s);
						break;
					}
				default:
					{
						$assign(ta, "left"_s);
					}
				}
				return $of(parseCssValue(ta));
			} else {
				if ($equals(key, $StyleConstants::StrikeThrough)) {
					$init($Boolean);
					if ($nc($of(value))->equals($Boolean::TRUE)) {
						return $of(parseCssValue("line-through"_s));
					}
					return $of(parseCssValue(""_s));
				} else {
					if ($equals(key, $StyleConstants::Superscript)) {
						$init($Boolean);
						if ($nc($of(value))->equals($Boolean::TRUE)) {
							return $of(parseCssValue("super"_s));
						}
						return $of(parseCssValue(""_s));
					} else {
						if ($equals(key, $StyleConstants::Subscript)) {
							$init($Boolean);
							if ($nc($of(value))->equals($Boolean::TRUE)) {
								return $of(parseCssValue("sub"_s));
							}
							return $of(parseCssValue(""_s));
						}
					}
				}
			}
		}
	}
	return $of(nullptr);
}

$Object* CSS$StringValue::toStyleConstants($StyleConstants* key, $View* v) {
	$init($StyleConstants);
	if ($equals(key, $StyleConstants::Italic)) {
		if ($nc(this->svalue)->indexOf("italic"_s) >= 0) {
			$init($Boolean);
			return $of($Boolean::TRUE);
		}
		$init($Boolean);
		return $of($Boolean::FALSE);
	} else {
		if ($equals(key, $StyleConstants::Underline)) {
			if ($nc(this->svalue)->indexOf("underline"_s) >= 0) {
				$init($Boolean);
				return $of($Boolean::TRUE);
			}
			$init($Boolean);
			return $of($Boolean::FALSE);
		} else {
			if ($equals(key, $StyleConstants::Alignment)) {
				if ($nc(this->svalue)->equals("right"_s)) {
					return $of($Integer::valueOf($StyleConstants::ALIGN_RIGHT));
				} else if ($nc(this->svalue)->equals("center"_s)) {
					return $of($Integer::valueOf($StyleConstants::ALIGN_CENTER));
				} else if ($nc(this->svalue)->equals("justify"_s)) {
					return $of($Integer::valueOf($StyleConstants::ALIGN_JUSTIFIED));
				}
				return $of($Integer::valueOf($StyleConstants::ALIGN_LEFT));
			} else {
				if ($equals(key, $StyleConstants::StrikeThrough)) {
					if ($nc(this->svalue)->indexOf("line-through"_s) >= 0) {
						$init($Boolean);
						return $of($Boolean::TRUE);
					}
					$init($Boolean);
					return $of($Boolean::FALSE);
				} else {
					if ($equals(key, $StyleConstants::Superscript)) {
						if ($nc(this->svalue)->indexOf("super"_s) >= 0) {
							$init($Boolean);
							return $of($Boolean::TRUE);
						}
						$init($Boolean);
						return $of($Boolean::FALSE);
					} else {
						if ($equals(key, $StyleConstants::Subscript)) {
							if ($nc(this->svalue)->indexOf("sub"_s) >= 0) {
								$init($Boolean);
								return $of($Boolean::TRUE);
							}
							$init($Boolean);
							return $of($Boolean::FALSE);
						}
					}
				}
			}
		}
	}
	return $of(nullptr);
}

bool CSS$StringValue::isItalic() {
	return ($nc(this->svalue)->indexOf("italic"_s) != -1);
}

bool CSS$StringValue::isStrike() {
	return ($nc(this->svalue)->indexOf("line-through"_s) != -1);
}

bool CSS$StringValue::isUnderline() {
	return ($nc(this->svalue)->indexOf("underline"_s) != -1);
}

bool CSS$StringValue::isSub() {
	return ($nc(this->svalue)->indexOf("sub"_s) != -1);
}

bool CSS$StringValue::isSup() {
	return ($nc(this->svalue)->indexOf("sup"_s) != -1);
}

CSS$StringValue::CSS$StringValue() {
}

$Class* CSS$StringValue::load$($String* name, bool initialize) {
	$loadClass(CSS$StringValue, name, initialize, &_CSS$StringValue_ClassInfo_, allocate$CSS$StringValue);
	return class$;
}

$Class* CSS$StringValue::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax