#include <com/apple/laf/AquaFileSystemModel$SortableFile.h>

#include <com/apple/laf/AquaFileSystemModel.h>
#include <java/io/File.h>
#include <java/util/Date.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $AquaFileSystemModel = ::com::apple::laf::AquaFileSystemModel;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Date = ::java::util::Date;
using $Objects = ::java::util::Objects;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaFileSystemModel$SortableFile_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaFileSystemModel;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileSystemModel$SortableFile, this$0)},
	{"fFile", "Ljava/io/File;", nullptr, 0, $field(AquaFileSystemModel$SortableFile, fFile)},
	{"fName", "Ljava/lang/String;", nullptr, 0, $field(AquaFileSystemModel$SortableFile, fName)},
	{"fDateValue", "J", nullptr, 0, $field(AquaFileSystemModel$SortableFile, fDateValue)},
	{"fDate", "Ljava/util/Date;", nullptr, 0, $field(AquaFileSystemModel$SortableFile, fDate)},
	{}
};

$MethodInfo _AquaFileSystemModel$SortableFile_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaFileSystemModel;Ljava/io/File;)V", nullptr, 0, $method(static_cast<void(AquaFileSystemModel$SortableFile::*)($AquaFileSystemModel*,$File*)>(&AquaFileSystemModel$SortableFile::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getValueAt", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaFileSystemModel$SortableFile_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileSystemModel$SortableFile", "com.apple.laf.AquaFileSystemModel", "SortableFile", 0},
	{}
};

$ClassInfo _AquaFileSystemModel$SortableFile_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaFileSystemModel$SortableFile",
	"java.lang.Object",
	nullptr,
	_AquaFileSystemModel$SortableFile_FieldInfo_,
	_AquaFileSystemModel$SortableFile_MethodInfo_,
	nullptr,
	nullptr,
	_AquaFileSystemModel$SortableFile_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileSystemModel"
};

$Object* allocate$AquaFileSystemModel$SortableFile($Class* clazz) {
	return $of($alloc(AquaFileSystemModel$SortableFile));
}

void AquaFileSystemModel$SortableFile::init$($AquaFileSystemModel* this$0, $File* f) {
	$set(this, this$0, this$0);
	$set(this, fFile, f);
	$set(this, fName, $nc(this->fFile)->getName());
	this->fDateValue = $nc(this->fFile)->lastModified();
	$set(this, fDate, $new($Date, this->fDateValue));
}

$Object* AquaFileSystemModel$SortableFile::getValueAt(int32_t col) {
	if (col == 0) {
		return $of(this->fFile);
	}
	return $of(this->fDate);
}

bool AquaFileSystemModel$SortableFile::equals(Object$* other) {
	$var(AquaFileSystemModel$SortableFile, otherFile, $cast(AquaFileSystemModel$SortableFile, other));
	return $nc($nc(otherFile)->fFile)->equals(this->fFile);
}

int32_t AquaFileSystemModel$SortableFile::hashCode() {
	return $Objects::hashCode(this->fFile);
}

AquaFileSystemModel$SortableFile::AquaFileSystemModel$SortableFile() {
}

$Class* AquaFileSystemModel$SortableFile::load$($String* name, bool initialize) {
	$loadClass(AquaFileSystemModel$SortableFile, name, initialize, &_AquaFileSystemModel$SortableFile_ClassInfo_, allocate$AquaFileSystemModel$SortableFile);
	return class$;
}

$Class* AquaFileSystemModel$SortableFile::class$ = nullptr;

		} // laf
	} // apple
} // com