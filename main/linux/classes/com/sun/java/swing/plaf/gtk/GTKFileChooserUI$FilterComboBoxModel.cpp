#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI$FilterComboBoxModel.h>

#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/AbstractListModel.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/event/ListDataListener.h>
#include <javax/swing/filechooser/FileFilter.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <jcpp.h>

#undef CHOOSABLE_FILE_FILTER_CHANGED_PROPERTY
#undef FILE_FILTER_CHANGED_PROPERTY

using $FileFilterArray = $Array<::javax::swing::filechooser::FileFilter>;
using $GTKFileChooserUI = ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractListModel = ::javax::swing::AbstractListModel;
using $JFileChooser = ::javax::swing::JFileChooser;
using $ListDataListener = ::javax::swing::event::ListDataListener;
using $FileFilter = ::javax::swing::filechooser::FileFilter;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _GTKFileChooserUI$FilterComboBoxModel_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(GTKFileChooserUI$FilterComboBoxModel, this$0)},
	{"filters", "[Ljavax/swing/filechooser/FileFilter;", nullptr, $PROTECTED, $field(GTKFileChooserUI$FilterComboBoxModel, filters)},
	{}
};

$MethodInfo _GTKFileChooserUI$FilterComboBoxModel_MethodInfo_[] = {
	{"*addListDataListener", "(Ljavax/swing/event/ListDataListener;)V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;)V", nullptr, $PROTECTED, $method(static_cast<void(GTKFileChooserUI$FilterComboBoxModel::*)($GTKFileChooserUI*)>(&GTKFileChooserUI$FilterComboBoxModel::init$))},
	{"getElementAt", "(I)Ljavax/swing/filechooser/FileFilter;", nullptr, $PUBLIC},
	{"getSelectedItem", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"*removeListDataListener", "(Ljavax/swing/event/ListDataListener;)V", nullptr, $PUBLIC},
	{"setSelectedItem", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GTKFileChooserUI$FilterComboBoxModel_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$FilterComboBoxModel", "com.sun.java.swing.plaf.gtk.GTKFileChooserUI", "FilterComboBoxModel", $PROTECTED},
	{}
};

$ClassInfo _GTKFileChooserUI$FilterComboBoxModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$FilterComboBoxModel",
	"javax.swing.AbstractListModel",
	"javax.swing.ComboBoxModel,java.beans.PropertyChangeListener",
	_GTKFileChooserUI$FilterComboBoxModel_FieldInfo_,
	_GTKFileChooserUI$FilterComboBoxModel_MethodInfo_,
	"Ljavax/swing/AbstractListModel<Ljavax/swing/filechooser/FileFilter;>;Ljavax/swing/ComboBoxModel<Ljavax/swing/filechooser/FileFilter;>;Ljava/beans/PropertyChangeListener;",
	nullptr,
	_GTKFileChooserUI$FilterComboBoxModel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKFileChooserUI"
};

$Object* allocate$GTKFileChooserUI$FilterComboBoxModel($Class* clazz) {
	return $of($alloc(GTKFileChooserUI$FilterComboBoxModel));
}

void GTKFileChooserUI$FilterComboBoxModel::addListDataListener($ListDataListener* l) {
	this->$AbstractListModel::addListDataListener(l);
}

void GTKFileChooserUI$FilterComboBoxModel::removeListDataListener($ListDataListener* l) {
	this->$AbstractListModel::removeListDataListener(l);
}

int32_t GTKFileChooserUI$FilterComboBoxModel::hashCode() {
	 return this->$AbstractListModel::hashCode();
}

bool GTKFileChooserUI$FilterComboBoxModel::equals(Object$* arg0) {
	 return this->$AbstractListModel::equals(arg0);
}

$Object* GTKFileChooserUI$FilterComboBoxModel::clone() {
	 return this->$AbstractListModel::clone();
}

$String* GTKFileChooserUI$FilterComboBoxModel::toString() {
	 return this->$AbstractListModel::toString();
}

void GTKFileChooserUI$FilterComboBoxModel::finalize() {
	this->$AbstractListModel::finalize();
}

void GTKFileChooserUI$FilterComboBoxModel::init$($GTKFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractListModel::init$();
	$set(this, filters, $nc($(this$0->getFileChooser()))->getChoosableFileFilters());
}

void GTKFileChooserUI$FilterComboBoxModel::propertyChange($PropertyChangeEvent* e) {
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

void GTKFileChooserUI$FilterComboBoxModel::setSelectedItem(Object$* filter) {
	if (filter != nullptr) {
		$nc($(this->this$0->getFileChooser()))->setFileFilter($cast($FileFilter, filter));
		fireContentsChanged(this, -1, -1);
	}
}

$Object* GTKFileChooserUI$FilterComboBoxModel::getSelectedItem() {
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

int32_t GTKFileChooserUI$FilterComboBoxModel::getSize() {
	if (this->filters != nullptr) {
		return $nc(this->filters)->length;
	} else {
		return 0;
	}
}

$Object* GTKFileChooserUI$FilterComboBoxModel::getElementAt(int32_t index) {
	if (index > getSize() - 1) {
		return $of($nc($(this->this$0->getFileChooser()))->getFileFilter());
	}
	if (this->filters != nullptr) {
		return $of($nc(this->filters)->get(index));
	} else {
		return $of(nullptr);
	}
}

GTKFileChooserUI$FilterComboBoxModel::GTKFileChooserUI$FilterComboBoxModel() {
}

$Class* GTKFileChooserUI$FilterComboBoxModel::load$($String* name, bool initialize) {
	$loadClass(GTKFileChooserUI$FilterComboBoxModel, name, initialize, &_GTKFileChooserUI$FilterComboBoxModel_ClassInfo_, allocate$GTKFileChooserUI$FilterComboBoxModel);
	return class$;
}

$Class* GTKFileChooserUI$FilterComboBoxModel::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com