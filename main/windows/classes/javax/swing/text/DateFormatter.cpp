#include <javax/swing/text/DateFormatter.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/DateFormat$Field.h>
#include <java/text/DateFormat.h>
#include <java/text/Format.h>
#include <java/util/Calendar.h>
#include <java/util/Date.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/swing/text/InternationalFormatter.h>
#include <jcpp.h>

#undef HOUR0
#undef HOUR1

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DateFormat = ::java::text::DateFormat;
using $DateFormat$Field = ::java::text::DateFormat$Field;
using $Format = ::java::text::Format;
using $Calendar = ::java::util::Calendar;
using $Date = ::java::util::Date;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $InternationalFormatter = ::javax::swing::text::InternationalFormatter;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _DateFormatter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DateFormatter::*)()>(&DateFormatter::init$))},
	{"<init>", "(Ljava/text/DateFormat;)V", nullptr, $PUBLIC, $method(static_cast<void(DateFormatter::*)($DateFormat*)>(&DateFormatter::init$))},
	{"adjustValue", "(Ljava/lang/Object;Ljava/util/Map;Ljava/lang/Object;I)Ljava/lang/Object;", "(Ljava/lang/Object;Ljava/util/Map<**>;Ljava/lang/Object;I)Ljava/lang/Object;", 0, nullptr, "javax.swing.text.BadLocationException,java.text.ParseException"},
	{"getAdjustField", "(ILjava/util/Map;)Ljava/lang/Object;", "(ILjava/util/Map<**>;)Ljava/lang/Object;", 0},
	{"getCalendar", "()Ljava/util/Calendar;", nullptr, $PRIVATE, $method(static_cast<$Calendar*(DateFormatter::*)()>(&DateFormatter::getCalendar))},
	{"getSupportsIncrement", "()Z", nullptr, 0},
	{"setFormat", "(Ljava/text/DateFormat;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DateFormatter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.DateFormatter",
	"javax.swing.text.InternationalFormatter",
	nullptr,
	nullptr,
	_DateFormatter_MethodInfo_
};

$Object* allocate$DateFormatter($Class* clazz) {
	return $of($alloc(DateFormatter));
}

void DateFormatter::init$() {
	DateFormatter::init$($($DateFormat::getDateInstance()));
}

void DateFormatter::init$($DateFormat* format) {
	$InternationalFormatter::init$(format);
	setFormat(format);
}

void DateFormatter::setFormat($DateFormat* format) {
	$InternationalFormatter::setFormat(format);
}

$Calendar* DateFormatter::getCalendar() {
	$var($Format, f, getFormat());
	if ($instanceOf($DateFormat, f)) {
		return $nc(($cast($DateFormat, f)))->getCalendar();
	}
	return $Calendar::getInstance();
}

bool DateFormatter::getSupportsIncrement() {
	return true;
}

$Object* DateFormatter::getAdjustField(int32_t start, $Map* attributes) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($($nc(attributes)->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, key, i$->next());
			{
				$init($DateFormat$Field);
				if (($instanceOf($DateFormat$Field, key)) && ($equals(key, $DateFormat$Field::HOUR1) || $nc(($cast($DateFormat$Field, key)))->getCalendarField() != -1)) {
					return $of(key);
				}
			}
		}
	}
	return $of(nullptr);
}

$Object* DateFormatter::adjustValue(Object$* value$renamed, $Map* attributes, Object$* key$renamed, int32_t direction) {
	$useLocalCurrentObjectStackCache();
	$var($Object, value, value$renamed);
	$var($Object, key, key$renamed);
	if (key != nullptr) {
		int32_t field = 0;
		$init($DateFormat$Field);
		if ($equals(key, $DateFormat$Field::HOUR1)) {
			$assign(key, $DateFormat$Field::HOUR0);
		}
		field = $nc(($cast($DateFormat$Field, key)))->getCalendarField();
		$var($Calendar, calendar, getCalendar());
		if (calendar != nullptr) {
			calendar->setTime($cast($Date, value));
			int32_t fieldValue = calendar->get(field);
			try {
				calendar->add(field, direction);
				$assign(value, calendar->getTime());
			} catch ($Throwable&) {
				$var($Throwable, th, $catch());
				$assign(value, nullptr);
			}
			return $of(value);
		}
	}
	return $of(nullptr);
}

DateFormatter::DateFormatter() {
}

$Class* DateFormatter::load$($String* name, bool initialize) {
	$loadClass(DateFormatter, name, initialize, &_DateFormatter_ClassInfo_, allocate$DateFormatter);
	return class$;
}

$Class* DateFormatter::class$ = nullptr;

		} // text
	} // swing
} // javax