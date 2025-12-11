#include <javax/swing/ListModel.h>

#include <javax/swing/event/ListDataListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

$MethodInfo _ListModel_MethodInfo_[] = {
	{"addListDataListener", "(Ljavax/swing/event/ListDataListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getElementAt", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC | $ABSTRACT},
	{"getSize", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"removeListDataListener", "(Ljavax/swing/event/ListDataListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ListModel_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.ListModel",
	nullptr,
	nullptr,
	nullptr,
	_ListModel_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/lang/Object;"
};

$Object* allocate$ListModel($Class* clazz) {
	return $of($alloc(ListModel));
}

$Class* ListModel::load$($String* name, bool initialize) {
	$loadClass(ListModel, name, initialize, &_ListModel_ClassInfo_, allocate$ListModel);
	return class$;
}

$Class* ListModel::class$ = nullptr;

	} // swing
} // javax