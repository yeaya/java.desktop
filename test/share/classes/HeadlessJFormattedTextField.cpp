#include <HeadlessJFormattedTextField.h>

#include <javax/swing/JTextField.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextField = ::javax::swing::JTextField;

$MethodInfo _HeadlessJFormattedTextField_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessJFormattedTextField::*)()>(&HeadlessJFormattedTextField::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadlessJFormattedTextField::main))},
	{}
};

$ClassInfo _HeadlessJFormattedTextField_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessJFormattedTextField",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessJFormattedTextField_MethodInfo_
};

$Object* allocate$HeadlessJFormattedTextField($Class* clazz) {
	return $of($alloc(HeadlessJFormattedTextField));
}

void HeadlessJFormattedTextField::init$() {
}

void HeadlessJFormattedTextField::main($StringArray* args) {
	$var($JTextField, f, $new($JTextField, "field"_s));
	f->selectAll();
	f->getSelectionStart();
	f->getSelectionEnd();
	f->selectAll();
}

HeadlessJFormattedTextField::HeadlessJFormattedTextField() {
}

$Class* HeadlessJFormattedTextField::load$($String* name, bool initialize) {
	$loadClass(HeadlessJFormattedTextField, name, initialize, &_HeadlessJFormattedTextField_ClassInfo_, allocate$HeadlessJFormattedTextField);
	return class$;
}

$Class* HeadlessJFormattedTextField::class$ = nullptr;