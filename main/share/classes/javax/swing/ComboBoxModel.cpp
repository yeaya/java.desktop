#include <javax/swing/ComboBoxModel.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

$MethodInfo _ComboBoxModel_MethodInfo_[] = {
	{"getSelectedItem", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"setSelectedItem", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ComboBoxModel_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.ComboBoxModel",
	nullptr,
	"javax.swing.ListModel",
	nullptr,
	_ComboBoxModel_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/lang/Object;Ljavax/swing/ListModel<TE;>;"
};

$Object* allocate$ComboBoxModel($Class* clazz) {
	return $of($alloc(ComboBoxModel));
}

$Class* ComboBoxModel::load$($String* name, bool initialize) {
	$loadClass(ComboBoxModel, name, initialize, &_ComboBoxModel_ClassInfo_, allocate$ComboBoxModel);
	return class$;
}

$Class* ComboBoxModel::class$ = nullptr;

	} // swing
} // javax