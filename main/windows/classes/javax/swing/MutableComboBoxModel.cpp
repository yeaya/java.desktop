#include <javax/swing/MutableComboBoxModel.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComboBoxModel = ::javax::swing::ComboBoxModel;

namespace javax {
	namespace swing {

$MethodInfo _MutableComboBoxModel_MethodInfo_[] = {
	{"addElement", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC | $ABSTRACT},
	{"insertElementAt", "(Ljava/lang/Object;I)V", "(TE;I)V", $PUBLIC | $ABSTRACT},
	{"removeElement", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"removeElementAt", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _MutableComboBoxModel_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.MutableComboBoxModel",
	nullptr,
	"javax.swing.ComboBoxModel",
	nullptr,
	_MutableComboBoxModel_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/lang/Object;Ljavax/swing/ComboBoxModel<TE;>;"
};

$Object* allocate$MutableComboBoxModel($Class* clazz) {
	return $of($alloc(MutableComboBoxModel));
}

$Class* MutableComboBoxModel::load$($String* name, bool initialize) {
	$loadClass(MutableComboBoxModel, name, initialize, &_MutableComboBoxModel_ClassInfo_, allocate$MutableComboBoxModel);
	return class$;
}

$Class* MutableComboBoxModel::class$ = nullptr;

	} // swing
} // javax