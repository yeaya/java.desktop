#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI$FilterComboBoxModel.h>

#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/AbstractListModel.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/event/ListDataListener.h>
#include <javax/swing/filechooser/FileFilter.h>
#include <jcpp.h>

#undef CHOOSABLE_FILE_FILTER_CHANGED_PROPERTY
#undef FILE_FILTER_CHANGED_PROPERTY

using $FileFilterArray = $Array<::javax::swing::filechooser::FileFilter>;
using $MotifFileChooserUI = ::com::sun::java::swing::plaf::motif::MotifFileChooserUI;
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

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifFileChooserUI$FilterComboBoxModel_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifFileChooserUI$FilterComboBoxModel, this$0)},
	{"filters", "[Ljavax/swing/filechooser/FileFilter;", nullptr, $PROTECTED, $field(MotifFileChooserUI$FilterComboBoxModel, filters)},
	{}
};

$MethodInfo _MotifFileChooserUI$FilterComboBoxModel_MethodInfo_[] = {
	{"*addListDataListener", "(Ljavax/swing/event/ListDataListener;)V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifFileChooserUI;)V", nullptr, $PROTECTED, $method(static_cast<void(MotifFileChooserUI$FilterComboBoxModel::*)($MotifFileChooserUI*)>(&MotifFileChooserUI$FilterComboBoxModel::init$))},
	{"getElementAt", "(I)Ljavax/swing/filechooser/FileFilter;", nullptr, $PUBLIC},
	{"getSelectedItem", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"*removeListDataListener", "(Ljavax/swing/event/ListDataListener;)V", nullptr, $PUBLIC},
	{"setSelectedItem", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifFileChooserUI$FilterComboBoxModel_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifFileChooserUI$FilterComboBoxModel", "com.sun.java.swing.plaf.motif.MotifFileChooserUI", "FilterComboBoxModel", $PROTECTED},
	{}
};

$ClassInfo _MotifFileChooserUI$FilterComboBoxModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifFileChooserUI$FilterComboBoxModel",
	"javax.swing.AbstractListModel",
	"javax.swing.ComboBoxModel,java.beans.PropertyChangeListener",
	_MotifFileChooserUI$FilterComboBoxModel_FieldInfo_,
	_MotifFileChooserUI$FilterComboBoxModel_MethodInfo_,
	"Ljavax/swing/AbstractListModel<Ljavax/swing/filechooser/FileFilter;>;Ljavax/swing/ComboBoxModel<Ljavax/swing/filechooser/FileFilter;>;Ljava/beans/PropertyChangeListener;",
	nullptr,
	_MotifFileChooserUI$FilterComboBoxModel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifFileChooserUI"
};

$Object* allocate$MotifFileChooserUI$FilterComboBoxModel($Class* clazz) {
	return $of($alloc(MotifFileChooserUI$FilterComboBoxModel));
}

void MotifFileChooserUI$FilterComboBoxModel::addListDataListener($ListDataListener* l) {
	this->$AbstractListModel::addListDataListener(l);
}

void MotifFileChooserUI$FilterComboBoxModel::removeListDataListener($ListDataListener* l) {
	this->$AbstractListModel::removeListDataListener(l);
}

int32_t MotifFileChooserUI$FilterComboBoxModel::hashCode() {
	 return this->$AbstractListModel::hashCode();
}

bool MotifFileChooserUI$FilterComboBoxModel::equals(Object$* arg0) {
	 return this->$AbstractListModel::equals(arg0);
}

$Object* MotifFileChooserUI$FilterComboBoxModel::clone() {
	 return this->$AbstractListModel::clone();
}

$String* MotifFileChooserUI$FilterComboBoxModel::toString() {
	 return this->$AbstractListModel::toString();
}

void MotifFileChooserUI$FilterComboBoxModel::finalize() {
	this->$AbstractListModel::finalize();
}

void MotifFileChooserUI$FilterComboBoxModel::init$($MotifFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractListModel::init$();
	$set(this, filters, $nc($(this$0->getFileChooser()))->getChoosableFileFilters());
}

void MotifFileChooserUI$FilterComboBoxModel::propertyChange($PropertyChangeEvent* e) {
	$var($String, prop, $nc(e)->getPropertyName());
	$init($JFileChooser);
	if ($nc(prop)->equals($JFileChooser::CHOOSABLE_FILE_FILTER_CHANGED_PROPERTY)) {
		$set(this, filters, $cast($FileFilterArray, e->getNewValue()));
		fireContentsChanged(this, -1, -1);
	} else {
		if (prop->equals($JFileChooser::FILE_FILTER_CHANGED_PROPERTY)) {
			fireContentsChanged(this, -1, -1);
		}
	}
}

void MotifFileChooserUI$FilterComboBoxModel::setSelectedItem(Object$* filter) {
	if (filter != nullptr) {
		$nc($(this->this$0->getFileChooser()))->setFileFilter($cast($FileFilter, filter));
		fireContentsChanged(this, -1, -1);
	}
}

$Object* MotifFileChooserUI$FilterComboBoxModel::getSelectedItem() {
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
		if (!found) {
			$nc($(this->this$0->getFileChooser()))->addChoosableFileFilter(currentFilter);
		}
	}
	return $of($nc($(this->this$0->getFileChooser()))->getFileFilter());
}

int32_t MotifFileChooserUI$FilterComboBoxModel::getSize() {
	if (this->filters != nullptr) {
		return $nc(this->filters)->length;
	} else {
		return 0;
	}
}

$Object* MotifFileChooserUI$FilterComboBoxModel::getElementAt(int32_t index) {
	if (index > getSize() - 1) {
		return $of($nc($(this->this$0->getFileChooser()))->getFileFilter());
	}
	if (this->filters != nullptr) {
		return $of($nc(this->filters)->get(index));
	} else {
		return $of(nullptr);
	}
}

MotifFileChooserUI$FilterComboBoxModel::MotifFileChooserUI$FilterComboBoxModel() {
}

$Class* MotifFileChooserUI$FilterComboBoxModel::load$($String* name, bool initialize) {
	$loadClass(MotifFileChooserUI$FilterComboBoxModel, name, initialize, &_MotifFileChooserUI$FilterComboBoxModel_ClassInfo_, allocate$MotifFileChooserUI$FilterComboBoxModel);
	return class$;
}

$Class* MotifFileChooserUI$FilterComboBoxModel::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com