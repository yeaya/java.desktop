#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$DirectoryComboBoxModel.h>

#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI.h>
#include <java/io/File.h>
#include <java/io/FileNotFoundException.h>
#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/List.h>
#include <java/util/Vector.h>
#include <javax/swing/AbstractListModel.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/event/ListDataListener.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <sun/awt/shell/ShellFolder.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

using $FileArray = $Array<::java::io::File>;
using $WindowsFileChooserUI = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI;
using $File = ::java::io::File;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;
using $Vector = ::java::util::Vector;
using $AbstractListModel = ::javax::swing::AbstractListModel;
using $ComboBoxModel = ::javax::swing::ComboBoxModel;
using $JFileChooser = ::javax::swing::JFileChooser;
using $ListDataListener = ::javax::swing::event::ListDataListener;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;
using $BasicFileChooserUI = ::javax::swing::plaf::basic::BasicFileChooserUI;
using $ShellFolder = ::sun::awt::shell::ShellFolder;
using $FilePane = ::sun::swing::FilePane;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsFileChooserUI$DirectoryComboBoxModel_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$DirectoryComboBoxModel, this$0)},
	{"directories", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/io/File;>;", 0, $field(WindowsFileChooserUI$DirectoryComboBoxModel, directories)},
	{"depths", "[I", nullptr, 0, $field(WindowsFileChooserUI$DirectoryComboBoxModel, depths)},
	{"selectedDirectory", "Ljava/io/File;", nullptr, 0, $field(WindowsFileChooserUI$DirectoryComboBoxModel, selectedDirectory)},
	{"chooser", "Ljavax/swing/JFileChooser;", nullptr, 0, $field(WindowsFileChooserUI$DirectoryComboBoxModel, chooser)},
	{"fsv", "Ljavax/swing/filechooser/FileSystemView;", nullptr, 0, $field(WindowsFileChooserUI$DirectoryComboBoxModel, fsv)},
	{}
};

$MethodInfo _WindowsFileChooserUI$DirectoryComboBoxModel_MethodInfo_[] = {
	{"*addListDataListener", "(Ljavax/swing/event/ListDataListener;)V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;)V", nullptr, $PUBLIC, $method(static_cast<void(WindowsFileChooserUI$DirectoryComboBoxModel::*)($WindowsFileChooserUI*)>(&WindowsFileChooserUI$DirectoryComboBoxModel::init$))},
	{"addItem", "(Ljava/io/File;)V", nullptr, $PRIVATE, $method(static_cast<void(WindowsFileChooserUI$DirectoryComboBoxModel::*)($File*)>(&WindowsFileChooserUI$DirectoryComboBoxModel::addItem))},
	{"calculateDepths", "()V", nullptr, $PRIVATE, $method(static_cast<void(WindowsFileChooserUI$DirectoryComboBoxModel::*)()>(&WindowsFileChooserUI$DirectoryComboBoxModel::calculateDepths))},
	{"getDepth", "(I)I", nullptr, $PUBLIC},
	{"getElementAt", "(I)Ljava/io/File;", nullptr, $PUBLIC},
	{"getSelectedItem", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC},
	{"*removeListDataListener", "(Ljavax/swing/event/ListDataListener;)V", nullptr, $PUBLIC},
	{"setSelectedItem", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsFileChooserUI$DirectoryComboBoxModel_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$DirectoryComboBoxModel", "com.sun.java.swing.plaf.windows.WindowsFileChooserUI", "DirectoryComboBoxModel", $PROTECTED},
	{}
};

$ClassInfo _WindowsFileChooserUI$DirectoryComboBoxModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$DirectoryComboBoxModel",
	"javax.swing.AbstractListModel",
	"javax.swing.ComboBoxModel",
	_WindowsFileChooserUI$DirectoryComboBoxModel_FieldInfo_,
	_WindowsFileChooserUI$DirectoryComboBoxModel_MethodInfo_,
	"Ljavax/swing/AbstractListModel<Ljava/io/File;>;Ljavax/swing/ComboBoxModel<Ljava/io/File;>;",
	nullptr,
	_WindowsFileChooserUI$DirectoryComboBoxModel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI"
};

$Object* allocate$WindowsFileChooserUI$DirectoryComboBoxModel($Class* clazz) {
	return $of($alloc(WindowsFileChooserUI$DirectoryComboBoxModel));
}

void WindowsFileChooserUI$DirectoryComboBoxModel::addListDataListener($ListDataListener* l) {
	this->$AbstractListModel::addListDataListener(l);
}

void WindowsFileChooserUI$DirectoryComboBoxModel::removeListDataListener($ListDataListener* l) {
	this->$AbstractListModel::removeListDataListener(l);
}

int32_t WindowsFileChooserUI$DirectoryComboBoxModel::hashCode() {
	 return this->$AbstractListModel::hashCode();
}

bool WindowsFileChooserUI$DirectoryComboBoxModel::equals(Object$* arg0) {
	 return this->$AbstractListModel::equals(arg0);
}

