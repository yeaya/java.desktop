#include <javax/swing/ListSelectionModel.h>

#include <javax/swing/event/ListSelectionListener.h>
#include <jcpp.h>

#undef MULTIPLE_INTERVAL_SELECTION
#undef SINGLE_INTERVAL_SELECTION
#undef SINGLE_SELECTION

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListSelectionListener = ::javax::swing::event::ListSelectionListener;

namespace javax {
	namespace swing {

$FieldInfo _ListSelectionModel_FieldInfo_[] = {
	{"SINGLE_SELECTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ListSelectionModel, SINGLE_SELECTION)},
	{"SINGLE_INTERVAL_SELECTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ListSelectionModel, SINGLE_INTERVAL_SELECTION)},
	{"MULTIPLE_INTERVAL_SELECTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ListSelectionModel, MULTIPLE_INTERVAL_SELECTION)},
	{}
};

$MethodInfo _ListSelectionModel_MethodInfo_[] = {
	{"addListSelectionListener", "(Ljavax/swing/event/ListSelectionListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"addSelectionInterval", "(II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"clearSelection", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"getAnchorSelectionIndex", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getLeadSelectionIndex", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getMaxSelectionIndex", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getMinSelectionIndex", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getSelectedIndices", "()[I", nullptr, $PUBLIC},
	{"getSelectedItemsCount", "()I", nullptr, $PUBLIC},
	{"getSelectionMode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getValueIsAdjusting", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"insertIndexInterval", "(IIZ)V", nullptr, $PUBLIC | $ABSTRACT},
	{"isSelectedIndex", "(I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isSelectionEmpty", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"removeIndexInterval", "(II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"removeListSelectionListener", "(Ljavax/swing/event/ListSelectionListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"removeSelectionInterval", "(II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setAnchorSelectionIndex", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setLeadSelectionIndex", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setSelectionInterval", "(II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setSelectionMode", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setValueIsAdjusting", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ListSelectionModel_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.ListSelectionModel",
	nullptr,
	nullptr,
	_ListSelectionModel_FieldInfo_,
	_ListSelectionModel_MethodInfo_
};

$Object* allocate$ListSelectionModel($Class* clazz) {
	return $of($alloc(ListSelectionModel));
}

$ints* ListSelectionModel::getSelectedIndices() {
	$useLocalCurrentObjectStackCache();
	int32_t iMin = getMinSelectionIndex();
	int32_t iMax = getMaxSelectionIndex();
	if ((iMin < 0) || (iMax < 0)) {
		return $new($ints, 0);
	}
	$var($ints, rvTmp, $new($ints, 1 + (iMax - iMin)));
	int32_t n = 0;
	for (int32_t i = iMin; i <= iMax; ++i) {
		if (isSelectedIndex(i)) {
			rvTmp->set(n++, i);
		}
	}
	$var($ints, rv, $new($ints, n));
	$System::arraycopy(rvTmp, 0, rv, 0, n);
	return rv;
}

int32_t ListSelectionModel::getSelectedItemsCount() {
	int32_t iMin = getMinSelectionIndex();
	int32_t iMax = getMaxSelectionIndex();
	int32_t count = 0;
	for (int32_t i = iMin; i <= iMax; ++i) {
		if (isSelectedIndex(i)) {
			++count;
		}
	}
	return count;
}

$Class* ListSelectionModel::load$($String* name, bool initialize) {
	$loadClass(ListSelectionModel, name, initialize, &_ListSelectionModel_ClassInfo_, allocate$ListSelectionModel);
	return class$;
}

$Class* ListSelectionModel::class$ = nullptr;

	} // swing
} // javax