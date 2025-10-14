#include <javax/swing/ScrollPaneConstants.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef COLUMN_HEADER
#undef HORIZONTAL_SCROLLBAR
#undef HORIZONTAL_SCROLLBAR_ALWAYS
#undef HORIZONTAL_SCROLLBAR_AS_NEEDED
#undef HORIZONTAL_SCROLLBAR_NEVER
#undef HORIZONTAL_SCROLLBAR_POLICY
#undef LOWER_LEADING_CORNER
#undef LOWER_LEFT_CORNER
#undef LOWER_RIGHT_CORNER
#undef LOWER_TRAILING_CORNER
#undef ROW_HEADER
#undef UPPER_LEADING_CORNER
#undef UPPER_LEFT_CORNER
#undef UPPER_RIGHT_CORNER
#undef UPPER_TRAILING_CORNER
#undef VERTICAL_SCROLLBAR
#undef VERTICAL_SCROLLBAR_ALWAYS
#undef VERTICAL_SCROLLBAR_AS_NEEDED
#undef VERTICAL_SCROLLBAR_NEVER
#undef VERTICAL_SCROLLBAR_POLICY
#undef VIEWPORT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;

namespace javax {
	namespace swing {

$FieldInfo _ScrollPaneConstants_FieldInfo_[] = {
	{"VIEWPORT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ScrollPaneConstants, VIEWPORT)},
	{"VERTICAL_SCROLLBAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ScrollPaneConstants, VERTICAL_SCROLLBAR)},
	{"HORIZONTAL_SCROLLBAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ScrollPaneConstants, HORIZONTAL_SCROLLBAR)},
	{"ROW_HEADER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ScrollPaneConstants, ROW_HEADER)},
	{"COLUMN_HEADER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ScrollPaneConstants, COLUMN_HEADER)},
	{"LOWER_LEFT_CORNER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ScrollPaneConstants, LOWER_LEFT_CORNER)},
	{"LOWER_RIGHT_CORNER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ScrollPaneConstants, LOWER_RIGHT_CORNER)},
	{"UPPER_LEFT_CORNER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ScrollPaneConstants, UPPER_LEFT_CORNER)},
	{"UPPER_RIGHT_CORNER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ScrollPaneConstants, UPPER_RIGHT_CORNER)},
	{"LOWER_LEADING_CORNER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ScrollPaneConstants, LOWER_LEADING_CORNER)},
	{"LOWER_TRAILING_CORNER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ScrollPaneConstants, LOWER_TRAILING_CORNER)},
	{"UPPER_LEADING_CORNER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ScrollPaneConstants, UPPER_LEADING_CORNER)},
	{"UPPER_TRAILING_CORNER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ScrollPaneConstants, UPPER_TRAILING_CORNER)},
	{"VERTICAL_SCROLLBAR_POLICY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ScrollPaneConstants, VERTICAL_SCROLLBAR_POLICY)},
	{"HORIZONTAL_SCROLLBAR_POLICY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ScrollPaneConstants, HORIZONTAL_SCROLLBAR_POLICY)},
	{"VERTICAL_SCROLLBAR_AS_NEEDED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ScrollPaneConstants, VERTICAL_SCROLLBAR_AS_NEEDED)},
	{"VERTICAL_SCROLLBAR_NEVER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ScrollPaneConstants, VERTICAL_SCROLLBAR_NEVER)},
	{"VERTICAL_SCROLLBAR_ALWAYS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ScrollPaneConstants, VERTICAL_SCROLLBAR_ALWAYS)},
	{"HORIZONTAL_SCROLLBAR_AS_NEEDED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ScrollPaneConstants, HORIZONTAL_SCROLLBAR_AS_NEEDED)},
	{"HORIZONTAL_SCROLLBAR_NEVER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ScrollPaneConstants, HORIZONTAL_SCROLLBAR_NEVER)},
	{"HORIZONTAL_SCROLLBAR_ALWAYS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ScrollPaneConstants, HORIZONTAL_SCROLLBAR_ALWAYS)},
	{}
};

$ClassInfo _ScrollPaneConstants_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.ScrollPaneConstants",
	nullptr,
	nullptr,
	_ScrollPaneConstants_FieldInfo_
};

$Object* allocate$ScrollPaneConstants($Class* clazz) {
	return $of($alloc(ScrollPaneConstants));
}


$String* ScrollPaneConstants::VIEWPORT = nullptr;

$String* ScrollPaneConstants::VERTICAL_SCROLLBAR = nullptr;

$String* ScrollPaneConstants::HORIZONTAL_SCROLLBAR = nullptr;

$String* ScrollPaneConstants::ROW_HEADER = nullptr;

$String* ScrollPaneConstants::COLUMN_HEADER = nullptr;

$String* ScrollPaneConstants::LOWER_LEFT_CORNER = nullptr;

$String* ScrollPaneConstants::LOWER_RIGHT_CORNER = nullptr;

$String* ScrollPaneConstants::UPPER_LEFT_CORNER = nullptr;

$String* ScrollPaneConstants::UPPER_RIGHT_CORNER = nullptr;

$String* ScrollPaneConstants::LOWER_LEADING_CORNER = nullptr;

$String* ScrollPaneConstants::LOWER_TRAILING_CORNER = nullptr;

$String* ScrollPaneConstants::UPPER_LEADING_CORNER = nullptr;

$String* ScrollPaneConstants::UPPER_TRAILING_CORNER = nullptr;

$String* ScrollPaneConstants::VERTICAL_SCROLLBAR_POLICY = nullptr;

$String* ScrollPaneConstants::HORIZONTAL_SCROLLBAR_POLICY = nullptr;

void clinit$ScrollPaneConstants($Class* class$) {
	$assignStatic(ScrollPaneConstants::VIEWPORT, "VIEWPORT"_s);
	$assignStatic(ScrollPaneConstants::VERTICAL_SCROLLBAR, "VERTICAL_SCROLLBAR"_s);
	$assignStatic(ScrollPaneConstants::HORIZONTAL_SCROLLBAR, "HORIZONTAL_SCROLLBAR"_s);
	$assignStatic(ScrollPaneConstants::ROW_HEADER, "ROW_HEADER"_s);
	$assignStatic(ScrollPaneConstants::COLUMN_HEADER, "COLUMN_HEADER"_s);
	$assignStatic(ScrollPaneConstants::LOWER_LEFT_CORNER, "LOWER_LEFT_CORNER"_s);
	$assignStatic(ScrollPaneConstants::LOWER_RIGHT_CORNER, "LOWER_RIGHT_CORNER"_s);
	$assignStatic(ScrollPaneConstants::UPPER_LEFT_CORNER, "UPPER_LEFT_CORNER"_s);
	$assignStatic(ScrollPaneConstants::UPPER_RIGHT_CORNER, "UPPER_RIGHT_CORNER"_s);
	$assignStatic(ScrollPaneConstants::LOWER_LEADING_CORNER, "LOWER_LEADING_CORNER"_s);
	$assignStatic(ScrollPaneConstants::LOWER_TRAILING_CORNER, "LOWER_TRAILING_CORNER"_s);
	$assignStatic(ScrollPaneConstants::UPPER_LEADING_CORNER, "UPPER_LEADING_CORNER"_s);
	$assignStatic(ScrollPaneConstants::UPPER_TRAILING_CORNER, "UPPER_TRAILING_CORNER"_s);
	$assignStatic(ScrollPaneConstants::VERTICAL_SCROLLBAR_POLICY, "VERTICAL_SCROLLBAR_POLICY"_s);
	$assignStatic(ScrollPaneConstants::HORIZONTAL_SCROLLBAR_POLICY, "HORIZONTAL_SCROLLBAR_POLICY"_s);
}

$Class* ScrollPaneConstants::load$($String* name, bool initialize) {
	$loadClass(ScrollPaneConstants, name, initialize, &_ScrollPaneConstants_ClassInfo_, clinit$ScrollPaneConstants, allocate$ScrollPaneConstants);
	return class$;
}

$Class* ScrollPaneConstants::class$ = nullptr;

	} // swing
} // javax