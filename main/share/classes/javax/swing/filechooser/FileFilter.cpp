#include <javax/swing/filechooser/FileFilter.h>

#include <java/io/File.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace filechooser {

$MethodInfo _FileFilter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(FileFilter::*)()>(&FileFilter::init$))},
	{"accept", "(Ljava/io/File;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _FileFilter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.filechooser.FileFilter",
	"java.lang.Object",
	nullptr,
	nullptr,
	_FileFilter_MethodInfo_
};

$Object* allocate$FileFilter($Class* clazz) {
	return $of($alloc(FileFilter));
}

void FileFilter::init$() {
}

FileFilter::FileFilter() {
}

$Class* FileFilter::load$($String* name, bool initialize) {
	$loadClass(FileFilter, name, initialize, &_FileFilter_ClassInfo_, allocate$FileFilter);
	return class$;
}

$Class* FileFilter::class$ = nullptr;

		} // filechooser
	} // swing
} // javax