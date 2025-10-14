#include <HeadlessAbstractSpinnerModel.h>

#include <HeadlessAbstractSpinnerModel$1.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractSpinnerModel.h>
#include <jcpp.h>

using $HeadlessAbstractSpinnerModel$1 = ::HeadlessAbstractSpinnerModel$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSpinnerModel = ::javax::swing::AbstractSpinnerModel;
using $SpinnerModel = ::javax::swing::SpinnerModel;

$MethodInfo _HeadlessAbstractSpinnerModel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessAbstractSpinnerModel::*)()>(&HeadlessAbstractSpinnerModel::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadlessAbstractSpinnerModel::main))},
	{}
};

$InnerClassInfo _HeadlessAbstractSpinnerModel_InnerClassesInfo_[] = {
	{"HeadlessAbstractSpinnerModel$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessAbstractSpinnerModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessAbstractSpinnerModel",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessAbstractSpinnerModel_MethodInfo_,
	nullptr,
	nullptr,
	_HeadlessAbstractSpinnerModel_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HeadlessAbstractSpinnerModel$1"
};

$Object* allocate$HeadlessAbstractSpinnerModel($Class* clazz) {
	return $of($alloc(HeadlessAbstractSpinnerModel));
}

void HeadlessAbstractSpinnerModel::init$() {
}

void HeadlessAbstractSpinnerModel::main($StringArray* args) {
	$var($AbstractSpinnerModel, model, $new($HeadlessAbstractSpinnerModel$1));
	model->getPreviousValue();
	model->getNextValue();
	model->setValue("next"_s);
	model->getValue();
}

HeadlessAbstractSpinnerModel::HeadlessAbstractSpinnerModel() {
}

$Class* HeadlessAbstractSpinnerModel::load$($String* name, bool initialize) {
	$loadClass(HeadlessAbstractSpinnerModel, name, initialize, &_HeadlessAbstractSpinnerModel_ClassInfo_, allocate$HeadlessAbstractSpinnerModel);
	return class$;
}

$Class* HeadlessAbstractSpinnerModel::class$ = nullptr;