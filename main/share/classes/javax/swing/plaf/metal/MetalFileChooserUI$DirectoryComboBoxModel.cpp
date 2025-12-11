#include <javax/swing/plaf/metal/MetalFileChooserUI$DirectoryComboBoxModel.h>

#include <java/io/File.h>
#include <java/io/FileNotFoundException.h>
#include <java/io/IOException.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/List.h>
#include <java/util/Vector.h>
#include <javax/swing/AbstractListModel.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/event/ListDataListener.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <javax/swing/plaf/metal/MetalFileChooserUI.h>
#include <sun/awt/shell/ShellFolder.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

using $FileArray = $Array<::java::io::File>;
using $File = ::java::io::File;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Vector = ::java::util::Vector;
using $AbstractListModel = ::javax::swing::AbstractListModel;
using $JFileChooser = ::javax::swing::JFileChooser;
using $ListDataListener = ::javax::swing::event::ListDataListener;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;
using $MetalFileChooserUI = ::javax::swing::plaf::metal::MetalFileChooserUI;
using $ShellFolder = ::sun::awt::shell::ShellFolder;
using $FilePane = ::sun::swing::FilePane;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalFileChooserUI$DirectoryComboBoxModel_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/MetalFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalFileChooserUI$DirectoryComboBoxModel, this$0)},
	{"directories", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/io/File;>;", 0, $field(MetalFileChooserUI$DirectoryComboBoxModel, directories)},
	{"depths", "[I", nullptr, 0, $field(MetalFileChooserUI$DirectoryComboBoxModel, depths)},
	{"selectedDirectory", "Ljava/io/File;", nullptr, 0, $field(MetalFileChooserUI$DirectoryComboBoxModel, selectedDirectory)},
	{"chooser", "Ljavax/swing/JFileChooser;", nullptr, 0, $field(MetalFileChooserUI$DirectoryComboBoxModel, chooser)},
	{"fsv", "Ljavax/swing/filechooser/FileSystemView;", nullptr, 0, $field(MetalFileChooserUI$DirectoryComboBoxModel, fsv)},
	{}
};

$MethodInfo _MetalFileChooserUI$DirectoryComboBoxModel_MethodInfo_[] = {
	{"*addListDataListener", "(Ljavax/swing/event/ListDataListener;)V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/plaf/metal/MetalFileChooserUI;)V", nullptr, $PUBLIC, $method(static_cast<void(MetalFileChooserUI$DirectoryComboBoxModel::*)($MetalFileChooserUI*)>(&MetalFileChooserUI$DirectoryComboBoxModel::init$))},
	{"addItem", "(Ljava/io/File;)V", nullptr, $PRIVATE, $method(static_cast<void(MetalFileChooserUI$DirectoryComboBoxModel::*)($File*)>(&MetalFileChooserUI$DirectoryComboBoxModel::addItem))},
	{"calculateDepths", "()V", nullptr, $PRIVATE, $method(static_cast<void(MetalFileChooserUI$DirectoryComboBoxModel::*)()>(&MetalFileChooserUI$DirectoryComboBoxModel::calculateDepths))},
	{"getDepth", "(I)I", nullptr, $PUBLIC},
	{"getElementAt", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getSelectedItem", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC},
	{"*removeListDataListener", "(Ljavax/swing/event/ListDataListener;)V", nullptr, $PUBLIC},
	{"setSelectedItem", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalFileChooserUI$DirectoryComboBoxModel_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalFileChooserUI$DirectoryComboBoxModel", "javax.swing.plaf.metal.MetalFileChooserUI", "DirectoryComboBoxModel", $PROTECTED},
	{}
};

$ClassInfo _MetalFileChooserUI$DirectoryComboBoxModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalFileChooserUI$DirectoryComboBoxModel",
	"javax.swing.AbstractListModel",
	"javax.swing.ComboBoxModel",
	_MetalFileChooserUI$DirectoryComboBoxModel_FieldInfo_,
	_MetalFileChooserUI$DirectoryComboBoxModel_MethodInfo_,
	"Ljavax/swing/AbstractListModel<Ljava/lang/Object;>;Ljavax/swing/ComboBoxModel<Ljava/lang/Object;>;",
	nullptr,
	_MetalFileChooserUI$DirectoryComboBoxModel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalFileChooserUI"
};

$Object* allocate$MetalFileChooserUI$DirectoryComboBoxModel($Class* clazz) {
	return $of($alloc(MetalFileChooserUI$DirectoryComboBoxModel));
}

void MetalFileChooserUI$DirectoryComboBoxModel::addListDataListener($ListDataListener* l) {
	this->$AbstractListModel::addListDataListener(l);
}

void MetalFileChooserUI$DirectoryComboBoxModel::removeListDataListener($ListDataListener* l) {
	this->$AbstractListModel::removeListDataListener(l);
}

int32_t MetalFileChooserUI$DirectoryComboBoxModel::hashCode() {
	 return this->$AbstractListModel::hashCode();
}

bool MetalFileChooserUI$DirectoryComboBoxModel::equals(Object$* arg0) {
	 return this->$AbstractListModel::equals(arg0);
}

$Object* MetalFileChooserUI$DirectoryComboBoxModel::clone() {
	 return this->$AbstractListModel::clone();
}

$String* MetalFileChooserUI$DirectoryComboBoxModel::toString() {
	 return this->$AbstractListModel::toString();
}

void MetalFileChooserUI$DirectoryComboBoxModel::finalize() {
	this->$AbstractListModel::finalize();
}

void MetalFileChooserUI$DirectoryComboBoxModel::init$($MetalFileChooserUI* this$0) {
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

void MetalFileChooserUI$DirectoryComboBoxModel::addItem($File* directory) {
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
		$assign(canonical, $ShellFolder::getNormalizedFile(directory));
	} catch ($IOException& e) {
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
	} catch ($FileNotFoundException& ex) {
		calculateDepths();
	}
}

void MetalFileChooserUI$DirectoryComboBoxModel::calculateDepths() {
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

int32_t MetalFileChooserUI$DirectoryComboBoxModel::getDepth(int32_t i) {
	return (this->depths != nullptr && i >= 0 && i < $nc(this->depths)->length) ? $nc(this->depths)->get(i) : 0;
}

void MetalFileChooserUI$DirectoryComboBoxModel::setSelectedItem(Object$* selectedDirectory) {
	$set(this, selectedDirectory, $cast($File, selectedDirectory));
	fireContentsChanged(this, -1, -1);
}

$Object* MetalFileChooserUI$DirectoryComboBoxModel::getSelectedItem() {
	return $of(this->selectedDirectory);
}

int32_t MetalFileChooserUI$DirectoryComboBoxModel::getSize() {
	return $nc(this->directories)->size();
}

$Object* MetalFileChooserUI$DirectoryComboBoxModel::getElementAt(int32_t index) {
	return $of($nc(this->directories)->elementAt(index));
}

MetalFileChooserUI$DirectoryComboBoxModel::MetalFileChooserUI$DirectoryComboBoxModel() {
}

$Class* MetalFileChooserUI$DirectoryComboBoxModel::load$($String* name, bool initialize) {
	$loadClass(MetalFileChooserUI$DirectoryComboBoxModel, name, initialize, &_MetalFileChooserUI$DirectoryComboBoxModel_ClassInfo_, allocate$MetalFileChooserUI$DirectoryComboBoxModel);
	return class$;
}

$Class* MetalFileChooserUI$DirectoryComboBoxModel::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax