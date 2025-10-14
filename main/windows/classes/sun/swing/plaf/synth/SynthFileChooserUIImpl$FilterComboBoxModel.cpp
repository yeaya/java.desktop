#include <sun/swing/plaf/synth/SynthFileChooserUIImpl$FilterComboBoxModel.h>

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
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <sun/swing/plaf/synth/SynthFileChooserUIImpl.h>
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
using $SynthFileChooserUIImpl = ::sun::swing::plaf::synth::SynthFileChooserUIImpl;

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthFileChooserUIImpl$FilterComboBoxModel_FieldInfo_[] = {
	{"this$0", "Lsun/swing/plaf/synth/SynthFileChooserUIImpl;", nullptr, $FINAL | $SYNTHETIC, $field(SynthFileChooserUIImpl$FilterComboBoxModel, this$0)},
	{"filters", "[Ljavax/swing/filechooser/FileFilter;", nullptr, $PROTECTED, $field(SynthFileChooserUIImpl$FilterComboBoxModel, filters)},
	{}
};

$MethodInfo _SynthFileChooserUIImpl$FilterComboBoxModel_MethodInfo_[] = {
	{"*addListDataListener", "(Ljavax/swing/event/ListDataListener;)V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/swing/plaf/synth/SynthFileChooserUIImpl;)V", nullptr, $PROTECTED, $method(static_cast<void(SynthFileChooserUIImpl$FilterComboBoxModel::*)($SynthFileChooserUIImpl*)>(&SynthFileChooserUIImpl$FilterComboBoxModel::init$))},
	{"getElementAt", "(I)Ljavax/swing/filechooser/FileFilter;", nullptr, $PUBLIC},
	{"getSelectedItem", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"*removeListDataListener", "(Ljavax/swing/event/ListDataListener;)V", nullptr, $PUBLIC},
	{"setSelectedItem", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SynthFileChooserUIImpl$FilterComboBoxModel_InnerClassesInfo_[] = {
	{"sun.swing.plaf.synth.SynthFileChooserUIImpl$FilterComboBoxModel", "sun.swing.plaf.synth.SynthFileChooserUIImpl", "FilterComboBoxModel", $PROTECTED},
	{}
};

$ClassInfo _SynthFileChooserUIImpl$FilterComboBoxModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.swing.plaf.synth.SynthFileChooserUIImpl$FilterComboBoxModel",
	"javax.swing.AbstractListModel",
	"javax.swing.ComboBoxModel,java.beans.PropertyChangeListener",
	_SynthFileChooserUIImpl$FilterComboBoxModel_FieldInfo_,
	_SynthFileChooserUIImpl$FilterComboBoxModel_MethodInfo_,
	"Ljavax/swing/AbstractListModel<Ljavax/swing/filechooser/FileFilter;>;Ljavax/swing/ComboBoxModel<Ljavax/swing/filechooser/FileFilter;>;Ljava/beans/PropertyChangeListener;",
	nullptr,
	_SynthFileChooserUIImpl$FilterComboBoxModel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.plaf.synth.SynthFileChooserUIImpl"
};

$Object* allocate$SynthFileChooserUIImpl$FilterComboBoxModel($Class* clazz) {
	return $of($alloc(SynthFileChooserUIImpl$FilterComboBoxModel));
}

void SynthFileChooserUIImpl$FilterComboBoxModel::addListDataListener($ListDataListener* l) {
	this->$AbstractListModel::addListDataListener(l);
}

void SynthFileChooserUIImpl$FilterComboBoxModel::removeListDataListener($ListDataListener* l) {
	this->$AbstractListModel::removeListDataListener(l);
}

int32_t SynthFileChooserUIImpl$FilterComboBoxModel::hashCode() {
	 return this->$AbstractListModel::hashCode();
}

bool SynthFileChooserUIImpl$FilterComboBoxModel::equals(Object$* arg0) {
	 return this->$AbstractListModel::equals(arg0);
}

$Object* SynthFileChooserUIImpl$FilterComboBoxModel::clone() {
	 return this->$AbstractListModel::clone();
}

$String* SynthFileChooserUIImpl$FilterComboBoxModel::toString() {
	 return this->$AbstractListModel::toString();
}

void SynthFileChooserUIImpl$FilterComboBoxModel::finalize() {
	this->$AbstractListModel::finalize();
}

void SynthFileChooserUIImpl$FilterComboBoxModel::init$($SynthFileChooserUIImpl* this$0) {
	$set(this, this$0, this$0);
	$AbstractListModel::init$();
	$set(this, filters, $nc($(this$0->getFileChooser()))->getChoosableFileFilters());
}

void SynthFileChooserUIImpl$FilterComboBoxModel::propertyChange($PropertyChangeEvent* e) {
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

void SynthFileChooserUIImpl$FilterComboBoxModel::setSelectedItem(Object$* filter) {
	if (filter != nullptr) {
		$nc($(this->this$0->getFileChooser()))->setFileFilter($cast($FileFilter, filter));
		fireContentsChanged(this, -1, -1);
	}
}

$Object* SynthFileChooserUIImpl$FilterComboBoxModel::getSelectedItem() {
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

int32_t SynthFileChooserUIImpl$FilterComboBoxModel::getSize() {
	if (this->filters != nullptr) {
		return $nc(this->filters)->length;
	} else {
		return 0;
	}
}

$Object* SynthFileChooserUIImpl$FilterComboBoxModel::getElementAt(int32_t index) {
	if (index > getSize() - 1) {
		return $of($nc($(this->this$0->getFileChooser()))->getFileFilter());
	}
	if (this->filters != nullptr) {
		return $of($nc(this->filters)->get(index));
	} else {
		return $of(nullptr);
	}
}

SynthFileChooserUIImpl$FilterComboBoxModel::SynthFileChooserUIImpl$FilterComboBoxModel() {
}

$Class* SynthFileChooserUIImpl$FilterComboBoxModel::load$($String* name, bool initialize) {
	$loadClass(SynthFileChooserUIImpl$FilterComboBoxModel, name, initialize, &_SynthFileChooserUIImpl$FilterComboBoxModel_ClassInfo_, allocate$SynthFileChooserUIImpl$FilterComboBoxModel);
	return class$;
}

$Class* SynthFileChooserUIImpl$FilterComboBoxModel::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // sun