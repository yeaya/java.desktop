#include <Test6462562.h>

#include <Test6462562$1.h>
#include <Test6462562$TestFormattedTextField.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/Error.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/DateFormat.h>
#include <java/text/NumberFormat.h>
#include <java/text/ParseException.h>
#include <java/text/SimpleDateFormat.h>
#include <java/util/Date.h>
#include <java/util/Locale.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/DateFormatter.h>
#include <javax/swing/text/InternationalFormatter.h>
#include <javax/swing/text/NumberFormatter.h>
#include <jcpp.h>

#undef BACKSPACE
#undef DELETE
#undef US

using $Test6462562$1 = ::Test6462562$1;
using $Test6462562$TestFormattedTextField = ::Test6462562$TestFormattedTextField;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $DateFormat = ::java::text::DateFormat;
using $NumberFormat = ::java::text::NumberFormat;
using $ParseException = ::java::text::ParseException;
using $SimpleDateFormat = ::java::text::SimpleDateFormat;
using $Date = ::java::util::Date;
using $Locale = ::java::util::Locale;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $DateFormatter = ::javax::swing::text::DateFormatter;
using $InternationalFormatter = ::javax::swing::text::InternationalFormatter;
using $NumberFormatter = ::javax::swing::text::NumberFormatter;

$FieldInfo _Test6462562_FieldInfo_[] = {
	{"BACKSPACE", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Test6462562, BACKSPACE)},
	{"DELETE", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Test6462562, DELETE)},
	{"failed", "Z", nullptr, 0, $field(Test6462562, failed)},
	{}
};

