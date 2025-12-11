#include <com/apple/laf/AquaFileChooserUI$FilterComboBoxModel.h>

#include <com/apple/laf/AquaFileChooserUI.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/util/Objects.h>
#include <javax/swing/AbstractListModel.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/event/ListDataListener.h>
#include <javax/swing/filechooser/FileFilter.h>
#include <jcpp.h>

#undef CHOOSABLE_FILE_FILTER_CHANGED_PROPERTY
#undef FILE_FILTER_CHANGED_PROPERTY

using $FileFilterArray = $Array<::javax::swing::filechooser::FileFilter>;
using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $AbstractListModel = ::javax::swing::AbstractListModel;
using $JFileChooser = ::javax::swing::JFileChooser;
using $ListDataListener = ::javax::swing::event::ListDataListener;
using $FileFilter = ::javax::swing::filechooser::FileFilter;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaFileChooserUI$FilterComboBoxModel_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$FilterComboBoxModel, this$0)},
	{"filters", "[Ljavax/swing/filechooser/FileFilter;", nullptr, $PROTECTED, $field(AquaFileChooserUI$FilterComboBoxModel, filters)},
	{"oldFileFilter", "Ljava/lang/Object;", nullptr, 0, $field(AquaFileChooserUI$FilterComboBoxModel, oldFileFilter)},
	{}
};

$MethodInfo _AquaFileChooserUI$FilterComboBoxModel_MethodInfo_[] = {
	{"*addListDataListener", "(Ljavax/swing/event/ListDataListener;)V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;)V", nullptr, $PROTECTED, $method(static_cast<void(AquaFileChooserUI$FilterComboBoxModel::*)($AquaFileChooserUI*)>(&AquaFileChooserUI$FilterComboBoxModel::init$))},
	{"getElementAt", "(I)Ljavax/swing/filechooser/FileFilter;", nullptr, $PUBLIC},
	{"getSelectedItem", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC},
	{"isSelectedFileFilterInModel", "(Ljava/lang/Object;)Z", nullptr, $PRIVATE, $method(static_cast<bool(AquaFileChooserUI$FilterComboBoxModel::*)(Object$*)>(&AquaFileChooserUI$FilterComboBoxModel::isSelectedFileFilterInModel))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"*removeListDataListener", "(Ljavax/swing/event/ListDataListener;)V", nullptr, $PUBLIC},
	{"setSelectedItem", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaFileChooserUI$FilterComboBoxModel_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileChooserUI$FilterComboBoxModel", "com.apple.laf.AquaFileChooserUI", "FilterComboBoxModel", $PROTECTED},
	{}
};

$ClassInfo _AquaFileChooserUI$FilterComboBoxModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaFileChooserUI$FilterComboBoxModel",
	"javax.swing.AbstractListModel",
	"javax.swing.ComboBoxModel,java.beans.PropertyChangeListener",
	_AquaFileChooserUI$FilterComboBoxModel_FieldInfo_,
	_AquaFileChooserUI$FilterComboBoxModel_MethodInfo_,
	"Ljavax/swing/AbstractListModel<Ljavax/swing/filechooser/FileFilter;>;Ljavax/swing/ComboBoxModel<Ljavax/swing/filechooser/FileFilter;>;Ljava/beans/PropertyChangeListener;",
	nullptr,
	_AquaFileChooserUI$FilterComboBoxModel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileChooserUI"
};

$Object* allocate$AquaFileChooserUI$FilterComboBoxModel($Class* clazz) {
	return $of($alloc(AquaFileChooserUI$FilterComboBoxModel));
}

void AquaFileChooserUI$FilterComboBoxModel::addListDataListener($ListDataListener* l) {
	this->$AbstractListModel::addListDataListener(l);
}

void AquaFileChooserUI$FilterComboBoxModel::removeListDataListener($ListDataListener* l) {
	this->$AbstractListModel::removeListDataListener(l);
}

int32_t AquaFileChooserUI$FilterComboBoxModel::hashCode() {
	 return this->$AbstractListModel::hashCode();
}

