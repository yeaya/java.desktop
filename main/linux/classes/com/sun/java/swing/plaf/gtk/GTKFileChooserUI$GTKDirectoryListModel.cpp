#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI$GTKDirectoryListModel.h>

#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI.h>
#include <java/io/File.h>
#include <java/util/Vector.h>
#include <javax/swing/AbstractListModel.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/event/ListDataEvent.h>
#include <javax/swing/event/ListDataListener.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <javax/swing/plaf/basic/BasicDirectoryModel.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <jcpp.h>

using $GTKFileChooserUI = ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $AbstractListModel = ::javax::swing::AbstractListModel;
using $JFileChooser = ::javax::swing::JFileChooser;
using $ListDataEvent = ::javax::swing::event::ListDataEvent;
using $ListDataListener = ::javax::swing::event::ListDataListener;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;
using $BasicDirectoryModel = ::javax::swing::plaf::basic::BasicDirectoryModel;
using $BasicFileChooserUI = ::javax::swing::plaf::basic::BasicFileChooserUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _GTKFileChooserUI$GTKDirectoryListModel_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(GTKFileChooserUI$GTKDirectoryListModel, this$0)},
	{"curDir", "Ljava/io/File;", nullptr, 0, $field(GTKFileChooserUI$GTKDirectoryListModel, curDir)},
	{}
};

$MethodInfo _GTKFileChooserUI$GTKDirectoryListModel_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;)V", nullptr, $PUBLIC, $method(static_cast<void(GTKFileChooserUI$GTKDirectoryListModel::*)($GTKFileChooserUI*)>(&GTKFileChooserUI$GTKDirectoryListModel::init$))},
	{"contentsChanged", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{"directoryChanged", "()V", nullptr, $PRIVATE, $method(static_cast<void(GTKFileChooserUI$GTKDirectoryListModel::*)()>(&GTKFileChooserUI$GTKDirectoryListModel::directoryChanged))},
	{"fireContentsChanged", "()V", nullptr, $PUBLIC},
	{"getElementAt", "(I)Ljava/io/File;", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC},
	{"intervalAdded", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{"intervalRemoved", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GTKFileChooserUI$GTKDirectoryListModel_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$GTKDirectoryListModel", "com.sun.java.swing.plaf.gtk.GTKFileChooserUI", "GTKDirectoryListModel", $PROTECTED},
	{}
};

$ClassInfo _GTKFileChooserUI$GTKDirectoryListModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$GTKDirectoryListModel",
	"javax.swing.AbstractListModel",
	"javax.swing.event.ListDataListener",
	_GTKFileChooserUI$GTKDirectoryListModel_FieldInfo_,
	_GTKFileChooserUI$GTKDirectoryListModel_MethodInfo_,
	"Ljavax/swing/AbstractListModel<Ljava/io/File;>;Ljavax/swing/event/ListDataListener;",
	nullptr,
	_GTKFileChooserUI$GTKDirectoryListModel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKFileChooserUI"
};

$Object* allocate$GTKFileChooserUI$GTKDirectoryListModel($Class* clazz) {
	return $of($alloc(GTKFileChooserUI$GTKDirectoryListModel));
}

int32_t GTKFileChooserUI$GTKDirectoryListModel::hashCode() {
	 return this->$AbstractListModel::hashCode();
}

bool GTKFileChooserUI$GTKDirectoryListModel::equals(Object$* arg0) {
	 return this->$AbstractListModel::equals(arg0);
}

$Object* GTKFileChooserUI$GTKDirectoryListModel::clone() {
	 return this->$AbstractListModel::clone();
}

$String* GTKFileChooserUI$GTKDirectoryListModel::toString() {
	 return this->$AbstractListModel::toString();
}

void GTKFileChooserUI$GTKDirectoryListModel::finalize() {
	this->$AbstractListModel::finalize();
}

void GTKFileChooserUI$GTKDirectoryListModel::init$($GTKFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractListModel::init$();
	$nc($(this$0->getModel()))->addListDataListener(this);
	directoryChanged();
}

int32_t GTKFileChooserUI$GTKDirectoryListModel::getSize() {
	$useLocalCurrentObjectStackCache();
	return $nc($($nc($(this->this$0->getModel()))->getDirectories()))->size() + 1;
}

$Object* GTKFileChooserUI$GTKDirectoryListModel::getElementAt(int32_t index) {
	$useLocalCurrentObjectStackCache();
	return $of(index > 0 ? $cast($File, $nc($($nc($(this->this$0->getModel()))->getDirectories()))->elementAt(index - 1)) : this->curDir);
}

void GTKFileChooserUI$GTKDirectoryListModel::intervalAdded($ListDataEvent* e) {
	int32_t var$0 = $nc(e)->getIndex0();
	fireIntervalAdded(this, var$0, e->getIndex1());
}

void GTKFileChooserUI$GTKDirectoryListModel::intervalRemoved($ListDataEvent* e) {
	int32_t var$0 = $nc(e)->getIndex0();
	fireIntervalRemoved(this, var$0, e->getIndex1());
}

void GTKFileChooserUI$GTKDirectoryListModel::fireContentsChanged() {
	$useLocalCurrentObjectStackCache();
	fireContentsChanged(this, 0, $nc($($nc($(this->this$0->getModel()))->getDirectories()))->size() - 1);
}

void GTKFileChooserUI$GTKDirectoryListModel::contentsChanged($ListDataEvent* e) {
	fireContentsChanged();
}

void GTKFileChooserUI$GTKDirectoryListModel::directoryChanged() {
	$useLocalCurrentObjectStackCache();
	$set(this, curDir, $nc($($nc($(this->this$0->getFileChooser()))->getFileSystemView()))->createFileObject($($nc($(this->this$0->getFileChooser()))->getCurrentDirectory()), "."_s));
}

GTKFileChooserUI$GTKDirectoryListModel::GTKFileChooserUI$GTKDirectoryListModel() {
}

$Class* GTKFileChooserUI$GTKDirectoryListModel::load$($String* name, bool initialize) {
	$loadClass(GTKFileChooserUI$GTKDirectoryListModel, name, initialize, &_GTKFileChooserUI$GTKDirectoryListModel_ClassInfo_, allocate$GTKFileChooserUI$GTKDirectoryListModel);
	return class$;
}

$Class* GTKFileChooserUI$GTKDirectoryListModel::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com