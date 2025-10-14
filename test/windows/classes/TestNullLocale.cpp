#include <TestNullLocale.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

#undef GERMAN

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Locale = ::java::util::Locale;
using $JComponent = ::javax::swing::JComponent;

$MethodInfo _TestNullLocale_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestNullLocale::*)()>(&TestNullLocale::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestNullLocale::main))},
	{}
};

$ClassInfo _TestNullLocale_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestNullLocale",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestNullLocale_MethodInfo_
};

$Object* allocate$TestNullLocale($Class* clazz) {
	return $of($alloc(TestNullLocale));
}

void TestNullLocale::init$() {
}

void TestNullLocale::main($StringArray* args) {
	$var($Locale, defaultLocale, $JComponent::getDefaultLocale());
	$init($Locale);
	$JComponent::setDefaultLocale($Locale::GERMAN);
	$JComponent::setDefaultLocale(nullptr);
	$var($Locale, currentLocale, $JComponent::getDefaultLocale());
	if (defaultLocale != currentLocale) {
		$init($System);
		$nc($System::out)->println($$str({"currentLocale "_s, currentLocale}));
		$nc($System::out)->println($$str({"defaultLocale "_s, defaultLocale}));
		$throwNew($RuntimeException, "locale not reset to default locale"_s);
	}
}

TestNullLocale::TestNullLocale() {
}

$Class* TestNullLocale::load$($String* name, bool initialize) {
	$loadClass(TestNullLocale, name, initialize, &_TestNullLocale_ClassInfo_, allocate$TestNullLocale);
	return class$;
}

$Class* TestNullLocale::class$ = nullptr;