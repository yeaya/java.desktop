#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI$DirectoryComboBoxModel.h>

#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/util/Vector.h>
#include <javax/swing/AbstractListModel.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/event/ListDataListener.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <sun/awt/shell/ShellFolder.h>
#include <jcpp.h>

using $GTKFileChooserUI = ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $AbstractListModel = ::javax::swing::AbstractListModel;
using $JFileChooser = ::javax::swing::JFileChooser;
using $ListDataListener = ::javax::swing::event::ListDataListener;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;
using $ShellFolder = ::sun::awt::shell::ShellFolder;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _GTKFileChooserUI$DirectoryComboBoxModel_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(GTKFileChooserUI$DirectoryComboBoxModel, this$0)},
	{"directories", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/io/File;>;", 0, $field(GTKFileChooserUI$DirectoryComboBoxModel, directories)},
	{"selectedDirectory", "Ljava/io/File;", nullptr, 0, $field(GTKFileChooserUI$DirectoryComboBoxModel, selectedDirectory)},
	{"chooser", "Ljavax/swing/JFileChooser;", nullptr, 0, $field(GTKFileChooserUI$DirectoryComboBoxModel, chooser)},
	{"fsv", "Ljavax/swing/filechooser/FileSystemView;", nullptr, 0, $field(GTKFileChooserUI$DirectoryComboBoxModel, fsv)},
	{}
};

$MethodInfo _GTKFileChooserUI$DirectoryComboBoxModel_MethodInfo_[] = {
	{"*addListDataListener", "(Ljavax/swing/event/ListDataListener;)V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;)V", nullptr, $PUBLIC, $method(static_cast<void(GTKFileChooserUI$DirectoryComboBoxModel::*)($GTKFileChooserUI*)>(&GTKFileChooserUI$DirectoryComboBoxModel::init$))},
	{"addItem", "(Ljava/io/File;)V", nullptr, $PRIVATE, $method(static_cast<void(GTKFileChooserUI$DirectoryComboBoxModel::*)($File*)>(&GTKFileChooserUI$DirectoryComboBoxModel::addItem))},
	{"getElementAt", "(I)Ljava/io/File;", nullptr, $PUBLIC},
	{"getSelectedItem", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC},
	{"*removeListDataListener", "(Ljavax/swing/event/ListDataListener;)V", nullptr, $PUBLIC},
	{"setSelectedItem", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GTKFileChooserUI$DirectoryComboBoxModel_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$DirectoryComboBoxModel", "com.sun.java.swing.plaf.gtk.GTKFileChooserUI", "DirectoryComboBoxModel", $PROTECTED},
	{}
};

$ClassInfo _GTKFileChooserUI$DirectoryComboBoxModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$DirectoryComboBoxModel",
	"javax.swing.AbstractListModel",
	"javax.swing.ComboBoxModel",
	_GTKFileChooserUI$DirectoryComboBoxModel_FieldInfo_,
	_GTKFileChooserUI$DirectoryComboBoxModel_MethodInfo_,
	"Ljavax/swing/AbstractListModel<Ljava/io/File;>;Ljavax/swing/ComboBoxModel<Ljava/io/File;>;",
	nullptr,
	_GTKFileChooserUI$DirectoryComboBoxModel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKFileChooserUI"
};

$Object* allocate$GTKFileChooserUI$DirectoryComboBoxModel($Class* clazz) {
	return $of($alloc(GTKFileChooserUI$DirectoryComboBoxModel));
}

void GTKFileChooserUI$DirectoryComboBoxModel::addListDataListener($ListDataListener* l) {
	this->$AbstractListModel::addListDataListener(l);
}

void GTKFileChooserUI$DirectoryComboBoxModel::removeListDataListener($ListDataListener* l) {
	this->$AbstractListModel::removeListDataListener(l);
}

int32_t GTKFileChooserUI$DirectoryComboBoxModel::hashCode() {
	 return this->$AbstractListModel::hashCode();
}

bool GTKFileChooserUI$DirectoryComboBoxModel::equals(Object$* arg0) {
	 return this->$AbstractListModel::equals(arg0);
}

$Object* GTKFileChooserUI$DirectoryComboBoxModel::clone() {
	 return this->$AbstractListModel::clone();
}

$String* GTKFileChooserUI$DirectoryComboBoxModel::toString() {
	 return this->$AbstractListModel::toString();
}

void GTKFileChooserUI$DirectoryComboBoxModel::finalize() {
	this->$AbstractListModel::finalize();
}

void GTKFileChooserUI$DirectoryComboBoxModel::init$($GTKFileChooserUI* this$0) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$AbstractListModel::init$();
	$set(this, directories, $new($Vector));
	$set(this, selectedDirectory, nullptr);
	$set(this, chooser, this->this$0->getFileChooser());
	$set(this, fsv, $nc(this->chooser)->getFileSystemView());
	$var($File, dir, $nc($(this$0->getFileChooser()))->getCurrentDirectory());
	if (dir != nullptr) {
		addItem(dir);
	}
}

void GTKFileChooserUI$DirectoryComboBoxModel::addItem($File* directory) {
	$useLocalCurrentObjectStackCache();
	if (directory == nullptr) {
		return;
	}
	int32_t oldSize = $nc(this->directories)->size();
	$nc(this->directories)->clear();
	if (oldSize > 0) {
		fireIntervalRemoved(this, 0, oldSize);
	}
	$var($File, canonical, nullptr);
	try {
		$assign(canonical, $nc(this->fsv)->createFileObject($($nc($($ShellFolder::getNormalizedFile(directory)))->getPath())));
	} catch ($IOException& e) {
		$assign(canonical, directory);
	}
	$var($File, f, canonical);
	do {
		$nc(this->directories)->add(f);
	} while (($assign(f, $nc(f)->getParentFile())) != nullptr);
	int32_t newSize = $nc(this->directories)->size();
	if (newSize > 0) {
		fireIntervalAdded(this, 0, newSize);
	}
	setSelectedItem(canonical);
}

void GTKFileChooserUI$DirectoryComboBoxModel::setSelectedItem(Object$* selectedDirectory) {
	$set(this, selectedDirectory, $cast($File, selectedDirectory));
	fireContentsChanged(this, -1, -1);
}

$Object* GTKFileChooserUI$DirectoryComboBoxModel::getSelectedItem() {
	return $of(this->selectedDirectory);
}

int32_t GTKFileChooserUI$DirectoryComboBoxModel::getSize() {
	return $nc(this->directories)->size();
}

$Object* GTKFileChooserUI$DirectoryComboBoxModel::getElementAt(int32_t index) {
	return $of($cast($File, $nc(this->directories)->elementAt(index)));
}

GTKFileChooserUI$DirectoryComboBoxModel::GTKFileChooserUI$DirectoryComboBoxModel() {
}

$Class* GTKFileChooserUI$DirectoryComboBoxModel::load$($String* name, bool initialize) {
	$loadClass(GTKFileChooserUI$DirectoryComboBoxModel, name, initialize, &_GTKFileChooserUI$DirectoryComboBoxModel_ClassInfo_, allocate$GTKFileChooserUI$DirectoryComboBoxModel);
	return class$;
}

$Class* GTKFileChooserUI$DirectoryComboBoxModel::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com