bool AquaFileChooserUI$FilterComboBoxModel::equals(Object$* arg0) {
	 return this->$AbstractListModel::equals(arg0);
}

$Object* AquaFileChooserUI$FilterComboBoxModel::clone() {
	 return this->$AbstractListModel::clone();
}

$String* AquaFileChooserUI$FilterComboBoxModel::toString() {
	 return this->$AbstractListModel::toString();
}

void AquaFileChooserUI$FilterComboBoxModel::finalize() {
	this->$AbstractListModel::finalize();
}

void AquaFileChooserUI$FilterComboBoxModel::init$($AquaFileChooserUI* this$0) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$AbstractListModel::init$();
	$set(this, oldFileFilter, $nc($(this->this$0->getFileChooser()))->getFileFilter());
	$set(this, filters, $nc($(this$0->getFileChooser()))->getChoosableFileFilters());
}

void AquaFileChooserUI$FilterComboBoxModel::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($String, prop, $nc(e)->getPropertyName());
	$init($JFileChooser);
	if (prop == $JFileChooser::CHOOSABLE_FILE_FILTER_CHANGED_PROPERTY) {
		$set(this, filters, $cast($FileFilterArray, e->getNewValue()));
		fireContentsChanged(this, -1, -1);
	} else {
		if (prop == $JFileChooser::FILE_FILTER_CHANGED_PROPERTY) {
			setSelectedItem($(e->getNewValue()));
		}
	}
}

void AquaFileChooserUI$FilterComboBoxModel::setSelectedItem(Object$* filter) {
	if (filter != nullptr && !isSelectedFileFilterInModel(filter)) {
		$set(this, oldFileFilter, filter);
		$nc($(this->this$0->getFileChooser()))->setFileFilter($cast($FileFilter, filter));
		fireContentsChanged(this, -1, -1);
	}
}

bool AquaFileChooserUI$FilterComboBoxModel::isSelectedFileFilterInModel(Object$* filter) {
	return $Objects::equals(filter, this->oldFileFilter);
}

$Object* AquaFileChooserUI$FilterComboBoxModel::getSelectedItem() {
	$useLocalCurrentObjectStackCache();
	$var($FileFilter, currentFilter, $nc($(this->this$0->getFileChooser()))->getFileFilter());
	bool found = false;
	if (currentFilter != nullptr) {
		{
			$var($FileFilterArray, arr$, this->filters);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($FileFilter, filter, arr$->get(i$));
				{
					if (filter == currentFilter) {
						found = true;
					}
				}
			}
		}
		if (found == false) {
			$nc($(this->this$0->getFileChooser()))->addChoosableFileFilter(currentFilter);
		}
	}
	return $of($nc($(this->this$0->getFileChooser()))->getFileFilter());
}

int32_t AquaFileChooserUI$FilterComboBoxModel::getSize() {
	if (this->filters != nullptr) {
		return $nc(this->filters)->length;
	} else {
		return 0;
	}
}

$Object* AquaFileChooserUI$FilterComboBoxModel::getElementAt(int32_t index) {
	if (index > getSize() - 1) {
		return $of($nc($(this->this$0->getFileChooser()))->getFileFilter());
	}
	if (this->filters != nullptr) {
		return $of($nc(this->filters)->get(index));
	} else {
		return $of(nullptr);
	}
}

AquaFileChooserUI$FilterComboBoxModel::AquaFileChooserUI$FilterComboBoxModel() {
}

$Class* AquaFileChooserUI$FilterComboBoxModel::load$($String* name, bool initialize) {
	$loadClass(AquaFileChooserUI$FilterComboBoxModel, name, initialize, &_AquaFileChooserUI$FilterComboBoxModel_ClassInfo_, allocate$AquaFileChooserUI$FilterComboBoxModel);
	return class$;
}

$Class* AquaFileChooserUI$FilterComboBoxModel::class$ = nullptr;

		} // laf
	} // apple
} // com