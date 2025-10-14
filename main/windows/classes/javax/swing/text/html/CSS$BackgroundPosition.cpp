#include <javax/swing/text/html/CSS$BackgroundPosition.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/html/CSS$CssValue.h>
#include <javax/swing/text/html/CSS$LengthUnit.h>
#include <javax/swing/text/html/CSS.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CSS = ::javax::swing::text::html::CSS;
using $CSS$CssValue = ::javax::swing::text::html::CSS$CssValue;
using $CSS$LengthUnit = ::javax::swing::text::html::CSS$LengthUnit;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _CSS$BackgroundPosition_FieldInfo_[] = {
	{"horizontalPosition", "F", nullptr, 0, $field(CSS$BackgroundPosition, horizontalPosition)},
	{"verticalPosition", "F", nullptr, 0, $field(CSS$BackgroundPosition, verticalPosition)},
	{"relative", "S", nullptr, 0, $field(CSS$BackgroundPosition, relative)},
	{}
};

$MethodInfo _CSS$BackgroundPosition_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CSS$BackgroundPosition::*)()>(&CSS$BackgroundPosition::init$))},
	{"getHorizontalPosition", "()F", nullptr, 0},
	{"getVerticalPosition", "()F", nullptr, 0},
	{"isHorizontalPositionRelativeToFontSize", "()Z", nullptr, 0},
	{"isHorizontalPositionRelativeToSize", "()Z", nullptr, 0},
	{"isVerticalPositionRelativeToFontSize", "()Z", nullptr, 0},
	{"isVerticalPositionRelativeToSize", "()Z", nullptr, 0},
	{"parseCssValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, 0},
	{}
};

$InnerClassInfo _CSS$BackgroundPosition_InnerClassesInfo_[] = {
	{"javax.swing.text.html.CSS$BackgroundPosition", "javax.swing.text.html.CSS", "BackgroundPosition", $STATIC},
	{"javax.swing.text.html.CSS$CssValue", "javax.swing.text.html.CSS", "CssValue", $STATIC},
	{}
};

$ClassInfo _CSS$BackgroundPosition_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.CSS$BackgroundPosition",
	"javax.swing.text.html.CSS$CssValue",
	nullptr,
	_CSS$BackgroundPosition_FieldInfo_,
	_CSS$BackgroundPosition_MethodInfo_,
	nullptr,
	nullptr,
	_CSS$BackgroundPosition_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.CSS"
};

$Object* allocate$CSS$BackgroundPosition($Class* clazz) {
	return $of($alloc(CSS$BackgroundPosition));
}

void CSS$BackgroundPosition::init$() {
	$CSS$CssValue::init$();
}

$Object* CSS$BackgroundPosition::parseCssValue($String* value) {
	$var($StringArray, strings, $CSS::parseStrings(value));
	int32_t count = $nc(strings)->length;
	$var(CSS$BackgroundPosition, bp, $new(CSS$BackgroundPosition));
	bp->relative = (int16_t)5;
	$set(bp, svalue, value);
	if (count > 0) {
		int16_t found = (int16_t)0;
		int32_t index = 0;
		while (index < count) {
			$var($String, string, strings->get(index++));
			if ($nc(string)->equals("center"_s)) {
				found |= 4;
				continue;
			} else {
				if (((int32_t)(found & (uint32_t)1)) == 0) {
					if (string->equals("top"_s)) {
						found |= 1;
					} else if (string->equals("bottom"_s)) {
						found |= 1;
						bp->verticalPosition = (float)1;
						continue;
					}
				}
				if (((int32_t)(found & (uint32_t)2)) == 0) {
					if (string->equals("left"_s)) {
						found |= 2;
						bp->horizontalPosition = (float)0;
					} else if (string->equals("right"_s)) {
						found |= 2;
						bp->horizontalPosition = (float)1;
					}
				}
			}
		}
		if (found != 0) {
			if (((int32_t)(found & (uint32_t)1)) == 1) {
				if (((int32_t)(found & (uint32_t)2)) == 0) {
					bp->horizontalPosition = 0.5f;
				}
			} else if (((int32_t)(found & (uint32_t)2)) == 2) {
				bp->verticalPosition = 0.5f;
			} else {
				bp->horizontalPosition = (bp->verticalPosition = 0.5f);
			}
		} else {
			$var($CSS$LengthUnit, lu, $new($CSS$LengthUnit, strings->get(0), (int16_t)0, 0.0f));
			if (lu->type == 0) {
				bp->horizontalPosition = lu->value;
				bp->relative = (int16_t)(1 ^ bp->relative);
			} else if (lu->type == 1) {
				bp->horizontalPosition = lu->value;
			} else if (lu->type == 3) {
				bp->horizontalPosition = lu->value;
				bp->relative = (int16_t)((1 ^ bp->relative) | 2);
			}
			if (count > 1) {
				$assign(lu, $new($CSS$LengthUnit, strings->get(1), (int16_t)0, 0.0f));
				if (lu->type == 0) {
					bp->verticalPosition = lu->value;
					bp->relative = (int16_t)(4 ^ bp->relative);
				} else if (lu->type == 1) {
					bp->verticalPosition = lu->value;
				} else if (lu->type == 3) {
					bp->verticalPosition = lu->value;
					bp->relative = (int16_t)((4 ^ bp->relative) | 8);
				}
			} else {
				bp->verticalPosition = 0.5f;
			}
		}
	}
	return $of(bp);
}

bool CSS$BackgroundPosition::isHorizontalPositionRelativeToSize() {
	return (((int32_t)(this->relative & (uint32_t)1)) == 1);
}

bool CSS$BackgroundPosition::isHorizontalPositionRelativeToFontSize() {
	return (((int32_t)(this->relative & (uint32_t)2)) == 2);
}

float CSS$BackgroundPosition::getHorizontalPosition() {
	return this->horizontalPosition;
}

bool CSS$BackgroundPosition::isVerticalPositionRelativeToSize() {
	return (((int32_t)(this->relative & (uint32_t)4)) == 4);
}

bool CSS$BackgroundPosition::isVerticalPositionRelativeToFontSize() {
	return (((int32_t)(this->relative & (uint32_t)8)) == 8);
}

float CSS$BackgroundPosition::getVerticalPosition() {
	return this->verticalPosition;
}

CSS$BackgroundPosition::CSS$BackgroundPosition() {
}

$Class* CSS$BackgroundPosition::load$($String* name, bool initialize) {
	$loadClass(CSS$BackgroundPosition, name, initialize, &_CSS$BackgroundPosition_ClassInfo_, allocate$CSS$BackgroundPosition);
	return class$;
}

$Class* CSS$BackgroundPosition::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax