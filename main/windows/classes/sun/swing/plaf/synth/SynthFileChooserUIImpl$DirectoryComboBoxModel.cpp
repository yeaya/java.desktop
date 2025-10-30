#include <sun/swing/plaf/synth/SynthFileChooserUIImpl$DirectoryComboBoxModel.h>

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
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <sun/awt/shell/ShellFolder.h>
#include <sun/swing/FilePane.h>
#include <sun/swing/plaf/synth/SynthFileChooserUIImpl.h>
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
using $SynthFileChooserUIImpl = ::sun::swing::plaf::synth::SynthFileChooserUIImpl;

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthFileChooserUIImpl$DirectoryComboBoxModel_FieldInfo_[] = {
	{"this$0", "Lsun/swing/plaf/synth/SynthFileChooserUIImpl;", nullptr, $FINAL | $SYNTHETIC, $field(SynthFileChooserUIImpl$DirectoryComboBoxModel, this$0)},
	{"directories", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/io/File;>;", 0, $field(SynthFileChooserUIImpl$DirectoryComboBoxModel, directories)},
	{"depths", "[I", nullptr, 0, $field(SynthFileChooserUIImpl$DirectoryComboBoxModel, depths)},
	{"selectedDirectory", "Ljava/io/File;", nullptr, 0, $field(SynthFileChooserUIImpl$DirectoryComboBoxModel, selectedDirectory)},
	{"chooser", "Ljavax/swing/JFileChooser;", nullptr, 0, $field(SynthFileChooserUIImpl$DirectoryComboBoxModel, chooser)},
	{"fsv", "Ljavax/swing/filechooser/FileSystemView;", nullptr, 0, $field(SynthFileChooserUIImpl$DirectoryComboBoxModel, fsv)},
	{}
};

$MethodInfo _SynthFileChooserUIImpl$DirectoryComboBoxModel_MethodInfo_[] = {
	{"*addListDataListener", "(Ljavax/swing/event/ListDataListener;)V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/swing/plaf/synth/SynthFileChooserUIImpl;)V", nullptr, $PUBLIC, $method(static_cast<void(SynthFileChooserUIImpl$DirectoryComboBoxModel::*)($SynthFileChooserUIImpl*)>(&SynthFileChooserUIImpl$DirectoryComboBoxModel::init$))},
	{"addItem", "(Ljava/io/File;)V", nullptr, $PUBLIC},
	{"calculateDepths", "()V", nullptr, $PRIVATE, $method(static_cast<void(SynthFileChooserUIImpl$DirectoryComboBoxModel::*)()>(&SynthFileChooserUIImpl$DirectoryComboBoxModel::calculateDepths))},
	{"getDepth", "(I)I", nullptr, $PUBLIC},
	{"getElementAt", "(I)Ljava/io/File;", nullptr, $PUBLIC},
	{"getSelectedItem", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC},
	{"*removeListDataListener", "(Ljavax/swing/event/ListDataListener;)V", nullptr, $PUBLIC},
	{"setSelectedItem", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SynthFileChooserUIImpl$DirectoryComboBoxModel_InnerClassesInfo_[] = {
	{"sun.swing.plaf.synth.SynthFileChooserUIImpl$DirectoryComboBoxModel", "sun.swing.plaf.synth.SynthFileChooserUIImpl", "DirectoryComboBoxModel", $PROTECTED},
	{}
};

$ClassInfo _SynthFileChooserUIImpl$DirectoryComboBoxModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.swing.plaf.synth.SynthFileChooserUIImpl$DirectoryComboBoxModel",
	"javax.swing.AbstractListModel",
	"javax.swing.ComboBoxModel",
	_SynthFileChooserUIImpl$DirectoryComboBoxModel_FieldInfo_,
	_SynthFileChooserUIImpl$DirectoryComboBoxModel_MethodInfo_,
	"Ljavax/swing/AbstractListModel<Ljava/io/File;>;Ljavax/swing/ComboBoxModel<Ljava/io/File;>;",
	nullptr,
	_SynthFileChooserUIImpl$DirectoryComboBoxModel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.plaf.synth.SynthFileChooserUIImpl"
};

$Object* allocate$SynthFileChooserUIImpl$DirectoryComboBoxModel($Class* clazz) {
	return $of($alloc(SynthFileChooserUIImpl$DirectoryComboBoxModel));
}

void SynthFileChooserUIImpl$DirectoryComboBoxModel::addListDataListener($ListDataListener* l) {
	this->$AbstractListModel::addListDataListener(l);
}

void SynthFileChooserUIImpl$DirectoryComboBoxModel::removeListDataListener($ListDataListener* l) {
	this->$AbstractListModel::removeListDataListener(l);
}

int32_t SynthFileChooserUIImpl$DirectoryComboBoxModel::hashCode() {
	 return this->$AbstractListModel::hashCode();
}

bool SynthFileChooserUIImpl$DirectoryComboBoxModel::equals(Object$* arg0) {
	 return this->$AbstractListModel::equals(arg0);
}

$Object* SynthFileChooserUIImpl$DirectoryComboBoxModel::clone() {
	 return this->$AbstractListModel::clone();
}

$String* SynthFileChooserUIImpl$DirectoryComboBoxModel::toString() {
	 return this->$AbstractListModel::toString();
}

void SynthFileChooserUIImpl$DirectoryComboBoxModel::finalize() {
	this->$AbstractListModel::finalize();
}

void SynthFileChooserUIImpl$DirectoryComboBoxModel::init$($SynthFileChooserUIImpl* this$0) {
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

void SynthFileChooserUIImpl$DirectoryComboBoxModel::addItem($File* directory) {
	$useLocalCurrentObjectStackCache();
	if (directory == nullptr) {
		return;
	}
	bool useShellFolder = $FilePane::usesShellFolder(this->chooser);
	int32_t oldSize = $nc(this->directories)->size();
	$nc(this->directories)->clear();
	if (oldSize > 0) {
		fireIntervalRemoved(this, 0, oldSize);
	}
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

void SynthFileChooserUIImpl$DirectoryComboBoxModel::calculateDepths() {
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

int32_t SynthFileChooserUIImpl$DirectoryComboBoxModel::getDepth(int32_t i) {
	return (this->depths != nullptr && i >= 0 && i < $nc(this->depths)->length) ? $nc(this->depths)->get(i) : 0;
}

void SynthFileChooserUIImpl$DirectoryComboBoxModel::setSelectedItem(Object$* selectedDirectory) {
	$set(this, selectedDirectory, $cast($File, selectedDirectory));
	fireContentsChanged(this, -1, -1);
}

$Object* SynthFileChooserUIImpl$DirectoryComboBoxModel::getSelectedItem() {
	return $of(this->selectedDirectory);
}

int32_t SynthFileChooserUIImpl$DirectoryComboBoxModel::getSize() {
	return $nc(this->directories)->size();
}

$Object* SynthFileChooserUIImpl$DirectoryComboBoxModel::getElementAt(int32_t index) {
	return $of($cast($File, $nc(this->directories)->elementAt(index)));
}

SynthFileChooserUIImpl$DirectoryComboBoxModel::SynthFileChooserUIImpl$DirectoryComboBoxModel() {
}

$Class* SynthFileChooserUIImpl$DirectoryComboBoxModel::load$($String* name, bool initialize) {
	$loadClass(SynthFileChooserUIImpl$DirectoryComboBoxModel, name, initialize, &_SynthFileChooserUIImpl$DirectoryComboBoxModel_ClassInfo_, allocate$SynthFileChooserUIImpl$DirectoryComboBoxModel);
	return class$;
}

$Class* SynthFileChooserUIImpl$DirectoryComboBoxModel::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // sun