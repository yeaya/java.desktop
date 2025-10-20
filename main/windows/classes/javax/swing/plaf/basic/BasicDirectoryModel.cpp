#include <javax/swing/plaf/basic/BasicDirectoryModel.h>

#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/beans/PropertyChangeSupport.h>
#include <java/io/File.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/List.h>
#include <java/util/Vector.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <javax/swing/AbstractListModel.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/event/ListDataEvent.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <javax/swing/plaf/basic/BasicDirectoryModel$1.h>
#include <javax/swing/plaf/basic/BasicDirectoryModel$FilesLoader.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <sun/awt/shell/ShellFolder.h>
#include <jcpp.h>

#undef DIRECTORY_CHANGED_PROPERTY
#undef FILE_FILTER_CHANGED_PROPERTY
#undef FILE_HIDING_CHANGED_PROPERTY
#undef FILE_SELECTION_MODE_CHANGED_PROPERTY
#undef FILE_VIEW_CHANGED_PROPERTY

using $PropertyChangeListenerArray = $Array<::java::beans::PropertyChangeListener>;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $PropertyChangeSupport = ::java::beans::PropertyChangeSupport;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Runnable = ::java::lang::Runnable;
using $AbstractList = ::java::util::AbstractList;
using $List = ::java::util::List;
using $Vector = ::java::util::Vector;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;
using $AbstractListModel = ::javax::swing::AbstractListModel;
using $JFileChooser = ::javax::swing::JFileChooser;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $ListDataEvent = ::javax::swing::event::ListDataEvent;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;
using $BasicDirectoryModel$1 = ::javax::swing::plaf::basic::BasicDirectoryModel$1;
using $BasicDirectoryModel$FilesLoader = ::javax::swing::plaf::basic::BasicDirectoryModel$FilesLoader;
using $BasicFileChooserUI = ::javax::swing::plaf::basic::BasicFileChooserUI;
using $ShellFolder = ::sun::awt::shell::ShellFolder;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$NamedAttribute BasicDirectoryModel_Attribute_var$0[] = {
	{"since", 's', "17"},
	{}
};

$CompoundAttribute _BasicDirectoryModel_MethodAnnotations_intervalAdded13[] = {
	{"Ljava/lang/Deprecated;", BasicDirectoryModel_Attribute_var$0},
	{}
};

$NamedAttribute BasicDirectoryModel_Attribute_var$1[] = {
	{"since", 's', "17"},
	{}
};

$CompoundAttribute _BasicDirectoryModel_MethodAnnotations_intervalRemoved14[] = {
	{"Ljava/lang/Deprecated;", BasicDirectoryModel_Attribute_var$1},
	{}
};

$NamedAttribute BasicDirectoryModel_Attribute_var$2[] = {
	{"since", 's', "17"},
	{}
};

$CompoundAttribute _BasicDirectoryModel_MethodAnnotations_lt16[] = {
	{"Ljava/lang/Deprecated;", BasicDirectoryModel_Attribute_var$2},
	{}
};

