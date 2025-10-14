#include <javax/swing/RowFilter$RegexFilter.h>

#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <javax/swing/RowFilter$Entry.h>
#include <javax/swing/RowFilter$GeneralFilter.h>
#include <javax/swing/RowFilter.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $RowFilter = ::javax::swing::RowFilter;
using $RowFilter$Entry = ::javax::swing::RowFilter$Entry;
using $RowFilter$GeneralFilter = ::javax::swing::RowFilter$GeneralFilter;

namespace javax {
	namespace swing {

$FieldInfo _RowFilter$RegexFilter_FieldInfo_[] = {
	{"matcher", "Ljava/util/regex/Matcher;", nullptr, $PRIVATE, $field(RowFilter$RegexFilter, matcher)},
	{}
};

$MethodInfo _RowFilter$RegexFilter_MethodInfo_[] = {
	{"<init>", "(Ljava/util/regex/Pattern;[I)V", nullptr, 0, $method(static_cast<void(RowFilter$RegexFilter::*)($Pattern*,$ints*)>(&RowFilter$RegexFilter::init$))},
	{"include", "(Ljavax/swing/RowFilter$Entry;I)Z", "(Ljavax/swing/RowFilter$Entry<+TM;+TI;>;I)Z", $PROTECTED},
	{}
};

$InnerClassInfo _RowFilter$RegexFilter_InnerClassesInfo_[] = {
	{"javax.swing.RowFilter$RegexFilter", "javax.swing.RowFilter", "RegexFilter", $PRIVATE | $STATIC},
	{"javax.swing.RowFilter$GeneralFilter", "javax.swing.RowFilter", "GeneralFilter", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _RowFilter$RegexFilter_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.RowFilter$RegexFilter",
	"javax.swing.RowFilter$GeneralFilter",
	nullptr,
	_RowFilter$RegexFilter_FieldInfo_,
	_RowFilter$RegexFilter_MethodInfo_,
	"<M:Ljava/lang/Object;I:Ljava/lang/Object;>Ljavax/swing/RowFilter$GeneralFilter<TM;TI;>;",
	nullptr,
	_RowFilter$RegexFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.RowFilter"
};

$Object* allocate$RowFilter$RegexFilter($Class* clazz) {
	return $of($alloc(RowFilter$RegexFilter));
}

void RowFilter$RegexFilter::init$($Pattern* regex, $ints* columns) {
	$RowFilter$GeneralFilter::init$(columns);
	if (regex == nullptr) {
		$throwNew($IllegalArgumentException, "Pattern must be non-null"_s);
	}
	$set(this, matcher, $nc(regex)->matcher(""_s));
}

bool RowFilter$RegexFilter::include($RowFilter$Entry* value, int32_t index) {
	$nc(this->matcher)->reset($($nc(value)->getStringValue(index)));
	return $nc(this->matcher)->find();
}

RowFilter$RegexFilter::RowFilter$RegexFilter() {
}

$Class* RowFilter$RegexFilter::load$($String* name, bool initialize) {
	$loadClass(RowFilter$RegexFilter, name, initialize, &_RowFilter$RegexFilter_ClassInfo_, allocate$RowFilter$RegexFilter);
	return class$;
}

$Class* RowFilter$RegexFilter::class$ = nullptr;

	} // swing
} // javax