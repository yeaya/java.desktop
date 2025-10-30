#include <JColorChooserDnDTest.h>

#include <JColorChooserDnDTest$1.h>
#include <java/lang/Runnable.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $JColorChooserDnDTest$1 = ::JColorChooserDnDTest$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$MethodInfo _JColorChooserDnDTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JColorChooserDnDTest::*)()>(&JColorChooserDnDTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&JColorChooserDnDTest::main))},
	{}
};

$InnerClassInfo _JColorChooserDnDTest_InnerClassesInfo_[] = {
	{"JColorChooserDnDTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JColorChooserDnDTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"JColorChooserDnDTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_JColorChooserDnDTest_MethodInfo_,
	nullptr,
	nullptr,
	_JColorChooserDnDTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"JColorChooserDnDTest$1"
};

$Object* allocate$JColorChooserDnDTest($Class* clazz) {
	return $of($alloc(JColorChooserDnDTest));
}

void JColorChooserDnDTest::init$() {
}

void JColorChooserDnDTest::main($StringArray* args) {
	$SwingUtilities::invokeLater($$new($JColorChooserDnDTest$1));
}

JColorChooserDnDTest::JColorChooserDnDTest() {
}

$Class* JColorChooserDnDTest::load$($String* name, bool initialize) {
	$loadClass(JColorChooserDnDTest, name, initialize, &_JColorChooserDnDTest_ClassInfo_, allocate$JColorChooserDnDTest);
	return class$;
}

$Class* JColorChooserDnDTest::class$ = nullptr;