$Object* WindowsFileChooserUI$DirectoryComboBoxModel::clone() {
	 return this->$AbstractListModel::clone();
}

$String* WindowsFileChooserUI$DirectoryComboBoxModel::toString() {
	 return this->$AbstractListModel::toString();
}

void WindowsFileChooserUI$DirectoryComboBoxModel::finalize() {
	this->$AbstractListModel::finalize();
}

void WindowsFileChooserUI$DirectoryComboBoxModel::init$($WindowsFileChooserUI* this$0) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$AbstractListModel::init$();
	$set(this, directories, $new($Vector));
	$set(this, depths, nullptr);
	$set(this, selectedDirectory, nullptr);
	$set(this, chooser, this->this$0->getFileChooser());
	$set(this, fsv, $nc(this->chooser)->getFileSystemView());
	$var($File, dir, $nc($(this$0->getFileChooser()))->getCurrentDirectory());
	if (dir != nullptr) {
		addItem(dir);
	}
}

void WindowsFileChooserUI$DirectoryComboBoxModel::addItem($File* directory) {
	$useLocalCurrentObjectStackCache();
	if (directory == nullptr) {
		return;
	}
	bool useShellFolder = $FilePane::usesShellFolder(this->chooser);
	$nc(this->directories)->clear();
	$var($FileArray, baseFolders, (useShellFolder) ? $cast($FileArray, $ShellFolder::get("fileChooserComboBoxFolders"_s)) : $nc(this->fsv)->getRoots());
	$nc(this->directories)->addAll($($Arrays::asList(baseFolders)));
	$var($File, canonical, nullptr);
	try {
		$assign(canonical, $nc(directory)->getCanonicalFile());
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$assign(canonical, directory);
	}
	try {
		$var($File, sf, useShellFolder ? static_cast<$File*>($ShellFolder::getShellFolder(canonical)) : canonical);
		$var($File, f, sf);
		$var($Vector, path, $new($Vector, 10));
		do {
			path->addElement(f);
		} while (($assign(f, $nc(f)->getParentFile())) != nullptr);
		int32_t pathCount = path->size();
		for (int32_t i = 0; i < pathCount; ++i) {
			$assign(f, $cast($File, path->get(i)));
			if ($nc(this->directories)->contains(f)) {
				int32_t topIndex = $nc(this->directories)->indexOf(f);
				for (int32_t j = i - 1; j >= 0; --j) {
					$nc(this->directories)->insertElementAt($cast($File, $(path->get(j))), topIndex + i - j);
				}
				break;
			}
		}
		calculateDepths();
		setSelectedItem(sf);
	} catch ($FileNotFoundException&) {
		$var($FileNotFoundException, ex, $catch());
		calculateDepths();
	}
}

void WindowsFileChooserUI$DirectoryComboBoxModel::calculateDepths() {
	$useLocalCurrentObjectStackCache();
	$set(this, depths, $new($ints, $nc(this->directories)->size()));
	for (int32_t i = 0; i < $nc(this->depths)->length; ++i) {
		$var($File, dir, $cast($File, $nc(this->directories)->get(i)));
		$var($File, parent, $nc(dir)->getParentFile());
		$nc(this->depths)->set(i, 0);
		if (parent != nullptr) {
			for (int32_t j = i - 1; j >= 0; --j) {
				if (parent->equals($($nc(this->directories)->get(j)))) {
					$nc(this->depths)->set(i, $nc(this->depths)->get(j) + 1);
					break;
				}
			}
		}
	}
}

int32_t WindowsFileChooserUI$DirectoryComboBoxModel::getDepth(int32_t i) {
	return (this->depths != nullptr && i >= 0 && i < $nc(this->depths)->length) ? $nc(this->depths)->get(i) : 0;
}

void WindowsFileChooserUI$DirectoryComboBoxModel::setSelectedItem(Object$* selectedDirectory) {
	$set(this, selectedDirectory, $cast($File, selectedDirectory));
	fireContentsChanged(this, -1, -1);
}

$Object* WindowsFileChooserUI$DirectoryComboBoxModel::getSelectedItem() {
	return $of(this->selectedDirectory);
}

int32_t WindowsFileChooserUI$DirectoryComboBoxModel::getSize() {
	return $nc(this->directories)->size();
}

$Object* WindowsFileChooserUI$DirectoryComboBoxModel::getElementAt(int32_t index) {
	return $of($cast($File, $nc(this->directories)->elementAt(index)));
}

WindowsFileChooserUI$DirectoryComboBoxModel::WindowsFileChooserUI$DirectoryComboBoxModel() {
}

$Class* WindowsFileChooserUI$DirectoryComboBoxModel::load$($String* name, bool initialize) {
	$loadClass(WindowsFileChooserUI$DirectoryComboBoxModel, name, initialize, &_WindowsFileChooserUI$DirectoryComboBoxModel_ClassInfo_, allocate$WindowsFileChooserUI$DirectoryComboBoxModel);
	return class$;
}

$Class* WindowsFileChooserUI$DirectoryComboBoxModel::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com