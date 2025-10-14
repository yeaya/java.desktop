#include <HeadlessSpinnerNumberModel.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/SpinnerNumberModel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $SpinnerNumberModel = ::javax::swing::SpinnerNumberModel;

$MethodInfo _HeadlessSpinnerNumberModel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessSpinnerNumberModel::*)()>(&HeadlessSpinnerNumberModel::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadlessSpinnerNumberModel::main))},
	{}
};

$ClassInfo _HeadlessSpinnerNumberModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessSpinnerNumberModel",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessSpinnerNumberModel_MethodInfo_
};

$Object* allocate$HeadlessSpinnerNumberModel($Class* clazz) {
	return $of($alloc(HeadlessSpinnerNumberModel));
}

void HeadlessSpinnerNumberModel::init$() {
}

void HeadlessSpinnerNumberModel::main($StringArray* args) {
	$var($SpinnerNumberModel, model, $new($SpinnerNumberModel));
	model->setValue($($Integer::valueOf(5)));
	model->getValue();
	model->getPreviousValue();
	model->getNextValue();
}

HeadlessSpinnerNumberModel::HeadlessSpinnerNumberModel() {
}

$Class* HeadlessSpinnerNumberModel::load$($String* name, bool initialize) {
	$loadClass(HeadlessSpinnerNumberModel, name, initialize, &_HeadlessSpinnerNumberModel_ClassInfo_, allocate$HeadlessSpinnerNumberModel);
	return class$;
}

$Class* HeadlessSpinnerNumberModel::class$ = nullptr;