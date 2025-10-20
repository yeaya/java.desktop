#include <Test8015336.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/ComboBoxEditor.h>
#include <javax/swing/JComboBox.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComboBoxEditor = ::javax::swing::ComboBoxEditor;
using $JComboBox = ::javax::swing::JComboBox;

$MethodInfo _Test8015336_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test8015336::*)()>(&Test8015336::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test8015336::main)), "java.lang.Exception"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Test8015336_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test8015336",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Test8015336_MethodInfo_
};

$Object* allocate$Test8015336($Class* clazz) {
	return $of($alloc(Test8015336));
}

void Test8015336::init$() {
}

void Test8015336::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$nc($($$new($JComboBox)->getEditor()))->setItem($$new(Test8015336));
}

$String* Test8015336::toString() {
	return nullptr;
}

Test8015336::Test8015336() {
}

$Class* Test8015336::load$($String* name, bool initialize) {
	$loadClass(Test8015336, name, initialize, &_Test8015336_ClassInfo_, allocate$Test8015336);
	return class$;
}

$Class* Test8015336::class$ = nullptr;