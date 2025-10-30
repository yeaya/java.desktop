#include <javax/swing/SpinnerModel.h>

#include <javax/swing/event/ChangeListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChangeListener = ::javax::swing::event::ChangeListener;

namespace javax {
	namespace swing {

$MethodInfo _SpinnerModel_MethodInfo_[] = {
	{"addChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getNextValue", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPreviousValue", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"removeChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SpinnerModel_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.SpinnerModel",
	nullptr,
	nullptr,
	nullptr,
	_SpinnerModel_MethodInfo_
};

$Object* allocate$SpinnerModel($Class* clazz) {
	return $of($alloc(SpinnerModel));
}

$Class* SpinnerModel::load$($String* name, bool initialize) {
	$loadClass(SpinnerModel, name, initialize, &_SpinnerModel_ClassInfo_, allocate$SpinnerModel);
	return class$;
}

$Class* SpinnerModel::class$ = nullptr;

	} // swing
} // javax