$FieldInfo _BasicDirectoryModel_FieldInfo_[] = {
	{"filechooser", "Ljavax/swing/JFileChooser;", nullptr, $PRIVATE | $FINAL, $field(BasicDirectoryModel, filechooser)},
	{"fileCache", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/io/File;>;", $PRIVATE | $FINAL, $field(BasicDirectoryModel, fileCache)},
	{"filesLoader", "Ljavax/swing/plaf/basic/BasicDirectoryModel$FilesLoader;", nullptr, $PRIVATE, $field(BasicDirectoryModel, filesLoader)},
	{"files", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/io/File;>;", $PRIVATE, $field(BasicDirectoryModel, files)},
	{"directories", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/io/File;>;", $PRIVATE, $field(BasicDirectoryModel, directories)},
	{"fetchID", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $PRIVATE | $FINAL, $field(BasicDirectoryModel, fetchID)},
	{"changeSupport", "Ljava/beans/PropertyChangeSupport;", nullptr, $PRIVATE, $field(BasicDirectoryModel, changeSupport)},
	{"busy", "Z", nullptr, $PRIVATE, $field(BasicDirectoryModel, busy)},
	{}
};

$MethodInfo _BasicDirectoryModel_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JFileChooser;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicDirectoryModel::*)($JFileChooser*)>(&BasicDirectoryModel::init$))},
	{"access$000", "(Ljavax/swing/plaf/basic/BasicDirectoryModel;Ljava/lang/Object;II)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(BasicDirectoryModel*,Object$*,int32_t,int32_t)>(&BasicDirectoryModel::access$000))},
	{"access$100", "(Ljavax/swing/plaf/basic/BasicDirectoryModel;Ljava/lang/Object;II)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(BasicDirectoryModel*,Object$*,int32_t,int32_t)>(&BasicDirectoryModel::access$100))},
	{"addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"fireContentsChanged", "()V", nullptr, $PUBLIC},
	{"firePropertyChange", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getDirectories", "()Ljava/util/Vector;", "()Ljava/util/Vector<Ljava/io/File;>;", $PUBLIC},
	{"getElementAt", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getFiles", "()Ljava/util/Vector;", "()Ljava/util/Vector<Ljava/io/File;>;", $PUBLIC},
	{"getPropertyChangeListeners", "()[Ljava/beans/PropertyChangeListener;", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC},
	{"indexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"intervalAdded", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _BasicDirectoryModel_MethodAnnotations_intervalAdded13},
	{"intervalRemoved", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _BasicDirectoryModel_MethodAnnotations_intervalRemoved14},
	{"invalidateFileCache", "()V", nullptr, $PUBLIC},
	{"lt", "(Ljava/io/File;Ljava/io/File;)Z", nullptr, $PROTECTED | $DEPRECATED, nullptr, nullptr, nullptr, _BasicDirectoryModel_MethodAnnotations_lt16},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"removePropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"renameFile", "(Ljava/io/File;Ljava/io/File;)Z", nullptr, $PUBLIC},
	{"setBusy", "(ZI)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(BasicDirectoryModel::*)(bool,int32_t)>(&BasicDirectoryModel::setBusy))},
	{"sort", "(Ljava/util/Vector;)V", "(Ljava/util/Vector<+Ljava/io/File;>;)V", $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"validateFileCache", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicDirectoryModel_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicDirectoryModel$DoChangeContents", "javax.swing.plaf.basic.BasicDirectoryModel", "DoChangeContents", $PRIVATE | $FINAL},
	{"javax.swing.plaf.basic.BasicDirectoryModel$FilesLoader", "javax.swing.plaf.basic.BasicDirectoryModel", "FilesLoader", $PRIVATE | $FINAL},
	{"javax.swing.plaf.basic.BasicDirectoryModel$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BasicDirectoryModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicDirectoryModel",
	"javax.swing.AbstractListModel",
	"java.beans.PropertyChangeListener",
	_BasicDirectoryModel_FieldInfo_,
	_BasicDirectoryModel_MethodInfo_,
	"Ljavax/swing/AbstractListModel<Ljava/lang/Object;>;Ljava/beans/PropertyChangeListener;",
	nullptr,
	_BasicDirectoryModel_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicDirectoryModel$DoChangeContents,javax.swing.plaf.basic.BasicDirectoryModel$FilesLoader,javax.swing.plaf.basic.BasicDirectoryModel$FilesLoader$1,javax.swing.plaf.basic.BasicDirectoryModel$1"
};

$Object* allocate$BasicDirectoryModel($Class* clazz) {
	return $of($alloc(BasicDirectoryModel));
}

int32_t BasicDirectoryModel::hashCode() {
	 return this->$AbstractListModel::hashCode();
}

bool BasicDirectoryModel::equals(Object$* arg0) {
	 return this->$AbstractListModel::equals(arg0);
}

$Object* BasicDirectoryModel::clone() {
	 return this->$AbstractListModel::clone();
}

$String* BasicDirectoryModel::toString() {
	 return this->$AbstractListModel::toString();
}

void BasicDirectoryModel::finalize() {
	this->$AbstractListModel::finalize();
}

void BasicDirectoryModel::access$100(BasicDirectoryModel* x0, Object$* x1, int32_t x2, int32_t x3) {
	$init(BasicDirectoryModel);
	$nc(x0)->fireIntervalAdded(x1, x2, x3);
}

void BasicDirectoryModel::access$000(BasicDirectoryModel* x0, Object$* x1, int32_t x2, int32_t x3) {
	$init(BasicDirectoryModel);
	$nc(x0)->fireIntervalRemoved(x1, x2, x3);
}

void BasicDirectoryModel::init$($JFileChooser* filechooser) {
	$AbstractListModel::init$();
	$set(this, fileCache, $new($Vector, 50));
	$set(this, filesLoader, nullptr);
	$set(this, files, nullptr);
	$set(this, directories, nullptr);
	$set(this, fetchID, $new($AtomicInteger));
	this->busy = false;
	$set(this, filechooser, filechooser);
	validateFileCache();
}

void BasicDirectoryModel::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($String, prop, $nc(e)->getPropertyName());
	$init($JFileChooser);
	if (prop == $JFileChooser::DIRECTORY_CHANGED_PROPERTY || prop == $JFileChooser::FILE_VIEW_CHANGED_PROPERTY || prop == $JFileChooser::FILE_FILTER_CHANGED_PROPERTY || prop == $JFileChooser::FILE_HIDING_CHANGED_PROPERTY || prop == $JFileChooser::FILE_SELECTION_MODE_CHANGED_PROPERTY) {
		validateFileCache();
	} else if ("UI"_s->equals(prop)) {
		$var($Object, old, e->getOldValue());
		if ($instanceOf($BasicFileChooserUI, old)) {
			$var($BasicFileChooserUI, ui, $cast($BasicFileChooserUI, old));
			$var(BasicDirectoryModel, model, $nc(ui)->getModel());
			if (model != nullptr) {
				model->invalidateFileCache();
			}
		}
	} else if ("JFileChooserDialogIsClosingProperty"_s->equals(prop)) {
		invalidateFileCache();
	}
}

void BasicDirectoryModel::invalidateFileCache() {
	if (this->filesLoader != nullptr) {
		$nc($nc(this->filesLoader)->loadThread)->interrupt();
		$nc(this->filesLoader)->cancelRunnables();
		$set(this, filesLoader, nullptr);
	}
}

$Vector* BasicDirectoryModel::getDirectories() {
	$synchronized(this->fileCache) {
		if (this->directories != nullptr) {
			return this->directories;
		}
		$var($Vector, fls, getFiles());
		return this->directories;
	}
}

$Vector* BasicDirectoryModel::getFiles() {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->fileCache) {
		if (this->files != nullptr) {
			return this->files;
		}
		$set(this, files, $new($Vector));
		$set(this, directories, $new($Vector));
		$nc(this->directories)->addElement($($nc($($nc(this->filechooser)->getFileSystemView()))->createFileObject($($nc(this->filechooser)->getCurrentDirectory()), ".."_s)));
		for (int32_t i = 0; i < getSize(); ++i) {
			$var($File, f, $cast($File, $nc(this->fileCache)->get(i)));
			if ($nc(this->filechooser)->isTraversable(f)) {
				$nc(this->directories)->add(f);
			} else {
				$nc(this->files)->add(f);
			}
		}
		return this->files;
	}
}

void BasicDirectoryModel::validateFileCache() {
	$var($File, currentDirectory, $nc(this->filechooser)->getCurrentDirectory());
	if (currentDirectory == nullptr) {
		return;
	}
	if (this->filesLoader != nullptr) {
		$nc($nc(this->filesLoader)->loadThread)->interrupt();
		$nc(this->filesLoader)->cancelRunnables();
	}
	int32_t fid = $nc(this->fetchID)->incrementAndGet();
	setBusy(true, fid);
	$set(this, filesLoader, $new($BasicDirectoryModel$FilesLoader, this, currentDirectory, fid));
}

bool BasicDirectoryModel::renameFile($File* oldFile, $File* newFile) {
	$synchronized(this->fileCache) {
		if ($nc(oldFile)->renameTo(newFile)) {
			validateFileCache();
			return true;
		}
		return false;
	}
}

void BasicDirectoryModel::fireContentsChanged() {
	fireContentsChanged(this, 0, getSize() - 1);
}

int32_t BasicDirectoryModel::getSize() {
	return $nc(this->fileCache)->size();
}

bool BasicDirectoryModel::contains(Object$* o) {
	return $nc(this->fileCache)->contains(o);
}

int32_t BasicDirectoryModel::indexOf(Object$* o) {
	return $nc(this->fileCache)->indexOf(o);
}

$Object* BasicDirectoryModel::getElementAt(int32_t index) {
	return $of($nc(this->fileCache)->get(index));
}

void BasicDirectoryModel::intervalAdded($ListDataEvent* e) {
}

void BasicDirectoryModel::intervalRemoved($ListDataEvent* e) {
}

void BasicDirectoryModel::sort($Vector* v) {
	$ShellFolder::sort(v);
}

bool BasicDirectoryModel::lt($File* a, $File* b) {
	$useLocalCurrentObjectStackCache();
	int32_t diff = $($nc($($nc(a)->getName()))->toLowerCase())->compareTo($($nc($($nc(b)->getName()))->toLowerCase()));
	if (diff != 0) {
		return diff < 0;
	} else {
		return $nc($(a->getName()))->compareTo($($nc(b)->getName())) < 0;
	}
}

void BasicDirectoryModel::addPropertyChangeListener($PropertyChangeListener* listener) {
	if (this->changeSupport == nullptr) {
		$set(this, changeSupport, $new($PropertyChangeSupport, this));
	}
	$nc(this->changeSupport)->addPropertyChangeListener(listener);
}

void BasicDirectoryModel::removePropertyChangeListener($PropertyChangeListener* listener) {
	if (this->changeSupport != nullptr) {
		$nc(this->changeSupport)->removePropertyChangeListener(listener);
	}
}

$PropertyChangeListenerArray* BasicDirectoryModel::getPropertyChangeListeners() {
	if (this->changeSupport == nullptr) {
		return $new($PropertyChangeListenerArray, 0);
	}
	return $nc(this->changeSupport)->getPropertyChangeListeners();
}

void BasicDirectoryModel::firePropertyChange($String* propertyName, Object$* oldValue, Object$* newValue) {
	if (this->changeSupport != nullptr) {
		$nc(this->changeSupport)->firePropertyChange(propertyName, oldValue, newValue);
	}
}

void BasicDirectoryModel::setBusy(bool busy, int32_t fid) {
	$synchronized(this) {
		if (fid == $nc(this->fetchID)->get()) {
			bool oldValue = this->busy;
			this->busy = busy;
			if (this->changeSupport != nullptr && busy != oldValue) {
				$SwingUtilities::invokeLater($$new($BasicDirectoryModel$1, this, busy));
			}
		}
	}
}

BasicDirectoryModel::BasicDirectoryModel() {
}

$Class* BasicDirectoryModel::load$($String* name, bool initialize) {
	$loadClass(BasicDirectoryModel, name, initialize, &_BasicDirectoryModel_ClassInfo_, allocate$BasicDirectoryModel);
	return class$;
}

$Class* BasicDirectoryModel::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax