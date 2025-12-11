#include <HeadlessJPasswordField.h>

#include <javax/swing/JPasswordField.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JPasswordField = ::javax::swing::JPasswordField;

$MethodInfo _HeadlessJPasswordField_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessJPasswordField::*)()>(&HeadlessJPasswordField::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadlessJPasswordField::main))},
	{}
};

$ClassInfo _HeadlessJPasswordField_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessJPasswordField",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessJPasswordField_MethodInfo_
};

$Object* allocate$HeadlessJPasswordField($Class* clazz) {
	return $of($alloc(HeadlessJPasswordField));
}

void HeadlessJPasswordField::init$() {
}

void HeadlessJPasswordField::main($StringArray* args) {
	$var($JPasswordField, f, $new($JPasswordField, "field"_s));
	f->selectAll();
	f->getSelectionStart();
	f->getSelectionEnd();
}

HeadlessJPasswordField::HeadlessJPasswordField() {
}

$Class* HeadlessJPasswordField::load$($String* name, bool initialize) {
	$loadClass(HeadlessJPasswordField, name, initialize, &_HeadlessJPasswordField_ClassInfo_, allocate$HeadlessJPasswordField);
	return class$;
}

$Class* HeadlessJPasswordField::class$ = nullptr;