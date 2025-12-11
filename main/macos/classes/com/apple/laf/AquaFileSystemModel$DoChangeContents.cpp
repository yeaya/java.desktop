#include <com/apple/laf/AquaFileSystemModel$DoChangeContents.h>

#include <com/apple/laf/AquaFileSystemModel$SortableFile.h>
#include <com/apple/laf/AquaFileSystemModel.h>
#include <java/util/Vector.h>
#include <jcpp.h>

using $AquaFileSystemModel = ::com::apple::laf::AquaFileSystemModel;
using $AquaFileSystemModel$SortableFile = ::com::apple::laf::AquaFileSystemModel$SortableFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaFileSystemModel$DoChangeContents_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaFileSystemModel;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileSystemModel$DoChangeContents, this$0)},
	{"contentFiles", "Ljava/util/Vector;", "Ljava/util/Vector<Lcom/apple/laf/AquaFileSystemModel$SortableFile;>;", $PRIVATE, $field(AquaFileSystemModel$DoChangeContents, contentFiles)},
	{"doFire", "Z", nullptr, $PRIVATE, $field(AquaFileSystemModel$DoChangeContents, doFire)},
	{"lock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(AquaFileSystemModel$DoChangeContents, lock)},
	{"fid", "I", nullptr, $PRIVATE | $FINAL, $field(AquaFileSystemModel$DoChangeContents, fid)},
	{}
};

$MethodInfo _AquaFileSystemModel$DoChangeContents_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaFileSystemModel;Ljava/util/Vector;I)V", "(Ljava/util/Vector<Lcom/apple/laf/AquaFileSystemModel$SortableFile;>;I)V", $PUBLIC, $method(static_cast<void(AquaFileSystemModel$DoChangeContents::*)($AquaFileSystemModel*,$Vector*,int32_t)>(&AquaFileSystemModel$DoChangeContents::init$))},
	{"cancel", "()V", nullptr, $SYNCHRONIZED},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaFileSystemModel$DoChangeContents_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileSystemModel$DoChangeContents", "com.apple.laf.AquaFileSystemModel", "DoChangeContents", 0},
	{}
};

$ClassInfo _AquaFileSystemModel$DoChangeContents_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaFileSystemModel$DoChangeContents",
	"java.lang.Object",
	"java.lang.Runnable",
	_AquaFileSystemModel$DoChangeContents_FieldInfo_,
	_AquaFileSystemModel$DoChangeContents_MethodInfo_,
	nullptr,
	nullptr,
	_AquaFileSystemModel$DoChangeContents_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileSystemModel"
};

$Object* allocate$AquaFileSystemModel$DoChangeContents($Class* clazz) {
	return $of($alloc(AquaFileSystemModel$DoChangeContents));
}

void AquaFileSystemModel$DoChangeContents::init$($AquaFileSystemModel* this$0, $Vector* files, int32_t fid) {
	$set(this, this$0, this$0);
	this->doFire = true;
	$set(this, lock, $new($Object));
	$set(this, contentFiles, files);
	this->fid = fid;
}

void AquaFileSystemModel$DoChangeContents::cancel() {
	$synchronized(this) {
		$synchronized(this->lock) {
			this->doFire = false;
		}
	}
}

void AquaFileSystemModel$DoChangeContents::run() {
	$useLocalCurrentObjectStackCache();
	if (this->this$0->fetchID == this->fid) {
		$synchronized(this->lock) {
			if (this->doFire) {
				$synchronized(this->this$0->fileCacheLock) {
					if (this->this$0->fileCache != nullptr) {
						for (int32_t i = 0; i < $nc(this->contentFiles)->size(); ++i) {
							$nc(this->this$0->fileCache)->addElement($cast($AquaFileSystemModel$SortableFile, $($nc(this->contentFiles)->elementAt(i))));
							this->this$0->fireTableRowsInserted(i, i);
						}
					}
				}
			}
			$set(this, contentFiles, nullptr);
			$set(this->this$0, directories, nullptr);
		}
	}
}

AquaFileSystemModel$DoChangeContents::AquaFileSystemModel$DoChangeContents() {
}

$Class* AquaFileSystemModel$DoChangeContents::load$($String* name, bool initialize) {
	$loadClass(AquaFileSystemModel$DoChangeContents, name, initialize, &_AquaFileSystemModel$DoChangeContents_ClassInfo_, allocate$AquaFileSystemModel$DoChangeContents);
	return class$;
}

$Class* AquaFileSystemModel$DoChangeContents::class$ = nullptr;

		} // laf
	} // apple
} // com