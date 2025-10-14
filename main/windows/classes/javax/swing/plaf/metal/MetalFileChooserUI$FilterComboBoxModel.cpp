#include <javax/swing/plaf/metal/MetalFileChooserUI$FilterComboBoxModel.h>

#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractListModel.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/event/ListDataListener.h>
#include <javax/swing/filechooser/FileFilter.h>
#include <javax/swing/plaf/metal/MetalFileChooserUI.h>
#include <jcpp.h>

#undef CHOOSABLE_FILE_FILTER_CHANGED_PROPERTY
#undef FILE_FILTER_CHANGED_PROPERTY

using $FileFilterArray = $Array<::javax::swing::filechooser::FileFilter>;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractListModel = ::javax::swing::AbstractListModel;
using $ComboBoxModel = ::javax::swing::ComboBoxModel;
using $JFileChooser = ::javax::swing::JFileChooser;
using $ListDataListener = ::javax::swing::event::ListDataListener;
using $FileFilter = ::javax::swing::filechooser::FileFilter;
using $BasicFileChooserUI = ::javax::swing::plaf::basic::BasicFileChooserUI;
using $MetalFileChooserUI = ::javax::swing::plaf::metal::MetalFileChooserUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalFileChooserUI$FilterComboBoxModel_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/MetalFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalFileChooserUI$FilterComboBoxModel, this$0)},
	{"filters", "[Ljavax/swing/filechooser/FileFilter;", nullptr, $PROTECTED, $field(MetalFileChooserUI$FilterComboBoxModel, filters)},
	{}
};

$MethodInfo _MetalFileChooserUI$FilterComboBoxModel_MethodInfo_[] = {
	{"*addListDataListener", "(Ljavax/swing/event/ListDataListener;)V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/plaf/metal/MetalFileChooserUI;)V", nullptr, $PROTECTED, $method(static_cast<void(MetalFileChooserUI$FilterComboBoxModel::*)($MetalFileChooserUI*)>(&MetalFileChooserUI$FilterComboBoxModel::init$))},
	{"getElementAt", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getSelectedItem", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"*removeListDataListener", "(Ljavax/swing/event/ListDataListener;)V", nullptr, $PUBLIC},
	{"setSelectedItem", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalFileChooserUI$FilterComboBoxModel_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalFileChooserUI$FilterComboBoxModel", "javax.swing.plaf.metal.MetalFileChooserUI", "FilterComboBoxModel", $PROTECTED},
	{}
};

$ClassInfo _MetalFileChooserUI$FilterComboBoxModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalFileChooserUI$FilterComboBoxModel",
	"javax.swing.AbstractListModel",
	"javax.swing.ComboBoxModel,java.beans.PropertyChangeListener",
	_MetalFileChooserUI$FilterComboBoxModel_FieldInfo_,
	_MetalFileChooserUI$FilterComboBoxModel_MethodInfo_,
	"Ljavax/swing/AbstractListModel<Ljava/lang/Object;>;Ljavax/swing/ComboBoxModel<Ljava/lang/Object;>;Ljava/beans/PropertyChangeListener;",
	nullptr,
	_MetalFileChooserUI$FilterComboBoxModel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalFileChooserUI"
};

$Object* allocate$MetalFileChooserUI$FilterComboBoxModel($Class* clazz) {
	return $of($alloc(MetalFileChooserUI$FilterComboBoxModel));
}

void MetalFileChooserUI$FilterComboBoxModel::addListDataListener($ListDataListener* l) {
	this->$AbstractListModel::addListDataListener(l);
}

void MetalFileChooserUI$FilterComboBoxModel::removeListDataListener($ListDataListener* l) {
	this->$AbstractListModel::removeListDataListener(l);
}

int32_t MetalFileChooserUI$FilterComboBoxModel::hashCode() {
	 return this->$AbstractListModel::hashCode();
}

bool MetalFileChooserUI$FilterComboBoxModel::equals(Object$* arg0) {
	 return this->$AbstractListModel::equals(arg0);
}

$Object* MetalFileChooserUI$FilterComboBoxModel::clone() {
	 return this->$AbstractListModel::clone();
}

$String* MetalFileChooserUI$FilterComboBoxModel::toString() {
	 return this->$AbstractListModel::toString();
}

void MetalFileChooserUI$FilterComboBoxModel::finalize() {
	this->$AbstractListModel::finalize();
}

void MetalFileChooserUI$FilterComboBoxModel::init$($MetalFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractListModel::init$();
	$set(this, filters, $nc($(this$0->getFileChooser()))->getChoosableFileFilters());
}

void MetalFileChooserUI$FilterComboBoxModel::propertyChange($PropertyChangeEvent* e) {
	$var($String, prop, $nc(e)->getPropertyName());
	$init($JFileChooser);
	if (prop == $JFileChooser::CHOOSABLE_FILE_FILTER_CHANGED_PROPERTY) {
		$set(this, filters, $cast($FileFilterArray, e->getNewValue()));
		fireContentsChanged(this, -1, -1);
	} else {
		if (prop == $JFileChooser::FILE_FILTER_CHANGED_PROPERTY) {
			fireContentsChanged(this, -1, -1);
		}
	}
}

void MetalFileChooserUI$FilterComboBoxModel::setSelectedItem(Object$* filter) {
	if (filter != nullptr) {
		$nc($(this->this$0->getFileChooser()))->setFileFilter($cast($FileFilter, filter));
		fireContentsChanged(this, -1, -1);
	}
}

$Object* MetalFileChooserUI$FilterComboBoxModel::getSelectedItem() {
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

int32_t MetalFileChooserUI$FilterComboBoxModel::getSize() {
	if (this->filters != nullptr) {
		return $nc(this->filters)->length;
	} else {
		return 0;
	}
}

$Object* MetalFileChooserUI$FilterComboBoxModel::getElementAt(int32_t index) {
	if (index > getSize() - 1) {
		return $of($nc($(this->this$0->getFileChooser()))->getFileFilter());
	}
	if (this->filters != nullptr) {
		return $of($nc(this->filters)->get(index));
	} else {
		return $of(nullptr);
	}
}

MetalFileChooserUI$FilterComboBoxModel::MetalFileChooserUI$FilterComboBoxModel() {
}

$Class* MetalFileChooserUI$FilterComboBoxModel::load$($String* name, bool initialize) {
	$loadClass(MetalFileChooserUI$FilterComboBoxModel, name, initialize, &_MetalFileChooserUI$FilterComboBoxModel_ClassInfo_, allocate$MetalFileChooserUI$FilterComboBoxModel);
	return class$;
}

$Class* MetalFileChooserUI$FilterComboBoxModel::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax