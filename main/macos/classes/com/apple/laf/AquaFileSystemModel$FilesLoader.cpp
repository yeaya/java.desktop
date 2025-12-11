#include <com/apple/laf/AquaFileSystemModel$FilesLoader.h>

#include <com/apple/laf/AquaFileSystemModel$DoChangeContents.h>
#include <com/apple/laf/AquaFileSystemModel$SortableFile.h>
#include <com/apple/laf/AquaFileSystemModel.h>
#include <java/io/File.h>
#include <java/lang/Runnable.h>
#include <java/lang/ThreadGroup.h>
#include <java/util/Iterator.h>
#include <java/util/Vector.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <jcpp.h>

using $FileArray = $Array<::java::io::File>;
using $AquaFileSystemModel = ::com::apple::laf::AquaFileSystemModel;
using $AquaFileSystemModel$DoChangeContents = ::com::apple::laf::AquaFileSystemModel$DoChangeContents;
using $AquaFileSystemModel$SortableFile = ::com::apple::laf::AquaFileSystemModel$SortableFile;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $Iterator = ::java::util::Iterator;
using $Vector = ::java::util::Vector;
using $JFileChooser = ::javax::swing::JFileChooser;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaFileSystemModel$FilesLoader_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaFileSystemModel;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileSystemModel$FilesLoader, this$0)},
	{"queuedTasks", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/lang/Runnable;>;", 0, $field(AquaFileSystemModel$FilesLoader, queuedTasks)},
	{"currentDirectory", "Ljava/io/File;", nullptr, 0, $field(AquaFileSystemModel$FilesLoader, currentDirectory)},
	{"fid", "I", nullptr, 0, $field(AquaFileSystemModel$FilesLoader, fid)},
	{"loadThread", "Ljava/lang/Thread;", nullptr, 0, $field(AquaFileSystemModel$FilesLoader, loadThread)},
	{}
};

$MethodInfo _AquaFileSystemModel$FilesLoader_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaFileSystemModel;Ljava/io/File;I)V", nullptr, $PUBLIC, $method(static_cast<void(AquaFileSystemModel$FilesLoader::*)($AquaFileSystemModel*,$File*,int32_t)>(&AquaFileSystemModel$FilesLoader::init$))},
	{"cancelRunnables", "(Ljava/util/Vector;)V", "(Ljava/util/Vector<Lcom/apple/laf/AquaFileSystemModel$DoChangeContents;>;)V", $PUBLIC},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaFileSystemModel$FilesLoader_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileSystemModel$FilesLoader", "com.apple.laf.AquaFileSystemModel", "FilesLoader", 0},
	{}
};

$ClassInfo _AquaFileSystemModel$FilesLoader_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaFileSystemModel$FilesLoader",
	"java.lang.Object",
	"java.lang.Runnable",
	_AquaFileSystemModel$FilesLoader_FieldInfo_,
	_AquaFileSystemModel$FilesLoader_MethodInfo_,
	nullptr,
	nullptr,
	_AquaFileSystemModel$FilesLoader_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileSystemModel"
};

$Object* allocate$AquaFileSystemModel$FilesLoader($Class* clazz) {
	return $of($alloc(AquaFileSystemModel$FilesLoader));
}

void AquaFileSystemModel$FilesLoader::init$($AquaFileSystemModel* this$0, $File* currentDirectory, int32_t fid) {
	$set(this, this$0, this$0);
	$set(this, queuedTasks, $new($Vector));
	$set(this, currentDirectory, nullptr);
	$set(this, currentDirectory, currentDirectory);
	this->fid = fid;
	$var($String, name, "Aqua L&F File Loading Thread"_s);
	$set(this, loadThread, $new($Thread, nullptr, this, name, 0, false));
	$nc(this->loadThread)->start();
}

void AquaFileSystemModel$FilesLoader::run() {
	$useLocalCurrentObjectStackCache();
	$var($Vector, runnables, $new($Vector, 10));
	$var($FileSystemView, fileSystem, $nc(this->this$0->filechooser)->getFileSystemView());
	$var($FileArray, list, $nc(fileSystem)->getFiles(this->currentDirectory, $nc(this->this$0->filechooser)->isFileHidingEnabled()));
	$var($Vector, acceptsList, $new($Vector));
	{
		$var($FileArray, arr$, list);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($File, element, arr$->get(i$));
			{
				acceptsList->addElement($$new($AquaFileSystemModel$SortableFile, this->this$0, element));
			}
		}
	}
	this->this$0->sort(acceptsList);
	$var($Vector, chunk, $new($Vector, 10));
	int32_t listSize = acceptsList->size();
	for (int32_t i = 0; i < listSize;) {
		$var($AquaFileSystemModel$SortableFile, f, nullptr);
		for (int32_t j = 0; j < 10 && i < listSize; ++j, ++i) {
			$assign(f, $cast($AquaFileSystemModel$SortableFile, acceptsList->elementAt(i)));
			chunk->addElement(f);
		}
		$var($AquaFileSystemModel$DoChangeContents, runnable, $new($AquaFileSystemModel$DoChangeContents, this->this$0, chunk, this->fid));
		runnables->addElement(runnable);
		$SwingUtilities::invokeLater(runnable);
		$assign(chunk, $new($Vector, 10));
		if ($nc(this->loadThread)->isInterrupted()) {
			cancelRunnables(runnables);
			return;
		}
	}
	$synchronized(this->this$0->fileCacheLock) {
		{
			$var($Iterator, i$, $nc(this->queuedTasks)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Runnable, r, $cast($Runnable, i$->next()));
				{
					$SwingUtilities::invokeLater(r);
				}
			}
		}
	}
}

void AquaFileSystemModel$FilesLoader::cancelRunnables($Vector* runnables) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(runnables)->size(); ++i) {
		$nc(($cast($AquaFileSystemModel$DoChangeContents, $(runnables->elementAt(i)))))->cancel();
	}
}

AquaFileSystemModel$FilesLoader::AquaFileSystemModel$FilesLoader() {
}

$Class* AquaFileSystemModel$FilesLoader::load$($String* name, bool initialize) {
	$loadClass(AquaFileSystemModel$FilesLoader, name, initialize, &_AquaFileSystemModel$FilesLoader_ClassInfo_, allocate$AquaFileSystemModel$FilesLoader);
	return class$;
}

$Class* AquaFileSystemModel$FilesLoader::class$ = nullptr;

		} // laf
	} // apple
} // com