$MethodInfo _Test6462562_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test6462562::*)()>(&Test6462562::init$))},
	{"create", "(Ljava/text/NumberFormat;)LTest6462562$TestFormattedTextField;", nullptr, 0},
	{"create", "(Ljava/text/DateFormat;)LTest6462562$TestFormattedTextField;", nullptr, 0},
	{"date", "(Ljava/text/DateFormat;Ljava/lang/String;)Ljava/util/Date;", nullptr, 0},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test6462562::main)), "java.lang.Exception"},
	{"test", "()V", nullptr, 0},
	{"testCurrencyFormat", "()V", nullptr, 0},
	{"testDateFormat", "()V", nullptr, 0},
	{"testIntegerFormat", "()V", nullptr, 0},
	{"testPercentFormat", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _Test6462562_InnerClassesInfo_[] = {
	{"Test6462562$TestFormattedTextField", "Test6462562", "TestFormattedTextField", 0},
	{"Test6462562$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test6462562_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test6462562",
	"java.lang.Object",
	nullptr,
	_Test6462562_FieldInfo_,
	_Test6462562_MethodInfo_,
	nullptr,
	nullptr,
	_Test6462562_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Test6462562$TestFormattedTextField,Test6462562$1"
};

$Object* allocate$Test6462562($Class* clazz) {
	return $of($alloc(Test6462562));
}

$String* Test6462562::BACKSPACE = nullptr;
$String* Test6462562::DELETE = nullptr;

void Test6462562::init$() {
	this->failed = false;
}

void Test6462562::test() {
	testPercentFormat();
	testCurrencyFormat();
	testIntegerFormat();
	testDateFormat();
	if (this->failed) {
		$throwNew($RuntimeException, "Some testcases failed, see output above"_s);
	}
	$init($System);
	$nc($System::err)->println("(-;  All testcases passed  ;-)"_s);
}

$Test6462562$TestFormattedTextField* Test6462562::create($NumberFormat* format) {
	$nc(format)->setMaximumFractionDigits(0);
	$var($NumberFormatter, fmt, $new($NumberFormatter, format));
	return $new($Test6462562$TestFormattedTextField, this, fmt);
}

$Test6462562$TestFormattedTextField* Test6462562::create($DateFormat* format) {
	$var($DateFormatter, fmt, $new($DateFormatter, format));
	return $new($Test6462562$TestFormattedTextField, this, fmt);
}

void Test6462562::main($StringArray* args) {
	$init(Test6462562);
	$SwingUtilities::invokeAndWait($$new($Test6462562$1));
}

void Test6462562::testPercentFormat() {
	$useLocalCurrentObjectStackCache();
	$init($Locale);
	$var($NumberFormat, format, $NumberFormat::getPercentInstance($Locale::US));
	$var($Test6462562$TestFormattedTextField, ftf, create(format));
	$nc(ftf)->setValue($($Double::valueOf(0.34)));
	$init($System);
	$nc($System::err)->println("Testing NumberFormat.getPercentInstance(Locale.US)"_s);
	ftf->test(0, 0, "1"_s, $($Double::valueOf(0.14)));
	ftf->test(2, 0, "2"_s, $($Double::valueOf(1.42)));
	ftf->test(1, 0, "0"_s, $($Double::valueOf(1.02)));
	ftf->test(0, 0, "1024"_s, $($Double::valueOf(10.24)));
	ftf->test(3, 0, "333"_s, $($Double::valueOf(103.33)));
	ftf->test(6, 0, "77"_s, $($Double::valueOf(10333.77)));
	ftf->test(4, 0, "99"_s, $($Double::valueOf(10399.77)));
	ftf->test(6, 0, "00"_s, $($Double::valueOf(10390.07)));
	ftf->test(0, 0, "2,2"_s, $($Double::valueOf(2290.07)));
	ftf->test(2, 0, "2,2"_s, $($Double::valueOf(222.27)));
	ftf->test(4, 0, "2,2"_s, $($Double::valueOf(222.22)));
	ftf->test(6, 0, "33,33"_s, $($Double::valueOf(2222233.33)));
	ftf->test(0, 0, Test6462562::DELETE, $($Double::valueOf(222233.33)));
	ftf->test(10, 0, Test6462562::DELETE, $($Double::valueOf(222233.33)));
	ftf->test(5, 0, Test6462562::DELETE, $($Double::valueOf(22223.33)));
	ftf->test(6, 0, Test6462562::DELETE, $($Double::valueOf(2222.33)));
	ftf->test(0, 0, Test6462562::BACKSPACE, $($Double::valueOf(2222.33)));
	ftf->test(7, 0, Test6462562::BACKSPACE, $($Double::valueOf(222.23)));
	ftf->test(4, 0, Test6462562::BACKSPACE, $($Double::valueOf(22.23)));
	ftf->test(2, 0, Test6462562::BACKSPACE, $($Double::valueOf(2.23)));
	ftf->test(0, 1, "555"_s, $($Double::valueOf(555.23)));
	ftf->test(4, 2, "555"_s, $($Double::valueOf(5555.55)));
	ftf->test(2, 3, "1"_s, $($Double::valueOf(551.55)));
	ftf->test(3, 2, "6"_s, $($Double::valueOf(55.65)));
	ftf->test(4, 2, "12"_s, $($Double::valueOf(556.12)));
	ftf->test(3, 4, "0"_s, $($Double::valueOf(5.5)));
	ftf->test(0, 3, "111222333444555"_s, $($Double::valueOf(1.11222333444555E12)));
	ftf->test(0, 2, Test6462562::DELETE, $($Double::valueOf(1.222333444555E10)));
	ftf->test(0, 3, Test6462562::BACKSPACE, $($Double::valueOf(2.2333444555E8)));
	ftf->test(12, 2, Test6462562::DELETE, $($Double::valueOf(2233344.45)));
	ftf->test(9, 2, Test6462562::BACKSPACE, $($Double::valueOf(22333.44)));
	ftf->test(4, 3, Test6462562::DELETE, $($Double::valueOf(223.44)));
	ftf->test(1, 2, Test6462562::BACKSPACE, $($Double::valueOf(23.44)));
	ftf->test(3, 3, Test6462562::DELETE, $($Double::valueOf(0.23)));
	ftf->test(1, 2, Test6462562::BACKSPACE, $($Double::valueOf(0.02)));
}

void Test6462562::testCurrencyFormat() {
	$useLocalCurrentObjectStackCache();
	$init($Locale);
	$var($NumberFormat, format, $NumberFormat::getCurrencyInstance($Locale::US));
	$var($Test6462562$TestFormattedTextField, ftf, create(format));
	$nc(ftf)->setValue($($Long::valueOf((int64_t)56)));
	$init($System);
	$nc($System::err)->println("Testing NumberFormat.getCurrencyInstance(Locale.US)"_s);
	ftf->test(1, 0, "1"_s, $($Long::valueOf((int64_t)16)));
	ftf->test(3, 0, "2"_s, $($Long::valueOf((int64_t)162)));
	ftf->test(2, 0, "0"_s, $($Long::valueOf((int64_t)102)));
	ftf->test(1, 0, "1024"_s, $($Long::valueOf((int64_t)1024)));
	ftf->test(4, 0, "333"_s, $($Long::valueOf((int64_t)10333)));
	ftf->test(7, 0, "77"_s, $($Long::valueOf((int64_t)1033377)));
	ftf->test(5, 0, "99"_s, $($Long::valueOf((int64_t)1039977)));
	ftf->test(7, 0, "00"_s, $($Long::valueOf((int64_t)1039007)));
	ftf->test(1, 0, "2,2"_s, $($Long::valueOf((int64_t)229007)));
	ftf->test(3, 0, "2,2"_s, $($Long::valueOf((int64_t)22227)));
	ftf->test(4, 0, "2,2"_s, $($Long::valueOf((int64_t)2222)));
	ftf->test(6, 0, "33,33"_s, $($Long::valueOf((int64_t)22223333)));
	ftf->test(1, 0, Test6462562::DELETE, $($Long::valueOf((int64_t)2223333)));
	ftf->test(10, 0, Test6462562::DELETE, $($Long::valueOf((int64_t)2223333)));
	ftf->test(5, 0, Test6462562::DELETE, $($Long::valueOf((int64_t)222333)));
	ftf->test(5, 0, Test6462562::DELETE, $($Long::valueOf((int64_t)22233)));
	ftf->test(1, 0, Test6462562::BACKSPACE, $($Long::valueOf((int64_t)22233)));
	ftf->test(7, 0, Test6462562::BACKSPACE, $($Long::valueOf((int64_t)2223)));
	ftf->test(4, 0, Test6462562::BACKSPACE, $($Long::valueOf((int64_t)223)));
	ftf->test(2, 0, Test6462562::BACKSPACE, $($Long::valueOf((int64_t)23)));
	ftf->test(1, 1, "555"_s, $($Long::valueOf((int64_t)5553)));
	ftf->test(4, 2, "555"_s, $($Long::valueOf((int64_t)55555)));
	ftf->test(2, 3, "1"_s, $($Long::valueOf((int64_t)5155)));
	ftf->test(3, 2, "6"_s, $($Long::valueOf((int64_t)565)));
	ftf->test(1, 3, "111222333444555"_s, $($Long::valueOf((int64_t)0x00006527F7AD11CB)));
	ftf->test(1, 2, Test6462562::DELETE, $($Long::valueOf((int64_t)0x0000011C98C031CB)));
	ftf->test(1, 3, Test6462562::BACKSPACE, $($Long::valueOf((int64_t)0x00000005332D51CB)));
	ftf->test(13, 2, Test6462562::DELETE, $($Long::valueOf((int64_t)223334445)));
	ftf->test(10, 2, Test6462562::BACKSPACE, $($Long::valueOf((int64_t)2233344)));
	ftf->test(4, 4, Test6462562::DELETE, $($Long::valueOf((int64_t)2244)));
	ftf->test(1, 4, Test6462562::BACKSPACE, $($Long::valueOf((int64_t)4)));
}

void Test6462562::testIntegerFormat() {
	$useLocalCurrentObjectStackCache();
	$init($Locale);
	$var($NumberFormat, format, $NumberFormat::getIntegerInstance($Locale::US));
	$var($Test6462562$TestFormattedTextField, ftf, create(format));
	$nc(ftf)->setValue($($Long::valueOf((int64_t)56)));
	$init($System);
	$nc($System::err)->println("Testing NumberFormat.getIntegerInstance(Locale.US)"_s);
	ftf->test(0, 0, "1"_s, $($Long::valueOf((int64_t)16)));
	ftf->test(2, 0, "2"_s, $($Long::valueOf((int64_t)162)));
	ftf->test(1, 0, "0"_s, $($Long::valueOf((int64_t)102)));
	ftf->test(0, 0, "1024"_s, $($Long::valueOf((int64_t)1024)));
	ftf->test(3, 0, "333"_s, $($Long::valueOf((int64_t)10333)));
	ftf->test(6, 0, "77"_s, $($Long::valueOf((int64_t)1033377)));
	ftf->test(4, 0, "99"_s, $($Long::valueOf((int64_t)1039977)));
	ftf->test(6, 0, "00"_s, $($Long::valueOf((int64_t)1039007)));
	ftf->test(0, 0, "2,2"_s, $($Long::valueOf((int64_t)229007)));
	ftf->test(2, 0, "2,2"_s, $($Long::valueOf((int64_t)22227)));
	ftf->test(3, 0, "2,2"_s, $($Long::valueOf((int64_t)2222)));
	ftf->test(5, 0, "33,33"_s, $($Long::valueOf((int64_t)22223333)));
	ftf->test(0, 0, Test6462562::DELETE, $($Long::valueOf((int64_t)2223333)));
	ftf->test(9, 0, Test6462562::DELETE, $($Long::valueOf((int64_t)2223333)));
	ftf->test(4, 0, Test6462562::DELETE, $($Long::valueOf((int64_t)222333)));
	ftf->test(4, 0, Test6462562::DELETE, $($Long::valueOf((int64_t)22233)));
	ftf->test(0, 0, Test6462562::BACKSPACE, $($Long::valueOf((int64_t)22233)));
	ftf->test(6, 0, Test6462562::BACKSPACE, $($Long::valueOf((int64_t)2223)));
	ftf->test(2, 0, Test6462562::BACKSPACE, $($Long::valueOf((int64_t)223)));
	ftf->test(2, 0, Test6462562::BACKSPACE, $($Long::valueOf((int64_t)23)));
	ftf->test(0, 1, "555"_s, $($Long::valueOf((int64_t)5553)));
	ftf->test(3, 2, "555"_s, $($Long::valueOf((int64_t)55555)));
	ftf->test(1, 3, "1"_s, $($Long::valueOf((int64_t)5155)));
	ftf->test(2, 2, "6"_s, $($Long::valueOf((int64_t)565)));
	ftf->test(0, 3, "111222333444555"_s, $($Long::valueOf((int64_t)0x00006527F7AD11CB)));
	ftf->test(0, 2, Test6462562::DELETE, $($Long::valueOf((int64_t)0x0000011C98C031CB)));
	ftf->test(0, 3, Test6462562::BACKSPACE, $($Long::valueOf((int64_t)0x00000005332D51CB)));
	ftf->test(12, 2, Test6462562::DELETE, $($Long::valueOf((int64_t)223334445)));
	ftf->test(9, 2, Test6462562::BACKSPACE, $($Long::valueOf((int64_t)2233344)));
	ftf->test(3, 4, Test6462562::DELETE, $($Long::valueOf((int64_t)2244)));
	ftf->test(0, 4, Test6462562::BACKSPACE, $($Long::valueOf((int64_t)4)));
}

$Date* Test6462562::date($DateFormat* format, $String* spec) {
	try {
		return $nc(format)->parse(spec);
	} catch ($ParseException&) {
		$var($ParseException, e, $catch());
		$throwNew($Error, "Error in test"_s);
	}
	$shouldNotReachHere();
}

void Test6462562::testDateFormat() {
	$useLocalCurrentObjectStackCache();
	$init($Locale);
	$var($DateFormat, format, $new($SimpleDateFormat, "MM/dd/yyyy"_s, $Locale::US));
	$var($Test6462562$TestFormattedTextField, ftf, create(format));
	$nc(ftf)->setValue($(date(format, "12/05/2005"_s)));
	$init($System);
	$nc($System::err)->println("Testing SimpleDateFormat(\"MM/dd/yyyy\", Locale.US)"_s);
	ftf->test(0, 0, "0"_s, $(date(format, "02/05/2005"_s)));
	ftf->test(4, 0, "4"_s, $(date(format, "02/04/2005"_s)));
	ftf->test(6, 0, "1"_s, $(date(format, "02/04/1005"_s)));
	ftf->test(9, 0, "9"_s, $(date(format, "02/04/1009"_s)));
	ftf->test(0, 0, "11"_s, $(date(format, "11/04/1009"_s)));
	ftf->test(3, 0, "23"_s, $(date(format, "11/23/1009"_s)));
	ftf->test(6, 0, "191"_s, $(date(format, "11/23/1919"_s)));
	ftf->test(0, 0, Test6462562::DELETE, $(date(format, "01/23/1919"_s)));
	ftf->test(3, 0, Test6462562::DELETE, $(date(format, "01/03/1919"_s)));
	ftf->test(10, 0, Test6462562::DELETE, $(date(format, "01/03/1919"_s)));
	ftf->test(1, 0, Test6462562::DELETE, $(date(format, "12/03/1918"_s)));
	ftf->test(4, 0, Test6462562::DELETE, $(date(format, "11/30/1918"_s)));
	ftf->test(0, 0, Test6462562::BACKSPACE, $(date(format, "11/30/1918"_s)));
	ftf->test(1, 0, Test6462562::BACKSPACE, $(date(format, "01/30/1918"_s)));
	ftf->test(4, 0, Test6462562::BACKSPACE, $(date(format, "12/31/1917"_s)));
	ftf->test(10, 0, Test6462562::BACKSPACE, $(date(format, "12/31/0191"_s)));
	ftf->test(3, 0, Test6462562::BACKSPACE, $(date(format, "01/31/0191"_s)));
	ftf->test(5, 0, Test6462562::BACKSPACE, $(date(format, "01/03/0191"_s)));
	ftf->test(0, 1, "1"_s, $(date(format, "11/03/0191"_s)));
	ftf->test(3, 1, "2"_s, $(date(format, "11/23/0191"_s)));
	ftf->test(6, 2, "20"_s, $(date(format, "11/23/2091"_s)));
	ftf->test(0, 1, Test6462562::BACKSPACE, $(date(format, "01/23/2091"_s)));
	ftf->test(3, 1, Test6462562::DELETE, $(date(format, "01/03/2091"_s)));
	ftf->test(6, 2, Test6462562::BACKSPACE, $(date(format, "01/03/0091"_s)));
	ftf->test(8, 1, Test6462562::DELETE, $(date(format, "01/03/0001"_s)));
}

void clinit$Test6462562($Class* class$) {
	$assignStatic(Test6462562::BACKSPACE, $new($String, "backspace"_s));
	$assignStatic(Test6462562::DELETE, $new($String, "delete"_s));
}

Test6462562::Test6462562() {
}

$Class* Test6462562::load$($String* name, bool initialize) {
	$loadClass(Test6462562, name, initialize, &_Test6462562_ClassInfo_, clinit$Test6462562, allocate$Test6462562);
	return class$;
}

$Class* Test6462562::class$ = nullptr;