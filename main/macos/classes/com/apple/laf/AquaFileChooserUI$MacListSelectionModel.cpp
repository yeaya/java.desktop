#include <com/apple/laf/AquaFileChooserUI$MacListSelectionModel.h>

#include <com/apple/laf/AquaFileChooserUI.h>
#include <com/apple/laf/AquaFileSystemModel.h>
#include <java/io/File.h>
#include <javax/swing/DefaultListSelectionModel.h>
#include <javax/swing/ListSelectionModel.h>
#include <jcpp.h>

#undef MULTIPLE_INTERVAL_SELECTION
#undef SINGLE_SELECTION

using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $AquaFileSystemModel = ::com::apple::laf::AquaFileSystemModel;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultListSelectionModel = ::javax::swing::DefaultListSelectionModel;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaFileChooserUI$MacListSelectionModel_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$MacListSelectionModel, this$0)},
	{"fModel", "Lcom/apple/laf/AquaFileSystemModel;", nullptr, 0, $field(AquaFileChooserUI$MacListSelectionModel, fModel)},
	{}
};

$MethodInfo _AquaFileChooserUI$MacListSelectionModel_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;Lcom/apple/laf/AquaFileSystemModel;)V", nullptr, 0, $method(static_cast<void(AquaFileChooserUI$MacListSelectionModel::*)($AquaFileChooserUI*,$AquaFileSystemModel*)>(&AquaFileChooserUI$MacListSelectionModel::init$))},
	{"addSelectionInterval", "(II)V", nullptr, $PUBLIC},
	{"isSelectableInListIndex", "(I)Z", nullptr, 0},
	{"setAnchorSelectionIndex", "(I)V", nullptr, $PUBLIC},
	{"setLeadSelectionIndex", "(I)V", nullptr, $PUBLIC},
	{"setSelectionInterval", "(II)V", nullptr, $PUBLIC},
	{"verifySelectionInterval", "(IIZ)V", nullptr, 0},
	{}
};

$InnerClassInfo _AquaFileChooserUI$MacListSelectionModel_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileChooserUI$MacListSelectionModel", "com.apple.laf.AquaFileChooserUI", "MacListSelectionModel", 0},
	{}
};

$ClassInfo _AquaFileChooserUI$MacListSelectionModel_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaFileChooserUI$MacListSelectionModel",
	"javax.swing.DefaultListSelectionModel",
	nullptr,
	_AquaFileChooserUI$MacListSelectionModel_FieldInfo_,
	_AquaFileChooserUI$MacListSelectionModel_MethodInfo_,
	nullptr,
	nullptr,
	_AquaFileChooserUI$MacListSelectionModel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileChooserUI"
};

$Object* allocate$AquaFileChooserUI$MacListSelectionModel($Class* clazz) {
	return $of($alloc(AquaFileChooserUI$MacListSelectionModel));
}

void AquaFileChooserUI$MacListSelectionModel::init$($AquaFileChooserUI* this$0, $AquaFileSystemModel* model) {
	$set(this, this$0, this$0);
	$DefaultListSelectionModel::init$();
	$set(this, fModel, model);
}

bool AquaFileChooserUI$MacListSelectionModel::isSelectableInListIndex(int32_t index) {
	$var($File, file, $cast($File, $nc(this->fModel)->getValueAt(index, 0)));
	return (file != nullptr && this->this$0->isSelectableInList(file));
}

void AquaFileChooserUI$MacListSelectionModel::verifySelectionInterval(int32_t index0, int32_t index1, bool isSetSelection) {
	if (index0 > index1) {
		int32_t tmp = index1;
		index1 = index0;
		index0 = tmp;
	}
	int32_t start = index0;
	int32_t end = 0;
	do {
		for (; start <= index1; ++start) {
			if (isSelectableInListIndex(start)) {
				break;
			}
		}
		end = -1;
		for (int32_t i = start; i <= index1; ++i) {
			if (!isSelectableInListIndex(i)) {
				break;
			}
			end = i;
		}
		if (end >= 0) {
			if (isSetSelection) {
				$DefaultListSelectionModel::setSelectionInterval(start, end);
				isSetSelection = false;
			} else {
				$DefaultListSelectionModel::addSelectionInterval(start, end);
			}
			start = end + 1;
		} else {
			break;
		}
	} while (start <= index1);
}

void AquaFileChooserUI$MacListSelectionModel::setAnchorSelectionIndex(int32_t anchorIndex) {
	if (isSelectableInListIndex(anchorIndex)) {
		$DefaultListSelectionModel::setAnchorSelectionIndex(anchorIndex);
	}
}

void AquaFileChooserUI$MacListSelectionModel::setLeadSelectionIndex(int32_t leadIndex) {
	if (isSelectableInListIndex(leadIndex)) {
		$DefaultListSelectionModel::setLeadSelectionIndex(leadIndex);
	}
}

void AquaFileChooserUI$MacListSelectionModel::setSelectionInterval(int32_t index0, int32_t index1) {
	if (index0 == -1 || index1 == -1) {
		return;
	}
	if ((getSelectionMode() == $ListSelectionModel::SINGLE_SELECTION) || (index0 == index1)) {
		if (isSelectableInListIndex(index1)) {
			$DefaultListSelectionModel::setSelectionInterval(index1, index1);
		}
	} else {
		verifySelectionInterval(index0, index1, true);
	}
}

void AquaFileChooserUI$MacListSelectionModel::addSelectionInterval(int32_t index0, int32_t index1) {
	if (index0 == -1 || index1 == -1) {
		return;
	}
	if (index0 == index1) {
		if (isSelectableInListIndex(index1)) {
			$DefaultListSelectionModel::addSelectionInterval(index1, index1);
		}
		return;
	}
	if (getSelectionMode() != $ListSelectionModel::MULTIPLE_INTERVAL_SELECTION) {
		setSelectionInterval(index0, index1);
		return;
	}
	verifySelectionInterval(index0, index1, false);
}

AquaFileChooserUI$MacListSelectionModel::AquaFileChooserUI$MacListSelectionModel() {
}

$Class* AquaFileChooserUI$MacListSelectionModel::load$($String* name, bool initialize) {
	$loadClass(AquaFileChooserUI$MacListSelectionModel, name, initialize, &_AquaFileChooserUI$MacListSelectionModel_ClassInfo_, allocate$AquaFileChooserUI$MacListSelectionModel);
	return class$;
}

$Class* AquaFileChooserUI$MacListSelectionModel::class$ = nullptr;

		} // laf
	} // apple
} // com