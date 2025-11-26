#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI$GTKFileListModel.h>

#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI.h>
#include <java/io/File.h>
#include <java/util/Vector.h>
#include <javax/swing/AbstractListModel.h>
#include <javax/swing/event/ListDataEvent.h>
#include <javax/swing/event/ListDataListener.h>
#include <javax/swing/plaf/basic/BasicDirectoryModel.h>
#include <jcpp.h>

using $GTKFileChooserUI = ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $AbstractListModel = ::javax::swing::AbstractListModel;
using $ListDataEvent = ::javax::swing::event::ListDataEvent;
using $ListDataListener = ::javax::swing::event::ListDataListener;
using $BasicDirectoryModel = ::javax::swing::plaf::basic::BasicDirectoryModel;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _GTKFileChooserUI$GTKFileListModel_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(GTKFileChooserUI$GTKFileListModel, this$0)},
	{}
};

$MethodInfo _GTKFileChooserUI$GTKFileListModel_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;)V", nullptr, $PUBLIC, $method(static_cast<void(GTKFileChooserUI$GTKFileListModel::*)($GTKFileChooserUI*)>(&GTKFileChooserUI$GTKFileListModel::init$))},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"contentsChanged", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{"fireContentsChanged", "()V", nullptr, $PUBLIC},
	{"getElementAt", "(I)Ljava/io/File;", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC},
	{"indexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"intervalAdded", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{"intervalRemoved", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GTKFileChooserUI$GTKFileListModel_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$GTKFileListModel", "com.sun.java.swing.plaf.gtk.GTKFileChooserUI", "GTKFileListModel", $PROTECTED},
	{}
};

$ClassInfo _GTKFileChooserUI$GTKFileListModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$GTKFileListModel",
	"javax.swing.AbstractListModel",
	"javax.swing.event.ListDataListener",
	_GTKFileChooserUI$GTKFileListModel_FieldInfo_,
	_GTKFileChooserUI$GTKFileListModel_MethodInfo_,
	"Ljavax/swing/AbstractListModel<Ljava/io/File;>;Ljavax/swing/event/ListDataListener;",
	nullptr,
	_GTKFileChooserUI$GTKFileListModel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKFileChooserUI"
};

$Object* allocate$GTKFileChooserUI$GTKFileListModel($Class* clazz) {
	return $of($alloc(GTKFileChooserUI$GTKFileListModel));
}

int32_t GTKFileChooserUI$GTKFileListModel::hashCode() {
	 return this->$AbstractListModel::hashCode();
}

bool GTKFileChooserUI$GTKFileListModel::equals(Object$* arg0) {
	 return this->$AbstractListModel::equals(arg0);
}

$Object* GTKFileChooserUI$GTKFileListModel::clone() {
	 return this->$AbstractListModel::clone();
}

$String* GTKFileChooserUI$GTKFileListModel::toString() {
	 return this->$AbstractListModel::toString();
}

void GTKFileChooserUI$GTKFileListModel::finalize() {
	this->$AbstractListModel::finalize();
}

void GTKFileChooserUI$GTKFileListModel::init$($GTKFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractListModel::init$();
	$nc($(this$0->getModel()))->addListDataListener(this);
}

int32_t GTKFileChooserUI$GTKFileListModel::getSize() {
	$useLocalCurrentObjectStackCache();
	return $nc($($nc($(this->this$0->getModel()))->getFiles()))->size();
}

bool GTKFileChooserUI$GTKFileListModel::contains(Object$* o) {
	$useLocalCurrentObjectStackCache();
	return $nc($($nc($(this->this$0->getModel()))->getFiles()))->contains(o);
}

int32_t GTKFileChooserUI$GTKFileListModel::indexOf(Object$* o) {
	$useLocalCurrentObjectStackCache();
	return $nc($($nc($(this->this$0->getModel()))->getFiles()))->indexOf(o);
}

$Object* GTKFileChooserUI$GTKFileListModel::getElementAt(int32_t index) {
	$useLocalCurrentObjectStackCache();
	return $of($cast($File, $nc($($nc($(this->this$0->getModel()))->getFiles()))->elementAt(index)));
}

void GTKFileChooserUI$GTKFileListModel::intervalAdded($ListDataEvent* e) {
	int32_t var$0 = $nc(e)->getIndex0();
	fireIntervalAdded(this, var$0, e->getIndex1());
}

void GTKFileChooserUI$GTKFileListModel::intervalRemoved($ListDataEvent* e) {
	int32_t var$0 = $nc(e)->getIndex0();
	fireIntervalRemoved(this, var$0, e->getIndex1());
}

void GTKFileChooserUI$GTKFileListModel::fireContentsChanged() {
	$useLocalCurrentObjectStackCache();
	fireContentsChanged(this, 0, $nc($($nc($(this->this$0->getModel()))->getFiles()))->size() - 1);
}

void GTKFileChooserUI$GTKFileListModel::contentsChanged($ListDataEvent* e) {
	fireContentsChanged();
}

GTKFileChooserUI$GTKFileListModel::GTKFileChooserUI$GTKFileListModel() {
}

$Class* GTKFileChooserUI$GTKFileListModel::load$($String* name, bool initialize) {
	$loadClass(GTKFileChooserUI$GTKFileListModel, name, initialize, &_GTKFileChooserUI$GTKFileListModel_ClassInfo_, allocate$GTKFileChooserUI$GTKFileListModel);
	return class$;
}

$Class* GTKFileChooserUI$GTKFileListModel::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com